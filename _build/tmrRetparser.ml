
module MenhirBasics = struct
  
  exception Error
  
  type token = 
    | XOR
    | USTR of (
# 2 "tmrRetparser.mly"
       (string)
# 12 "tmrRetparser.ml"
  )
    | TYPES
    | TO
    | TMP
    | STRING of (
# 3 "tmrRetparser.mly"
       (string)
# 20 "tmrRetparser.ml"
  )
    | SK
    | SIG
    | SENC
    | SEMICOLON
    | SECRETOF
    | RIGHT_MIDBRACE
    | RIGHT_BRACK
    | RIGHT_BRACE
    | RIGHT_ANGLEBARCK
    | PROTOCOL
    | PLUS
    | PK
    | PERIOD
    | ON
    | NUMBER
    | NONCE
    | NINJ
    | MULTI
    | MOD
    | MINUS
    | LEFT_MIDBRACE
    | LEFT_BRACK
    | LEFT_BRACE
    | LEFT_ANGLEBARCK
    | KNOWLEDGES
    | K
    | INV
    | INT of (
# 5 "tmrRetparser.mly"
       (int)
# 52 "tmrRetparser.ml"
  )
    | INJ
    | IDENT of (
# 1 "tmrRetparser.mly"
       (string)
# 58 "tmrRetparser.ml"
  )
    | HASHCON
    | GOALS
    | FUNCTION
    | EXP
    | EOF
    | ENVIRONMENT
    | END
    | CONF
    | COMMA
    | COLON
    | AND
    | AGENTS
    | AGENT
    | AENC
    | ACTIONS
  
end

include MenhirBasics

let _eRR =
  MenhirBasics.Error

type _menhir_env = {
  _menhir_lexer: Lexing.lexbuf -> token;
  _menhir_lexbuf: Lexing.lexbuf;
  _menhir_token: token;
  mutable _menhir_error: bool
}

and _menhir_state = 
  | MenhirState148
  | MenhirState142
  | MenhirState135
  | MenhirState131
  | MenhirState128
  | MenhirState122
  | MenhirState118
  | MenhirState116
  | MenhirState108
  | MenhirState104
  | MenhirState96
  | MenhirState90
  | MenhirState88
  | MenhirState86
  | MenhirState83
  | MenhirState73
  | MenhirState71
  | MenhirState69
  | MenhirState68
  | MenhirState62
  | MenhirState54
  | MenhirState48
  | MenhirState40
  | MenhirState38
  | MenhirState36
  | MenhirState27
  | MenhirState26
  | MenhirState17
  | MenhirState7
  | MenhirState5
  | MenhirState4

let rec _menhir_goto_separated_nonempty_list_SEMICOLON_agent_ : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.agent list) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    match _menhir_s with
    | MenhirState69 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (x : (Proctype.agent list)) = _v in
        let _v : (Proctype.agent list) = 
# 144 "<standard.mly>"
    ( x )
# 133 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_SEMICOLON_agent__ _menhir_env _menhir_stack _menhir_s _v
    | MenhirState104 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (xs : (Proctype.agent list)) = _v in
        let (_menhir_stack, _menhir_s, (x : (Proctype.agent))) = _menhir_stack in
        let _2 = () in
        let _v : (Proctype.agent list) = 
# 243 "<standard.mly>"
    ( x :: xs )
# 145 "tmrRetparser.ml"
         in
        _menhir_goto_separated_nonempty_list_SEMICOLON_agent_ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        _menhir_fail ()

and _menhir_goto_agent : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.agent) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    let _menhir_stack = (_menhir_stack, _menhir_s, _v) in
    match _menhir_s with
    | MenhirState104 | MenhirState69 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        assert (not _menhir_env._menhir_error);
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | SEMICOLON ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let _menhir_env = _menhir_discard _menhir_env in
            let _tok = _menhir_env._menhir_token in
            (match _tok with
            | IDENT _v ->
                _menhir_run70 _menhir_env (Obj.magic _menhir_stack) MenhirState104 _v
            | LEFT_BRACE ->
                _menhir_run69 _menhir_env (Obj.magic _menhir_stack) MenhirState104
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState104)
        | RIGHT_BRACE ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, (x : (Proctype.agent))) = _menhir_stack in
            let _v : (Proctype.agent list) = 
# 241 "<standard.mly>"
    ( [ x ] )
# 179 "tmrRetparser.ml"
             in
            _menhir_goto_separated_nonempty_list_SEMICOLON_agent_ _menhir_env _menhir_stack _menhir_s _v
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState68 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _, (ags : (Proctype.agent))) = _menhir_stack in
        let _1 = () in
        let _v : (Proctype.agent) = 
# 101 "tmrRetparser.mly"
                      (ags)
# 196 "tmrRetparser.ml"
         in
        let _menhir_stack = (_menhir_stack, _v) in
        let _menhir_stack = Obj.magic _menhir_stack in
        assert (not _menhir_env._menhir_error);
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | ENVIRONMENT ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let _menhir_env = _menhir_discard _menhir_env in
            let _tok = _menhir_env._menhir_token in
            (match _tok with
            | LEFT_BRACE ->
                _menhir_run118 _menhir_env (Obj.magic _menhir_stack) MenhirState108
            | LEFT_MIDBRACE ->
                _menhir_run109 _menhir_env (Obj.magic _menhir_stack) MenhirState108
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState108)
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            raise _eRR)
    | _ ->
        _menhir_fail ()

and _menhir_goto_loption_separated_nonempty_list_SEMICOLON_goal__ : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.goal list) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    let _menhir_stack = Obj.magic _menhir_stack in
    let _menhir_stack = Obj.magic _menhir_stack in
    let (xs : (Proctype.goal list)) = _v in
    let _v : (Proctype.goal list) = let gols = 
# 232 "<standard.mly>"
    ( xs )
# 232 "tmrRetparser.ml"
     in
    
# 151 "tmrRetparser.mly"
                                            ( gols )
# 237 "tmrRetparser.ml"
     in
    let _menhir_stack = (_menhir_stack, _menhir_s, _v) in
    let _menhir_stack = Obj.magic _menhir_stack in
    assert (not _menhir_env._menhir_error);
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | RIGHT_BRACE ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_env = _menhir_discard _menhir_env in
        let _menhir_stack = Obj.magic _menhir_stack in
        let ((_menhir_stack, _menhir_s), _, (gols : (Proctype.goal list))) = _menhir_stack in
        let _3 = () in
        let _1 = () in
        let _v : (Proctype.goal) = 
# 147 "tmrRetparser.mly"
                                              (`Goallist gols )
# 254 "tmrRetparser.ml"
         in
        _menhir_goto_goal _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s

and _menhir_goto_loption_separated_nonempty_list_SEMICOLON_envs__ : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.environment list) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    let _menhir_stack = Obj.magic _menhir_stack in
    let _menhir_stack = Obj.magic _menhir_stack in
    let (xs : (Proctype.environment list)) = _v in
    let _v : (Proctype.environment list) = let envs = 
# 232 "<standard.mly>"
    ( xs )
# 272 "tmrRetparser.ml"
     in
    
# 136 "tmrRetparser.mly"
                                        (envs)
# 277 "tmrRetparser.ml"
     in
    let _menhir_stack = (_menhir_stack, _menhir_s, _v) in
    let _menhir_stack = Obj.magic _menhir_stack in
    assert (not _menhir_env._menhir_error);
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | RIGHT_BRACE ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_env = _menhir_discard _menhir_env in
        let _menhir_stack = Obj.magic _menhir_stack in
        let ((_menhir_stack, _menhir_s), _, (envs : (Proctype.environment list))) = _menhir_stack in
        let _3 = () in
        let _1 = () in
        let _v : (Proctype.environment) = 
# 133 "tmrRetparser.mly"
                                             (`Envlist envs )
# 294 "tmrRetparser.ml"
         in
        _menhir_goto_envs _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s

and _menhir_goto_loption_separated_nonempty_list_COMMA_action__ : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.action list) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    let _menhir_stack = Obj.magic _menhir_stack in
    let _menhir_stack = Obj.magic _menhir_stack in
    let (xs : (Proctype.action list)) = _v in
    let _v : (Proctype.action list) = let acts = 
# 232 "<standard.mly>"
    ( xs )
# 312 "tmrRetparser.ml"
     in
    
# 190 "tmrRetparser.mly"
                                           ( acts )
# 317 "tmrRetparser.ml"
     in
    let _menhir_stack = (_menhir_stack, _menhir_s, _v) in
    match _menhir_s with
    | MenhirState90 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        assert (not _menhir_env._menhir_error);
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | RIGHT_BRACE ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let _menhir_env = _menhir_discard _menhir_env in
            let _menhir_stack = Obj.magic _menhir_stack in
            let ((_menhir_stack, _menhir_s), _, (acts : (Proctype.action list))) = _menhir_stack in
            let _3 = () in
            let _1 = () in
            let _v : (Proctype.action) = 
# 186 "tmrRetparser.mly"
                                               ( `Actlist acts)
# 336 "tmrRetparser.ml"
             in
            _menhir_goto_action _menhir_env _menhir_stack _menhir_s _v
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState73 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (((_menhir_stack, _menhir_s, (name : (
# 1 "tmrRetparser.mly"
       (string)
# 351 "tmrRetparser.ml"
        ))), _, (ms : (Proctype.message list))), _, (actlist : (Proctype.action list))) = _menhir_stack in
        let _4 = () in
        let _2 = () in
        let _v : (Proctype.agent) = 
# 105 "tmrRetparser.mly"
                                                                     (`Agent (name,ms,actlist))
