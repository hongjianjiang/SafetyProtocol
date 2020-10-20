open Core
(* part 1 type definition *)
type label = string
type roleName = string 
type identifier = string 
type index = int 
(*type nonce = string *)

type identifier_list=[
  | `Identifier of identifier
  | `Identifier_list of identifier list
] 

type roleName_list=[
  | `RoleName of roleName
  | `roleName_list of roleName_list list
] 
type message = [
  | `Null
  (* | `Const of index const *)
  | `Var of identifier (*variable*)
  (* | `Fresh of identifier nonce or coin flips *)
  | `Str of roleName
  (* | `Inv of message  *)
  | `Tmp of message 
  (* | `Multi of message * message 
  | `Exp of message * message
  | `Sig of message * message 
  | `Xor of message * message 
  | `Mod of message * message *)
  | `Concat of message list
  | `Aenc of message * message   (* Asymmetric encryption *)
  | `Senc of message * message   (* Symmetric encryption *)
  | `Hash of message
  | `Pk of roleName
  | `Sk of roleName
  | `K of roleName * roleName
] 

type sign = [
  | `Plus
  | `Minus
]
 
type action = [
  | `Send of int * sign * roleName * message list * message 
  | `Receive of int * sign * message
  | `Actlist of action list
  | `Null
] 

type knowledge = [
  | `Knowledge of roleName * message
  | `Knowledge_list of knowledge list
  | `Null
] 

type function1= [
  | `Pk of unit
  | `Sk of unit 
  | `Exp of unit
  | `Mod of unit
] 
type mode = [
  | `Agent of roleName list
  | `Number of message list
  | `Function of function1  list
  | `Modelist of mode list
  | `Null 
]

type environment = [
  |`Env_agent of roleName * int * message
  |`Envlist of environment list
  |`Null
]

type agent = [
  |`Agent of roleName * message list * action list
  |`Agentlist of agent list 
  |`Null
]

(* type goal = [
  |`Secretgoal of identifier * message * roleName list
  |`Agreegoal of identifier * roleName * roleName * message
  |`Agreegoal1 of identifier * roleName * roleName * message
  |`Confidentgoal of identifier * roleName * message * roleName
  |`Goallist of goal list
  |`Null
]  *)
type goal = [
  (*|`Secretgoal of identifier * message * roleName_list*)
  |`Secretgoal of identifier * message
  |`Secretgoal1 of identifier * message * roleName * roleName
  |`Agreegoal of identifier * roleName * roleName * message
  |`Goallist of goal list
  |`Null
];;

type pocolcontext = [
  | `Pocol of knowledge * agent * goal * environment
  | `Null
] 

type protocols = [
  | `Protocol of label * pocolcontext
  | `Null
]
