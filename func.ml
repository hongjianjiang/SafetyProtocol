open Core
open Proctype

(*judge e whether in list l*)
let rec listwithout l e =  
  match l with
  | [] -> true
  | hd::tl -> if hd = e then false else listwithout tl e
  
(*extract tail element of list*)
let rec tail xlist =
  match xlist with 
  | hd::tl -> tl
  | []    -> failwith "no element"
 
(*extract head element of list*)
let head xlist =
  match xlist with
  | x::tl -> x
  | [] -> failwith "no element"
 
(*相同位置的x放在同一列表*)
let rec transpose xlist = 
  match xlist with
  | []             -> []
  | []   :: xss    -> transpose xss
  | (x::xs) :: xss ->
    (x :: List.map ~f:head xss) :: transpose (xs :: List.map ~f:tail xss)
 
(*delete duplicate element*)
let del_duplicate org_list =
  match org_list with
  | [] -> []
  | l -> let len = List.length l in
         let non_duplicate = ref [] in
         for i = 0 to len do
           match List.nth l i with
           | None -> ()
           | Some x -> if listwithout !non_duplicate x then non_duplicate := !non_duplicate @ [x]
         done;
         !non_duplicate

let rec remove ls e =
  match ls with
  | [] -> []
  | hd::tl -> if hd = e then remove tl e else hd::(remove tl e)

  let genRuleName rolename i =
  sprintf "rule \" role%s%d \"\n" rolename i
;;

let genSendGuard rolename i seq =
  sprintf "role%s[i].st = %s%d & ch[%d].empty = true & !role%s[i].commit \n==>\n" rolename rolename i seq rolename
;;

let genRecvGuard rolename i seq =
  sprintf "role%s[i].st = %s%d & ch[%d].empty = false & !role%s[i].commit\n==>\n" rolename rolename i seq rolename
;;

