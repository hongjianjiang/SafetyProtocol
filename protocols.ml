open Core
open Proctype
open Func


let rec print_message m=
  match m with 
  | `Null -> sprintf ""
  | `Var i -> sprintf "%s" i 
  | `Str r -> sprintf "%s" r
  (* | `Const i -> sprintf "%d" i *)
  (* | `Fresh tid -> sprintf "fresh_%s" tid  *)
  (* | `Inv m -> sprintf "inv_%s" (print_message m)  *)
  | `Tmp m -> sprintf "tmp(%s)" (print_message m)
  (* | `Multi (m1,m2) -> sprintf "%s*%s" (print_message m1) (print_message m2) *)
  (* | `Exp (m,i) -> sprintf "(%s)^%s" (print_message m) (print_message i)  *)
  (* | `Sig (m,k)  -> sprintf "sig_%s(%s)" (print_message k) (print_message m) *)
  (* | `Xor (m1,m2) -> sprintf "xor_(%s,%s)" (print_message m1) (print_message m2) *)
  | `Concat ms-> String.concat ~sep:"." (List.map ~f:print_message ms)
  | `Aenc (m1,m2)-> sprintf "aenc{%s}%s" (print_message m1) (print_message m2)
  | `Senc (m1,m2) -> sprintf "senc{%s}%s" (print_message m1) (print_message m2)
  | `Hash m -> sprintf("hash(%s)") (print_message m)
  (* | `Mod (m1,m2) -> sprintf ("mod(%s,%s)") (print_message m1) (print_message m2) *)
  | `Pk r -> sprintf "pk(%s)" r
  | `Sk r -> sprintf "sk(%s)" r 
  | `K (r1,r2) -> sprintf "k(%s,%s)" r1 r2

let rec print_knowledge  knws = 
  match knws with 
  | `Null -> sprintf "\n" 
  | `Knowledge (r,m) ->  sprintf ("%s:%s\n") r  (print_message m)
  | `Knowledge_list kns -> String.concat ~sep:"\n" (List.map ~f:print_knowledge kns)
  