# 358 "tmrRetparser.ml"
         in
        _menhir_goto_agent _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        _menhir_fail ()

and _menhir_goto_sign : _menhir_env -> 'ttv_tail -> (Proctype.sign) -> 'ttv_return =
  fun _menhir_env _menhir_stack _v ->
    let _menhir_stack = (_menhir_stack, _v) in
    let _menhir_stack = Obj.magic _menhir_stack in
    assert (not _menhir_env._menhir_error);
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | COLON ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_env = _menhir_discard _menhir_env in
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | AENC ->
            _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState88
        | HASHCON ->
            _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState88
        | IDENT _v ->
            _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState88 _v
        | K ->
            _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState88
        | LEFT_ANGLEBARCK ->
            _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState88
        | LEFT_BRACK ->
            _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState88
        | NONCE ->
            _menhir_run22 _menhir_env (Obj.magic _menhir_stack) MenhirState88
        | PK ->
            _menhir_run18 _menhir_env (Obj.magic _menhir_stack) MenhirState88
        | SENC ->
            _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState88
        | SK ->
            _menhir_run12 _menhir_env (Obj.magic _menhir_stack) MenhirState88
        | TMP ->
            _menhir_run8 _menhir_env (Obj.magic _menhir_stack) MenhirState88
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState88)
    | COMMA ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_env = _menhir_discard _menhir_env in
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | IDENT _v ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let _menhir_stack = (_menhir_stack, _v) in
            let _menhir_env = _menhir_discard _menhir_env in
            let _tok = _menhir_env._menhir_token in
            (match _tok with
            | COMMA ->
                let _menhir_stack = Obj.magic _menhir_stack in
                let _menhir_env = _menhir_discard _menhir_env in
                let _tok = _menhir_env._menhir_token in
                (match _tok with
                | LEFT_BRACK ->
                    let _menhir_stack = Obj.magic _menhir_stack in
                    let _menhir_env = _menhir_discard _menhir_env in
                    let _tok = _menhir_env._menhir_token in
                    (match _tok with
                    | AENC ->
                        _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState83
                    | HASHCON ->
                        _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState83
                    | IDENT _v ->
                        _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState83 _v
                    | K ->
                        _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState83
                    | LEFT_ANGLEBARCK ->
                        _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState83
                    | LEFT_BRACK ->
                        _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState83
                    | NONCE ->
                        _menhir_run22 _menhir_env (Obj.magic _menhir_stack) MenhirState83
                    | PK ->
                        _menhir_run18 _menhir_env (Obj.magic _menhir_stack) MenhirState83
                    | SENC ->
                        _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState83
                    | SK ->
                        _menhir_run12 _menhir_env (Obj.magic _menhir_stack) MenhirState83
                    | TMP ->
                        _menhir_run8 _menhir_env (Obj.magic _menhir_stack) MenhirState83
                    | RIGHT_BRACK ->
                        _menhir_reduce25 _menhir_env (Obj.magic _menhir_stack) MenhirState83
                    | _ ->
                        assert (not _menhir_env._menhir_error);
                        _menhir_env._menhir_error <- true;
                        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState83)
                | _ ->
                    assert (not _menhir_env._menhir_error);
                    _menhir_env._menhir_error <- true;
                    let _menhir_stack = Obj.magic _menhir_stack in
                    let ((((_menhir_stack, _menhir_s), _), _), _) = _menhir_stack in
                    _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                let _menhir_stack = Obj.magic _menhir_stack in
                let ((((_menhir_stack, _menhir_s), _), _), _) = _menhir_stack in
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (((_menhir_stack, _menhir_s), _), _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        let _menhir_stack = Obj.magic _menhir_stack in
        let (((_menhir_stack, _menhir_s), _), _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s

and _menhir_goto_loption_separated_nonempty_list_SEMICOLON_agent__ : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.agent list) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    let _menhir_stack = Obj.magic _menhir_stack in
    let _menhir_stack = Obj.magic _menhir_stack in
    let (xs : (Proctype.agent list)) = _v in
    let _v : (Proctype.agent list) = let ags = 
# 232 "<standard.mly>"
    ( xs )
# 484 "tmrRetparser.ml"
     in
    
# 111 "tmrRetparser.mly"
                                         (ags)
# 489 "tmrRetparser.ml"
     in
    let _menhir_stack = (_menhir_stack, _menhir_s, _v) in
    let _menhir_stack = Obj.magic _menhir_stack in
    assert (not _menhir_env._menhir_error);
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | RIGHT_BRACE ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_env = _menhir_discard _menhir_env in
        let _menhir_stack = Obj.magic _menhir_stack in
        let ((_menhir_stack, _menhir_s), _, (agts : (Proctype.agent list))) = _menhir_stack in
        let _3 = () in
        let _1 = () in
        let _v : (Proctype.agent) = 
# 107 "tmrRetparser.mly"
                                               (`Agentlist agts)
# 506 "tmrRetparser.ml"
         in
        _menhir_goto_agent _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s

and _menhir_reduce23 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _v : (Proctype.action list) = 
# 142 "<standard.mly>"
    ( [] )
# 521 "tmrRetparser.ml"
     in
    _menhir_goto_loption_separated_nonempty_list_COMMA_action__ _menhir_env _menhir_stack _menhir_s _v

and _menhir_goto_separated_nonempty_list_SEMICOLON_goal_ : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.goal list) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    match _menhir_s with
    | MenhirState142 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (x : (Proctype.goal list)) = _v in
        let _v : (Proctype.goal list) = 
# 144 "<standard.mly>"
    ( x )
# 535 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_SEMICOLON_goal__ _menhir_env _menhir_stack _menhir_s _v
    | MenhirState148 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (xs : (Proctype.goal list)) = _v in
        let (_menhir_stack, _menhir_s, (x : (Proctype.goal))) = _menhir_stack in
        let _2 = () in
        let _v : (Proctype.goal list) = 
# 243 "<standard.mly>"
    ( x :: xs )
# 547 "tmrRetparser.ml"
         in
        _menhir_goto_separated_nonempty_list_SEMICOLON_goal_ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        _menhir_fail ()

and _menhir_run129 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | IDENT _v ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = (_menhir_stack, _v) in
        let _menhir_env = _menhir_discard _menhir_env in
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | RIGHT_MIDBRACE ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let _menhir_env = _menhir_discard _menhir_env in
            let _tok = _menhir_env._menhir_token in
            (match _tok with
            | AENC ->
                _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState131
            | HASHCON ->
                _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState131
            | IDENT _v ->
                let _menhir_stack = Obj.magic _menhir_stack in
                let _menhir_s = MenhirState131 in
                let _menhir_stack = (_menhir_stack, _menhir_s, _v) in
                let _menhir_env = _menhir_discard _menhir_env in
                let _tok = _menhir_env._menhir_token in
                (match _tok with
                | NINJ ->
                    let _menhir_stack = Obj.magic _menhir_stack in
                    let _menhir_env = _menhir_discard _menhir_env in
                    let _tok = _menhir_env._menhir_token in
                    (match _tok with
                    | IDENT _v ->
                        let _menhir_stack = Obj.magic _menhir_stack in
                        let _menhir_stack = (_menhir_stack, _v) in
                        let _menhir_env = _menhir_discard _menhir_env in
                        let _tok = _menhir_env._menhir_token in
                        (match _tok with
                        | ON ->
                            let _menhir_stack = Obj.magic _menhir_stack in
                            let _menhir_env = _menhir_discard _menhir_env in
                            let _tok = _menhir_env._menhir_token in
                            (match _tok with
                            | AENC ->
                                _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState135
                            | HASHCON ->
                                _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState135
                            | IDENT _v ->
                                _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState135 _v
                            | K ->
                                _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState135
                            | LEFT_ANGLEBARCK ->
                                _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState135
                            | LEFT_BRACK ->
                                _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState135
                            | NONCE ->
                                _menhir_run22 _menhir_env (Obj.magic _menhir_stack) MenhirState135
                            | PK ->
                                _menhir_run18 _menhir_env (Obj.magic _menhir_stack) MenhirState135
                            | SENC ->
                                _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState135
                            | SK ->
                                _menhir_run12 _menhir_env (Obj.magic _menhir_stack) MenhirState135
                            | TMP ->
                                _menhir_run8 _menhir_env (Obj.magic _menhir_stack) MenhirState135
                            | _ ->
                                assert (not _menhir_env._menhir_error);
                                _menhir_env._menhir_error <- true;
                                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState135)
                        | _ ->
                            assert (not _menhir_env._menhir_error);
                            _menhir_env._menhir_error <- true;
                            let _menhir_stack = Obj.magic _menhir_stack in
                            let ((_menhir_stack, _menhir_s, _), _) = _menhir_stack in
                            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
                    | _ ->
                        assert (not _menhir_env._menhir_error);
                        _menhir_env._menhir_error <- true;
                        let _menhir_stack = Obj.magic _menhir_stack in
                        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
                        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
                | CONF | END | RIGHT_BRACE | SEMICOLON ->
                    _menhir_reduce35 _menhir_env (Obj.magic _menhir_stack)
                | _ ->
                    assert (not _menhir_env._menhir_error);
                    _menhir_env._menhir_error <- true;
                    let _menhir_stack = Obj.magic _menhir_stack in
                    let (_menhir_stack, _menhir_s, _) = _menhir_stack in
                    _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
            | K ->
                _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState131
            | LEFT_ANGLEBARCK ->
                _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState131
            | LEFT_BRACK ->
                _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState131
            | NONCE ->
                _menhir_run22 _menhir_env (Obj.magic _menhir_stack) MenhirState131
            | PK ->
                _menhir_run18 _menhir_env (Obj.magic _menhir_stack) MenhirState131
            | SENC ->
                _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState131
            | SK ->
                _menhir_run12 _menhir_env (Obj.magic _menhir_stack) MenhirState131
            | TMP ->
                _menhir_run8 _menhir_env (Obj.magic _menhir_stack) MenhirState131
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState131)
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let ((_menhir_stack, _menhir_s), _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s

and _menhir_run142 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | LEFT_BRACE ->
        _menhir_run142 _menhir_env (Obj.magic _menhir_stack) MenhirState142
    | LEFT_MIDBRACE ->
        _menhir_run129 _menhir_env (Obj.magic _menhir_stack) MenhirState142
    | RIGHT_BRACE ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_s = MenhirState142 in
        let _v : (Proctype.goal list) = 
# 142 "<standard.mly>"
    ( [] )
# 692 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_SEMICOLON_goal__ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState142

and _menhir_goto_separated_nonempty_list_SEMICOLON_envs_ : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.environment list) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    match _menhir_s with
    | MenhirState118 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (x : (Proctype.environment list)) = _v in
        let _v : (Proctype.environment list) = 
# 144 "<standard.mly>"
    ( x )
# 710 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_SEMICOLON_envs__ _menhir_env _menhir_stack _menhir_s _v
    | MenhirState122 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (xs : (Proctype.environment list)) = _v in
        let (_menhir_stack, _menhir_s, (x : (Proctype.environment))) = _menhir_stack in
        let _2 = () in
        let _v : (Proctype.environment list) = 
# 243 "<standard.mly>"
    ( x :: xs )
# 722 "tmrRetparser.ml"
         in
        _menhir_goto_separated_nonempty_list_SEMICOLON_envs_ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        _menhir_fail ()

and _menhir_run109 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | IDENT _v ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = (_menhir_stack, _v) in
        let _menhir_env = _menhir_discard _menhir_env in
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | RIGHT_MIDBRACE ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let _menhir_env = _menhir_discard _menhir_env in
            let _tok = _menhir_env._menhir_token in
            (match _tok with
            | IDENT _v ->
                let _menhir_stack = Obj.magic _menhir_stack in
                let _menhir_stack = (_menhir_stack, _v) in
                let _menhir_env = _menhir_discard _menhir_env in
                let _tok = _menhir_env._menhir_token in
                (match _tok with
                | LEFT_MIDBRACE ->
                    let _menhir_stack = Obj.magic _menhir_stack in
                    let _menhir_env = _menhir_discard _menhir_env in
                    let _tok = _menhir_env._menhir_token in
                    (match _tok with
                    | INT _v ->
                        let _menhir_stack = Obj.magic _menhir_stack in
                        let _menhir_stack = (_menhir_stack, _v) in
                        let _menhir_env = _menhir_discard _menhir_env in
                        let _tok = _menhir_env._menhir_token in
                        (match _tok with
                        | RIGHT_MIDBRACE ->
                            let _menhir_stack = Obj.magic _menhir_stack in
                            let _menhir_env = _menhir_discard _menhir_env in
                            let _tok = _menhir_env._menhir_token in
                            (match _tok with
                            | COLON ->
                                let _menhir_stack = Obj.magic _menhir_stack in
                                let _menhir_env = _menhir_discard _menhir_env in
                                let _tok = _menhir_env._menhir_token in
                                (match _tok with
                                | AENC ->
                                    _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState116
                                | HASHCON ->
                                    _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState116
                                | IDENT _v ->
                                    _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState116 _v
                                | K ->
                                    _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState116
                                | LEFT_ANGLEBARCK ->
                                    _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState116
                                | LEFT_BRACK ->
                                    _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState116
                                | NONCE ->
                                    _menhir_run22 _menhir_env (Obj.magic _menhir_stack) MenhirState116
                                | PK ->
                                    _menhir_run18 _menhir_env (Obj.magic _menhir_stack) MenhirState116
                                | SENC ->
                                    _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState116
                                | SK ->
                                    _menhir_run12 _menhir_env (Obj.magic _menhir_stack) MenhirState116
                                | TMP ->
                                    _menhir_run8 _menhir_env (Obj.magic _menhir_stack) MenhirState116
                                | _ ->
                                    assert (not _menhir_env._menhir_error);
                                    _menhir_env._menhir_error <- true;
                                    _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState116)
                            | _ ->
                                assert (not _menhir_env._menhir_error);
                                _menhir_env._menhir_error <- true;
                                let _menhir_stack = Obj.magic _menhir_stack in
                                let ((((_menhir_stack, _menhir_s), _), _), _) = _menhir_stack in
                                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
                        | _ ->
                            assert (not _menhir_env._menhir_error);
                            _menhir_env._menhir_error <- true;
                            let _menhir_stack = Obj.magic _menhir_stack in
                            let ((((_menhir_stack, _menhir_s), _), _), _) = _menhir_stack in
                            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
                    | _ ->
                        assert (not _menhir_env._menhir_error);
                        _menhir_env._menhir_error <- true;
                        let _menhir_stack = Obj.magic _menhir_stack in
                        let (((_menhir_stack, _menhir_s), _), _) = _menhir_stack in
                        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
                | _ ->
                    assert (not _menhir_env._menhir_error);
                    _menhir_env._menhir_error <- true;
                    let _menhir_stack = Obj.magic _menhir_stack in
                    let (((_menhir_stack, _menhir_s), _), _) = _menhir_stack in
                    _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                let _menhir_stack = Obj.magic _menhir_stack in
                let ((_menhir_stack, _menhir_s), _) = _menhir_stack in
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let ((_menhir_stack, _menhir_s), _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s

and _menhir_run118 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | LEFT_BRACE ->
        _menhir_run118 _menhir_env (Obj.magic _menhir_stack) MenhirState118
    | LEFT_MIDBRACE ->
        _menhir_run109 _menhir_env (Obj.magic _menhir_stack) MenhirState118
    | RIGHT_BRACE ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_s = MenhirState118 in
        let _v : (Proctype.environment list) = 
# 142 "<standard.mly>"
    ( [] )
# 857 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_SEMICOLON_envs__ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState118

and _menhir_goto_separated_nonempty_list_COMMA_action_ : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.action list) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    match _menhir_s with
    | MenhirState73 | MenhirState90 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (x : (Proctype.action list)) = _v in
        let _v : (Proctype.action list) = 
# 144 "<standard.mly>"
    ( x )
# 875 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_COMMA_action__ _menhir_env _menhir_stack _menhir_s _v
    | MenhirState96 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (xs : (Proctype.action list)) = _v in
        let (_menhir_stack, _menhir_s, (x : (Proctype.action))) = _menhir_stack in
        let _2 = () in
        let _v : (Proctype.action list) = 
# 243 "<standard.mly>"
    ( x :: xs )
# 887 "tmrRetparser.ml"
         in
        _menhir_goto_separated_nonempty_list_COMMA_action_ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        _menhir_fail ()

and _menhir_run74 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | INT _v ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = (_menhir_stack, _v) in
        let _menhir_env = _menhir_discard _menhir_env in
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | RIGHT_MIDBRACE ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let _menhir_env = _menhir_discard _menhir_env in
            let _tok = _menhir_env._menhir_token in
            (match _tok with
            | MINUS ->
                let _menhir_stack = Obj.magic _menhir_stack in
                let _menhir_env = _menhir_discard _menhir_env in
                let _menhir_stack = Obj.magic _menhir_stack in
                let _1 = () in
                let _v : (Proctype.sign) = 
# 180 "tmrRetparser.mly"
         (`Minus)
# 918 "tmrRetparser.ml"
                 in
                _menhir_goto_sign _menhir_env _menhir_stack _v
            | PLUS ->
                let _menhir_stack = Obj.magic _menhir_stack in
                let _menhir_env = _menhir_discard _menhir_env in
                let _menhir_stack = Obj.magic _menhir_stack in
                let _1 = () in
                let _v : (Proctype.sign) = 
# 181 "tmrRetparser.mly"
        (`Plus)
# 929 "tmrRetparser.ml"
                 in
                _menhir_goto_sign _menhir_env _menhir_stack _v
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                let _menhir_stack = Obj.magic _menhir_stack in
                let ((_menhir_stack, _menhir_s), _) = _menhir_stack in
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let ((_menhir_stack, _menhir_s), _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s

and _menhir_run90 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | LEFT_BRACE ->
        _menhir_run90 _menhir_env (Obj.magic _menhir_stack) MenhirState90
    | LEFT_MIDBRACE ->
        _menhir_run74 _menhir_env (Obj.magic _menhir_stack) MenhirState90
    | RIGHT_BRACE ->
        _menhir_reduce23 _menhir_env (Obj.magic _menhir_stack) MenhirState90
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState90

and _menhir_run69 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | IDENT _v ->
        _menhir_run70 _menhir_env (Obj.magic _menhir_stack) MenhirState69 _v
    | LEFT_BRACE ->
        _menhir_run69 _menhir_env (Obj.magic _menhir_stack) MenhirState69
    | RIGHT_BRACE ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_s = MenhirState69 in
        let _v : (Proctype.agent list) = 
# 142 "<standard.mly>"
    ( [] )
# 984 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_SEMICOLON_agent__ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState69

and _menhir_run70 : _menhir_env -> 'ttv_tail -> _menhir_state -> (
# 1 "tmrRetparser.mly"
       (string)
# 995 "tmrRetparser.ml"
) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    let _menhir_stack = (_menhir_stack, _menhir_s, _v) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | COLON ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_env = _menhir_discard _menhir_env in
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | AENC ->
            _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState71
        | HASHCON ->
            _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState71
        | IDENT _v ->
            _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState71 _v
        | K ->
            _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState71
        | LEFT_ANGLEBARCK ->
            _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState71
        | LEFT_BRACK ->
            _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState71
        | NONCE ->
            _menhir_run22 _menhir_env (Obj.magic _menhir_stack) MenhirState71
        | PK ->
            _menhir_run18 _menhir_env (Obj.magic _menhir_stack) MenhirState71
        | SENC ->
            _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState71
        | SK ->
            _menhir_run12 _menhir_env (Obj.magic _menhir_stack) MenhirState71
        | TMP ->
            _menhir_run8 _menhir_env (Obj.magic _menhir_stack) MenhirState71
        | COMMA ->
            _menhir_reduce25 _menhir_env (Obj.magic _menhir_stack) MenhirState71
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState71)
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s

and _menhir_goto_separated_nonempty_list_SEMICOLON_knowledge_ : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.knowledge list) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    match _menhir_s with
    | MenhirState5 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (x : (Proctype.knowledge list)) = _v in
        let _v : (Proctype.knowledge list) = 
# 144 "<standard.mly>"
    ( x )
# 1052 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_SEMICOLON_knowledge__ _menhir_env _menhir_stack _menhir_s _v
    | MenhirState62 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (xs : (Proctype.knowledge list)) = _v in
        let (_menhir_stack, _menhir_s, (x : (Proctype.knowledge))) = _menhir_stack in
        let _2 = () in
        let _v : (Proctype.knowledge list) = 
# 243 "<standard.mly>"
    ( x :: xs )
# 1064 "tmrRetparser.ml"
         in
        _menhir_goto_separated_nonempty_list_SEMICOLON_knowledge_ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        _menhir_fail ()

and _menhir_goto_loption_separated_nonempty_list_PERIOD_message__ : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.message list) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    let _menhir_stack = Obj.magic _menhir_stack in
    let _menhir_stack = Obj.magic _menhir_stack in
    let (xs : (Proctype.message list)) = _v in
    let _v : (Proctype.message list) = let msgs = 
# 232 "<standard.mly>"
    ( xs )
# 1078 "tmrRetparser.ml"
     in
    
# 216 "tmrRetparser.mly"
                                            ( msgs )
# 1083 "tmrRetparser.ml"
     in
    let _menhir_stack = (_menhir_stack, _menhir_s, _v) in
    match _menhir_s with
    | MenhirState27 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        assert (not _menhir_env._menhir_error);
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | RIGHT_ANGLEBARCK ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let _menhir_env = _menhir_discard _menhir_env in
            let _menhir_stack = Obj.magic _menhir_stack in
            let ((_menhir_stack, _menhir_s), _, (msgs : (Proctype.message list))) = _menhir_stack in
            let _3 = () in
            let _1 = () in
            let _v : (Proctype.message) = 
# 211 "tmrRetparser.mly"
                                                       ( `Concat msgs)
# 1102 "tmrRetparser.ml"
             in
            _menhir_goto_message _menhir_env _menhir_stack _menhir_s _v
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState71 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        assert (not _menhir_env._menhir_error);
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | COMMA ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let _menhir_env = _menhir_discard _menhir_env in
            let _tok = _menhir_env._menhir_token in
            (match _tok with
            | LEFT_BRACE ->
                _menhir_run90 _menhir_env (Obj.magic _menhir_stack) MenhirState73
            | LEFT_MIDBRACE ->
                _menhir_run74 _menhir_env (Obj.magic _menhir_stack) MenhirState73
            | ENVIRONMENT | RIGHT_BRACE | SEMICOLON ->
                _menhir_reduce23 _menhir_env (Obj.magic _menhir_stack) MenhirState73
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState73)
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState83 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        assert (not _menhir_env._menhir_error);
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | RIGHT_BRACK ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let _menhir_env = _menhir_discard _menhir_env in
            let _tok = _menhir_env._menhir_token in
            (match _tok with
            | COLON ->
                let _menhir_stack = Obj.magic _menhir_stack in
                let _menhir_env = _menhir_discard _menhir_env in
                let _tok = _menhir_env._menhir_token in
                (match _tok with
                | AENC ->
                    _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState86
                | HASHCON ->
                    _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState86
                | IDENT _v ->
                    _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState86 _v
                | K ->
                    _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState86
                | LEFT_ANGLEBARCK ->
                    _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState86
                | LEFT_BRACK ->
                    _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState86
                | NONCE ->
                    _menhir_run22 _menhir_env (Obj.magic _menhir_stack) MenhirState86
                | PK ->
                    _menhir_run18 _menhir_env (Obj.magic _menhir_stack) MenhirState86
                | SENC ->
                    _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState86
                | SK ->
                    _menhir_run12 _menhir_env (Obj.magic _menhir_stack) MenhirState86
                | TMP ->
                    _menhir_run8 _menhir_env (Obj.magic _menhir_stack) MenhirState86
                | _ ->
                    assert (not _menhir_env._menhir_error);
                    _menhir_env._menhir_error <- true;
                    _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState86)
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                let _menhir_stack = Obj.magic _menhir_stack in
                let (_menhir_stack, _menhir_s, _) = _menhir_stack in
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | _ ->
        _menhir_fail ()

and _menhir_fail : unit -> 'a =
  fun () ->
    Printf.fprintf stderr "Internal failure -- please contact the parser generator's developers.\n%!";
    assert false

and _menhir_goto_goal : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.goal) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    let _menhir_stack = (_menhir_stack, _menhir_s, _v) in
    match _menhir_s with
    | MenhirState148 | MenhirState142 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        assert (not _menhir_env._menhir_error);
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | SEMICOLON ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let _menhir_env = _menhir_discard _menhir_env in
            let _tok = _menhir_env._menhir_token in
            (match _tok with
            | LEFT_BRACE ->
                _menhir_run142 _menhir_env (Obj.magic _menhir_stack) MenhirState148
            | LEFT_MIDBRACE ->
                _menhir_run129 _menhir_env (Obj.magic _menhir_stack) MenhirState148
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState148)
        | RIGHT_BRACE ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, (x : (Proctype.goal))) = _menhir_stack in
            let _v : (Proctype.goal list) = 
# 241 "<standard.mly>"
    ( [ x ] )
# 1226 "tmrRetparser.ml"
             in
            _menhir_goto_separated_nonempty_list_SEMICOLON_goal_ _menhir_env _menhir_stack _menhir_s _v
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState128 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _, (goallist : (Proctype.goal))) = _menhir_stack in
        let _1 = () in
        let _v : (Proctype.goal) = 
# 139 "tmrRetparser.mly"
                          ( goallist )
# 1243 "tmrRetparser.ml"
         in
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (g : (Proctype.goal)) = _v in
        let (((_menhir_stack, (k : (Proctype.knowledge))), (ag : (Proctype.agent))), (env : (Proctype.environment))) = _menhir_stack in
        let _v : (Proctype.pocolcontext) = 
# 71 "tmrRetparser.mly"
                                                         ( `Pocol (k,ag,g,env) )
# 1252 "tmrRetparser.ml"
         in
        let _menhir_stack = (_menhir_stack, _v) in
        let _menhir_stack = Obj.magic _menhir_stack in
        assert (not _menhir_env._menhir_error);
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | END ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let _menhir_env = _menhir_discard _menhir_env in
            let _menhir_stack = Obj.magic _menhir_stack in
            let ((_menhir_stack, (name : (
# 1 "tmrRetparser.mly"
       (string)
# 1266 "tmrRetparser.ml"
            ))), (p : (Proctype.pocolcontext))) = _menhir_stack in
            let _5 = () in
            let _3 = () in
            let _1 = () in
            let _v : (Proctype.protocols) = 
# 67 "tmrRetparser.mly"
                                                       ( `Protocol (name,p))
# 1274 "tmrRetparser.ml"
             in
            let _menhir_stack = (_menhir_stack, _v) in
            let _menhir_stack = Obj.magic _menhir_stack in
            assert (not _menhir_env._menhir_error);
            let _tok = _menhir_env._menhir_token in
            (match _tok with
            | EOF ->
                let _menhir_stack = Obj.magic _menhir_stack in
                let _menhir_stack = Obj.magic _menhir_stack in
                let (_menhir_stack, (p : (Proctype.protocols))) = _menhir_stack in
                let _2 = () in
                let _v : (Proctype.protocols option) = 
# 62 "tmrRetparser.mly"
                       ( Some p )
# 1289 "tmrRetparser.ml"
                 in
                _menhir_goto_prog _menhir_env _menhir_stack _v
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                let _menhir_stack = Obj.magic _menhir_stack in
                raise _eRR)
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            raise _eRR)
    | _ ->
        _menhir_fail ()