(* Transforming the i-th action into murphy rule *)
let rec getAtoms msg =
  match msg with
  |`Null   	-> [`Null]
  |`Var id 	-> [`Var id]
  |`Str s 	-> [`Str s]
  |`Tmp m -> getAtoms m
  |`Concat msgs -> getEachAtoms msgs
  |`Hash m 	-> getAtoms m
  |`Aenc (m1,m2)-> List.concat (List.map ~f:getAtoms [m1;m2])
  |`Senc (m1,m2)-> List.concat (List.map ~f:getAtoms [m1;m2])
  |`Pk rolename -> [`Pk rolename]
  |`Sk rolename -> [`Sk rolename]
  |`K (r1,r2)	-> [`K (r1,r2)] (* the symmetrix should be one atoms *)
and getEachAtoms msgs =
  remove (List.concat (List.map ~f:getAtoms msgs)) `Null


 (* get role's msg from knowledges : [msgofA;msgofB] *)
let rec getMsgOfRoles knws =
  match knws with
  | `Null -> []
  | `Knowledge (r,m) -> [m]
  | `Knowledge_list knws -> List.concat (List.map ~f:(fun k -> getMsgOfRoles k) knws)

let rec getRolesFromKnws knws rl =
  match knws with
    | `Null -> rl
    | `Knowledge (r,m) -> if listwithout rl r then r :: rl else rl
    | `Knowledge_list ks -> getroles ks rl
  and getroles ks rl =
    List.concat (List.map ~f:(fun k -> getRolesFromKnws k rl ) ks)
    
let rec getNonces msgs =
  match msgs with
    | [] -> []
    | hd :: tl -> (getNoncesOfMsg hd) @ (getNonces tl)
  and getNoncesOfMsg m =
    match m with
    |`Var n -> [n]
    |`Concat msgs -> List.concat (List.map ~f:getNoncesOfMsg msgs)
    |_ -> []

let rec getEnvRoles env rl = 
    match env with
      |`Null -> rl
      |`Env_agent (r, num, m) -> getRolesInstance m rl (*if listwithout rl r then r :: rl else rl*)
      |`Envlist envs -> getRole envs rl
    and getRole envs rl =
      List.concat (List.map ~f:(fun e -> getEnvRoles e rl ) envs)
    and getRolesInstance m rl =
      match m with
      | `Str r -> if listwithout rl r then r :: rl else rl
      | `Concat msgs -> getRolesInstances msgs rl
      | _ -> rl
    and getRolesInstances msgs rl =
      List.concat (List.map ~f:(fun m -> getRolesInstance m rl) msgs)
    
let getRolesFromEnv env rl =
    let rlist = getEnvRoles env rl in
      del_duplicate rlist

let rec getEnvNonces env nl = 
    match env with
        |`Null -> nl
        |`Env_agent (r, num, m) -> getNonceInstance m nl 
        |`Envlist envs -> getNonce envs nl
    and getNonce envs nl =
      List.concat (List.map ~f:(fun e -> getEnvNonces e nl) envs)
    and getNonceInstance m nl =
      match m with
        | `Var n -> if listwithout nl n then n :: nl else nl
        | `Concat msgs -> getNonceInstances msgs nl
        | _ -> nl
    and getNonceInstances msgs nl =
        List.concat (List.map ~f:(fun m -> getNonceInstance m nl) msgs)
      
let getNonceFromEnv env nl =
    let nlist = getEnvNonces env nl in
    del_duplicate nlist

let agents2Str rlist =
    let intruStr = if listwithout rlist ("Intruder") then "Intruder, " else "" in
      intruStr ^ String.concat ~sep:", " rlist

let nonce2Str nlist =
    String.concat ~sep:", " nlist

let agentSStatus rlist lensOfrlist =
      String.concat ~sep:";\n  " (List.mapi ~f:(fun i r -> 
                                let len = match List.nth lensOfrlist i with
                                          |None -> 0
                                          |Some l -> l
                                in
                                let statuslist = ref [] in
                                for j = 1 to len do
                                  let statu = sprintf "%s%d" r j in
                                  statuslist := !statuslist @ [statu]
                                done;
                                let status = String.concat ~sep:"," !statuslist in
                                sprintf "%sStatus: enum{%s}" r status ) rlist)


let rec getActsList agents roleName= 
  match agents with 
  | `Null -> []
  | `Agent (n,ms,actlists) -> if n=roleName then actlists else []
  | `Agentlist als ->getActs als roleName
  and  getActs agents  roleName=   List.concat (List.map ~f:(fun a -> getActsList a roleName) agents)

let rec getAgentRole agents = 
  match agents with 
  | `Null -> []
  | `Agent (n,ms,acts) -> if (List.length acts)>0 then [n] else []
  | `Agentlist als ->List.concat (List.map ~f:getAgentRole als)

let rec getAllActsList agents = 
  match agents with 
  | `Null -> []
  | `Agent (n,ms,actlists) -> actlists
  | `Agentlist als ->List.concat (List.map ~f:getAllActsList als)

let rec getAllSendActs actions =
  match actions with
  | `Null -> []
  | `Send (seq,s,r,mls,m) -> [actions]
  | `Receive (seq,s,m) -> []
  | `Actlist arr -> List.concat (List.map ~f:getAllSendActs arr)

let agentSStatus rlist lensOfrlist =
    String.concat ~sep:";\n  " (List.mapi ~f:(fun i r -> 
                              let len = match List.nth lensOfrlist i with
                                        |None -> 0
                                        |Some l -> l
                              in
                              let statuslist = ref [] in
                              for j = 1 to len do
                                let statu = sprintf "%s%d" r j in
                                statuslist := !statuslist @ [statu]
                              done;
                              let status = String.concat ~sep:"," !statuslist in
                              sprintf "%sStatus: enum{%s}" r status ) rlist)
let nType2Str nlist = 
  String.concat ~sep:";\n   " (List.map ~f:(fun n -> sprintf "loc%s : NonceType" n) nlist)


let agType2Str rlist =
  String.concat ~sep: ";\n   " (List.map ~f:(fun r -> sprintf "loc%s : AgentType" r) rlist)

let rec printMurphiRecords knw nlist aglist =
  match knw with
  |`Null -> sprintf "null"
  | `Knowledge (r,m) -> let str1 = sprintf "  Role%s : record\n" r in
                        let str2 = String.concat ~sep:"\n" (List.map ~f:(fun n -> sprintf "   %s : NonceType;" n) nlist) ^ "\n" in
                        let str3 = String.concat ~sep:"\n" (List.map ~f:(fun r -> sprintf "   %s : AgentType;" r) aglist) ^ "\n" in
                        let str4 = sprintf "   %s;\n   %s;\n   st: %sStatus;\n" (nType2Str nlist) (agType2Str aglist) r in
                        let str5 = sprintf "   commit : boolean;\n" in
                        let str6 = sprintf "  end;\n" in
                        str1 ^ str2 ^ str3 ^ str4 ^ str5 ^ str6
  | `Knowledge_list knws ->String.concat (List.map ~f:(fun k -> printMurphiRecords k nlist aglist) knws)

let rlistToVars rlist =
    String.concat ~sep:";\n  " (List.map ~f:(fun r -> 
                  sprintf "role%s : Array[role%sNums] of Role%s" r r r) rlist)
  
let printPatSetVars pats =
  String.concat  (List.mapi ~f:(fun i p ->sprintf "  pat%dSet: msgSet;\n" (i+1)^
                                          sprintf "  sPat%dSet: msgSet;\n" (i+1)) pats)


(**pattern match part *)
let rec isSamePat m1 m2 =
  match (m1,m2) with
  | (`Aenc(m1',k1'),`Aenc(m2',k2')) -> if (isSamePat k1' k2') && (isSamePat m1' m2') then true else false
  | (`Senc(m1',k1'),`Senc(m2',k2')) -> if (isSamePat k1' k2') && (isSamePat m1' m2') then true else false
  | (`Tmp(m),_ )-> true 
  | (_,`Tmp(m)) -> true 
  | (`Pk r1,`Pk r2) -> true
  | (`Sk r1,`Sk r2) -> true
  | (`Pk r1,`Sk r2) -> true  (* sk(r1),pk(r1) are the same pat, they are stored into the same patSet*)
  | (`Sk r1,`Pk r2) -> true
  | (`K(r11,r12),`K(r21,r22)) -> true
  | (`Var n1,`Var n2) -> true
  | (`Concat msgs1,`Concat msgs2) -> isSameList msgs1 msgs2
  | (`Hash m1',`Hash m2') -> if (isSamePat m1' m2') then true else false
  | (`Str r1,`Str r2) -> true
  | _ -> false

and isSameList msgs1 msgs2 = 
  let len1 = List.length msgs1 in
  let len2 = List.length msgs2 in
  if len1 <> len2 then false 
  else let boolList = List.map2_exn ~f:isSamePat msgs1 msgs2 in
  match List.reduce ~f:(&&) boolList with
  | Some b -> b
  | None -> false 
;;

(* Get pattern Set number in Murphi code *)
let getPatNum pat patList=
  let len = List.length patList in
  let patIndex = ref 0 in
  for i = 0 to len do
    match List.nth patList i with
    | Some x -> if isSamePat pat x then patIndex := i+1
    | None -> ()
  done;
  !patIndex
;;

(* Extracting msg patterns from actions and its sub-patterns *)
(* Extract msg from action *)
(*let extractMsg (seq,r1,r2,n,m) = m ;;*)
let rec getSubMsg msg =
  match msg with
  |`Null -> []
  |`Var nonce -> [`Var nonce]
  |`Str role  -> [`Str role]
  |`Tmp m -> [`Tmp m]
  |`Concat msgs -> let submsgs = List.concat (List.map ~f:getSubMsg msgs) in
                    submsgs@msgs@[msg]
  |`Aenc (m,k) -> (getSubMsg m)@[m;k]@[msg]
  |`Senc (m,k) -> (getSubMsg m)@[m;k]@[msg]
  |`Hash m -> (getSubMsg m) @ [msg]
  |`Pk role -> [`Pk role]
  |`Sk role -> [`Sk role]
  |`K (r1,r2) -> [`K (r1,r2)]
;;

(* To get equivalent msg pattern from patlist. *)
let rec existSamePat eqvlPats pat = 
  match eqvlPats with
  | [] -> false
  | hd::tl -> if isSamePat hd pat then true else existSamePat tl pat
;;

let isSubPat y x =
  let ysubs = getSubMsg y in
    let boollist = List.map ~f:(fun ysub -> if isSamePat ysub x then true else false) ysubs in
    match List.reduce ~f:(||) boollist with
    |Some b -> b
    |None -> false
;;
let rec getEqvlMsgPattern patlist =
  let non_eqvlPat = ref [] in 
  let len = List.length patlist in
  for i = 0 to len do
	match List.nth patlist i with
	| None -> ()
 	| Some x -> if existSamePat !non_eqvlPat x then () else non_eqvlPat := (insert x !non_eqvlPat) (* insert x into an appropriate position *)
  done;
  !non_eqvlPat
and insert x patlist =
    match patlist with
    | [] -> x::patlist
    | [y] -> if isSubPat y x then x::patlist else patlist@[x] (* if x is a subpat of y,then x before y,else x after y*)
    | hd :: tl -> if isSubPat hd x then x::patlist else hd::(insert x tl)
;;

let rec getPatList actions =
  match actions with
  | `Null -> []
  | `Send (seq,s,r,mls,m) -> (getSubMsg m) @ [m]
  | `Receive (seq,s,m) -> (getSubMsg m) @ [m] 
  | `Actlist arr -> List.concat (List.map ~f:getPatList arr)

let rec list_max xs =
  match xs with
  | [] ->  failwith "list_max called on empty list" (* empty list: fail *)
  | [x] -> x (* single element list: return the element *)
  | x :: remainder -> max x (list_max remainder) (* multiple element list: recursive case *)


let getMaxLenMsg actions = 
  let pats = getPatList actions in
  list_max (List.map ~f:(fun p -> match p with
                                |`Null -> 0
                                |`Concat msgs -> List.length msgs
                                |_ -> 1 ) pats)

let rec getMsgs actions =
  match actions with
  | `Null -> []
  | `Send (seq,s,r,ms,m) -> [(seq,r,m)]
  | `Receive (seq,s,m) -> [(seq,"",m)]
  | `Actlist arr ->List.concat (List.map ~f:getMsgs arr)

  let rec existInit msg atom =
    match msg with
    |`Null -> false
    |`Var n -> if isSamePat msg atom then 
                  match atom with
                  |`Var n1 -> if n = n1 then true else false
                  |_ -> false
                else false
    |`Str r -> if isSamePat msg atom then 
                match atom with
                |`Str r1 -> if r = r1 then true else false
                |_ -> false
              else false
    |`Concat msgs -> existInMsgs msgs atom
    |`Tmp m -> false
    |`Aenc (m,k) -> false
    |`Senc (m,k) -> false
    |`Hash (m) -> false
    |`Pk r -> true
    |`Sk r -> false
    |`K (r1,r2) -> false
    |_ -> false
  and existInMsgs msgs atom =
    let boolList = List.map ~f:(fun msg -> existInit msg atom ) msgs in
    match List.reduce ~f:(||) boolList with
    |Some b -> b
    |None -> false 
  ;;
  
  let rec genSendAct rolename seq i m atoms length msgofRolename patlist =
    let commitStr = if i = length then sprintf "   role%s[i].commit := true;\n" rolename else "" in
    let patNum = getPatNum m patlist in
    sprintf "var msg:Message;\n    msgNo:indexType;\nbegin\n" ^
    sprintf "   clear msg;\n   cons%d(%s,msg,msgNo);\n" patNum (sendAtoms2Str rolename i atoms msgofRolename) ^
    sprintf "   ch[%d].empty := false;\n" seq ^ 
    sprintf "   ch[%d].msg := msg;\n" seq ^
    sprintf "   ch[%d].sender := role%s[i].%s;\n" seq rolename rolename ^ 
    sprintf "   ch[%d].receiver := Intruder;\n" seq ^
    sprintf "   role%s[i].st := %s%d;\n" rolename rolename ((i mod length)+1) ^
    sprintf "   put \"role%s[i] in st%d\\n\";\n" rolename i ^
    commitStr ^
    sprintf "end;\n"
  and sendAtoms2Str rolename i atoms msgofRolename =
    let s = "role" ^ rolename ^"[i]." in
    let paralist = ref [] in
    let atoms' = ref [] in
    for i = 0 to (List.length atoms)-1 do
      match List.nth atoms i with
      |Some(`Var n) ->let n' = "nonce_"^n in
                      if listwithout !atoms' n' then
                      begin
                        atoms' := !atoms'@[n'];
                        let nstr = s^n in
                        paralist := !paralist@[nstr];
                      end
      |Some(`Str r) ->let r' = "agent_"^r in
                      if listwithout !atoms' r' then
                      begin
                        atoms':=!atoms'@[r'];
                        let rstr = s^r in
                        paralist := !paralist@[rstr];
                      end
      |Some(`Pk r) -> let r'="pk_"^r in
                      if listwithout !atoms' r' then
                      begin
                        atoms':=!atoms'@[r'];
                        let rstr = s^r in
                        paralist:=!paralist@[rstr];
                      end
      |Some(`Sk r) -> let r'="sk_"^r in
                      if listwithout !atoms' r' then
                      begin
                        atoms':=!atoms'@[r'];
                        let rstr = s^r in
                        paralist:=!paralist@[rstr];
                      end
      |Some(`K(r1,r2)) -> let r1'="symk1_"^r1 in
                          if listwithout !atoms' r1' then
                          begin
                            atoms':=!atoms'@[r1'];
                            let r1str = s^r1 in
                            paralist:=!paralist@[r1str];
                          end;
                          let r2'="symk2_"^r2 in
                          if listwithout !atoms' r2' then
                          begin
                            atoms':=!atoms'@[r2'];
                            let r2str = s^r2 in
                            paralist:=!paralist@[r2str];
                          end;
    |_ ->()
    done;
    String.concat ~sep:"," !paralist
  and getPkAg atoms msgofRolename =
    let ag = ref "" in
    let atomlen = List.length atoms in
    for i = 0 to (atomlen-1) do
      let ag' = match List.nth atoms i with
              | Some (`Pk r) -> r
              | Some (`Var n) -> ""
              | Some (`Str r) -> ""
              | _ -> ""
      in
      if ag' <> "" then ag := ag' else ()
    done;
    let loc = "loc" in
    if (existInit msgofRolename (`Str (!ag))) then !ag else loc^(!ag)
  ;;
  
  (** rolename: the owner of the strand
      i: i-th node in strand (-,m)
      m: msg of the i-th node
      atoms: atoms derived from msg
      length: strand length
      msgofRolename: get msg from initial knowledge
      patlist: Patterns derived from the protocol
  *)
  let rec genRecvAct rolename seq i m atoms length msgofRolename patlist =
    let commitStr = if i = length then sprintf "   role%s[i].commit := true;\n" rolename else "" in 
    let patNum = getPatNum m patlist in
    sprintf "var flag_pat%d:boolean;\n    msg:Message;\n    msgNo:indexType;\nbegin\n" patNum ^ 
    sprintf "   clear msg;\n   msg := ch[%d].msg;\n   isPat%d(msg, flag_pat%d);\n" seq patNum patNum  ^ 
    (* sprintf "   put flag_pat%d;\n" patNum ^ *)
    sprintf "   if(flag_pat%d) then\n" patNum ^
    sprintf "     destruct%d(msg,%s);\n" patNum (recvAtoms2Str atoms rolename) ^
    sprintf "     if(%s)then\n" (atoms2Str atoms rolename msgofRolename) ^
    sprintf "       ch[%d].empty:=true;\n       clear ch[%d].msg;\n" seq seq ^
    sprintf "       role%s[i].st := %s%d;\n" rolename rolename ((i mod length)+1) ^
    sprintf "     endif;\n"^
    sprintf "   endif;\n" ^
    sprintf "   put \"role%s[i] in st%d\\n\";\n" rolename i ^
    (* sprintf "   put \"recv%d. \";\n   put ch[%d].sender;\n   put \"   \";\n   put ch[%d].receiver;\n   put \"   msg: \";\n   printMsg(msg);\n   put \"\\n\";\n" i seq seq ^ *)
    commitStr ^
    sprintf "end;\n"
  
  and recvAtoms2Str atoms rolename = 
    let atoms' = ref [] in
    let str' = ref [] in
    let loc = "role"^rolename^"[i].loc" in
    for i = 0 to (List.length atoms)-1 do
      match List.nth atoms i with
      |Some (`Var n) -> let n' = "nonce_"^n in
                        if listwithout !atoms' n' then
                        begin 
                          atoms' := !atoms'@[n'];
                          let nstr = loc^n in
                          str' := !str'@[nstr];
                        end
      |Some (`Str r) -> let r' = "agent_"^r in
                        if listwithout !atoms' r' then 
                        begin
                          atoms' := !atoms'@[r'];
                          let rstr = loc^r in
                          str' := !str'@[rstr];
                        end
      |Some (`Pk r) ->let r' = "pk_"^r in
                      if listwithout !atoms' r' then 
                      begin
                        atoms' := !atoms'@[r'];
                        let rstr = loc^r in
                        str' := !str'@[rstr];
                      end
      |Some (`Sk r) ->let r' = "sk_"^r in
                      if listwithout !atoms' r' then 
                      begin
                        atoms' := !atoms'@[r'];
                        let rstr = loc^r in
                        str' := !str'@[rstr]
                      end
      |Some (`K(r1,r2)) ->let r1' = "symk1_"^r1 in
                          if listwithout !atoms' r1' then
                          begin
                            atoms' := !atoms'@[r1'];
                            let r1str = loc^r1 in
                            str' := !str'@[r1str];
                          end;
                          let r2' = "symk2_"^r2 in
                          if listwithout !atoms' r2' then
                          begin 
                            atoms' := !atoms'@[r2'];
                            let r2str = loc^r2 in
                            str' := !str'@[r2str];
                          end
      |_ -> ()
    done;
    String.concat ~sep:"," !str'
  (* let loc = "role"^rolename^"[i].loc" in
    String.concat ~sep:"," (List.map ~f:(fun a ->
    match a with
    |`Var n -> loc ^ n
    |`Str r -> loc ^ r
    |`Pk r -> loc ^ r
    |`Sk r -> loc ^ r
    |`K (r1,r2) -> sprintf "%s%s," loc r1 ^
                   sprintf "%s%s" loc r2
    |_ -> "null") atoms)
  *)
  
  and atoms2Str atoms rolename msgofRolename = 
    (* let loc = "role"^rolename^"[i].loc_" in   *)
    let atoms' = ref [] in
    let strlist = ref [] in
    for i = 0 to (List.length atoms)-1 do
      match List.nth atoms i with
      |Some (`Var n) -> let n' = "nonce_"^n in
                        if listwithout !atoms' n' then
                        begin 
                          atoms' := !atoms'@[n'];
                          let nstr = sprintf "matchNonce(role%s[i].loc%s, role%s[i].%s)" rolename n rolename n in
                          strlist := !strlist@[nstr];
                        end
      |Some (`Str r) -> let r' = "agent_"^r in
                        if listwithout !atoms' r' then 
                        begin
                          atoms' := !atoms'@[r'];
                          let rstr = sprintf "matchAgent(role%s[i].loc%s, role%s[i].%s)" rolename r rolename r in
                          strlist := !strlist@[rstr];
                        end
      |Some (`Pk r) ->let r' = "pk_"^r in
                      if listwithout !atoms' r' then 
                      begin
                        atoms' := !atoms'@[r'];
                        let rstr = sprintf "matchAgent(role%s[i].loc%s, role%s[i].%s)" rolename r rolename r in
                        strlist := !strlist@[rstr];
                      end
      |Some (`Sk r) ->let r' = "sk_"^r in
                      if listwithout !atoms' r' then 
                      begin
                        atoms' := !atoms'@[r'];
                        let rstr = sprintf "matchAgent(role%s[i].loc%s, role%s[i].%s)" rolename r rolename r in
                        strlist := !strlist@[rstr]
                      end
      |Some (`K(r1,r2)) ->let r1' = "symk1_"^r1 in
                          if listwithout !atoms' r1' then
                          begin
                            atoms' := !atoms'@[r1'];
                            let r1str = sprintf "matchAgent(role%s[i].loc%s, role%s[i].%s)" rolename r1 rolename r1 in
                            strlist := !strlist@[r1str];
                          end;
                          let r2' = "symk2_"^r2 in
                          if listwithout !atoms' r2' then
                          begin 
                            atoms' := !atoms'@[r2'];
                            let r2str = sprintf "matchAgent(role%s[i].loc%s, role%s[i].%s)" rolename r2 rolename r2 in
                            strlist := !strlist@[r2str];
                          end
      |_ -> ()
    done;
    String.concat ~sep:" & " !strlist
  
  (*   
    let strlist = (List.map ~f:(fun  a ->
    match a with
    |`Var n -> sprintf "matchNonce(role%s[i].loc%s, role%s[i].%s)" rolename n rolename n
    |`Str r -> sprintf "matchAgent(role%s[i].loc%s, role%s[i].%s)" rolename r rolename r
    |`Pk r -> sprintf "matchAgent(role%s[i].loc%s, role%s[i].%s)" rolename r rolename r
    |`Sk r -> sprintf "matchAgent(role%s[i].loc%s, role%s[i].%s)" rolename r rolename r
    |_ -> "null" ) atoms)
    in
    String.concat ~sep:" & " (remove strlist "true")
  *)
  ;;
  

  let rec trans act i rolename length msgOfrolename patlist=
    match act with
    |`Null -> sprintf ""
    |`Send (seq, s,r,ms, m) ->let atoms = getAtoms m in
                      let atoms = del_duplicate atoms in
                      genRuleName rolename i^
                      genSendGuard rolename i seq^
                      (genSendAct rolename seq i m atoms length msgOfrolename patlist)
    |`Receive (seq,s,m) ->let atoms = getAtoms m in
                      let atoms = del_duplicate atoms in
                      genRuleName rolename i ^
                      genRecvGuard rolename i seq^
                      (genRecvAct rolename seq i m atoms length msgOfrolename patlist)
    | `Actlist arr -> String.concat (List.map ~f:(fun a-> trans a i rolename length msgOfrolename patlist)  arr)

  ;;

  let print_murphiRule agents knws =  (*printf "murphi code"*)
  let rolelist = getRolesFromKnws knws [] in (* Get role list:[A;B;...] *)
  (* let actsOfAllRls = getActsList actions rolelist in  Get act list: [(sign,seq,msg);(sign,seq,msg);...] *)
  let actOfAgent = List.map ~f:(fun r->getActsList agents r) rolelist in (*get role's action*)
  let initKnws = getMsgOfRoles knws in 
  let allOfAct =  (getAllActsList agents) in
  let patlist = List.concat (List.map ~f:getPatList (allOfAct)) in (*get all patterns from actions*)
  let patlist = del_duplicate patlist in (* delete duplicate *)
  let patlist = getEqvlMsgPattern patlist in (* delete equivalent class *)
  String.concat (List.mapi ~f:(fun i r -> (*if i = 0  || i = 1 then*)
                            let acts =  List.nth_exn actOfAgent i  (* Get the i-th act list of role_i*)
                            in
                            let msgofRole = match List.nth initKnws i with (* Get the i-th msg list of role_i*)
                                            |None -> `Null
                                            |Some msg -> msg
                            in
                            let lenActs = List.length acts in
                            sprintf "ruleset i:role%sNums do\n" r ^
                            String.concat (List.mapi ~f:(fun j act -> trans act (j+1) r lenActs msgofRole patlist) acts) ^
                            sprintf "endruleset;\n\n" ) rolelist)


let genCodeOfIntruderGetMsg (seq,r,m) patList = 
  let j = getPatNum m patList in
  sprintf "\n---rule of intruder to get msg from ch[%d] \n" seq ^
  sprintf "rule \"intruderGetMsgFromCh[%d]\" \n" seq ^ 
  sprintf "  ch[%d].empty = false\n  ==>\n" seq ^
  sprintf "  var flag_pat%d:boolean;\n      msgNo:indexType;\n      msg:Message;\n" j^
  sprintf "  begin\n" ^
  sprintf "    msg := ch[%d].msg;\n" seq ^ 
  sprintf "    get_msgNo(msg, msgNo);\n"^ 
  sprintf "    isPat%d(msg,flag_pat%d);\n" j j^ 
  sprintf "    if (flag_pat%d) then\n" j^
  sprintf "      if(!exist(pat%dSet,msgNo)) then\n" j^
  sprintf "        pat%dSet.length:=pat%dSet.length+1;\n" j j^
  sprintf "        pat%dSet.content[pat%dSet.length]:=msgNo;\n" j j^
  sprintf "        Spy_known[msgNo] := true;\n"^
  sprintf "      endif;\n" ^
  sprintf "          put \"intruder get msg from ch[%d].\\n\";\n" seq ^
  sprintf "      ch[%d].empty := true;\n      clear ch[%d].msg;\n" seq seq^
  sprintf "    endif;\n" ^
  sprintf "  end;\n"
;;

let genCodeOfIntruderEmitMsg (seq,r,m) patList= 
  let j = getPatNum m patList in
  let str1 = sprintf "\n---rule of intruder to emit msg into ch[%d].\n" seq ^ sprintf "ruleset i: msgLen do\n"
  in
  let str2 = sprintf "  ruleset j: role%sNums do\n" r in
  let str3 = sprintf "    rule \"intruderEmitMsgIntoCh[%d]\"\n" seq ^ sprintf "      ch[%d].empty=true & i <= pat%dSet.length & pat%dSet.content[i] != 0 & Spy_known[pat%dSet.content[i]] & matchPat(msgs[pat%dSet.content[i]], sPat%dSet)\n      ==>\n" seq j j j j j^ 
             sprintf "      begin\n        if (!emit[pat%dSet.content[i]]) then  --- & msgs[msgs[pat%dSet.content[i]].aencKey].k.ag=role%s[j].%s\n" j j r r^ 
             sprintf "          clear ch[%d];\n" seq ^sprintf "          ch[%d].msg:=msgs[pat%dSet.content[i]];\n" seq j^
             sprintf "          ch[%d].sender:=Intruder;\n" seq
  in
  let str4 = sprintf "          ch[%d].receiver:=role%s[j].%s;\n" seq r r in
  str1 ^ str2 ^ str3^ str4 ^ 
  sprintf "          ch[%d].empty:=false;\n" seq^
  sprintf "          emit[pat%dSet.content[i]] := true;\n" j^
  sprintf "          put \"intruder emit msg into ch[%d].\\n\";\n" seq ^
  sprintf "        endif;\n"^
  sprintf "      end;\n"^
  sprintf "  endruleset;\n"^
  sprintf "endruleset;\n"
;;

let print_murphiRule_ofIntruder agents =
  let actions =  (getAllActsList agents) in
  let sendActions = List.concat (List.map ~f:getAllSendActs actions ) in 
  let msgs = List.concat (List.map ~f:getMsgs (sendActions)) in    (* get all msgs from actions *)
  let patlist = List.concat (List.map ~f:getPatList (actions)) in (*get all patterns from actions*)
  let non_dup = del_duplicate patlist in (* delete duplicate *)
  let non_equivalent = getEqvlMsgPattern non_dup in
  let getMsgStr = String.concat (List.map ~f:(fun m -> genCodeOfIntruderGetMsg m non_equivalent) msgs) in
  let emitMsgStr = String.concat (List.mapi ~f:(fun i m -> genCodeOfIntruderEmitMsg m non_equivalent) msgs) in
  getMsgStr ^ emitMsgStr      
  