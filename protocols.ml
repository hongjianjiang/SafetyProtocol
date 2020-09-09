open Core
open Proctype

type protocols = [
  | `Protocol of label * pocolcontext
  | `Null
]

let rec print_message m=
  match m with 
  | `Null -> sprintf ""
  | `Var i -> sprintf "%s" i 
  | `Str r -> sprintf "%s" r
  | `Concat ms-> String.concat (List.map ~f:print_message ms)
  | `Aenc (m1,m2)-> sprintf "aenc(%s,%s)" (print_message m1) (print_message m2)
  | `Senc (m1,m2) -> sprintf "senc(%s,%s)" (print_message m1) (print_message m2)
  | `Hash m -> sprintf("hash(%s)") (print_message m)
  | `Pk r -> sprintf "pk(%s)" r
  | `Sk r -> sprintf "sk(%s)" r 
  | `K (r1,r2) -> sprintf "k(%s,%s)" r1 r2

let rec print_knowledge  knws = 
  match knws with 
  | `Null -> sprintf "\n" 
  | `Knowledge (r,m) ->  sprintf ("%s\n%s\n") r  (print_message m)
  | `Knowledge_list kns -> String.concat (List.map ~f:print_knowledge kns)
  
  let rec print_action actions = 
    match actions with 
    | `Null -> sprintf "\n"
    | `Act1 (seq,r1,r2,n,m) ->sprintf "seq:%d,role1:%s,role2:%s,id:%s,m:%s\n" seq r1 r2 n (print_message m)
    | `Act2 (seq,r1,r2,m) -> sprintf "seq:%d,role1:%s,role2:%s,m:%s\n" seq r1 r2 (print_message m)
    | `Actlist arr ->String.concat (List.map ~f:print_action arr)
  (* let () = let seq = 1 in let r1 = "r1" in let r2 = "r2" in let m = `Var "m" in let a = `Act2 (seq,r1,r2,m) in print_endline (print_action a) *)
  

let rec print_env envs = 
  match envs with 
  | `Null -> sprintf "\n"
  | `Env_agent (r,i,m)->sprintf "%s,%d,%s\n" r i (print_message m)
  | `Envlist es ->String.concat (List.map ~f:print_env es)
(* let () = let r = "roleA" in let i =1 in let m =`Str "message" in let envs = `Env_agent (r,i,m) in print_endline(print_env envs)  *)

let rec print_goal gs = 
  match gs with 
  |`Secretgoal (id,m) -> sprintf "Secretgoal:%s,%s" id (print_message m)
  |`Secretgoal1 (id,m,r1,r2)->sprintf "Secretgoal1:%s,%s,%s,%s" id (print_message m) r1 r2 
  |`Agreegoal (id,r1,r2,m) -> sprintf "Agreegoal: %s,%s,%s,%s" id r1 r2 (print_message m)
  |`Goallist s -> String.concat (List.map ~f:print_goal s)
  |`Null -> sprintf "\n"

let output_protocol pocol =
  match pocol with
  |`Null -> sprintf "null\n"
  |`Pocol (k,a,env,g) -> "knowledge:\n"^print_knowledge k ^"\n" ^ 
                    "action:\n"^print_action a ^"\n" ^ 
                    "env:\n"^print_env env ^"\n" ^ 
                    "goal:\n"^print_goal g
        

(* let () = print_endline(output_protocol `Null) *)
let genCode  value =
  match value with
  |`Null -> sprintf "Null"
  |`Protocol (n,p) -> sprintf ("name:%s\n%s") n (output_protocol p) 