and _menhir_goto_envs : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.environment) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    let _menhir_stack = (_menhir_stack, _menhir_s, _v) in
    match _menhir_s with
    | MenhirState122 | MenhirState118 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        assert (not _menhir_env._menhir_error);
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | SEMICOLON ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let _menhir_env = _menhir_discard _menhir_env in
            let _tok = _menhir_env._menhir_token in
            (match _tok with
            | LEFT_BRACE ->
                _menhir_run118 _menhir_env (Obj.magic _menhir_stack) MenhirState122
            | LEFT_MIDBRACE ->
                _menhir_run109 _menhir_env (Obj.magic _menhir_stack) MenhirState122
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState122)
        | RIGHT_BRACE ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, (x : (Proctype.environment))) = _menhir_stack in
            let _v : (Proctype.environment list) = 
# 241 "<standard.mly>"
    ( [ x ] )
# 1333 "tmrRetparser.ml"
             in
            _menhir_goto_separated_nonempty_list_SEMICOLON_envs_ _menhir_env _menhir_stack _menhir_s _v
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState108 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _, (envlist : (Proctype.environment))) = _menhir_stack in
        let _1 = () in
        let _v : (Proctype.environment) = 
# 128 "tmrRetparser.mly"
                                 ( envlist )
# 1350 "tmrRetparser.ml"
         in
        let _menhir_stack = (_menhir_stack, _v) in
        let _menhir_stack = Obj.magic _menhir_stack in
        assert (not _menhir_env._menhir_error);
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | GOALS ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let _menhir_env = _menhir_discard _menhir_env in
            let _tok = _menhir_env._menhir_token in
            (match _tok with
            | LEFT_BRACE ->
                _menhir_run142 _menhir_env (Obj.magic _menhir_stack) MenhirState128
            | LEFT_MIDBRACE ->
                _menhir_run129 _menhir_env (Obj.magic _menhir_stack) MenhirState128
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState128)
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            raise _eRR)
    | _ ->
        _menhir_fail ()