(* let print_field f = 
  match f with 
  | `Null -> sprintf "\n"
  | `Field1 s -> sprintf "%s" s
  | `Field2 c -> sprintf "-"  *)

  let print_sign s = 
    match s with 
    | `Plus -> "+"
    | `Minus -> "-"

  let rec print_action actions = 
    match actions with 
      | `Null -> sprintf "\n"
      | `Send (seq,s,r,ms,m) -> sprintf "[%d] %s %s (%s):%s" seq  (print_sign s) r (String.concat ~sep:"," (List.map ~f:print_message ms)) (print_message m)
      | `Receive (seq,s,m) -> sprintf "[%d] %s :%s" seq  (print_sign s) (print_message m)
      | `Actlist arr ->String.concat ~sep:"\n" (List.map ~f:print_action arr)
    
let rec print_agents ags = 
  match ags with 
  | `Null -> sprintf "\n"
  | `Agent (n,ms,actlist) -> sprintf "%s:%s\n%s" n (String.concat ~sep:"," (List.map ~f:print_message ms)) (String.concat ~sep:"\n" (List.map ~f:print_action actlist))
  | `Agentlist als -> String.concat ~sep:"\n" (List.map ~f:print_agents als)


let rec print_function f=
  match f with 
  | `Pk c -> sprintf "pk"
  | `Sk s -> sprintf "sk"
  | `Exp e -> sprintf "exp"
  | `Mod m -> sprintf "mod"

let rec print_type types = 
  match types with 
  | `Null -> sprintf "\n"
  | `Number ms -> sprintf "Number:%s" (String.concat ~sep:"," (List.map ~f:print_message ms))
  | `Function fs -> sprintf "Function:%s" (String.concat ~sep:"," (List.map ~f:print_function fs))
  | `Agent rs -> sprintf "Agent:%s" (String.concat ~sep:"," rs)
  | `Modelist ls -> String.concat ~sep:"\n" (List.map ~f:print_type ls)

let rec print_env envs = 
  match envs with 
  | `Null -> sprintf "\n"
  | `Env_agent (r,i,m)->sprintf "%s[%d]:%s" r i (print_message m)
  | `Envlist es ->String.concat ~sep:"\n" (List.map ~f:print_env es)
(* let () = let r = "roleA" in let i =1 in let m =`Str "message" in let envs = `Env_agent (r,i,m) in print_endline(print_env envs)  *)

let rec print_goal gs = 
  match gs with 
  (* |`Secretgoal (id,m,rs)->sprintf "[secrecy]%s secret of %s" (print_message m) (String.concat ~sep:"," rs)
  |`Agreegoal (id,r1,r2,m) -> sprintf "[weakB]%s non-injectively agrees with %s on %s " r1 r2 (print_message m)
  |`Agreegoal1 (id,r1,r2,m) -> sprintf "[agreeB]%s injectively agrees with %s on %s " r1 r2 (print_message m)
  |`Confidentgoal(id,r1,m,r2) -> sprintf "[confidential]%s confidentially sends %s to %s" r1 (print_message m) r2
  |`Goallist s -> String.concat ~sep:"\n" (List.map ~f:print_goal s)
  |`Null -> sprintf "\n" *)
  |`Secretgoal (id,m) -> sprintf "%s,%s" id (print_message m)
  |`Secretgoal1 (id,m,r1,r2) -> sprintf "%s,%s,%s,%s" id (print_message m) r1 r2
  |`Agreegoal (id,r1,r2,m) -> sprintf "%s,%s,%s,%s" id r1 r2 (print_message m)
  |`Goallist gs -> String.concat (List.map ~f:print_goal gs)
  |`Null -> sprintf ""

  (*-----------------------------------transition part-------------------------------------------------*)
  let printMurphiConsTypeVars ag k env=
    (* print const *)
    let msgs = getMsgOfRoles k in
    let nlist = getNonces msgs in
  
    let rlist = getRolesFromKnws k [] in
    let rolesOfEnv = getRolesFromEnv env [] in
    let nonceOfEnv = getNonceFromEnv env [] in
    let roleOfAgent = getAgentRole ag in (* Get all roles *)
    let actOfAgent = List.map ~f:(fun r->getActsList ag r) roleOfAgent in (*get role's action*)
    let lensOfactStr = List.map ~f: List.length actOfAgent in(*length of actor*)
    let allOfAct =  (getAllActsList ag) in
    let patlist = List.concat (List.map ~f:getPatList (allOfAct)) in (*get all patterns from actions*)
    let non_dup = del_duplicate patlist in (* delete duplicate *)
    let pats = getEqvlMsgPattern non_dup in 
    (* let maxMsgLen = getMaxLenMsg (allOfAct) in  *)
    let concatParts = ref "\n    concatPart: Array[msgLen] of indexType;" in
    sprintf "const\n" ^
    String.concat ~sep:"\n" (List.map ~f:(fun r -> sprintf "  role%sNum:1;" r) rlist) ^
    "
  totalFact:100;
  msgLength:15;
  chanNum:10;\n" ^
  
    (* print type*)
    sprintf "type
  indexType:0..totalFact;\n"^
    String.concat ~sep:"\n" (List.map ~f:(fun r -> sprintf "  role%sNums:1..role%sNum;" r r) rlist) ^
    "
  msgLen:0..msgLength;
  chanNums:1..chanNum;\n"^
  
    sprintf "
  AgentType : enum{%s,anyAgent}; ---Intruder 
  NonceType : enum{%s, anyNonce};  \n" (agents2Str rolesOfEnv) (nonce2Str nonceOfEnv)
    ^
    sprintf "
  EncryptType : enum{PK,SK,Symk};
  KeyType: record 
    encType: EncryptType; 
    ag: AgentType; 
    ag1:AgentType;
    ag2:AgentType;
  end;\n\n  %s;\n" (agentSStatus rlist lensOfactStr) (*
    AStatus : enum {A1,A2,A3}; ---the roles status should be derived from actions and the principals
    BStatus : enum {B1,B2,B3};*)
    ^"
  MsgType : enum {null,agent,nonce,key,aenc,senc,concat,hash};
  Message: record
    msgType : MsgType;
    ag : AgentType;
    noncePart : NonceType;
    k : KeyType;
    aencMsg : indexType;
    aencKey : indexType;
    sencMsg : indexType;
    sencKey : indexType;"^ !concatParts ^ "--- concatParts could be written in arrays: concatPart: Array[msgLen] of indexType" ^"
    length : indexType;
  end;
  Channel: record
    msg : Message;
    sender : AgentType;
    receiver : AgentType;
    empty : boolean;
  end;\n" ^ printMurphiRecords k nlist rlist ^ (* print records of principals *)
    (* ---RoleIntruder: record
    ---  B : AgentType;
    ---send; *)
  "
  msgSet: record
    content : Array[indexType] of indexType;
    length : indexType;
  end;
  
var
  ch : Array[chanNums] of Channel;\n"^
    sprintf "  %s;\n" (rlistToVars rlist )^
    "
  ---intruder    : RoleIntruder;
  msgs : Array[indexType] of Message;
  msg_end: indexType;\n"^
    sprintf "%s\n" (printPatSetVars pats) ^
    sprintf "  Spy_known: Array[indexType] of boolean;
  ---systemEvent   : array[eventNums] of Event;
  ---eve_end       : eventNums;
  emit: Array[indexType] of boolean;
  gnum : indexType;\n\n" (* global num*)  
   
(*--------------------------------------------------------print precedure -----------------------------------------------------------*)

(*synthesis of a messages of pati.*)
let atoms2Parms atoms =
  let paraList = ref [] in
  for i = 0 to List.length atoms -1 do
    match List.nth atoms i with
    |Some(`Var n) ->let n1 = n ^ ":NonceType" in
                    if listwithout !paraList n1 then paraList := !paraList@[n1]
    |Some(`Str r) ->let r1 = r ^ ":AgentType" in
                    if listwithout !paraList r1 then paraList := !paraList@[r1]
    |Some(`Pk role) ->let r = role^"Pk:AgentType" in
                      if listwithout !paraList r then 
                        paraList := !paraList@[r]
    |Some(`Sk role )->let r = role^"Sk:AgentType" in 
                      if listwithout !paraList r then 
                        paraList := !paraList@[r]
    |Some(`K(r1,r2)) -> let symk1 = r1^"symk1:AgentType" in
                        let symk2 = r2^"symk2:AgentType" in
                        if listwithout !paraList symk1 then paraList := !paraList@[symk1];
                        if listwithout !paraList symk2 then paraList := !paraList@[symk2]
    |_ -> ()
  done;
  String.concat ~sep:"; " !paraList

  let atoms2Parms1 atoms =
    let paraList = ref [] in
    for i = 0 to List.length atoms -1 do
      match List.nth atoms i with
      |Some(`Var n) ->let n1 = "Var "^ n^ ":NonceType" in
                      if listwithout !paraList n1 then paraList := !paraList@[n1]
      |Some(`Str r) ->let r1 ="Var "^ r ^ ":AgentType" in
                      if listwithout !paraList r1 then paraList := !paraList@[r1]
      |Some(`Pk role) ->let r ="Var "^ role^"Pk:AgentType" in
                        if listwithout !paraList r then 
                          paraList := !paraList@[r]
      |Some(`Sk role )->let r ="Var "^ role^"Sk:AgentType" in 
                        if listwithout !paraList r then 
                          paraList := !paraList@[r]
      |Some(`K(r1,r2)) -> let symk1 ="Var "^ r1^"symk1:AgentType" in
                          let symk2 ="Var "^ r2^"symk2:AgentType" in
                          if listwithout !paraList symk1 then paraList := !paraList@[symk1];
                          if listwithout !paraList symk2 then paraList := !paraList@[symk2]
      |_ -> ()
    done;
    String.concat ~sep:"; " !paraList

let genGet_msgNoCode () =
sprintf "
procedure get_msgNo(msg:Message; Var num:indexType);
  var index:indexType;
    j:indexType;
    flag:boolean;
  begin
    index:=0;
    for i: indexType do
      if (msgs[i].msgType = msg.msgType) then
        if ( (msg.msgType=agent & msgs[i].ag=msg.ag)
        | (msg.msgType=nonce & msgs[i].noncePart=msg.noncePart)
        | (msg.msgType=key & (msgs[i].k.encType=msg.k.encType & msg.k.encType != Symk & msgs[i].k.ag=msg.k.ag))
        | (msg.msgType=key & (msgs[i].k.encType=msg.k.encType & msg.k.encType = Symk & msgs[i].k.ag1=msg.k.ag1 & msgs[i].k.ag2=msg.k.ag2))
        | (msg.msgType=aenc & (msgs[i].aencMsg=msg.aencMsg & msgs[i].aencKey=msg.aencKey))
        | (msg.msgType=senc & (msgs[i].sencMsg=msg.sencMsg & msgs[i].sencKey=msg.sencKey))
        ) then 
          index:=i;
        elsif (msg.msgType=concat & msg.length = msgs[i].length) then
          j := msg.length;
          flag := true;
          while j > 0 do
            if (msg.concatPart[j] != msgs[i].concatPart[j]) then
              flag := false;
            endif;
            j := j - 1;
        end;
        if (flag) then
          index := i;
        endif;
      endif;
    endif;
  endfor;
  num := index;
end;\n"

    
let genPrintMsgCode () =
sprintf "
procedure printMsg(msg:Message);
  var i:indexType;
  begin
    if msg.msgType=null then
      put \"null\\n\";
    elsif msg.msgType=agent then
      put msg.ag;
    elsif msg.msgType=nonce then
      put msg.noncePart;
    elsif msg.msgType=key then
      if msg.k.encType=PK then
        put \"PK(\";
        put msg.k.ag;
        put \")\";
      elsif msg.k.encType=SK then
        put \"SK(\";
        put msg.k.ag;
        put \")\";
      elsif msg.k.encType=Symk then
        put \"SymK(\";
        put msg.k.ag;
        put \")\";
      endif;
      elsif msg.msgType=aenc then
        put \"aenc{\";
        printMsg(msgs[msg.aencMsg]);
        put \",\";
        printMsg(msgs[msg.aencKey]);
        put \"}\";
      elsif msg.msgType=senc then
        put \"senc{\";
        printMsg(msgs[msg.sencMsg]);
        put \",\";
        printMsg(msgs[msg.sencKey]);
        put \"}\";
      elsif msg.msgType=concat then
        put \"concat(\";
        i := 1;
        while i < msg.length do
          printMsg(msgs[msg.concatPart[i]]);
          put \",\";
          i := i+1;
        end;
        printMsg(msgs[msg.concatPart[i]]);
        put\")\";
      endif;
    end;\n"
    ;;
let genInverseKeyCode ()=
  sprintf "function inverseKey(msgK:Message):Message;
  var key_inv:Message;
  begin
    key_inv.msgType := null;
    if (msgK.msgType=key) then
      key_inv.msgType := msgK.msgType;
      if (msgK.k.encType = PK) then
        key_inv.k.encType := SK;
        key_inv.k.ag := msgK.k.ag;
      elsif (msgK.k.encType = SK) then
        key_inv.k.encType := PK;
        key_inv.k.ag := msgK.k.ag;
      elsif (msgK.k.encType = Symk) then
        key_inv.k.encType := Symk;
        key_inv.k.ag1 := msgK.k.ag1;
        key_inv.k.ag2 := msgK.k.ag2;
      endif;
    endif;
    return key_inv;
  end;\n"

let genLookUpCode () =
sprintf "function lookUp(msg: Message): indexType; --- not used.
  var index : indexType;
  begin
    index:=0;
    for i: indexType do
      if(msgs[i].msgType=msg.msgType) then
        if(msgs[i].msgType=agent & msgs[i].ag=msg.ag) then
          index := i;
        elsif(msgs[i].msgType=nonce & msgs[i].noncePart=msg.noncePart) then
          index := i;
        elsif(msgs[i].msgType=key & (msgs[i].k.encType=msg.k.encType & msgs[i].k.ag=msg.k.ag)) then
          index := i;
        elsif(msgs[i].msgType = aenc & (msgs[i].aencKey=msg.aencKey & msgs[i].aencMsg=msg.aencMsg)) then
          index := i;
        elsif(msgs[i].msgType = senc & (msgs[i].sencKey=msg.sencKey & msgs[i].sencMsg=msg.sencMsg)) then
          index := i;
        elsif(msgs[i].msgType = concat & (msgs[i].concatPart[1]=msg.concatPart[1] & msgs[i].concatPart[2]=msg.concatPart[2])) then
          index := i;
        endif;
      endif;
    endfor;
    return index;
  end;\n";
    ;;
    (* generate m by its submsgs*)
let consMsgBySubs m patList =
  let i = getPatNum m patList in 
  match m with
  |`Aenc(m1,k1) -> (* submessage are m1 and k1*)
                  let numM1 = getPatNum m1 patList in (* construct_i_by_numM1_numK1 *)
                  let numK1 = getPatNum k1 patList in
                  (* let agK = match k1 with
                            |`Pk r -> sprintf "loc%sPk" r
                            |`Sk r -> sprintf "loc%sSk" r
                            |_ -> ""
                  in *)
                  sprintf "function construct%dBy%d%d(msgNo%d, msgNo%d:indexType):indexType;\n" i numM1 numK1 numM1 numK1^
                  sprintf "  var index: indexType;\n"^
                  sprintf "      ---msg : Message;\n  begin\n"^
                  sprintf "   index := 0;\n"^      
                  sprintf "   for i :indexType do\n"^
                  sprintf "     if (msgs[i].msgType = aenc) then\n"^
                  sprintf "       if (msgs[i].aencMsg = msgNo%d & msgs[i].aencKey = msgNo%d) then\n" numM1 numK1 ^
                  sprintf "         index := i;\n" ^
                  sprintf "       endif;\n" ^
                  sprintf "     endif;\n" ^
                  sprintf "   endfor;\n" ^
                  sprintf "   if (index = 0) then \n"^
                  sprintf "     msg_end := msg_end + 1;\n" ^
                  sprintf "     index := msg_end;\n" ^
                  sprintf "     msgs[index].msgType := aenc;\n" ^
                  sprintf "     msgs[index].aencMsg := msgNo%d;\n" numM1 ^
                  sprintf "     msgs[index].aencKey := msgNo%d;\n" numK1 ^
                  sprintf "     msgs[index].length := 1;\n"^
                  sprintf "   endif;\n"^
                  sprintf "   return index;\n" ^
                  sprintf "  end;\n\n" 
  |`Senc(m1,symK) -> (* submessage are m1 and symK *)
                  let numM1 = getPatNum m1 patList in (* construct_i_by_numM1_numK1 *)
                  let numK = getPatNum symK patList in
                  sprintf "function construct%dBy%d%d(msgNo%d, msgNo%d:indexType):indexType;\n" i numM1 numK numM1 numK^
                  sprintf "  var index: indexType;\n"^
                  sprintf "      ---msg : Message;\n  begin\n"^
                  sprintf "   index := 0;\n"^      
                  sprintf "   for i :indexType do\n"^
                  sprintf "     if (msgs[i].msgType = senc) then\n"^
                  sprintf "       if (msgs[i].sencMsg = msgNo%d & msgs[i].sencKey = msgNo%d) then\n" numM1 numK ^
                  sprintf "         index := i;\n" ^
                  sprintf "       endif;\n" ^
                  sprintf "     endif;\n" ^
                  sprintf "   endfor;\n" ^
                  sprintf "   if (index = 0) then \n"^
                  sprintf "     msg_end := msg_end + 1;\n" ^
                  sprintf "     index := msg_end;\n" ^
                  sprintf "     msgs[index].msgType := senc;\n" ^
                  sprintf "     msgs[index].sencMsg := msgNo%d;\n" numM1 ^
                  sprintf "     msgs[index].sencKey := msgNo%d;\n" numK ^
                  sprintf "     msgs[index].length := 1;\n"^
                  sprintf "   endif;\n"^
                  sprintf "   return index;\n" ^
                  sprintf "  end;\n"
  |`Concat msgs -> (* submessage are elements in msgs*)
                  let subMsgNo = String.concat (List.map ~f:(fun m -> sprintf "%d" (getPatNum m patList)) msgs) in
                  let msgNoStr = String.concat ~sep:"," (List.mapi ~f:(fun j m -> sprintf "msgNo%d" (j+1)) msgs) in
                  let ifStr = String.concat ~sep:" & " (List.mapi ~f:(fun j m -> sprintf "msgs[i].concatPart[%d] = msgNo%d" (j+1) (j+1) )msgs)
                  in
                  let assignStr = String.concat (List.mapi ~f:(fun j m -> sprintf "     msgs[index].concatPart[%d] := msgNo%d;\n" (j+1) (j+1)) msgs)
                  in
                  sprintf "function construct%dBy%s(%s:indexType):indexType;\n" i subMsgNo msgNoStr ^
                  sprintf "  var index : indexType;\n"^
                  sprintf "      ---msg : Message;\n  begin\n"^
                  sprintf "   index := 0;\n"^ 
                  sprintf "   for i : indexType do\n"^
                  sprintf "     if (msgs[i].msgType = concat & msgs[i].length = %d) then\n" (List.length msgs) ^
                  sprintf "       if (%s) then\n" ifStr ^
                  sprintf "         index := i;"^
                  sprintf "       endif;"^
                  sprintf "     endif;\n" ^
                  sprintf "   endfor;\n"^
                  sprintf "   if (index = 0) then \n"^
                  sprintf "     msg_end := msg_end + 1;\n" ^
                  sprintf "     index := msg_end;\n" ^
                  sprintf "     msgs[index].msgType := concat;\n" ^
                  sprintf "%s" assignStr ^
                  sprintf "     msgs[index].length := %d;\n" (List.length msgs)^
                  sprintf "   endif;\n"^
                  sprintf "   return index;\n" ^
                  sprintf "  end;\n\n"        
  | _ -> sprintf "--- Sorry, construct_function of this pattern has not been written!\n\n"
;;
let genExistCode () =
  sprintf "function exist(PatnSet:msgSet; msgNo:indexType):boolean;
  var flag:boolean;
  begin
    flag := false;
    for i:msgLen do
      if (msgNo != 0 & PatnSet.content[i] = msgNo) then 
        flag := true;
      endif;
    endfor;
    return flag;
  end;\n";
;;

(* Generating function matchAgent() code *)
let genMatchAgent () =
  sprintf "function matchAgent(Var locAg: AgentType; Var Ag: AgentType):boolean;  ---if ag equals to locAg which was derived from recieving msg, or anyAgent, then true
  var flag : boolean;
  begin
    flag := false;
    if (Ag = anyAgent) then
      flag := true;
      Ag := locAg;
    elsif (locAg = Ag) then
      flag := true;
    else
      flag := false;
    endif;
    return flag;
  end;\n\n"
;;

(* Generating function matchNonce() code *)
let genMatchNonce () =
  sprintf "function matchNonce(Var locNa: NonceType; Var Na: NonceType):boolean;  ---if Na equals to locNa which was derived from recieving msg, or anyNonce, then true
  var flag : boolean;
  begin
    flag := false;
    if (Na = anyNonce) then
      flag := true;
      Na := locNa;
    elsif (locNa = Na) then
      flag:=true;
    else
      flag := false;
    endif;
    return flag;
  end;\n\n"
;;

(* Generating function match(msg1,msg2) code *)
let rec genMatchMsg ()=
  genMatch() ^ genMatchPat() 

and genMatch () =
  sprintf "function match(var m1,m2:Message):boolean;
  var concatFlag: boolean;
      i: indexType;
  begin 
    if m1.msgType = agent & m2.msgType = agent then
	    return matchAgent(m1.ag, m2.ag); ---ag and noncePart should be initiallized as anyAgent or anyNonce (m1.ag != anyAgent & m2.ag != anyAgent &)
    elsif m1.msgType = nonce & m2.msgType = nonce then
	    return matchNonce(m1.noncePart, m2.noncePart); --- m1.noncePart != anyNonce & m2.noncePart != anyNonce &
    elsif m1.msgType = key & m2.msgType = key then
      if m1.k.encType = PK then
        return (m1.k.encType = m2.k.encType) & (matchAgent(m1.k.ag, m2.k.ag));
      elsif m1.k.encType = SK then
        return (m1.k.encType = m2.k.encType) & (matchAgent(m1.k.ag, m2.k.ag));
      elsif m1.k.encType = Symk then
        return (m1.k.encType = m2.k.encType) & (matchAgent(m1.k.ag1, m2.k.ag1)) & (matchAgent(m1.k.ag2, m2.k.ag2));
      endif;
    elsif m1.msgType = aenc & m2.msgType = aenc then
	    return match(msgs[m1.aencMsg], msgs[m2.aencMsg]) & match(msgs[m1.aencKey], msgs[m2.aencKey]);
    elsif m1.msgType = senc & m2.msgType = senc then
	    return match(msgs[m1.sencMsg], msgs[m2.sencMsg]) & match(msgs[m1.sencKey], msgs[m2.sencKey]);
    elsif (m1.msgType=concat & m2.msgType=concat) & (m1.length = m2.length)  then
      concatFlag := true;
      i := m1.length;
      while (i > 0 & concatFlag)do
        concatFlag := concatFlag & match(msgs[m1.concatPart[i]], msgs[m2.concatPart[i]]);
        i := i-1;
      end;
	    return concatFlag;
    else
	    return false;
    endif;	
  end;\n\n"

and genMatchPat () =
  sprintf "function matchPat(var m1:Message; sPatnSet: msgSet):boolean;
  var flag:boolean;
      i : indexType;
  begin
    flag := false;
    i := 1;
    while (i<sPatnSet.length+1) do
      if(match(m1,msgs[sPatnSet.content[i]])) then
        flag := true;
      endif;
      i := i+1;
    end;
    return flag;
  end;\n"
;;

  let atom2Str atoms =
    let paraList = ref [] in
    for i = 0 to List.length atoms -1 do
      match List.nth atoms i with
      |Some(`Var n) -> if listwithout !paraList n then paraList := !paraList@[n]
      |Some(`Str r) -> if listwithout !paraList r then paraList := !paraList@[r]
      |Some(`Pk role) ->let r = role^"Pk" in
                        if listwithout !paraList r then 
                          paraList := !paraList@[r]
      |Some(`Sk role )->let r = role^"Sk" in 
                        if listwithout !paraList r then 
                          paraList := !paraList@[r]
      |Some(`K(r1,r2)) -> let symk1 = r1^"symk1" in
                          let symk2 = r2^"symk2" in
                          if listwithout !paraList symk1 then paraList := !paraList@[symk1];
                          if listwithout !paraList symk2 then paraList := !paraList@[symk2]
      |_ -> ()
    done;
    String.concat ~sep:", " !paraList

  
 
let genSynthCode m i patList =
  let atoms = getAtoms m in
  let atoms = del_duplicate atoms in 
  let str1 = sprintf "---pat%d: %s \nprocedure lookAddPat%d" i (print_message m) i ^ 
             sprintf "(%s; Var msg:Message; Var num : indexType);\n" (atoms2Parms atoms)
  in
  match m with
  |`Aenc(m1,k1) -> begin
                  let i1= getPatNum m1 patList in
                  let i2= getPatNum k1 patList in
                  let keyAg=match k1 with
                            |`Pk role -> role^"Pk"
                            |`Sk role -> role^"Sk"
                            |_ -> "null"
                  in
                  let m1Atoms = getAtoms m1 in  
                  str1 ^                                          
                  sprintf "  Var msg1, msg2: Message;\n      index,i1,i2:indexType;\n  begin\n"^
                  sprintf "   index:=0;\n"^
                  sprintf "   lookAddPat%d(%s,msg1,i1);\n" i1 (atom2Str m1Atoms)^
                  sprintf "   lookAddPat%d(%s,msg2,i2);\n" i2 keyAg^               
                  sprintf "   for i : indexType do\n"^
                  sprintf "     if (msgs[i].msgType = aenc) then\n"^
                  sprintf "       if (msgs[i].aencMsg = i1 & msgs[i].aencKey = i2) then\n"^
                  sprintf "          index:=i;\n"^
                  sprintf "       endif;\n"^
                  sprintf "     endif;\n"^
                  sprintf "   endfor;\n"^
                  sprintf "   if(index=0) then\n"^
                  sprintf "     msg_end := msg_end + 1 ;\n     index := msg_end;\n     msgs[index].msgType := aenc;\n     msgs[index].aencMsg := i1; \n     msgs[index].aencKey := i2; \n     msgs[index].length := 1;\n"^
                  sprintf "   endif;\n"^
                  sprintf "   num:=index;\n   msg:=msgs[index];\n  end;\n\n"; 
                  end;
  |`Senc(m1,symk) -> let mAtoms = getAtoms m1 in
                     str1 ^
                     sprintf "  Var msg1, msg2: Message;\n      index,i1,i2:indexType;\n  begin\n"^
                     sprintf "   index:=0;\n"^
                     sprintf "   lookAddPat%d(%s,msg1,i1);\n" (getPatNum m1 patList) (atom2Str mAtoms)^
                     sprintf "   lookAddPat%d(%s,msg2,i2);\n" (getPatNum symk patList) (atom2Str [symk])^               
                     sprintf "   for i : indexType do\n"^
                     sprintf "     if (msgs[i].msgType = senc) then\n"^
                     sprintf "       if (msgs[i].sencMsg = i1 & msgs[i].sencKey = i2) then\n"^
                     sprintf "          index:=i;\n"^
                     sprintf "       endif;\n"^
                     sprintf "     endif;\n"^
                     sprintf "   endfor;\n"^
                     sprintf "   if(index=0) then\n"^
                     sprintf "     msg_end := msg_end + 1 ;\n     index := msg_end;\n     msgs[index].msgType := senc;\n     msgs[index].sencMsg := i1; \n     msgs[index].sencKey := i2; \n     msgs[index].length := 1;\n"^
                     sprintf "   endif;\n"^
                     sprintf "   num:=index;\n   msg:=msgs[index];\n  end;\n\n";
  |`Concat msgs ->let msgNoStr = String.concat ~sep:"," (List.mapi ~f:(fun i m' -> sprintf "msg%d" (i+1)) msgs) in
                  let idxNoStr = String.concat ~sep:"," (List.mapi ~f:(fun i m' -> sprintf "i%d" (i+1)) msgs) in
                  let lookAddPatStr = String.concat ~sep:";\n" (List.mapi ~f:(fun i m' -> 
                                      let atoms1 = getAtoms m' in
                                      sprintf "   lookAddPat%d(%s, msg%d, i%d)" (getPatNum m' patList) (atom2Str atoms1) (i+1) (i+1)) msgs) 
                  in
                  let guardStr = String.concat ~sep:" & " (List.mapi ~f:(fun i m' -> sprintf "msgs[i].concatPart[%d]=i%d" (i+1) (i+1)) msgs)
                  in
                  let stmtStr = String.concat ~sep:";\n" (List.mapi ~f:(fun i m' -> sprintf "     msgs[index].concatPart[%d]:=i%d" (i+1) (i+1)) msgs) in
                  str1 ^
                  sprintf "  Var %s: Message;\n     index,%s:indexType;\n  begin\n" msgNoStr idxNoStr ^
                  sprintf "   index:=0;\n"^
                  sprintf "%s;\n" lookAddPatStr ^
                  sprintf "   for i : indexType do\n"^
                  sprintf "     if (msgs[i].msgType = concat & msgs[i].length=%d) then\n" (List.length msgs)^
                  sprintf "       if (%s) then\n" guardStr ^
                  sprintf "          index:=i;\n"^
                  sprintf "       endif;\n"^
                  sprintf "     endif;\n"^
                  sprintf "   endfor;\n"^
                  sprintf "   if(index=0) then\n"^
                  sprintf "     msg_end := msg_end + 1 ;\n     index := msg_end;\n     msgs[index].msgType := concat;\n"^
                  sprintf "%s; \n" stmtStr ^
                  sprintf "     msgs[index].length := %d;\n" (List.length msgs)^
                  sprintf "   endif;\n"^
                  sprintf "   num:=index;\n   msg:=msgs[index];\n  end;\n\n";
  |`Str s ->str1 ^ sprintf " Var index : indexType;\n begin
   index:=0;
   for i: indexType do
    if (msgs[i].msgType = agent) then
      if (msgs[i].ag = %s) then
        index:=i;
      endif;
    endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := agent;
     msgs[index].ag:=%s; 
     msgs[index].length := 1;
   endif;
   num:=index;
   msg:=msgs[index];
  end;\n\n" s s
  |`Pk role -> str1 ^ sprintf "  Var index : indexType;\n  begin
    index:=0;
    for i: indexType do
      if (msgs[i].msgType = key) then
        if (msgs[i].k.encType = PK & msgs[i].k.ag = %sPk) then
          index:=i;
        endif;
      endif;
    endfor;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := key;
      msgs[index].k.encType:=PK; 
      msgs[index].k.ag:=%sPk;
      msgs[index].length := 1;
    endif;
    num:=index;
    msg:=msgs[index];
  end;\n\n" role role
  |`Sk role -> str1 ^ sprintf "  Var index : indexType;\n  begin
    index:=0;
    for i: indexType do
      if (msgs[i].msgType = key) then
        if (msgs[i].k.encType = SK & msgs[i].k.ag = %sSk) then
          index:=i;
        endif;
      endif;
    endfor;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := key;
      msgs[index].k.encType:=SK; 
      msgs[index].k.ag:=%sSk;
    endif;
    num:=index;
    msg:=msgs[index];
  end;\n\n" role role
  |`K (r1,r2) -> str1 ^ 
                 sprintf "  Var index : indexType;\n  begin\n" ^
                 sprintf "    index := 0;\n" ^
                 sprintf "    for i :indexType do\n"^
                 sprintf "      if (msgs[i].msgType = key) then \n" ^
                 sprintf "        if (msgs[i].k.encType = Symk & msgs[i].k.ag1 = %ssymk1 & msgs[i].k.ag2 = %ssymk2) then\n" r1 r2 ^
                 sprintf "          index := i;\n"^
                 sprintf "        endif;\n"^
                 sprintf "      endif;\n" ^
                 sprintf "    endfor;\n" ^
                 sprintf "    if (index = 0) then\n" ^
                 sprintf "      msg_end := msg_end + 1;\n"^
                 sprintf "      index := msg_end;\n"^
                 sprintf "      msgs[index].msgType := key;\n" ^
                 sprintf "      msgs[index].k.encType := Symk;\n"^
                 sprintf "      msgs[index].k.ag1:=%ssymk1;\n" r1^
                 sprintf "      msgs[index].k.ag2:=%ssymk2;\n" r2^
                 sprintf "    endif;\n"^
                 sprintf "    num := index;\n"^
                 sprintf "    msg := msgs[index];\n"^
                 sprintf "  end;\n\n"
  |`Var n ->str1 ^ sprintf "  Var index : indexType;\n  begin
      index:=0;
      for i: indexType do
        if(msgs[i].msgType=nonce) then
          if(msgs[i].noncePart=%s) then
            index:=i;
          endif;
        endif;
      endfor;
      if(index=0) then
        msg_end := msg_end + 1 ;
        index := msg_end;
        msgs[index].msgType := nonce;
        msgs[index].noncePart:=%s; 
        msgs[index].length := 1;
      endif;
      num:=index;
      msg:=msgs[index];
  end;\n\n" n n; 
  |_ -> "" 

  let genIsPatCode m i patList =
    let atoms = getAtoms m in
    let str1 = sprintf "---pat%d: %s \nprocedure isPat%d(msg:Message; Var flag:boolean);\n" i (print_message m) i
    in
    match m with 
    |`Aenc(m1,k1) ->begin
                    let i1= getPatNum m1 patList in
                    let i2= getPatNum k1 patList in
                    str1 ^ sprintf "  var flag1,flagPart1,flagPart2 : boolean;\n  begin
    flag1 := false;
    flagPart1 := false;
    flagPart2 := false;
    if (msg.msgType = aenc) then
      isPat%d(msgs[msg.aencMsg],flagPart1);
      isPat%d(msgs[msg.aencKey],flagPart2);
      if (flagPart1 & flagPart2) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;\n  end;\n\n" i1 i2
    end;
    |`Senc(m1,symk) ->str1^
                      sprintf "  var flag1,flagPart1,flagPart2 : boolean;\n  begin\n"^
                      sprintf "    flag1 := false;\n"^
                      sprintf "    flagPart1:=false;\n"^
                      sprintf "    flagPart2:=false;\n"^
                      sprintf "    if msg.msgType = senc then\n"^
                      sprintf "      isPat%d(msgs[msg.sencMsg],flagPart1);\n" (getPatNum m1 patList)^
                      sprintf "      isPat%d(msgs[msg.sencKey],flagPart2);\n" (getPatNum symk patList)^
                      sprintf "      if flagPart1 & flagPart2 then\n" ^
                      sprintf "        flag1 := true;\n"^
                      sprintf "      endif;\n"^
                      sprintf "    endif;\n"^
                      sprintf "    flag := flag1;\n"^
                      sprintf "  end;\n\n"
  
    |`Concat msgs ->begin
                    let flagOfParts = String.concat ~sep:"," (List.mapi ~f:(fun i m -> sprintf "flagPart%d" (i+1) ) msgs) in
                    let initFalgParts = String.concat (List.mapi ~f:(fun i m -> sprintf "     flagPart%d := false;\n" (i+1)) msgs) in
                    let isPatOfParts = String.concat (List.mapi ~f:(fun i m -> let patNum = getPatNum m patList in
                                                                               sprintf "        isPat%d(msgs[msg.concatPart[%d]],flagPart%d);\n" patNum (i+1) (i+1)) msgs)
                    in
                    let andFlagParts = String.concat ~sep:" & " (List.mapi ~f:(fun i m -> sprintf "flagPart%d" (i+1) ) msgs) in
                    str1 ^
                    sprintf "  var flag1, %s: boolean;\n  begin\n" flagOfParts ^
                    sprintf "     flag1 := false;\n%s" initFalgParts^
                    sprintf "     if(msg.msgType = concat) then\n" ^
                    sprintf "%s" isPatOfParts ^
                    sprintf "       if (%s) then \n" andFlagParts ^
                    sprintf "         flag1 := true;\n" ^
                    sprintf "       endif;\n" ^
                    sprintf "     endif;\n" ^  
                    sprintf "     flag := flag1;\n" ^
                    sprintf "  end;\n"
    end;
    |`Str s ->begin
              str1 ^ sprintf "  var flag1 : boolean;\n  begin
    flag1 := false;
    if (msg.msgType = agent) then
      flag1 := true;
    endif;
    flag := flag1;\n  end;\n\n"
    end;
    |`Pk role ->begin
                str1 ^ sprintf "  var flag1 : boolean;\n  begin
    flag1 := false;
    if (msg.msgType = key & msg.k.encType = PK) then
      flag1 := true;
    endif;
    flag := flag1;\n  end;\n\n"
    end;
    |`Sk role ->begin
      str1 ^ sprintf "  var flag1 : boolean;\n  begin
      flag1 := false;
      if (msg.msgType = key & msg.k.encType = SK) then
        flag1 := true;
      endif;
      flag := flag1;\n  end;\n\n"
    end;
    |`K(r1,r2) -> str1 ^
                  sprintf "  var flag1:boolean;\n  begin\n" ^
                  sprintf "    flag1:=false;\n"^
                  sprintf "    if msg.msgType = key & msg.k.encType = Symk then\n"^
                  sprintf "      flag1:=true;\n"^
                  sprintf "    endif;\n"^ 
                  sprintf "    flag:=flag1;\n"^
                  sprintf "  end;\n\n"             
    |`Var n ->begin
              str1 ^ sprintf "  var flag1 : boolean;\n  begin
    flag1 := false;
    if (msg.msgType = nonce) then
      flag1 := true;
    endif;
    flag := flag1;\n  end;\n\n"
    end;
    |_ -> ""
  
    let genConstrustSpatN m i patList =
      let atoms = getAtoms m in
      let atoms = del_duplicate atoms in
      let patNum = getPatNum m patList in
      let str1 = sprintf "---spat%d: %s \nprocedure constructSpat%d(%s; Var num: indexType);\n" patNum (print_message m) i (atoms2Parms atoms) in
      match m with
      |`Aenc(m1,k1) ->begin
                      let i1= getPatNum m1 patList in
                      let i2= getPatNum k1 patList in
                      let keyAg=match k1 with
                                |`Pk role -> role^"Pk"
                                |`Sk role -> role^"Sk"
                                |_ -> "null"
                      in
                      let m1Atoms = getAtoms m1 in  
                      str1 ^                                          
                      sprintf "  Var i,index,i1,i2:indexType;\n  begin\n"^ (* i is the loop variable*)
                      sprintf "    index:=0;\n"^
                      sprintf "    constructSpat%d(%s, i1);\n" i1 (atom2Str m1Atoms)^
                      sprintf "    constructSpat%d(%s, i2);\n" i2 keyAg^ 
                      sprintf "    i := 1;\n" ^
                      sprintf "    while(i <= msg_end) do\n"^
                      (* sprintf "    for i : indexType do\n"^ *)
                      sprintf "      if (msgs[i].msgType = aenc) then\n"^
                      sprintf "        if (msgs[i].aencMsg = i1 & msgs[i].aencKey = i2) then\n"^
                      sprintf "           index:=i;\n"^
                      sprintf "        endif;\n"^
                      sprintf "      endif;\n"^
                      sprintf "      i := i+1;\n"^
                      (* sprintf "    endfor;\n"^ *)
                      sprintf "    endwhile;\n" ^
                      sprintf "    if(index=0) then\n"^
                      sprintf "      msg_end := msg_end + 1 ;\n      index := msg_end;\n      msgs[index].msgType := aenc;\n      msgs[index].aencMsg := i1; \n      msgs[index].aencKey := i2; \n      msgs[index].length := 1;\n"^
                      sprintf "    endif;\n"^
                      sprintf "    sPat%dSet.length := sPat%dSet.length + 1;\n" patNum patNum ^
                      sprintf "    sPat%dSet.content[sPat%dSet.length] := index;\n" patNum patNum^
                      sprintf "    num := index;\n" ^
                      sprintf "  end;\n\n"; 
                      end;
      |`Senc(m1,symk) ->let m1Atoms = getAtoms m1 in
                        let m1Atoms = del_duplicate m1Atoms in
                        str1 ^
                        sprintf "  Var i,index,i1,i2:indexType;\n  begin\n"^ (* i is the loop variable*)
                        sprintf "    index:=0;\n"^
                        sprintf "    constructSpat%d(%s, i1);\n" (getPatNum m1 patList) (atom2Str m1Atoms)^
                        sprintf "    constructSpat%d(%s, i2);\n" (getPatNum symk patList) (atom2Str [symk])^ 
                        sprintf "    i := 1;\n" ^
                        sprintf "    while(i <= msg_end) do\n"^
                        sprintf "      if (msgs[i].msgType = senc) then\n"^
                        sprintf "        if (msgs[i].sencMsg = i1 & msgs[i].sencKey = i2) then\n"^
                        sprintf "           index:=i;\n"^
                        sprintf "        endif;\n"^
                        sprintf "      endif;\n"^
                        sprintf "      i := i+1;\n"^
                        sprintf "    endwhile;\n" ^
                        sprintf "    if(index=0) then\n"^
                        sprintf "      msg_end := msg_end + 1 ;\n      index := msg_end;\n      msgs[index].msgType := senc;\n      msgs[index].sencMsg := i1; \n      msgs[index].sencKey := i2; \n      msgs[index].length := 1;\n"^
                        sprintf "    endif;\n"^
                        sprintf "    sPat%dSet.length := sPat%dSet.length + 1;\n" patNum patNum ^
                        sprintf "    sPat%dSet.content[sPat%dSet.length] := index;\n" patNum patNum^
                        sprintf "    num := index;\n" ^
                        sprintf "  end;\n\n";  
      |`Concat msgs ->begin  (* concat(Na,Nb), concat(Na,A), concat(Server, Na), concat(Server, Na, aenc{concat(Server, Na)}sk(Server))*)
                      let subStr = String.concat ~sep:", " (List.mapi ~f:(fun i m-> sprintf "i%d" (i+1)) msgs) in
                      let subStat = String.concat (List.mapi ~f:(fun i subm ->let submAtoms = getAtoms subm in
                                                                              let submAtoms = del_duplicate submAtoms in
                                                                              sprintf "    constructSpat%d(%s, i%d);\n" (getPatNum subm patList) (atom2Str submAtoms) (i+1)) msgs) 
                      in
                      let ifConcatPart = String.concat ~sep:" & " (List.mapi ~f:(fun i subm -> sprintf "msgs[i].concatPart[%d] = i%d" (i+1) (i+1)) msgs) in
                      let conPartStr = String.concat (List.mapi ~f:(fun i subm -> sprintf "      msgs[index].concatPart[%d] := i%d;\n" (i+1) (i+1))msgs) in
                      str1 ^
                      sprintf "  Var i,index, %s:indexType;\n  begin\n" subStr^
                      sprintf "    index:=0;\n" ^
                      sprintf "%s" subStat ^
                      sprintf "    i := 1;\n" ^
                      sprintf "    while(i<= msg_end) do\n" ^
                      sprintf "      if (msgs[i].msgType = concat & msgs[i].length = %d) then\n" (List.length msgs)^
                      sprintf "        if (%s) then\n" ifConcatPart ^
                      sprintf "          index := i;\n" ^
                      sprintf "        endif;\n" ^
                      sprintf "      endif;\n" ^
                      sprintf "      i := i+1;\n" ^
                      sprintf "    endwhile;\n" ^
                      sprintf "    if(index=0) then\n"^
                      sprintf "      msg_end := msg_end + 1 ;\n      index := msg_end;\n      msgs[index].msgType := concat;\n%s      msgs[index].length := %d;\n" conPartStr (List.length msgs)^
                      sprintf "    endif;\n"^
                      sprintf "    sPat%dSet.length := sPat%dSet.length + 1;\n" patNum patNum^
                      sprintf "    sPat%dSet.content[sPat%dSet.length] := index;\n" patNum patNum^
                      sprintf "    num := index;\n" ^
                      sprintf "  end;\n\n";
                      end
      |`Str s ->str1 ^ 
                sprintf "  Var i, index : indexType;\n  begin\n"^
                sprintf "   index:=0;\n" ^
                sprintf "   i := 1;\n" ^
                sprintf "   while(i<= msg_end) do\n" ^
                sprintf "      if (msgs[i].msgType = agent) then\n"^
                sprintf "        if (msgs[i].ag = %s) then\n" s ^
                sprintf "          index := i;\n" ^
                sprintf "        endif;\n" ^
                sprintf "      endif;\n" ^
                sprintf "      i := i+1;\n" ^
                sprintf "    endwhile;\n" ^
                sprintf "    if(index=0) then\n"^
                sprintf "      msg_end := msg_end + 1 ;\n      index := msg_end;\n      msgs[index].msgType := agent;\n      msgs[index].ag := %s;\n      msgs[index].length := 1;\n" s ^
                sprintf "    endif;\n"^
                sprintf "    sPat%dSet.length := sPat%dSet.length + 1;\n" patNum patNum^
                sprintf "    sPat%dSet.content[sPat%dSet.length] := index;\n"patNum patNum ^
                sprintf "    num := index;\n" ^
                sprintf "  end;\n\n";
      |`Pk role ->str1 ^ 
                  sprintf "  Var i, index : indexType;\n  begin\n"^
                  sprintf "   index:=0;\n" ^
                  sprintf "   i := 1;\n" ^
                  sprintf "   while(i<= msg_end) do\n" ^
                  sprintf "      if (msgs[i].msgType = key & msgs[i].k.encType = PK) then\n"^
                  sprintf "        if (msgs[i].k.ag = %sPk) then\n" role ^
                  sprintf "          index := i;\n" ^
                  sprintf "        endif;\n" ^
                  sprintf "      endif;\n" ^
                  sprintf "      i := i+1;\n" ^
                  sprintf "    endwhile;\n" ^
                  sprintf "    if(index=0) then\n"^
                  sprintf "      msg_end := msg_end + 1 ;\n      index := msg_end;\n      msgs[index].msgType := key;\n      msgs[index].k.encType := PK;\n      msgs[index].k.ag := %sPk;\n      msgs[index].length := 1;\n" role ^
                  sprintf "    endif;\n"^
                  sprintf "    sPat%dSet.length := sPat%dSet.length + 1;\n" patNum patNum^
                  sprintf "    sPat%dSet.content[sPat%dSet.length] := index;\n" patNum patNum^
                  sprintf "    num := index;\n" ^
                  sprintf "  end;\n\n";
      |`Sk role ->str1 ^ 
                  sprintf "  Var i, index : indexType;\n  begin\n"^
                  sprintf "   index:=0;\n" ^
                  sprintf "   i := 1;\n" ^
                  sprintf "   while(i<= msg_end) do\n" ^
                  sprintf "      if (msgs[i].msgType = key & msgs[i].k.encType = SK) then\n"^
                  sprintf "        if (msgs[i].k.ag = %sSk) then\n" role ^
                  sprintf "          index := i;\n" ^
                  sprintf "        endif;\n" ^
                  sprintf "      endif;\n" ^
                  sprintf "      i := i+1;\n" ^
                  sprintf "    endwhile;\n" ^
                  sprintf "    if(index=0) then\n"^
                  sprintf "      msg_end := msg_end + 1 ;\n      index := msg_end;\n      msgs[index].msgType := key;\n      msgs[index].k.encType := SK;\n      msgs[index].k.ag := %sSk;\n      msgs[index].length := 1;\n" role ^
                  sprintf "    endif;\n"^
                  sprintf "    sPat%dSet.length := sPat%dSet.length + 1;\n" patNum patNum^
                  sprintf "    sPat%dSet.content[sPat%dSet.length] := index;\n" patNum patNum^
                  sprintf "    num := index;\n" ^
                  sprintf "  end;\n\n";
      |`K(r1,r2) -> str1 ^
                    sprintf "  Var i, index : indexType;\n  begin\n"^
                    sprintf "   index:=0;\n" ^
                    sprintf "   i := 1;\n" ^
                    sprintf "   while(i<= msg_end) do\n" ^
                    sprintf "      if (msgs[i].msgType = key & msgs[i].k.encType = Symk) then\n"^
                    sprintf "        if (msgs[i].k.ag1 = %ssymk1 & msgs[i].k.ag2 = %ssymk2) then\n" r1 r2 ^
                    sprintf "          index := i;\n" ^
                    sprintf "        endif;\n" ^
                    sprintf "      endif;\n" ^
                    sprintf "      i := i+1;\n" ^
                    sprintf "    endwhile;\n" ^
                    sprintf "    if(index=0) then\n"^
                    sprintf "      msg_end := msg_end + 1 ;\n      index := msg_end;\n      msgs[index].msgType := key;\n      msgs[index].k.encType := Symk;\n      msgs[index].k.ag1 := %ssymk1;\n      msgs[index].k.ag2 := %ssymk2;\n      msgs[index].length := 1;\n" r1 r2 ^
                    sprintf "    endif;\n"^
                    sprintf "    sPat%dSet.length := sPat%dSet.length + 1;\n" patNum patNum^
                    sprintf "    sPat%dSet.content[sPat%dSet.length] := index;\n" patNum patNum^
                    sprintf "    num := index;\n" ^
                    sprintf "  end;\n\n";
      |`Var n ->str1 ^ 
                sprintf "  Var i, index : indexType;\n  begin\n"^
                sprintf "   index:=0;\n" ^
                sprintf "   i := 1;\n" ^
                sprintf "   while(i<= msg_end) do\n" ^
                sprintf "      if (msgs[i].msgType = nonce) then\n"^
                sprintf "        if (msgs[i].noncePart = %s) then\n" n ^
                sprintf "          index := i;\n" ^
                sprintf "        endif;\n" ^
                sprintf "      endif;\n" ^
                sprintf "      i := i+1;\n" ^
                sprintf "    endwhile;\n" ^
                sprintf "    if(index=0) then\n"^
                sprintf "      msg_end := msg_end + 1 ;\n      index := msg_end;\n      msgs[index].msgType := nonce;\n      msgs[index].noncePart := %s;\n      msgs[index].length := 1;\n" n ^
                sprintf "    endif;\n"^
                sprintf "    sPat%dSet.length := sPat%dSet.length + 1;\n" patNum patNum^
                sprintf "    sPat%dSet.content[sPat%dSet.length] := index;\n" patNum patNum^
                sprintf "    num := index;\n" ^
                sprintf "  end;\n\n";
      |_ -> "" 
    
      

let genCons m i patList =
  let atoms = getAtoms m in
  let noDupAtoms = del_duplicate atoms in 
  let j = getPatNum m patList in
  sprintf "procedure cons%d(%s; Var msg:Message; Var num:indexType);\n" j (atoms2Parms noDupAtoms)^
  sprintf "  begin\n    clear msg;\n    clear num;    lookAddPat%d(%s,msg,num);\n" j (atom2Str noDupAtoms)^
  sprintf "  end;\n"
 
  let genDestruct m i patlist =
    let atoms =getAtoms m in 
    let atoms = del_duplicate atoms in
    let patNum = getPatNum m patlist in
    let str1 = sprintf "procedure destruct%d(msg:Message; %s);\n" patNum (atoms2Parms1 atoms) in
    match m with
    |`Aenc(m1,k1) ->begin 
                    let keyAg=match k1 with
                             |`Pk role -> role^"Pk"
                             |`Sk role -> role^"Sk"
                             |_ -> "null"
                    in                  
                    match m1 with
                    |`Concat msgs ->let m1Atoms = getAtoms m1 in
                                    let m1Num = getPatNum m1 patlist in
                                    str1 ^
                                    sprintf "  var k1:KeyType;\n" ^
                                    sprintf "      aencMsg:Message;\n    begin\n" ^
                                    sprintf "    clear aencMsg;\n" ^
                                    sprintf "    k1:=msgs[msg.aencKey].k;\n" ^                                  
                                    sprintf "    %s:=k1.ag;\n" keyAg ^
                                    sprintf "    aencMsg:=msgs[msg.aencMsg];\n"^
                                    sprintf "    destruct%d(aencMsg,%s);\n" m1Num (atom2Str m1Atoms) ^
                                    sprintf "  end;\n"
                    |`Aenc (m1',k1') -> let m1Atoms = getAtoms m1 in
                                        let m1Num = getPatNum m1 patlist in
                                        str1 ^
                                        sprintf "  var k1:KeyType;\n" ^
                                        sprintf "      aencMsg:Message;\n    begin\n" ^
                                        sprintf "    clear aencMsg;\n" ^
                                        sprintf "    k1:=msgs[msg.aencKey].k;\n" ^
                                        sprintf "    %s:=k1.ag;\n" keyAg ^
                                        sprintf "    aencMsg:=msgs[msg.aencMsg];\n"^
                                        sprintf "    destruct%d(aencMsg,%s);\n" m1Num (atom2Str m1Atoms) ^
                                        sprintf "  end;\n"
                    |`Senc (m1',k1') -> let m1Atoms = getAtoms m1 in
                                        let m1Num = getPatNum m1 patlist in
                                        str1 ^
                                        sprintf "  var k1:KeyType;\n" ^
                                        sprintf "      aencMsg:Message;\n    begin\n" ^
                                        sprintf "    clear aencMsg;\n" ^
                                        sprintf "    k1:=msgs[msg.aencKey].k;\n" ^
                                        sprintf "    %s:=k1.ag;\n" keyAg ^
                                        sprintf "    aencMsg:=msgs[msg.aencMsg];\n"^
                                        sprintf "    destruct%d(aencMsg,%s);\n" m1Num (atom2Str m1Atoms) ^
                                        sprintf "  end;\n"
                    |`Var n ->str1 ^ 
                              sprintf "  var k1:KeyType;\n" ^
                              sprintf "      msg1:Message;\n   begin\n" ^ (*,msgNum1,msgNum2*)
                              sprintf "      clear msg1;\n" ^
                              sprintf "      k1 := msgs[msg.aencKey].k;\n"^
                              sprintf "      %s := k1.ag;" keyAg ^
                              sprintf "      msg1:=msgs[msg.aencMsg];\n" ^
                              sprintf "      %s:=msg1.noncePart;\n" n ^
                              sprintf "   end;\n"
                    |`Pk r -> str1 ^ 
                              sprintf "  var k1:KeyType;\n" ^
                              sprintf "      msg1:Message;\n   begin\n" ^ (*,msgNum1,msgNum2*)
                              sprintf "      clear msg1;\n" ^
                              sprintf "      k1 := msgs[msg.aencKey].k;\n"^
                              sprintf "      %s := k1.ag;" keyAg ^
                              sprintf "      msg1:=msgs[msg.aencMsg];\n" ^
                              sprintf "      %sPk:=msg1.k.ag;\n" r ^
                              sprintf "   end;\n"
                    |`Sk r -> str1 ^ 
                              sprintf "  var k1:KeyType;\n" ^
                              sprintf "      msg1:Message;\n   begin\n" ^ 
                              sprintf "      clear msg1;\n" ^
                              sprintf "      k1 := msgs[msg.aencKey].k;\n"^
                              sprintf "      %s := k1.ag;" keyAg ^
                              sprintf "      msg1:=msgs[msg.aencMsg];\n" ^
                              sprintf "      %sSk:=msg1.k.ag;\n" r ^
                              sprintf "   end;\n"
                    |`K (r1,r2) -> str1 ^ 
                              sprintf "  var k1:KeyType;\n" ^
                              sprintf "      msg1:Message;\n   begin\n" ^ 
                              sprintf "      clear msg1;\n" ^
                              sprintf "      k1 := msgs[msg.aencKey].k;\n"^
                              sprintf "      %s := k1.ag;" keyAg ^
                              sprintf "      msg1:=msgs[msg.aencMsg];\n" ^
                              sprintf "      %ssymk1:=msg1.k.ag1;\n" r1 ^
                              sprintf "      %ssymk2:=msg1.k.ag2;\n" r2 ^
                              sprintf "   end;\n"
  
                    |_ -> ""     
    end 
    |`Senc (m1,`K(r1,r2)) ->begin
                            match m1 with
                            |`Concat msgs ->let m1Atoms = getAtoms m1 in
                                            let m1Num = getPatNum m1 patlist in
                                            str1 ^
                                            sprintf "  var k1:KeyType;\n" ^
                                            sprintf "      sencMsg:Message;\n    begin\n" ^
                                            sprintf "    clear sencMsg;\n" ^
                                            sprintf "    k1:=msgs[msg.sencKey].k;\n" ^                                  
                                            sprintf "    %ssymk1:=k1.ag1;\n" r1 ^
                                            sprintf "    %ssymk2:=k1.ag2;\n" r2 ^
                                            sprintf "    sencMsg:=msgs[msg.sencMsg];\n"^
                                            sprintf "    destruct%d(sencMsg,%s);\n" m1Num (atom2Str m1Atoms) ^
                                            sprintf "  end;\n"    
                            |`Aenc (m1',k1') -> let m1Atoms = getAtoms m1 in
                                                let m1Num = getPatNum m1 patlist in
                                                str1 ^
                                                sprintf "  var k1:KeyType;\n" ^
                                                sprintf "      sencMsg:Message;\n    begin\n" ^
                                                sprintf "    clear sencMsg;\n" ^
                                                sprintf "    k1:=msgs[msg.sencKey].k;\n" ^
                                                sprintf "    %ssymk1:=k1.ag1;\n" r1 ^
                                                sprintf "    %ssymk2:=k1.ag2;\n" r2 ^
                                                sprintf "    sencMsg:=msgs[msg.sencMsg];\n"^
                                                sprintf "    destruct%d(sencMsg,%s);\n" m1Num (atom2Str m1Atoms) ^
                                                sprintf "  end;\n"
                            |`Senc (m1',k1') -> let m1Atoms = getAtoms m1 in
                                            let m1Num = getPatNum m1 patlist in
                                            str1 ^
                                            sprintf "  var k1:KeyType;\n" ^
                                            sprintf "      sencMsg:Message;\n    begin\n" ^
                                            sprintf "    clear sencMsg;\n" ^
                                            sprintf "    k1:=msgs[msg.sencKey].k;\n" ^
                                            sprintf "    %ssymk1:=k1.ag1;\n" r1^
                                            sprintf "    %ssymk2:=k1.ag2;\n" r2^
                                            sprintf "    sencMsg:=msgs[msg.sencMsg];\n"^
                                            sprintf "    destruct%d(sencMsg,%s);\n" m1Num (atom2Str m1Atoms) ^
                                            sprintf "  end;\n"
                                                          
                            |`Var n ->str1 ^ 
                                      sprintf "  var k1:KeyType;\n" ^
                                      sprintf "      sencMsg:Message;\n   begin\n" ^ (*,msgNum1,msgNum2*)
                                      sprintf "      clear sencMsg;\n" ^
                                      sprintf "      k1 := msgs[msg.sencKey].k;\n"^
                                      sprintf "      %ssymk1 := k1.ag1;\n" r1 ^
                                      sprintf "      %ssymk2 := k1.ag2;\n" r2 ^
                                      sprintf "      sencMsg:=msgs[msg.sencMsg];\n" ^
                                      sprintf "      %s:=sencMsg.noncePart;\n" n ^
                                      sprintf "   end;\n"
                            |`Pk r ->str1 ^ 
                                      sprintf "  var k1:KeyType;\n" ^
                                      sprintf "      sencMsg:Message;\n   begin\n" ^ (*,msgNum1,msgNum2*)
                                      sprintf "      clear sencMsg;\n" ^
                                      sprintf "      k1 := msgs[msg.sencKey].k;\n"^
                                      sprintf "      %ssymk1 := k1.ag1;\n" r1 ^
                                      sprintf "      %ssymk2 := k1.ag2;\n" r2 ^
                                      sprintf "      sencMsg:=msgs[msg.sencMsg];\n" ^
                                      sprintf "      %sPk:=sencMsg.k.ag;\n" r ^
                                      sprintf "   end;\n"
                            |`Sk r ->str1 ^ 
                                      sprintf "  var k1:KeyType;\n" ^
                                      sprintf "      sencMsg:Message;\n   begin\n" ^ (*,msgNum1,msgNum2*)
                                      sprintf "      clear sencMsg;\n" ^
                                      sprintf "      k1 := msgs[msg.sencKey].k;\n"^
                                      sprintf "      %ssymk1 := k1.ag1;\n" r1 ^
                                      sprintf "      %ssymk2 := k1.ag2;\n" r2 ^
                                      sprintf "      sencMsg:=msgs[msg.sencMsg];\n" ^
                                      sprintf "      %sSk:=sencMsg.k.ag;\n" r ^
                                      sprintf "   end;\n"
                            |`K (r1',r2') ->str1 ^ 
                                            sprintf "  var k1:KeyType;\n" ^
                                            sprintf "      sencMsg:Message;\n   begin\n" ^ (*,msgNum1,msgNum2*)
                                            sprintf "      clear sencMsg;\n" ^
                                            sprintf "      k1 := msgs[msg.sencKey].k;\n"^
                                            sprintf "      %ssymk1 := k1.ag1;\n" r1 ^
                                            sprintf "      %ssymk2 := k1.ag2;\n" r2 ^
                                            sprintf "      sencMsg:=msgs[msg.sencMsg];\n" ^
                                            sprintf "      %ssymk1:=sencMsg.k.ag1;\n" r1' ^
                                            sprintf "      %ssymk2:=sencMsg.k.ag2;\n" r2' ^
                                            sprintf "   end;\n"
                            |_ ->""
      end
    |`Concat msgs -> let msgNums = String.concat ~sep:"," (List.mapi ~f:(fun i m -> sprintf "msgNum%d" (i+1)) msgs) in
                     let stats = String.concat ~sep:";\n" (List.mapi ~f:(fun i m -> 
                        match m with
                        |`Str r -> sprintf "    msgNum%d := msgs[msg.concatPart[%d]];\n" (i+1) (i+1) ^
                                   sprintf "    %s := msgNum%d.ag" r (i+1)
                        |`Var n -> sprintf "    msgNum%d := msgs[msg.concatPart[%d]];\n" (i+1) (i+1) ^
                                   sprintf "    %s := msgNum%d.noncePart" n (i+1)
                        |`Aenc(m1,k1) ->let atoms' = getAtoms m in
                                        let mNum = getPatNum m patlist in
                                        sprintf "    msgNum%d := msgs[msg.concatPart[%d]];\n" (i+1) (i+1)^
                                        sprintf "    destruct%d(msgNum%d,%s)" mNum (i+1) (atom2Str atoms')
                        |`Senc(m1,`K(r1,r2))->let atoms' = getAtoms m in
                                              let mNum = getPatNum m patlist in
                                              sprintf "    msgNum%d := msgs[msg.concatPart[%d]];\n" (i+1) (i+1)^
                                              sprintf "    destruct%d(msgNum%d,%s)" mNum (i+1) (atom2Str atoms')
                        |`Pk r -> sprintf "    msgNum%d := msgs[msg.concatPart[%d]];\n" (i+1) (i+1) ^
                                  sprintf "    %sPk := msgNum%d.k.ag" r (i+1)
                        |`Sk r -> sprintf "    msgNum%d := msgs[msg.concatPart[%d]];\n" (i+1) (i+1) ^
                                  sprintf "    %sSk := msgNum%d.k.ag" r (i+1)
                        |`K (r1,r2) ->sprintf "    msgNum%d := msgs[msg.concatPart[%d]];\n" (i+1) (i+1) ^
                                      sprintf "    %ssymk1 := msgNum%d.k.ag1;\n" r1 (i+1) ^
                                      sprintf "    %ssymk2 := msgNum%d.k.ag2" r2 (i+1)
                        |_ -> "") msgs) in
                    str1 ^ 
                    sprintf "  Var %s: Message;\n" msgNums^
                    sprintf "      k: KeyType;\n" ^
                    sprintf "  begin\n" ^ stats ^
                    sprintf "\n  end;\n"
    |`Var n ->str1^
              sprintf "  begin\n" ^
              sprintf "    %s:=msg.noncePart;\n" n ^
              sprintf "  end;\n"
    |`Str r ->str1^
              sprintf "  begin\n" ^
              sprintf "    %s:=msg.ag;\n" r ^
              sprintf "  end;\n"
    |_ -> ""


    
(* print procedures and functions. *)
let print_procedures agents =
  let actions =  (getAllActsList agents) in
  let patlist = List.concat (List.map ~f:getPatList (actions)) in (*get all patterns from actions*)
  let non_dup = del_duplicate patlist in (* delete duplicate *)
  let non_equivalent = getEqvlMsgPattern non_dup in (* delete equivalent class *) 
  let str1 = String.concat (List.mapi ~f:(fun i pat -> (genSynthCode pat (i+1) non_equivalent) ^ genIsPatCode pat (i+1) non_equivalent ^ genConstrustSpatN pat (i+1) non_equivalent) non_equivalent)
  in
  let str2 = String.concat (List.mapi ~f:(fun i m -> genCons m (i+1) non_equivalent ^ genDestruct m (i+1) non_equivalent) non_equivalent)
  in
  let str3 = genGet_msgNoCode () ^ genPrintMsgCode () in
  let str4 = genInverseKeyCode ()^ genLookUpCode () ^ String.concat (List.map ~f:(fun pat -> consMsgBySubs pat non_equivalent) non_equivalent) in
  sprintf "%s" str1 ^ str2 ^ str3 ^ str4 ^ genExistCode () ^genMatchAgent () ^ genMatchNonce () ^ genMatchMsg ()


(* encrypt and decrypt / enconcat and deconcat *)

(* decrypt and encrypt rules of symmetric encryption *)
let sdecryptRule (m,`K(r1,r2)) patList =
  let i = getPatNum (`Senc (m,`K(r1,r2))) patList in
  let mNum = getPatNum m patList in
  let kNum = getPatNum (`K(r1,r2)) patList in
  sprintf "  rule \"sdecrypt %d\" --pat%d\n" i i ^
  sprintf "    i<=pat%dSet.length & pat%dSet.content[i] != 0\n" i i^
  sprintf "    & Spy_known[pat%dSet.content[i]] & !Spy_known[msgs[pat%dSet.content[i]].sencMsg]\n" i i ^
  sprintf "    ==>\n" ^
  sprintf "    var key_inv:Message;\n	      msgPat%d,keyNo:indexType;\n	      flag_pat%d:boolean;\n" mNum mNum ^
  sprintf "    begin\n" ^
  sprintf "      put \" rule sdecrypt%d\\n\";\n" i^
  sprintf "      key_inv := inverseKey(msgs[msgs[pat%dSet.content[i]].sencKey]);\n" i ^
  sprintf "      get_msgNo(key_inv,keyNo);\n"^
  sprintf "      if ( (key_inv.k.encType = Symk & (key_inv.k.ag1 = Intruder | key_inv.k.ag2 = Intruder)) | Spy_known[keyNo]) then\n" ^
  sprintf "        Spy_known[msgs[pat%dSet.content[i]].sencMsg]:=true;\n" i ^
  sprintf "        msgPat%d:=msgs[pat%dSet.content[i]].sencMsg;\n" mNum i^
  sprintf "        isPat%d(msgs[msgPat%d],flag_pat%d);\n" mNum mNum mNum ^
  sprintf "        if (flag_pat%d) then\n" mNum^
  sprintf "          if (!exist(pat%dSet,msgPat%d)) then\n" mNum mNum^
  sprintf "            pat%dSet.length:=pat%dSet.length+1;\n" mNum mNum ^
  sprintf "            pat%dSet.content[pat%dSet.length]:=msgPat%d;\n" mNum mNum mNum^
  sprintf "          endif;\n"^
  sprintf "        endif;\n"^
  sprintf "      endif;\n"^
  sprintf "    end;\n"
;;

let sencryptRule (m,`K(r1,r2)) patList =
  let i = getPatNum (`Senc (m,`K(r1,r2))) patList in
  let mNum = getPatNum m patList in
  let kNum = getPatNum (`K(r1,r2)) patList in
  sprintf "    rule \"sencrypt %d\"  --pat%d\n" i i ^
  sprintf "      i<=pat%dSet.length & pat%dSet.content[i] != 0 & Spy_known[pat%dSet.content[i]] &\n" mNum mNum mNum ^
  sprintf "      j<=pat%dSet.length & pat%dSet.content[j] != 0 & Spy_known[pat%dSet.content[j]] &\n" kNum kNum kNum ^
  sprintf "      matchPat(msgs[construct%dBy%d%d(pat%dSet.content[i],pat%dSet.content[j])], sPat%dSet) &\n" i mNum kNum mNum kNum i ^ 
  sprintf "      !Spy_known[construct%dBy%d%d(pat%dSet.content[i],pat%dSet.content[j])] \n       ==>\n" i mNum kNum mNum kNum ^
  sprintf "      var encMsgNo:indexType;\n"^
  sprintf "      begin\n"^
  sprintf "        put \" rule sencrypt%d\\n\";\n" i^
  sprintf "        if (msgs[pat%dSet.content[j]].k.encType=Symk) then\n" kNum^ (*ag=intruder.B*)
  sprintf "          encMsgNo := construct%dBy%d%d(pat%dSet.content[i],pat%dSet.content[j]);\n" i mNum kNum mNum kNum^
  sprintf "          if (!exist(pat%dSet,encMsgNo)) then\n" i^
  sprintf "            pat%dSet.length := pat%dSet.length+1;\n" i i^
  sprintf "            pat%dSet.content[pat%dSet.length]:=encMsgNo;\n" i i^
  sprintf "          endif;\n"^
  sprintf "          if (!Spy_known[encMsgNo]) then\n"^
  sprintf "            Spy_known[encMsgNo] := true;\n"^
  sprintf "          endif;\n"^
  sprintf "        endif;\n"^
  sprintf "      end;\n"
;;

(* decryption rules for aenc(Na.A, Pk(B)), aenc(Na.Nb,Pk(A)) and aenc(Nb,Pk(B)) *)
let rec adecryptRule (m,k) patList=  
  (*printf "  adecrypt\n";*)
  let i = getPatNum (`Aenc (m,k)) patList in
  let i1 = getPatNum m patList in
  let i2 = getPatNum k patList in
  printDecRule (m,k) i i1 i2

and printDecRule (m,k) i i1 i2 =
   sprintf "  rule \"adecrypt %d\"	---pat%d\n" i i^
   sprintf "    i<=pat%dSet.length & pat%dSet.content[i] != 0 & Spy_known[pat%dSet.content[i]] &\n    !Spy_known[msgs[pat%dSet.content[i]].aencMsg]\n    ==>\n" i i i i^
   sprintf "    var key_inv:Message;\n	      msgPat%d:indexType;\n	      flag_pat%d:boolean;\n" i1 i1^
   sprintf "    begin\n"^
   sprintf "      put \" rule adecrypt%d\\n\";\n" i^
   sprintf "      key_inv := inverseKey(msgs[msgs[pat%dSet.content[i]].aencKey]);\n" i^
   sprintf "      if (key_inv.k.ag = Intruder) then\n"^
   sprintf "        Spy_known[msgs[pat%dSet.content[i]].aencMsg]:=true;\n        msgPat%d:=msgs[pat%dSet.content[i]].aencMsg;\n" i i1 i^
   sprintf "        isPat%d(msgs[msgPat%d],flag_pat%d);\n        if (flag_pat%d) then\n" i1 i1 i1 i1^
   sprintf "          if (!exist(pat%dSet,msgPat%d)) then\n" i1 i1^
   sprintf "            pat%dSet.length:=pat%dSet.length+1;\n            pat%dSet.content[pat%dSet.length]:=msgPat%d;\n" i1 i1 i1 i1 i1^
   sprintf "          endif;\n"^
   sprintf "        endif;\n"^
   sprintf "      endif;\n"^
   sprintf "    end;\n"
;;
(* encryption rules for aenc(Na.A, Pk(B)), aenc(Na.Nb,Pk(A)) and aenc(Nb,Pk(B))*)
let rec aencryptRule (m,k) patList=
  (*printf "  aencrypt\n"*)
  let i = getPatNum (`Aenc (m,k)) patList in
  let i1 = getPatNum m patList in
  let i2 = getPatNum k patList in
  printEncRule (m,k) i i1 i2

and printEncRule (m,k) i i1 i2 =
  sprintf "    rule \"aencrypt %d\"	---pat%d\n" i i^
  sprintf "      i<=pat%dSet.length & pat%dSet.content[i] != 0 & Spy_known[pat%dSet.content[i]] &\n" i1 i1 i1 ^
  sprintf "      j<=pat%dSet.length & pat%dSet.content[j] != 0 & Spy_known[pat%dSet.content[j]] &\n" i2 i2 i2 ^
  sprintf "      matchPat(msgs[construct%dBy%d%d(pat%dSet.content[i],pat%dSet.content[j])], sPat%dSet) &\n" i i1 i2 i1 i2 i ^ 
  sprintf "      !Spy_known[construct%dBy%d%d(pat%dSet.content[i],pat%dSet.content[j])] \n       ==>\n" i i1 i2 i1 i2 ^
  (* sprintf "      
        i<=pat%dSet.length & pat%dSet.content[i] != 0 & Spy_known[pat%dSet.content[i]] &\n
        j<=pat%dSet.length & pat%dSet.content[j] != 0 & Spy_known[pat%dSet.content[j]] &\n
        !Spy_known[construct%dBy%d%d(pat%dSet.content[i],pat%dSet.content[j])] &\n      
        & matchPat(msgs[construct%dBy%d%d(pat%dSet.content[i],pat%dSet.content[j])], sPat%dSet)==>\n" i1 i1 i1 i2 i2 i2 i i1 i2 i1 i2 i^ *)
  sprintf "      var encMsgNo:indexType;\n"^
  sprintf "      begin\n"^
  sprintf "        put \" rule aencrypt%d\\n\";\n" i^
  sprintf "        if (msgs[pat%dSet.content[j]].k.encType=PK) then\n" i2^ (*ag=intruder.B*)
  sprintf "          encMsgNo := construct%dBy%d%d(pat%dSet.content[i],pat%dSet.content[j]);\n" i i1 i2 i1 i2^
  sprintf "          if (!exist(pat%dSet,encMsgNo)) then\n" i^
  sprintf "            pat%dSet.length := pat%dSet.length+1;\n            pat%dSet.content[pat%dSet.length]:=encMsgNo;\n" i i i i^
  sprintf "          endif;\n"^
  sprintf "          if (!Spy_known[encMsgNo]) then\n"^
  sprintf "            Spy_known[encMsgNo] := true;\n"^
  sprintf "          endif;\n"^
  sprintf "        endif;\n"^
  sprintf "      end;\n"
  (*printf "    end;\n";*)
;;

(* deconcat rules for concat msgs *)
let deconcatRule msgs patList = 
  let i = getPatNum (`Concat msgs) patList in
  let guardStr = String.concat ~sep:"&" (List.mapi ~f:(fun j m -> sprintf "Spy_known[msgs[pat%dSet.content[i]].concatPart[%d]]" i (j+1)) msgs) in
  let msgPatStr = String.concat ~sep:"," (List.mapi ~f:(fun j m ->sprintf "msgPat%d" (j+1)) msgs) in
  let flagPatStr = String.concat ~sep:"," (List.mapi ~f:(fun j m ->sprintf "flagPat%d" (j+1)) msgs) in
  let deconcatStr = String.concat (List.mapi ~f:(fun j m->
                      sprintf "      if (!Spy_known[msgs[pat%dSet.content[i]].concatPart[%d]]) then\n" i (j+1)^
                      sprintf "        Spy_known[msgs[pat%dSet.content[i]].concatPart[%d]]:=true;\n" i (j+1)^
                      sprintf "        msgPat%d := msgs[pat%dSet.content[i]].concatPart[%d];\n" (j+1) i (j+1)^
                      sprintf "        isPat%d(msgs[msgPat%d],flagPat%d);\n" (getPatNum m patList) (j+1) (j+1)^
                      sprintf "        if (flagPat%d) then\n" (j+1)^
                      sprintf "          if(!exist(pat%dSet,msgPat%d)) then\n" (getPatNum m patList) (j+1)^
                      sprintf "             pat%dSet.length:=pat%dSet.length+1;\n" (getPatNum m patList) (getPatNum m patList) ^
                      sprintf "             pat%dSet.content[pat%dSet.length] := msgPat%d;\n" (getPatNum m patList) (getPatNum m patList) (j+1) ^
                      sprintf "          endif;\n"^
                      sprintf "        endif;\n"^
                      sprintf "      endif;\n") msgs)
  in
  sprintf "  rule \"deconcat %d\" --pat%d\n" i i ^
  sprintf "    i<=pat%dSet.length & pat%dSet.content[i] != 0 & Spy_known[pat%dSet.content[i]] &\n" i i i ^
  sprintf "    !(%s)\n    ==>\n" guardStr ^
  sprintf "    var %s:indexType;\n" msgPatStr^
  sprintf "        %s:boolean;\n" flagPatStr^
  sprintf "    begin\n"^
  sprintf "      put \" rule deconcat%d\\n\";\n" i^
  sprintf "%s" deconcatStr^
  sprintf "    end;\n"  
;;

(* enconcat rules for concat msgs *)
let enconcatRule msgs patList =
  let i = getPatNum (`Concat msgs) patList in
  let str1 = sprintf "    rule \"enconcat %d\"	---pat%d\n" i i ^ 
            (String.concat ~sep:" &\n" (List.mapi ~f:(fun j m -> 
                                       sprintf "      i%d<=pat%dSet.length & Spy_known[pat%dSet.content[i%d]]" (j+1) (getPatNum m patList) (getPatNum m patList) (j+1)) msgs))
  in
  let subMsgNo = String.concat (List.map ~f:(fun m -> sprintf "%d" (getPatNum m patList)) msgs)
  in
  let patSetStr = String.concat ~sep:"," (List.mapi ~f:(fun j m -> sprintf "pat%dSet.content[i%d]" (getPatNum m patList) (j+1)) msgs)
  in
  str1 ^ 
  sprintf " &\n      matchPat(msgs[construct%dBy%s(%s)], sPat%dSet)&\n" i subMsgNo patSetStr i ^
  sprintf "      !Spy_known[construct%dBy%s(%s)]\n      ==>\n" i subMsgNo patSetStr ^ 
  sprintf "      var concatMsgNo:indexType;\n      begin\n" ^
  sprintf "        put \" rule enconcat%d\\n\";\n" i^
  sprintf "        concatMsgNo := construct%dBy%s(%s);\n" i subMsgNo patSetStr ^
  sprintf "        Spy_known[concatMsgNo]:=true;\n" ^
  sprintf "        if (!exist(pat%dSet,concatMsgNo)) then\n" i ^
  sprintf "          pat%dSet.length:=pat%dSet.length+1;\n" i i ^
  sprintf "          pat%dSet.content[pat%dSet.length]:=concatMsgNo;\n" i i ^
  sprintf "        endif;\n" ^
  sprintf "      end;\n"
;;

let print_murphiRule_byPats pat i patList =
  match pat with
  |`Aenc (m1,k1) -> sprintf "--- encrypt and decrypt rules of pat: aenc(%s,%s), for intruder\n" (print_message m1) (print_message k1)^
		    sprintf "ruleset i:msgLen do \n"^
		    adecryptRule (m1,k1) patList^
		    sprintf "endruleset;\n\n" ^
		    sprintf "ruleset i:msgLen do \n  ruleset j:msgLen do \n"^
		    aencryptRule (m1,k1) patList^
        sprintf "  endruleset;\nendruleset;\n\n" 
  |`Senc (m1,`K(r1,r2)) ->sprintf "--- encrypt and decrypt rules of pat senc(%s,k(%s,%s))\n" (print_message m1) r1 r2 ^
                          sprintf "ruleset i:msgLen do\n" ^
                          sdecryptRule (m1,`K(r1,r2)) patList ^
                          sprintf "endruleset;\n\n" ^
                          sprintf "ruleset i:msgLen do \n  ruleset j:msgLen do \n" ^
                          sencryptRule (m1,`K(r1,r2)) patList ^
                          sprintf "  endruleset;\nendruleset;\n\n"
  |`Concat msgs -> sprintf "--- enconcat and deconcat rules for pat: concat(%s)\n\n" (print_message (`Concat msgs))^
		   sprintf "ruleset i:msgLen do \n" ^
		   (deconcatRule msgs patList) ^
       sprintf "endruleset;\n\n" ^
       String.concat ~sep:"\n  " (List.mapi ~f:(fun i m -> sprintf "ruleset i%d: msgLen do" (i+1)) msgs) ^ (* ruleset i:indexType do \n  ruleset j:indexType do *)
		   sprintf " \n" ^
       (enconcatRule msgs patList) ^
       String.concat ~sep:"\n" (List.map ~f:(fun m -> sprintf "endruleset;") msgs) ^
		   sprintf "\n\n" 
  |_ -> ""
;;

(* print encryption and decryption rules, enconcat and deconcat rules *)
let print_murphiRules_EncsDecs agents knws = 
  let actions =  (getAllActsList agents) in
  let patlist = List.concat (List.map ~f:getPatList (actions)) in (*get all patterns from actions*)
		     let patlist = del_duplicate patlist in (* delete duplicate *)
         let patlist = getEqvlMsgPattern patlist in (* delete equivalent class *) 
         String.concat (List.mapi ~f:(fun i pat -> print_murphiRule_byPats pat (i+1) patlist ) patlist)
;;

let trActionsToMurphi agents knws =
                            print_procedures agents ^ (*print prcedures and functions. *)                   
                            print_murphiRule agents knws^ (* print rules for roleA and roleB *)
                            print_murphiRule_ofIntruder agents ^ (* print rules for intruder *)
                            print_murphiRules_EncsDecs agents knws

(*-----------------------------------------------------------------------------------------------*)

let print_startstate r num m knws =
  let msgOfKnws = getMsgOfRoles knws in
  let nlist = getNonces msgOfKnws in
  let rlist = getRolesFromKnws knws [] in
  String.concat (List.map ~f:(fun m1 -> if isSamePat m m1 then
                                          let atoms = getAtoms m1 in
                                          let str1 = match (m,m1) with
                                          |(`Concat msgs,`Concat msgs1) -> let strs = (List.map2_exn ~f:(fun m' m1' -> 
                                                                            match (m',m1') with
                                                                            |(`Var n,`Var n1) -> sprintf "role%s[%d].%s := %s;\n" r num n1 n
                                                                            |(`Str role,`Str role1) -> sprintf "role%s[%d].%s := %s;\n" r num role1 role
                                                                            |(`Pk r1, `Pk r2) -> ""
                                                                            |(`Sk r1, `Sk r2) -> ""
                                                                            |(`K(r1,r2), `K(r1'r2')) ->""
                                                                            |_ -> "error: mismatching!\n") msgs msgs1) 
                                                                          in
                                                                          (String.concat (List.map ~f:(fun s -> sprintf "  %s" s) strs)) ^ 
                                                                          sprintf "  role%s[%d].st := %s1;\n" r num r ^
                                                                          sprintf "  role%s[%d].commit := false;\n" r num
                                          |_ -> sprintf "null\n"
                                          in
                                          let str2 = String.concat (List.map ~f:(fun n -> 
                                                                    if listwithout atoms (`Var n) then sprintf "  role%s[%d].%s := anyNonce;\n" r num n
                                                                    else "" ) nlist)                                  
                                          in
                                          let str3 = String.concat (List.map ~f:(fun r1 -> 
                                                                    if listwithout atoms (`Str r1) then sprintf "  role%s[%d].%s := anyAgent;\n" r num r1
                                                                    else "") rlist)                                            
                                          in
                                          str1 ^ str2 ^ str3
                                        else sprintf "" ) msgOfKnws)
;;
(*startstate of roleA and role B*)
let rec printMuriphiStart env k =
  match env with
  |`Null -> sprintf "null"
  |`Env_agent (r,num,m) -> print_startstate r num m k;(* print startstates *)
  |`Envlist envs -> String.concat (List.map ~f:(fun e -> printMuriphiStart e k) envs)
  |_ -> sprintf "null"
;;

(* pritn startstate of arrays *)
let atoms2Str atoms recvRole = 
  let paralist = ref [] in
  let atoms' = ref [] in
  for i = 0 to (List.length atoms)-1 do
    match List.nth atoms i with
    |Some(`Var n) ->let n' = "nonce_"^n in
                    if listwithout !atoms' n' then
                    begin
                      atoms' := !atoms'@[n'];
                      let nstr = sprintf "role%s[i].%s" recvRole n in
                      paralist := !paralist@[nstr];
                    end
    |Some(`Str r) ->let r' = "agent_"^r in
                    if listwithout !atoms' r' then
                    begin
                      atoms':=!atoms'@[r'];
                      let rstr = sprintf "role%s[i].%s" recvRole r in
                      paralist := !paralist@[rstr];
                    end
    |Some(`Pk r) -> let r'="pk_"^r in
                    if listwithout !atoms' r' then
                    begin
                      atoms':=!atoms'@[r'];
                      let rstr = sprintf "role%s[i].%s" recvRole r in
                      paralist:=!paralist@[rstr];
                    end
    |Some(`Sk r) -> let r'="sk_"^r in
                    if listwithout !atoms' r' then
                    begin
                      atoms':=!atoms'@[r'];
                      let rstr = sprintf "role%s[i].%s" recvRole r in
                      paralist:=!paralist@[rstr];
                    end
    |Some(`K(r1,r2)) -> let r1'="symk1_"^r1 in
                        if listwithout !atoms' r1' then
                        begin
                          atoms':=!atoms'@[r1'];
                          let r1str = sprintf "role%s[i].%s" recvRole r1 in
                          paralist:=!paralist@[r1str];
                        end;
                        let r2'="symk2_"^r2 in
                        if listwithout !atoms' r2' then
                        begin
                          atoms':=!atoms'@[r2'];
                          let r2str = sprintf "role%s[i].%s" recvRole r1 in
                          paralist:=!paralist@[r2str];
                        end;
  |_ ->()
  done;
  String.concat ~sep:"," !paralist
  (* String.concat ~sep:", " (List.map ~f:(fun a -> match a with
                                      |`Null -> sprintf "null"
                                      |`Var n -> sprintf "role%s[i].%s" recvRole n
                                      |`Str r -> sprintf "role%s[i].%s" recvRole r
                                      |`Pk rolename -> sprintf "role%s[i].%s" recvRole rolename
                                      |`Sk rolename -> sprintf "role%s[i].%s" recvRole rolename
                                      |`K (r1,r2) -> sprintf "role%s[i].%s, role%s[i].%s" recvRole r1 recvRole r2 (* symetric key must belong to 2 principals simultaneously *)
                                      |_ -> "" ) atoms) *)
;;

let rec initSpatSet actions patlist = 
  (* let patlist = getPatList actions in    (* get all patterns from actions *)
  let non_dup = del_duplicate patlist in (* delete duplicate *)
  let non_equivalent = getEqvlMsgPattern non_dup in *)
  match actions with
  |`Null -> ""
  |`Send(seq,s, r, ms, m) ->let patNum = (getPatNum m patlist) in
                              let atoms = getAtoms m in
                              let atoms = del_duplicate atoms in
                              sprintf "  for i : role%sNums do\n" r ^
                              sprintf "    constructSpat%d(%s, gnum);\n" patNum (atoms2Str atoms r) ^
                              sprintf "  endfor;\n"
  |`Receive(seq, s, m) ->let patNum = (getPatNum m patlist) in
                           let atoms = getAtoms m in
                           let atoms = del_duplicate atoms in
                           sprintf "  for i : role%sNums do\n" "" ^
                           sprintf "    constructSpat%d(%s, gnum);\n" patNum (atoms2Str atoms "r") ^
                           sprintf "  endfor;\n"
                              
  |`Actlist arr -> String.concat (List.map ~f:(fun a -> initSpatSet a patlist) arr)
;;

let printImpofStart agents knws =
  let rlist = getRolesFromKnws knws [] in
  let str1 = sprintf "  ---intruder.B := Bob;
  for i:chanNums do
    ch[i].empty := true;
  endfor;
  ---ch.empty := true;

  for i: indexType do
    emit[i]:=false;
  endfor;

  for i:indexType do
    msgs[i].msgType := null;
    msgs[i].length := 0;
  endfor;

  msg_end := 0;
  for i:indexType do\n"
  in
  let allActions =  (getAllActsList agents) in
  let actions = List.concat (List.map ~f:getAllSendActs allActions ) in 
  let patlist = List.concat (List.map ~f:getPatList (allActions)) in (*get all patterns from actions*)
  let patlist = del_duplicate patlist in (* delete duplicate *)
  let patlist = getEqvlMsgPattern patlist in
  let str2 = String.concat (List.mapi ~f:(fun i p -> sprintf "    pat%dSet.content[i] := 0;\n" (getPatNum p patlist) ^
                                                     sprintf "    sPat%dSet.content[i] := 0;\n" (getPatNum p patlist)) patlist)
  in
  let str3 = String.concat (List.mapi ~f:(fun i p -> sprintf "  pat%dSet.length := 0;\n" (getPatNum p patlist) ^
                                                     sprintf "  sPat%dSet.length := 0;\n" (getPatNum p patlist)) patlist)
  in
  let skNum = getPatNum (`Sk "A") patlist in
  let str4 = if skNum <> 0 then sprintf "
  for i:indexType do 
    Spy_known[i] := false;
  endfor;

  msg_end:=msg_end+1;
  msgs[msg_end].msgType := key;
  msgs[msg_end].k.ag:=Intruder;
  msgs[msg_end].k.encType:=SK;
  msgs[msg_end].length := 1;
  pat%dSet.length := pat%dSet.length + 1; 
  pat%dSet.content[pat%dSet.length] :=msg_end;
  Spy_known[msg_end] := true;
  " skNum skNum skNum skNum 
    else ""
  in
  let pkNum = getPatNum (`Pk "A") patlist in
  let str5 = String.concat (List.map ~f:(fun r -> sprintf "  for i : role%sNums do\n" r ^
                                                  sprintf "    msg_end := msg_end+1;\n    msgs[msg_end].msgType := key;\n" ^
                                                  sprintf "    msgs[msg_end].k.ag := role%s[i].%s;\n" r r^
                                                  sprintf "    msgs[msg_end].k.encType:=PK;\n    msgs[msg_end].length := 1;\n    pat%dSet.length := pat%dSet.length + 1;\n" pkNum pkNum ^
                                                  sprintf "    pat%dSet.content[pat%dSet.length] :=msg_end;\n" pkNum pkNum ^
                                                  sprintf "    Spy_known[msg_end] := true;\n"^
                                                  sprintf "  endfor;\n"
                            ) rlist)
  in
  str1 ^ str2 ^ 
  "  endfor;
  for i:indexType do 
    Spy_known[i] := false;
  endfor;\n" ^
  str3 ^ str4 ^ str5 ^ (String.concat (List.map ~f:(fun a->initSpatSet a patlist) actions))^ (* initialize sample pattern Set *)
  "\n"
;;

let rec printGoal2Murphi g =
  match g with
  |`Null -> sprintf "null\n"
  |`Secretgoal (seq,m) -> printSecGoal (seq,m)
  |`Secretgoal1 (seq,m,r1,r2) -> printSecGoal1 (seq,m,r1,r2)
  |`Agreegoal (seq,r1,r2,m) -> printAgreeGoal (seq,r1,r2,m) 
  |`Goallist gols -> String.concat (List.map ~f:(fun g -> printGoal2Murphi g) gols)

and printSecGoal (seq,m) =
  let str1 = sprintf "\ninvariant \"%s\" \n" seq ^
             sprintf "forall i:indexType do\n" 
  in
  match m with
  |`Var n ->str1 ^ 
            sprintf "    (msgs[i].msgType=nonce & msgs[i].noncePart=%s)\n" (print_message m)^
            sprintf "     ->\n" ^
            sprintf "     Spy_known[i] = false\n" ^
            sprintf "end;\n"
  |`Pk r -> str1 ^ 
            sprintf "    (msgs[i].msgType=key & msgs[i].k.encType=Pk & msgs[i].k.ag=%s)\n" r^
            sprintf "     ->\n" ^
            sprintf "     Spy_known[i] = false\n" ^
            sprintf "end;\n"
  |`Sk r -> str1 ^ 
            sprintf "    (msgs[i].msgType=key & msgs[i].k.encType=Sk & msgs[i].k.ag=%s)\n" r^
            sprintf "     ->\n" ^
            sprintf "     Spy_known[i] = false\n" ^
            sprintf "end;\n"
  |`K(r1,r2) -> str1 ^ 
                sprintf "    (msgs[i].msgType=key & msgs[i].k.encType=Symk & msgs[i].k.ag1=%s & msgs[i].k.ag2=%s)\n" r1 r2^
                sprintf "     ->\n" ^
                sprintf "     Spy_known[i] = false\n" ^
                sprintf "end;\n"
  |_ -> ""
  
(* sprintf "
  invariant \"%s\"
    forall i:indexType do
      (msgs[i].msgType=nonce & msgs[i].noncePart = %s)
      ->
      Spy_known[i] = false
  end;\n" seq (output_msg m) *)

and printSecGoal1 (seq,m,r1,r2) =
  sprintf "\ninvariant \"%s\"" seq^
  sprintf "  forall i:indexType do\n" ^
  sprintf "    forall j:role%sNums do\n" r1 ^
  sprintf "      forall k: role%sNums do\n" r2 ^
  sprintf "        (msgs[i].msgType=nonce & msgs[i].noncePart = role%s[j].%s &\n" r1 (print_message m)^ 
  sprintf "         role%s[j].%s != Intruder & role%s[j].%s != Intruder &\n" r1 r1 r1 r2 ^
  sprintf "         role%s[k].%s != Intruder) ---& role%s[k].%s != Intruder )\n" r2 r2 r2 r1 ^
  sprintf "        ->\n" ^
  sprintf "        Spy_known[i] = false\n" ^
  sprintf "      endforall\n" ^
  sprintf "    endforall\n" ^
  sprintf "  endforall;\n" 

and printAgreeGoal (seq,r1,r2,m) = 
  let mstr = (print_message m) in
  sprintf "\ninvariant \"%s\"\n" seq ^
  sprintf "  forall i: role%sNums do\n" r2 ^
  sprintf "    role%s[i].commit = true \n    ->\n" r2 ^
  sprintf "    (exists j: role%sNums do
      ---role%s[j].commit = true &
      role%s[i].%s = role%s[j].%s
    endexists)
  endforall;\n" r1 r1 r1 mstr r2 mstr
;;


let output_protocol pocol =
  match pocol with
  |`Null -> sprintf "null\n"
  |`Pocol (k,ag,g,env) -> 
                    (printMurphiConsTypeVars ag k env)^ (*print murphi const/type*)
                         (trActionsToMurphi ag k) ^ (* print murphi rules *)
                         "startstate\n" ^ (* print startstate *)
                         (printMuriphiStart env k) ^(printImpofStart ag k) ^
                         "end;\n" ^
                         (printGoal2Murphi g) (* print murphi goals *) 


let create_file filename str =
  let outc = Out_channel.create filename in
  fprintf outc "%s" str;
  Out_channel.close outc

let genCode outc value =
    match value with
    |`Null -> create_file "outputs/result.m" "null"
    |`Protocol (n,p) -> create_file "outputs/result.m" (output_protocol p)