and _menhir_goto_action : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.action) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    let _menhir_stack = (_menhir_stack, _menhir_s, _v) in
    let _menhir_stack = Obj.magic _menhir_stack in
    assert (not _menhir_env._menhir_error);
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | COMMA ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_env = _menhir_discard _menhir_env in
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | LEFT_BRACE ->
            _menhir_run90 _menhir_env (Obj.magic _menhir_stack) MenhirState96
        | LEFT_MIDBRACE ->
            _menhir_run74 _menhir_env (Obj.magic _menhir_stack) MenhirState96
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState96)
    | ENVIRONMENT | RIGHT_BRACE | SEMICOLON ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, (x : (Proctype.action))) = _menhir_stack in
        let _v : (Proctype.action list) = 
# 241 "<standard.mly>"
    ( [ x ] )
# 1404 "tmrRetparser.ml"
         in
        _menhir_goto_separated_nonempty_list_COMMA_action_ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s

and _menhir_goto_separated_nonempty_list_PERIOD_message_ : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.message list) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    match _menhir_s with
    | MenhirState83 | MenhirState71 | MenhirState27 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (x : (Proctype.message list)) = _v in
        let _v : (Proctype.message list) = 
# 144 "<standard.mly>"
    ( x )
# 1424 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_PERIOD_message__ _menhir_env _menhir_stack _menhir_s _v
    | MenhirState48 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (xs : (Proctype.message list)) = _v in
        let (_menhir_stack, _menhir_s, (x : (Proctype.message))) = _menhir_stack in
        let _2 = () in
        let _v : (Proctype.message list) = 
# 243 "<standard.mly>"
    ( x :: xs )
# 1436 "tmrRetparser.ml"
         in
        _menhir_goto_separated_nonempty_list_PERIOD_message_ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        _menhir_fail ()

and _menhir_goto_knowledge : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.knowledge) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    let _menhir_stack = (_menhir_stack, _menhir_s, _v) in
    match _menhir_s with
    | MenhirState62 | MenhirState5 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        assert (not _menhir_env._menhir_error);
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | SEMICOLON ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let _menhir_env = _menhir_discard _menhir_env in
            let _tok = _menhir_env._menhir_token in
            (match _tok with
            | IDENT _v ->
                _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState62 _v
            | LEFT_BRACE ->
                _menhir_run5 _menhir_env (Obj.magic _menhir_stack) MenhirState62
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState62)
        | RIGHT_BRACE ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, (x : (Proctype.knowledge))) = _menhir_stack in
            let _v : (Proctype.knowledge list) = 
# 241 "<standard.mly>"
    ( [ x ] )
# 1470 "tmrRetparser.ml"
             in
            _menhir_goto_separated_nonempty_list_SEMICOLON_knowledge_ _menhir_env _menhir_stack _menhir_s _v
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState4 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _, (knwlist : (Proctype.knowledge))) = _menhir_stack in
        let _1 = () in
        let _v : (Proctype.knowledge) = 
# 115 "tmrRetparser.mly"
                                   ( knwlist )
# 1487 "tmrRetparser.ml"
         in
        let _menhir_stack = (_menhir_stack, _v) in
        let _menhir_stack = Obj.magic _menhir_stack in
        assert (not _menhir_env._menhir_error);
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | AGENTS ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let _menhir_env = _menhir_discard _menhir_env in
            let _tok = _menhir_env._menhir_token in
            (match _tok with
            | IDENT _v ->
                _menhir_run70 _menhir_env (Obj.magic _menhir_stack) MenhirState68 _v
            | LEFT_BRACE ->
                _menhir_run69 _menhir_env (Obj.magic _menhir_stack) MenhirState68
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState68)
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            raise _eRR)
    | _ ->
        _menhir_fail ()

and _menhir_reduce25 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _v : (Proctype.message list) = 
# 142 "<standard.mly>"
    ( [] )
# 1520 "tmrRetparser.ml"
     in
    _menhir_goto_loption_separated_nonempty_list_PERIOD_message__ _menhir_env _menhir_stack _menhir_s _v

and _menhir_goto_message : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.message) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    let _menhir_stack = (_menhir_stack, _menhir_s, _v) in
    match _menhir_s with
    | MenhirState38 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        assert (not _menhir_env._menhir_error);
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | RIGHT_BRACE ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let _menhir_env = _menhir_discard _menhir_env in
            let _tok = _menhir_env._menhir_token in
            (match _tok with
            | AENC ->
                _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState40
            | HASHCON ->
                _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState40
            | IDENT _v ->
                _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState40 _v
            | K ->
                _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState40
            | LEFT_ANGLEBARCK ->
                _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState40
            | LEFT_BRACK ->
                _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState40
            | NONCE ->
                _menhir_run22 _menhir_env (Obj.magic _menhir_stack) MenhirState40
            | PK ->
                _menhir_run18 _menhir_env (Obj.magic _menhir_stack) MenhirState40
            | SENC ->
                _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState40
            | SK ->
                _menhir_run12 _menhir_env (Obj.magic _menhir_stack) MenhirState40
            | TMP ->
                _menhir_run8 _menhir_env (Obj.magic _menhir_stack) MenhirState40
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState40)
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState40 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (((_menhir_stack, _menhir_s), _, (v1 : (Proctype.message))), _, (v2 : (Proctype.message))) = _menhir_stack in
        let _4 = () in
        let _2 = () in
        let _1 = () in
        let _v : (Proctype.message) = 
# 209 "tmrRetparser.mly"
                                                      (`Aenc (v1,v2))
# 1580 "tmrRetparser.ml"
         in
        _menhir_goto_message _menhir_env _menhir_stack _menhir_s _v
    | MenhirState36 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        assert (not _menhir_env._menhir_error);
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | RIGHT_BRACK ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let _menhir_env = _menhir_discard _menhir_env in
            let _menhir_stack = Obj.magic _menhir_stack in
            let ((_menhir_stack, _menhir_s), _, (v : (Proctype.message))) = _menhir_stack in
            let _4 = () in
            let _2 = () in
            let _1 = () in
            let _v : (Proctype.message) = 
# 205 "tmrRetparser.mly"
                                             (`Hash v)
# 1599 "tmrRetparser.ml"
             in
            _menhir_goto_message _menhir_env _menhir_stack _menhir_s _v
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState71 | MenhirState83 | MenhirState48 | MenhirState27 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        assert (not _menhir_env._menhir_error);
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | PERIOD ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let _menhir_env = _menhir_discard _menhir_env in
            let _tok = _menhir_env._menhir_token in
            (match _tok with
            | AENC ->
                _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState48
            | HASHCON ->
                _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState48
            | IDENT _v ->
                _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState48 _v
            | K ->
                _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState48
            | LEFT_ANGLEBARCK ->
                _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState48
            | LEFT_BRACK ->
                _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState48
            | NONCE ->
                _menhir_run22 _menhir_env (Obj.magic _menhir_stack) MenhirState48
            | PK ->
                _menhir_run18 _menhir_env (Obj.magic _menhir_stack) MenhirState48
            | SENC ->
                _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState48
            | SK ->
                _menhir_run12 _menhir_env (Obj.magic _menhir_stack) MenhirState48
            | TMP ->
                _menhir_run8 _menhir_env (Obj.magic _menhir_stack) MenhirState48
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState48)
        | COMMA | RIGHT_ANGLEBARCK | RIGHT_BRACK ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, (x : (Proctype.message))) = _menhir_stack in
            let _v : (Proctype.message list) = 
# 241 "<standard.mly>"
    ( [ x ] )
# 1650 "tmrRetparser.ml"
             in
            _menhir_goto_separated_nonempty_list_PERIOD_message_ _menhir_env _menhir_stack _menhir_s _v
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState26 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        assert (not _menhir_env._menhir_error);
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | RIGHT_BRACK ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let _menhir_env = _menhir_discard _menhir_env in
            let _menhir_stack = Obj.magic _menhir_stack in
            let ((_menhir_stack, _menhir_s), _, (v : (Proctype.message))) = _menhir_stack in
            let _3 = () in
            let _1 = () in
            let _v : (Proctype.message) = 
# 212 "tmrRetparser.mly"
                                     ( v )
# 1674 "tmrRetparser.ml"
             in
            _menhir_goto_message _menhir_env _menhir_stack _menhir_s _v
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState17 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        assert (not _menhir_env._menhir_error);
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | RIGHT_BRACE ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let _menhir_env = _menhir_discard _menhir_env in
            let _tok = _menhir_env._menhir_token in
            (match _tok with
            | AENC ->
                _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState54
            | HASHCON ->
                _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState54
            | IDENT _v ->
                _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState54 _v
            | K ->
                _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState54
            | LEFT_ANGLEBARCK ->
                _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState54
            | LEFT_BRACK ->
                _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState54
            | NONCE ->
                _menhir_run22 _menhir_env (Obj.magic _menhir_stack) MenhirState54
            | PK ->
                _menhir_run18 _menhir_env (Obj.magic _menhir_stack) MenhirState54
            | SENC ->
                _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState54
            | SK ->
                _menhir_run12 _menhir_env (Obj.magic _menhir_stack) MenhirState54
            | TMP ->
                _menhir_run8 _menhir_env (Obj.magic _menhir_stack) MenhirState54
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState54)
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState54 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (((_menhir_stack, _menhir_s), _, (v1 : (Proctype.message))), _, (v2 : (Proctype.message))) = _menhir_stack in
        let _4 = () in
        let _2 = () in
        let _1 = () in
        let _v : (Proctype.message) = 
# 210 "tmrRetparser.mly"
                                                      (`Senc (v1,v2))
# 1735 "tmrRetparser.ml"
         in
        _menhir_goto_message _menhir_env _menhir_stack _menhir_s _v
    | MenhirState7 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let ((_menhir_stack, _menhir_s, (r : (
# 1 "tmrRetparser.mly"
       (string)
# 1744 "tmrRetparser.ml"
        ))), _, (m : (Proctype.message))) = _menhir_stack in
        let _2 = () in
        let _v : (Proctype.knowledge) = 
# 119 "tmrRetparser.mly"
                               ( `Knowledge (r,m) )
# 1750 "tmrRetparser.ml"
         in
        _menhir_goto_knowledge _menhir_env _menhir_stack _menhir_s _v
    | MenhirState86 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let ((((((_menhir_stack, _menhir_s), (seq : (
# 5 "tmrRetparser.mly"
       (int)
# 1759 "tmrRetparser.ml"
        ))), (s : (Proctype.sign))), (r : (
# 1 "tmrRetparser.mly"
       (string)
# 1763 "tmrRetparser.ml"
        ))), _, (ms : (Proctype.message list))), _, (m : (Proctype.message))) = _menhir_stack in
        let _11 = () in
        let _10 = () in
        let _8 = () in
        let _7 = () in
        let _5 = () in
        let _3 = () in
        let _1 = () in
        let _v : (Proctype.action) = 
# 184 "tmrRetparser.mly"
                                                                                                                            (`Send (seq,s,r,ms,m))
# 1775 "tmrRetparser.ml"
         in
        _menhir_goto_action _menhir_env _menhir_stack _menhir_s _v
    | MenhirState88 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let ((((_menhir_stack, _menhir_s), (seq : (
# 5 "tmrRetparser.mly"
       (int)
# 1784 "tmrRetparser.ml"
        ))), (s : (Proctype.sign))), _, (m : (Proctype.message))) = _menhir_stack in
        let _5 = () in
        let _3 = () in
        let _1 = () in
        let _v : (Proctype.action) = 
# 185 "tmrRetparser.mly"
                                                                (`Receive (seq,s,m))
# 1792 "tmrRetparser.ml"
         in
        _menhir_goto_action _menhir_env _menhir_stack _menhir_s _v
    | MenhirState116 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (((((_menhir_stack, _menhir_s), (seq : (
# 1 "tmrRetparser.mly"
       (string)
# 1801 "tmrRetparser.ml"
        ))), (r : (
# 1 "tmrRetparser.mly"
       (string)
# 1805 "tmrRetparser.ml"
        ))), (num : (
# 5 "tmrRetparser.mly"
       (int)
# 1809 "tmrRetparser.ml"
        ))), _, (m : (Proctype.message))) = _menhir_stack in
        let _8 = () in
        let _7 = () in
        let _5 = () in
        let _3 = () in
        let _1 = () in
        let _v : (Proctype.environment) = 
# 132 "tmrRetparser.mly"
                                                                                                                  ( `Env_agent (r,num,m))
# 1819 "tmrRetparser.ml"
         in
        _menhir_goto_envs _menhir_env _menhir_stack _menhir_s _v
    | MenhirState135 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (((((_menhir_stack, _menhir_s), (seq : (
# 1 "tmrRetparser.mly"
       (string)
# 1828 "tmrRetparser.ml"
        ))), _, (r1 : (
# 1 "tmrRetparser.mly"
       (string)
# 1832 "tmrRetparser.ml"
        ))), (r2 : (
# 1 "tmrRetparser.mly"
       (string)
# 1836 "tmrRetparser.ml"
        ))), _, (m : (Proctype.message))) = _menhir_stack in
        let _7 = () in
        let _5 = () in
        let _3 = () in
        let _1 = () in
        let _v : (Proctype.goal) = 
# 146 "tmrRetparser.mly"
                                                                                    ( `Agreegoal (seq,r1,r2,m))
# 1845 "tmrRetparser.ml"
         in
        _menhir_goto_goal _menhir_env _menhir_stack _menhir_s _v
    | MenhirState131 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        assert (not _menhir_env._menhir_error);
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | CONF ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let _menhir_env = _menhir_discard _menhir_env in
            let _tok = _menhir_env._menhir_token in
            (match _tok with
            | IDENT _v ->
                let _menhir_stack = Obj.magic _menhir_stack in
                let _menhir_stack = (_menhir_stack, _v) in
                let _menhir_env = _menhir_discard _menhir_env in
                let _tok = _menhir_env._menhir_token in
                (match _tok with
                | AND ->
                    let _menhir_stack = Obj.magic _menhir_stack in
                    let _menhir_env = _menhir_discard _menhir_env in
                    let _tok = _menhir_env._menhir_token in
                    (match _tok with
                    | IDENT _v ->
                        let _menhir_stack = Obj.magic _menhir_stack in
                        let _menhir_env = _menhir_discard _menhir_env in
                        let _menhir_stack = Obj.magic _menhir_stack in
                        let (r2 : (
# 1 "tmrRetparser.mly"
       (string)
# 1876 "tmrRetparser.ml"
                        )) = _v in
                        let ((((_menhir_stack, _menhir_s), (seq : (
# 1 "tmrRetparser.mly"
       (string)
# 1881 "tmrRetparser.ml"
                        ))), _, (m : (Proctype.message))), (r1 : (
# 1 "tmrRetparser.mly"
       (string)
# 1885 "tmrRetparser.ml"
                        ))) = _menhir_stack in
                        let _7 = () in
                        let _5 = () in
                        let _3 = () in
                        let _1 = () in
                        let _v : (Proctype.goal) = 
# 145 "tmrRetparser.mly"
                                                                                          ( `Secretgoal1 (seq,m,r1,r2))
# 1894 "tmrRetparser.ml"
                         in
                        _menhir_goto_goal _menhir_env _menhir_stack _menhir_s _v
                    | _ ->
                        assert (not _menhir_env._menhir_error);
                        _menhir_env._menhir_error <- true;
                        let _menhir_stack = Obj.magic _menhir_stack in
                        let ((_menhir_stack, _menhir_s, _), _) = _menhir_stack in
                        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
                | _ ->
                    assert (not _menhir_env._menhir_error);
                    _menhir_env._menhir_error <- true;
                    let _menhir_stack = Obj.magic _menhir_stack in
                    let ((_menhir_stack, _menhir_s, _), _) = _menhir_stack in
                    _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                let _menhir_stack = Obj.magic _menhir_stack in
                let (_menhir_stack, _menhir_s, _) = _menhir_stack in
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
        | END | RIGHT_BRACE | SEMICOLON ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let (((_menhir_stack, _menhir_s), (seq : (
# 1 "tmrRetparser.mly"
       (string)
# 1920 "tmrRetparser.ml"
            ))), _, (m : (Proctype.message))) = _menhir_stack in
            let _3 = () in
            let _1 = () in
            let _v : (Proctype.goal) = 
# 144 "tmrRetparser.mly"
                                                         ( `Secretgoal (seq,m))
# 1927 "tmrRetparser.ml"
             in
            _menhir_goto_goal _menhir_env _menhir_stack _menhir_s _v
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | _ ->
        _menhir_fail ()

and _menhir_reduce35 : _menhir_env -> 'ttv_tail * _menhir_state * (
# 1 "tmrRetparser.mly"
       (string)
# 1942 "tmrRetparser.ml"
) -> 'ttv_return =
  fun _menhir_env _menhir_stack ->
    let (_menhir_stack, _menhir_s, (id : (
# 1 "tmrRetparser.mly"
       (string)
# 1948 "tmrRetparser.ml"
    ))) = _menhir_stack in
    let _v : (Proctype.message) = 
# 194 "tmrRetparser.mly"
             ( `Str id )
# 1953 "tmrRetparser.ml"
     in
    _menhir_goto_message _menhir_env _menhir_stack _menhir_s _v

and _menhir_goto_loption_separated_nonempty_list_SEMICOLON_knowledge__ : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.knowledge list) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    let _menhir_stack = Obj.magic _menhir_stack in
    let _menhir_stack = Obj.magic _menhir_stack in
    let (xs : (Proctype.knowledge list)) = _v in
    let _v : (Proctype.knowledge list) = let knws = 
# 232 "<standard.mly>"
    ( xs )
# 1965 "tmrRetparser.ml"
     in
    
# 124 "tmrRetparser.mly"
                                                 ( knws )
# 1970 "tmrRetparser.ml"
     in
    let _menhir_stack = (_menhir_stack, _menhir_s, _v) in
    let _menhir_stack = Obj.magic _menhir_stack in
    assert (not _menhir_env._menhir_error);
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | RIGHT_BRACE ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_env = _menhir_discard _menhir_env in
        let _menhir_stack = Obj.magic _menhir_stack in
        let ((_menhir_stack, _menhir_s), _, (knws : (Proctype.knowledge list))) = _menhir_stack in
        let _3 = () in
        let _1 = () in
        let _v : (Proctype.knowledge) = 
# 120 "tmrRetparser.mly"
                                                   ( `Knowledge_list knws)
# 1987 "tmrRetparser.ml"
         in
        _menhir_goto_knowledge _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s

and _menhir_run8 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | LEFT_BRACK ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_env = _menhir_discard _menhir_env in
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | IDENT _v ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let _menhir_stack = (_menhir_stack, _v) in
            let _menhir_env = _menhir_discard _menhir_env in
            let _tok = _menhir_env._menhir_token in
            (match _tok with
            | RIGHT_BRACK ->
                let _menhir_stack = Obj.magic _menhir_stack in
                let _menhir_env = _menhir_discard _menhir_env in
                let _menhir_stack = Obj.magic _menhir_stack in
                let ((_menhir_stack, _menhir_s), (mn : (
# 1 "tmrRetparser.mly"
       (string)
# 2021 "tmrRetparser.ml"
                ))) = _menhir_stack in
                let _4 = () in
                let _2 = () in
                let _1 = () in
                let _v : (Proctype.message) = 
# 201 "tmrRetparser.mly"
                                       (`Tmp mn)
# 2029 "tmrRetparser.ml"
                 in
                _menhir_goto_message _menhir_env _menhir_stack _menhir_s _v
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                let _menhir_stack = Obj.magic _menhir_stack in
                let ((_menhir_stack, _menhir_s), _) = _menhir_stack in
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s

and _menhir_run12 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | LEFT_BRACK ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_env = _menhir_discard _menhir_env in
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | IDENT _v ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let _menhir_stack = (_menhir_stack, _v) in
            let _menhir_env = _menhir_discard _menhir_env in
            let _tok = _menhir_env._menhir_token in
            (match _tok with
            | RIGHT_BRACK ->
                let _menhir_stack = Obj.magic _menhir_stack in
                let _menhir_env = _menhir_discard _menhir_env in
                let _menhir_stack = Obj.magic _menhir_stack in
                let ((_menhir_stack, _menhir_s), (rlnm : (
# 1 "tmrRetparser.mly"
       (string)
# 2075 "tmrRetparser.ml"
                ))) = _menhir_stack in
                let _4 = () in
                let _2 = () in
                let _1 = () in
                let _v : (Proctype.message) = 
# 200 "tmrRetparser.mly"
                                         ( `Sk rlnm )
# 2083 "tmrRetparser.ml"
                 in
                _menhir_goto_message _menhir_env _menhir_stack _menhir_s _v
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                let _menhir_stack = Obj.magic _menhir_stack in
                let ((_menhir_stack, _menhir_s), _) = _menhir_stack in
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s

and _menhir_run16 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | LEFT_BRACE ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_env = _menhir_discard _menhir_env in
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | AENC ->
            _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState17
        | HASHCON ->
            _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState17
        | IDENT _v ->
            _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState17 _v
        | K ->
            _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState17
        | LEFT_ANGLEBARCK ->
            _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState17
        | LEFT_BRACK ->
            _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState17
        | NONCE ->
            _menhir_run22 _menhir_env (Obj.magic _menhir_stack) MenhirState17
        | PK ->
            _menhir_run18 _menhir_env (Obj.magic _menhir_stack) MenhirState17
        | SENC ->
            _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState17
        | SK ->
            _menhir_run12 _menhir_env (Obj.magic _menhir_stack) MenhirState17
        | TMP ->
            _menhir_run8 _menhir_env (Obj.magic _menhir_stack) MenhirState17
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState17)
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s

and _menhir_run18 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | LEFT_BRACK ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_env = _menhir_discard _menhir_env in
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | IDENT _v ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let _menhir_stack = (_menhir_stack, _v) in
            let _menhir_env = _menhir_discard _menhir_env in
            let _tok = _menhir_env._menhir_token in
            (match _tok with
            | RIGHT_BRACK ->
                let _menhir_stack = Obj.magic _menhir_stack in
                let _menhir_env = _menhir_discard _menhir_env in
                let _menhir_stack = Obj.magic _menhir_stack in
                let ((_menhir_stack, _menhir_s), (rlnm : (
# 1 "tmrRetparser.mly"
       (string)
# 2173 "tmrRetparser.ml"
                ))) = _menhir_stack in
                let _4 = () in
                let _2 = () in
                let _1 = () in
                let _v : (Proctype.message) = 
# 199 "tmrRetparser.mly"
                                         ( `Pk rlnm )
# 2181 "tmrRetparser.ml"
                 in
                _menhir_goto_message _menhir_env _menhir_stack _menhir_s _v
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                let _menhir_stack = Obj.magic _menhir_stack in
                let ((_menhir_stack, _menhir_s), _) = _menhir_stack in
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s

and _menhir_run22 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | LEFT_BRACK ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_env = _menhir_discard _menhir_env in
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | IDENT _v ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let _menhir_stack = (_menhir_stack, _v) in
            let _menhir_env = _menhir_discard _menhir_env in
            let _tok = _menhir_env._menhir_token in
            (match _tok with
            | RIGHT_BRACK ->
                let _menhir_stack = Obj.magic _menhir_stack in
                let _menhir_env = _menhir_discard _menhir_env in
                let _menhir_stack = Obj.magic _menhir_stack in
                let ((_menhir_stack, _menhir_s), (id : (
# 1 "tmrRetparser.mly"
       (string)
# 2227 "tmrRetparser.ml"
                ))) = _menhir_stack in
                let _4 = () in
                let _2 = () in
                let _1 = () in
                let _v : (Proctype.message) = 
# 196 "tmrRetparser.mly"
                                          (`Var id )
# 2235 "tmrRetparser.ml"
                 in
                _menhir_goto_message _menhir_env _menhir_stack _menhir_s _v
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                let _menhir_stack = Obj.magic _menhir_stack in
                let ((_menhir_stack, _menhir_s), _) = _menhir_stack in
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s

and _menhir_run26 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | AENC ->
        _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState26
    | HASHCON ->
        _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState26
    | IDENT _v ->
        _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState26 _v
    | K ->
        _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState26
    | LEFT_ANGLEBARCK ->
        _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState26
    | LEFT_BRACK ->
        _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState26
    | NONCE ->
        _menhir_run22 _menhir_env (Obj.magic _menhir_stack) MenhirState26
    | PK ->
        _menhir_run18 _menhir_env (Obj.magic _menhir_stack) MenhirState26
    | SENC ->
        _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState26
    | SK ->
        _menhir_run12 _menhir_env (Obj.magic _menhir_stack) MenhirState26
    | TMP ->
        _menhir_run8 _menhir_env (Obj.magic _menhir_stack) MenhirState26
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState26

and _menhir_run27 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | AENC ->
        _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState27
    | HASHCON ->
        _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState27
    | IDENT _v ->
        _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState27 _v
    | K ->
        _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState27
    | LEFT_ANGLEBARCK ->
        _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState27
    | LEFT_BRACK ->
        _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState27
    | NONCE ->
        _menhir_run22 _menhir_env (Obj.magic _menhir_stack) MenhirState27
    | PK ->
        _menhir_run18 _menhir_env (Obj.magic _menhir_stack) MenhirState27
    | SENC ->
        _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState27
    | SK ->
        _menhir_run12 _menhir_env (Obj.magic _menhir_stack) MenhirState27
    | TMP ->
        _menhir_run8 _menhir_env (Obj.magic _menhir_stack) MenhirState27
    | RIGHT_ANGLEBARCK ->
        _menhir_reduce25 _menhir_env (Obj.magic _menhir_stack) MenhirState27
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState27

and _menhir_run28 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | LEFT_BRACK ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_env = _menhir_discard _menhir_env in
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | IDENT _v ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let _menhir_stack = (_menhir_stack, _v) in
            let _menhir_env = _menhir_discard _menhir_env in
            let _tok = _menhir_env._menhir_token in
            (match _tok with
            | COMMA ->
                let _menhir_stack = Obj.magic _menhir_stack in
                let _menhir_env = _menhir_discard _menhir_env in
                let _tok = _menhir_env._menhir_token in
                (match _tok with
                | IDENT _v ->
                    let _menhir_stack = Obj.magic _menhir_stack in
                    let _menhir_stack = (_menhir_stack, _v) in
                    let _menhir_env = _menhir_discard _menhir_env in
                    let _tok = _menhir_env._menhir_token in
                    (match _tok with
                    | RIGHT_BRACK ->
                        let _menhir_stack = Obj.magic _menhir_stack in
                        let _menhir_env = _menhir_discard _menhir_env in
                        let _menhir_stack = Obj.magic _menhir_stack in
                        let (((_menhir_stack, _menhir_s), (rlnm1 : (
# 1 "tmrRetparser.mly"
       (string)
# 2360 "tmrRetparser.ml"
                        ))), (rlnm2 : (
# 1 "tmrRetparser.mly"
       (string)
# 2364 "tmrRetparser.ml"
                        ))) = _menhir_stack in
                        let _6 = () in
                        let _4 = () in
                        let _2 = () in
                        let _1 = () in
                        let _v : (Proctype.message) = 
# 204 "tmrRetparser.mly"
                                                           ( `K (rlnm1,rlnm2))
# 2373 "tmrRetparser.ml"
                         in
                        _menhir_goto_message _menhir_env _menhir_stack _menhir_s _v
                    | _ ->
                        assert (not _menhir_env._menhir_error);
                        _menhir_env._menhir_error <- true;
                        let _menhir_stack = Obj.magic _menhir_stack in
                        let (((_menhir_stack, _menhir_s), _), _) = _menhir_stack in
                        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
                | _ ->
                    assert (not _menhir_env._menhir_error);
                    _menhir_env._menhir_error <- true;
                    let _menhir_stack = Obj.magic _menhir_stack in
                    let ((_menhir_stack, _menhir_s), _) = _menhir_stack in
                    _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                let _menhir_stack = Obj.magic _menhir_stack in
                let ((_menhir_stack, _menhir_s), _) = _menhir_stack in
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s

and _menhir_run34 : _menhir_env -> 'ttv_tail -> _menhir_state -> (
# 1 "tmrRetparser.mly"
       (string)
# 2410 "tmrRetparser.ml"
) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    let _menhir_stack = (_menhir_stack, _menhir_s, _v) in
    let _menhir_env = _menhir_discard _menhir_env in
    _menhir_reduce35 _menhir_env (Obj.magic _menhir_stack)

and _menhir_run35 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | LEFT_BRACK ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_env = _menhir_discard _menhir_env in
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | AENC ->
            _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState36
        | HASHCON ->
            _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState36
        | IDENT _v ->
            _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState36 _v
        | K ->
            _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState36
        | LEFT_ANGLEBARCK ->
            _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState36
        | LEFT_BRACK ->
            _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState36
        | NONCE ->
            _menhir_run22 _menhir_env (Obj.magic _menhir_stack) MenhirState36
        | PK ->
            _menhir_run18 _menhir_env (Obj.magic _menhir_stack) MenhirState36
        | SENC ->
            _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState36
        | SK ->
            _menhir_run12 _menhir_env (Obj.magic _menhir_stack) MenhirState36
        | TMP ->
            _menhir_run8 _menhir_env (Obj.magic _menhir_stack) MenhirState36
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState36)
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s

and _menhir_run37 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | LEFT_BRACE ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_env = _menhir_discard _menhir_env in
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | AENC ->
            _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState38
        | HASHCON ->
            _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState38
        | IDENT _v ->
            _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState38 _v
        | K ->
            _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState38
        | LEFT_ANGLEBARCK ->
            _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState38
        | LEFT_BRACK ->
            _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState38
        | NONCE ->
            _menhir_run22 _menhir_env (Obj.magic _menhir_stack) MenhirState38
        | PK ->
            _menhir_run18 _menhir_env (Obj.magic _menhir_stack) MenhirState38
        | SENC ->
            _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState38
        | SK ->
            _menhir_run12 _menhir_env (Obj.magic _menhir_stack) MenhirState38
        | TMP ->
            _menhir_run8 _menhir_env (Obj.magic _menhir_stack) MenhirState38
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState38)
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s

and _menhir_errorcase : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    match _menhir_s with
    | MenhirState148 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState142 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState135 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let ((_menhir_stack, _menhir_s, _), _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState131 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let ((_menhir_stack, _menhir_s), _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState128 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        raise _eRR
    | MenhirState122 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState118 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState116 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let ((((_menhir_stack, _menhir_s), _), _), _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState108 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        raise _eRR
    | MenhirState104 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState96 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState90 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState88 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (((_menhir_stack, _menhir_s), _), _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState86 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState83 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let ((((_menhir_stack, _menhir_s), _), _), _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState73 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState71 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState69 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState68 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        raise _eRR
    | MenhirState62 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState54 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState48 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState40 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState38 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState36 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState27 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState26 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState17 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState7 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState5 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState4 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        raise _eRR

and _menhir_run5 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | IDENT _v ->
        _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState5 _v
    | LEFT_BRACE ->
        _menhir_run5 _menhir_env (Obj.magic _menhir_stack) MenhirState5
    | RIGHT_BRACE ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_s = MenhirState5 in
        let _v : (Proctype.knowledge list) = 
# 142 "<standard.mly>"
    ( [] )
# 2645 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_SEMICOLON_knowledge__ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState5

and _menhir_run6 : _menhir_env -> 'ttv_tail -> _menhir_state -> (
# 1 "tmrRetparser.mly"
       (string)
# 2656 "tmrRetparser.ml"
) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    let _menhir_stack = (_menhir_stack, _menhir_s, _v) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | COLON ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_env = _menhir_discard _menhir_env in
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | AENC ->
            _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState7
        | HASHCON ->
            _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState7
        | IDENT _v ->
            _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState7 _v
        | K ->
            _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState7
        | LEFT_ANGLEBARCK ->
            _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState7
        | LEFT_BRACK ->
            _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState7
        | NONCE ->
            _menhir_run22 _menhir_env (Obj.magic _menhir_stack) MenhirState7
        | PK ->
            _menhir_run18 _menhir_env (Obj.magic _menhir_stack) MenhirState7
        | SENC ->
            _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState7
        | SK ->
            _menhir_run12 _menhir_env (Obj.magic _menhir_stack) MenhirState7
        | TMP ->
            _menhir_run8 _menhir_env (Obj.magic _menhir_stack) MenhirState7
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState7)
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s

and _menhir_goto_prog : _menhir_env -> 'ttv_tail -> (Proctype.protocols option) -> 'ttv_return =
  fun _menhir_env _menhir_stack _v ->
    let _menhir_stack = Obj.magic _menhir_stack in
    let _menhir_stack = Obj.magic _menhir_stack in
    let (_1 : (Proctype.protocols option)) = _v in
    Obj.magic _1

and _menhir_discard : _menhir_env -> _menhir_env =
  fun _menhir_env ->
    let lexer = _menhir_env._menhir_lexer in
    let lexbuf = _menhir_env._menhir_lexbuf in
    let _tok = lexer lexbuf in
    {
      _menhir_lexer = lexer;
      _menhir_lexbuf = lexbuf;
      _menhir_token = _tok;
      _menhir_error = false;
    }

and prog : (Lexing.lexbuf -> token) -> Lexing.lexbuf -> (Proctype.protocols option) =
  fun lexer lexbuf ->
    let _menhir_env = let _tok = Obj.magic () in
    {
      _menhir_lexer = lexer;
      _menhir_lexbuf = lexbuf;
      _menhir_token = _tok;
      _menhir_error = false;
    } in
    Obj.magic (let _menhir_stack = ((), _menhir_env._menhir_lexbuf.Lexing.lex_curr_p) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | EOF ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let _1 = () in
        let _v : (Proctype.protocols option) = 
# 63 "tmrRetparser.mly"
              ( None   )
# 2740 "tmrRetparser.ml"
         in
        _menhir_goto_prog _menhir_env _menhir_stack _v
    | PROTOCOL ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_env = _menhir_discard _menhir_env in
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | IDENT _v ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let _menhir_stack = (_menhir_stack, _v) in
            let _menhir_env = _menhir_discard _menhir_env in
            let _tok = _menhir_env._menhir_token in
            (match _tok with
            | COLON ->
                let _menhir_stack = Obj.magic _menhir_stack in
                let _menhir_env = _menhir_discard _menhir_env in
                let _tok = _menhir_env._menhir_token in
                (match _tok with
                | KNOWLEDGES ->
                    let _menhir_stack = Obj.magic _menhir_stack in
                    let _menhir_env = _menhir_discard _menhir_env in
                    let _tok = _menhir_env._menhir_token in
                    (match _tok with
                    | IDENT _v ->
                        _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState4 _v
                    | LEFT_BRACE ->
                        _menhir_run5 _menhir_env (Obj.magic _menhir_stack) MenhirState4
                    | _ ->
                        assert (not _menhir_env._menhir_error);
                        _menhir_env._menhir_error <- true;
                        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState4)
                | _ ->
                    assert (not _menhir_env._menhir_error);
                    _menhir_env._menhir_error <- true;
                    let _menhir_stack = Obj.magic _menhir_stack in
                    raise _eRR)
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                let _menhir_stack = Obj.magic _menhir_stack in
                raise _eRR)
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            raise _eRR)
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        let _menhir_stack = Obj.magic _menhir_stack in
        raise _eRR)

# 269 "<standard.mly>"
  

# 2796 "tmrRetparser.ml"
