
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
    | FORMAT
    | F2
    | F1
    | EXP
    | EOF
    | ENVIRONMENT
    | END
    | CONST
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
  | MenhirState185
  | MenhirState179
  | MenhirState172
  | MenhirState168
  | MenhirState165
  | MenhirState159
  | MenhirState155
  | MenhirState153
  | MenhirState145
  | MenhirState141
  | MenhirState133
  | MenhirState127
  | MenhirState125
  | MenhirState123
  | MenhirState120
  | MenhirState108
  | MenhirState106
  | MenhirState104
  | MenhirState103
  | MenhirState99
  | MenhirState92
  | MenhirState90
  | MenhirState89
  | MenhirState84
  | MenhirState75
  | MenhirState73
  | MenhirState72
  | MenhirState69
  | MenhirState65
  | MenhirState59
  | MenhirState53
  | MenhirState49
  | MenhirState46
  | MenhirState44
  | MenhirState38
  | MenhirState36
  | MenhirState27
  | MenhirState26
  | MenhirState25
  | MenhirState15
  | MenhirState5
  | MenhirState4

let rec _menhir_goto_separated_nonempty_list_SEMICOLON_agent_ : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.agent list) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    match _menhir_s with
    | MenhirState104 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (x : (Proctype.agent list)) = _v in
        let _v : (Proctype.agent list) = 
# 144 "<standard.mly>"
    ( x )
# 148 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_SEMICOLON_agent__ _menhir_env _menhir_stack _menhir_s _v
    | MenhirState141 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (xs : (Proctype.agent list)) = _v in
        let (_menhir_stack, _menhir_s, (x : (Proctype.agent))) = _menhir_stack in
        let _2 = () in
        let _v : (Proctype.agent list) = 
# 243 "<standard.mly>"
    ( x :: xs )
# 160 "tmrRetparser.ml"
         in
        _menhir_goto_separated_nonempty_list_SEMICOLON_agent_ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        _menhir_fail ()

and _menhir_goto_agent : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.agent) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    let _menhir_stack = (_menhir_stack, _menhir_s, _v) in
    match _menhir_s with
    | MenhirState141 | MenhirState104 ->
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
                _menhir_run105 _menhir_env (Obj.magic _menhir_stack) MenhirState141 _v
            | LEFT_BRACE ->
                _menhir_run104 _menhir_env (Obj.magic _menhir_stack) MenhirState141
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState141)
        | RIGHT_BRACE ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, (x : (Proctype.agent))) = _menhir_stack in
            let _v : (Proctype.agent list) = 
# 241 "<standard.mly>"
    ( [ x ] )
# 194 "tmrRetparser.ml"
             in
            _menhir_goto_separated_nonempty_list_SEMICOLON_agent_ _menhir_env _menhir_stack _menhir_s _v
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState103 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _, (ags : (Proctype.agent))) = _menhir_stack in
        let _1 = () in
        let _v : (Proctype.agent) = 
# 94 "tmrRetparser.mly"
                      (ags)
# 211 "tmrRetparser.ml"
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
                _menhir_run155 _menhir_env (Obj.magic _menhir_stack) MenhirState145
            | LEFT_MIDBRACE ->
                _menhir_run146 _menhir_env (Obj.magic _menhir_stack) MenhirState145
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState145)
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
# 247 "tmrRetparser.ml"
     in
    
# 143 "tmrRetparser.mly"
                                            ( gols )
# 252 "tmrRetparser.ml"
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
# 139 "tmrRetparser.mly"
                                              (`Goallist gols )
# 269 "tmrRetparser.ml"
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
# 287 "tmrRetparser.ml"
     in
    
# 128 "tmrRetparser.mly"
                                        (envs)
# 292 "tmrRetparser.ml"
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
# 125 "tmrRetparser.mly"
                                             (`Envlist envs )
# 309 "tmrRetparser.ml"
         in
        _menhir_goto_envs _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s

and _menhir_goto_loption_separated_nonempty_list_SEMICOLON_agent__ : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.agent list) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    let _menhir_stack = Obj.magic _menhir_stack in
    let _menhir_stack = Obj.magic _menhir_stack in
    let (xs : (Proctype.agent list)) = _v in
    let _v : (Proctype.agent list) = let ags = 
# 232 "<standard.mly>"
    ( xs )
# 327 "tmrRetparser.ml"
     in
    
# 103 "tmrRetparser.mly"
                                         (ags)
# 332 "tmrRetparser.ml"
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
# 99 "tmrRetparser.mly"
                                               (`Agentlist agts)
# 349 "tmrRetparser.ml"
         in
        _menhir_goto_agent _menhir_env _menhir_stack _menhir_s _v
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
# 367 "tmrRetparser.ml"
     in
    
# 169 "tmrRetparser.mly"
                                           ( acts )
# 372 "tmrRetparser.ml"
     in
    let _menhir_stack = (_menhir_stack, _menhir_s, _v) in
    match _menhir_s with
    | MenhirState127 ->
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
# 165 "tmrRetparser.mly"
                                               ( `Actlist acts)
# 391 "tmrRetparser.ml"
             in
            _menhir_goto_action _menhir_env _menhir_stack _menhir_s _v
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState108 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (((_menhir_stack, _menhir_s, (name : (
# 1 "tmrRetparser.mly"
       (string)
# 406 "tmrRetparser.ml"
        ))), _, (ms : (Proctype.message list))), _, (actlist : (Proctype.action list))) = _menhir_stack in
        let _4 = () in
        let _2 = () in
        let _v : (Proctype.agent) = 
# 97 "tmrRetparser.mly"
                                                                     (`Agent (name,ms,actlist))
# 413 "tmrRetparser.ml"
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
            _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState125
        | CONST ->
            _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState125
        | EXP ->
            _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState125
        | HASHCON ->
            _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState125
        | IDENT _v ->
            _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState125 _v
        | K ->
            _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState125
        | LEFT_ANGLEBARCK ->
            _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState125
        | LEFT_BRACK ->
            _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState125
        | MOD ->
            _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState125
        | NONCE ->
            _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState125
        | PK ->
            _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState125
        | SENC ->
            _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState125
        | SK ->
            _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState125
        | TMP ->
            _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState125
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState125)
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
                        _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState120
                    | CONST ->
                        _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState120
                    | EXP ->
                        _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState120
                    | HASHCON ->
                        _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState120
                    | IDENT _v ->
                        _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState120 _v
                    | K ->
                        _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState120
                    | LEFT_ANGLEBARCK ->
                        _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState120
                    | LEFT_BRACK ->
                        _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState120
                    | MOD ->
                        _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState120
                    | NONCE ->
                        _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState120
                    | PK ->
                        _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState120
                    | SENC ->
                        _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState120
                    | SK ->
                        _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState120
                    | TMP ->
                        _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState120
                    | RIGHT_BRACK ->
                        _menhir_reduce28 _menhir_env (Obj.magic _menhir_stack) MenhirState120
                    | _ ->
                        assert (not _menhir_env._menhir_error);
                        _menhir_env._menhir_error <- true;
                        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState120)
                | _ ->
                    assert (not _menhir_env._menhir_error);
                    _menhir_env._menhir_error <- true;
                    let _menhir_stack = Obj.magic _menhir_stack in
                    let (((((_menhir_stack, _menhir_s), _), _), _), _) = _menhir_stack in
                    _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                let _menhir_stack = Obj.magic _menhir_stack in
                let (((((_menhir_stack, _menhir_s), _), _), _), _) = _menhir_stack in
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
        let ((((_menhir_stack, _menhir_s), _), _), _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s

and _menhir_goto_separated_nonempty_list_SEMICOLON_goal_ : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.goal list) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    match _menhir_s with
    | MenhirState179 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (x : (Proctype.goal list)) = _v in
        let _v : (Proctype.goal list) = 
# 144 "<standard.mly>"
    ( x )
# 553 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_SEMICOLON_goal__ _menhir_env _menhir_stack _menhir_s _v
    | MenhirState185 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (xs : (Proctype.goal list)) = _v in
        let (_menhir_stack, _menhir_s, (x : (Proctype.goal))) = _menhir_stack in
        let _2 = () in
        let _v : (Proctype.goal list) = 
# 243 "<standard.mly>"
    ( x :: xs )
# 565 "tmrRetparser.ml"
         in
        _menhir_goto_separated_nonempty_list_SEMICOLON_goal_ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        _menhir_fail ()

and _menhir_run166 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
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
                _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState168
            | CONST ->
                _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState168
            | EXP ->
                _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState168
            | HASHCON ->
                _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState168
            | IDENT _v ->
                let _menhir_stack = Obj.magic _menhir_stack in
                let _menhir_s = MenhirState168 in
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
                                _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState172
                            | CONST ->
                                _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState172
                            | EXP ->
                                _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState172
                            | HASHCON ->
                                _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState172
                            | IDENT _v ->
                                _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState172 _v
                            | K ->
                                _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState172
                            | LEFT_ANGLEBARCK ->
                                _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState172
                            | LEFT_BRACK ->
                                _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState172
                            | MOD ->
                                _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState172
                            | NONCE ->
                                _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState172
                            | PK ->
                                _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState172
                            | SENC ->
                                _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState172
                            | SK ->
                                _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState172
                            | TMP ->
                                _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState172
                            | _ ->
                                assert (not _menhir_env._menhir_error);
                                _menhir_env._menhir_error <- true;
                                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState172)
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
                    _menhir_reduce40 _menhir_env (Obj.magic _menhir_stack)
                | _ ->
                    assert (not _menhir_env._menhir_error);
                    _menhir_env._menhir_error <- true;
                    let _menhir_stack = Obj.magic _menhir_stack in
                    let (_menhir_stack, _menhir_s, _) = _menhir_stack in
                    _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
            | K ->
                _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState168
            | LEFT_ANGLEBARCK ->
                _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState168
            | LEFT_BRACK ->
                _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState168
            | MOD ->
                _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState168
            | NONCE ->
                _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState168
            | PK ->
                _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState168
            | SENC ->
                _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState168
            | SK ->
                _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState168
            | TMP ->
                _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState168
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState168)
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

and _menhir_run179 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | LEFT_BRACE ->
        _menhir_run179 _menhir_env (Obj.magic _menhir_stack) MenhirState179
    | LEFT_MIDBRACE ->
        _menhir_run166 _menhir_env (Obj.magic _menhir_stack) MenhirState179
    | RIGHT_BRACE ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_s = MenhirState179 in
        let _v : (Proctype.goal list) = 
# 142 "<standard.mly>"
    ( [] )
# 722 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_SEMICOLON_goal__ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState179

and _menhir_goto_separated_nonempty_list_SEMICOLON_envs_ : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.environment list) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    match _menhir_s with
    | MenhirState155 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (x : (Proctype.environment list)) = _v in
        let _v : (Proctype.environment list) = 
# 144 "<standard.mly>"
    ( x )
# 740 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_SEMICOLON_envs__ _menhir_env _menhir_stack _menhir_s _v
    | MenhirState159 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (xs : (Proctype.environment list)) = _v in
        let (_menhir_stack, _menhir_s, (x : (Proctype.environment))) = _menhir_stack in
        let _2 = () in
        let _v : (Proctype.environment list) = 
# 243 "<standard.mly>"
    ( x :: xs )
# 752 "tmrRetparser.ml"
         in
        _menhir_goto_separated_nonempty_list_SEMICOLON_envs_ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        _menhir_fail ()

and _menhir_run146 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
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
                                    _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState153
                                | CONST ->
                                    _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState153
                                | EXP ->
                                    _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState153
                                | HASHCON ->
                                    _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState153
                                | IDENT _v ->
                                    _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState153 _v
                                | K ->
                                    _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState153
                                | LEFT_ANGLEBARCK ->
                                    _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState153
                                | LEFT_BRACK ->
                                    _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState153
                                | MOD ->
                                    _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState153
                                | NONCE ->
                                    _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState153
                                | PK ->
                                    _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState153
                                | SENC ->
                                    _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState153
                                | SK ->
                                    _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState153
                                | TMP ->
                                    _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState153
                                | _ ->
                                    assert (not _menhir_env._menhir_error);
                                    _menhir_env._menhir_error <- true;
                                    _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState153)
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

and _menhir_run155 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | LEFT_BRACE ->
        _menhir_run155 _menhir_env (Obj.magic _menhir_stack) MenhirState155
    | LEFT_MIDBRACE ->
        _menhir_run146 _menhir_env (Obj.magic _menhir_stack) MenhirState155
    | RIGHT_BRACE ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_s = MenhirState155 in
        let _v : (Proctype.environment list) = 
# 142 "<standard.mly>"
    ( [] )
# 893 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_SEMICOLON_envs__ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState155

and _menhir_goto_separated_nonempty_list_COMMA_action_ : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.action list) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    match _menhir_s with
    | MenhirState108 | MenhirState127 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (x : (Proctype.action list)) = _v in
        let _v : (Proctype.action list) = 
# 144 "<standard.mly>"
    ( x )
# 911 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_COMMA_action__ _menhir_env _menhir_stack _menhir_s _v
    | MenhirState133 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (xs : (Proctype.action list)) = _v in
        let (_menhir_stack, _menhir_s, (x : (Proctype.action))) = _menhir_stack in
        let _2 = () in
        let _v : (Proctype.action list) = 
# 243 "<standard.mly>"
    ( x :: xs )
# 923 "tmrRetparser.ml"
         in
        _menhir_goto_separated_nonempty_list_COMMA_action_ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        _menhir_fail ()

and _menhir_run104 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | IDENT _v ->
        _menhir_run105 _menhir_env (Obj.magic _menhir_stack) MenhirState104 _v
    | LEFT_BRACE ->
        _menhir_run104 _menhir_env (Obj.magic _menhir_stack) MenhirState104
    | RIGHT_BRACE ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_s = MenhirState104 in
        let _v : (Proctype.agent list) = 
# 142 "<standard.mly>"
    ( [] )
# 945 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_SEMICOLON_agent__ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState104

and _menhir_run105 : _menhir_env -> 'ttv_tail -> _menhir_state -> (
# 1 "tmrRetparser.mly"
       (string)
# 956 "tmrRetparser.ml"
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
            _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState106
        | CONST ->
            _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState106
        | EXP ->
            _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState106
        | HASHCON ->
            _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState106
        | IDENT _v ->
            _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState106 _v
        | K ->
            _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState106
        | LEFT_ANGLEBARCK ->
            _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState106
        | LEFT_BRACK ->
            _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState106
        | MOD ->
            _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState106
        | NONCE ->
            _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState106
        | PK ->
            _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState106
        | SENC ->
            _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState106
        | SK ->
            _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState106
        | TMP ->
            _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState106
        | COMMA ->
            _menhir_reduce28 _menhir_env (Obj.magic _menhir_stack) MenhirState106
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState106)
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s

and _menhir_goto_separated_nonempty_list_SEMICOLON_knowledge_ : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.knowledge list) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    match _menhir_s with
    | MenhirState90 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (x : (Proctype.knowledge list)) = _v in
        let _v : (Proctype.knowledge list) = 
# 144 "<standard.mly>"
    ( x )
# 1019 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_SEMICOLON_knowledge__ _menhir_env _menhir_stack _menhir_s _v
    | MenhirState99 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (xs : (Proctype.knowledge list)) = _v in
        let (_menhir_stack, _menhir_s, (x : (Proctype.knowledge))) = _menhir_stack in
        let _2 = () in
        let _v : (Proctype.knowledge list) = 
# 243 "<standard.mly>"
    ( x :: xs )
# 1031 "tmrRetparser.ml"
         in
        _menhir_goto_separated_nonempty_list_SEMICOLON_knowledge_ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        _menhir_fail ()

and _menhir_goto_loption_separated_nonempty_list_SEMICOLON_knowledge__ : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.knowledge list) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    let _menhir_stack = Obj.magic _menhir_stack in
    let _menhir_stack = Obj.magic _menhir_stack in
    let (xs : (Proctype.knowledge list)) = _v in
    let _v : (Proctype.knowledge list) = let knws = 
# 232 "<standard.mly>"
    ( xs )
# 1045 "tmrRetparser.ml"
     in
    
# 116 "tmrRetparser.mly"
                                                 ( knws )
# 1050 "tmrRetparser.ml"
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
# 112 "tmrRetparser.mly"
                                                   ( `Knowledge_list knws)
# 1067 "tmrRetparser.ml"
         in
        _menhir_goto_knowledge _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s

and _menhir_reduce24 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _v : (Proctype.action list) = 
# 142 "<standard.mly>"
    ( [] )
# 1082 "tmrRetparser.ml"
     in
    _menhir_goto_loption_separated_nonempty_list_COMMA_action__ _menhir_env _menhir_stack _menhir_s _v

and _menhir_run109 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
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
        | PERIOD ->
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
                    | MINUS ->
                        let _menhir_stack = Obj.magic _menhir_stack in
                        let _menhir_env = _menhir_discard _menhir_env in
                        let _menhir_stack = Obj.magic _menhir_stack in
                        let _1 = () in
                        let _v : (Proctype.sign) = 
# 159 "tmrRetparser.mly"
         (`Minus)
# 1122 "tmrRetparser.ml"
                         in
                        _menhir_goto_sign _menhir_env _menhir_stack _v
                    | PLUS ->
                        let _menhir_stack = Obj.magic _menhir_stack in
                        let _menhir_env = _menhir_discard _menhir_env in
                        let _menhir_stack = Obj.magic _menhir_stack in
                        let _1 = () in
                        let _v : (Proctype.sign) = 
# 160 "tmrRetparser.mly"
        (`Plus)
# 1133 "tmrRetparser.ml"
                         in
                        _menhir_goto_sign _menhir_env _menhir_stack _v
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

and _menhir_run127 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | LEFT_BRACE ->
        _menhir_run127 _menhir_env (Obj.magic _menhir_stack) MenhirState127
    | LEFT_MIDBRACE ->
        _menhir_run109 _menhir_env (Obj.magic _menhir_stack) MenhirState127
    | RIGHT_BRACE ->
        _menhir_reduce24 _menhir_env (Obj.magic _menhir_stack) MenhirState127
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState127

and _menhir_goto_goal : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.goal) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    let _menhir_stack = (_menhir_stack, _menhir_s, _v) in
    match _menhir_s with
    | MenhirState185 | MenhirState179 ->
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
                _menhir_run179 _menhir_env (Obj.magic _menhir_stack) MenhirState185
            | LEFT_MIDBRACE ->
                _menhir_run166 _menhir_env (Obj.magic _menhir_stack) MenhirState185
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState185)
        | RIGHT_BRACE ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, (x : (Proctype.goal))) = _menhir_stack in
            let _v : (Proctype.goal list) = 
# 241 "<standard.mly>"
    ( [ x ] )
# 1212 "tmrRetparser.ml"
             in
            _menhir_goto_separated_nonempty_list_SEMICOLON_goal_ _menhir_env _menhir_stack _menhir_s _v
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState165 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _, (goallist : (Proctype.goal))) = _menhir_stack in
        let _1 = () in
        let _v : (Proctype.goal) = 
# 131 "tmrRetparser.mly"
                          ( goallist )
# 1229 "tmrRetparser.ml"
         in
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (g : (Proctype.goal)) = _v in
        let ((((_menhir_stack, (t : (Proctype.mode))), (k : (Proctype.knowledge))), (ag : (Proctype.agent))), (env : (Proctype.environment))) = _menhir_stack in
        let _v : (Proctype.pocolcontext) = 
# 74 "tmrRetparser.mly"
                                                                 ( `Pocol (t,k,ag,g,env) )
# 1238 "tmrRetparser.ml"
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
# 1252 "tmrRetparser.ml"
            ))), (p : (Proctype.pocolcontext))) = _menhir_stack in
            let _5 = () in
            let _3 = () in
            let _1 = () in
            let _v : (Proctype.protocols) = 
# 70 "tmrRetparser.mly"
                                                       ( `Protocol (name,p))
# 1260 "tmrRetparser.ml"
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
# 65 "tmrRetparser.mly"
                       ( Some p )
# 1275 "tmrRetparser.ml"
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
    | MenhirState159 | MenhirState155 ->
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
                _menhir_run155 _menhir_env (Obj.magic _menhir_stack) MenhirState159
            | LEFT_MIDBRACE ->
                _menhir_run146 _menhir_env (Obj.magic _menhir_stack) MenhirState159
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState159)
        | RIGHT_BRACE ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, (x : (Proctype.environment))) = _menhir_stack in
            let _v : (Proctype.environment list) = 
# 241 "<standard.mly>"
    ( [ x ] )
# 1319 "tmrRetparser.ml"
             in
            _menhir_goto_separated_nonempty_list_SEMICOLON_envs_ _menhir_env _menhir_stack _menhir_s _v
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState145 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _, (envlist : (Proctype.environment))) = _menhir_stack in
        let _1 = () in
        let _v : (Proctype.environment) = 
# 120 "tmrRetparser.mly"
                                 ( envlist )
# 1336 "tmrRetparser.ml"
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
                _menhir_run179 _menhir_env (Obj.magic _menhir_stack) MenhirState165
            | LEFT_MIDBRACE ->
                _menhir_run166 _menhir_env (Obj.magic _menhir_stack) MenhirState165
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState165)
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
            _menhir_run127 _menhir_env (Obj.magic _menhir_stack) MenhirState133
        | LEFT_MIDBRACE ->
            _menhir_run109 _menhir_env (Obj.magic _menhir_stack) MenhirState133
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState133)
    | ENVIRONMENT | RIGHT_BRACE | SEMICOLON ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, (x : (Proctype.action))) = _menhir_stack in
        let _v : (Proctype.action list) = 
# 241 "<standard.mly>"
    ( [ x ] )
# 1390 "tmrRetparser.ml"
         in
        _menhir_goto_separated_nonempty_list_COMMA_action_ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s

and _menhir_goto_knowledge : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.knowledge) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    let _menhir_stack = (_menhir_stack, _menhir_s, _v) in
    match _menhir_s with
    | MenhirState99 | MenhirState90 ->
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
                _menhir_run91 _menhir_env (Obj.magic _menhir_stack) MenhirState99 _v
            | LEFT_BRACE ->
                _menhir_run90 _menhir_env (Obj.magic _menhir_stack) MenhirState99
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState99)
        | RIGHT_BRACE ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, (x : (Proctype.knowledge))) = _menhir_stack in
            let _v : (Proctype.knowledge list) = 
# 241 "<standard.mly>"
    ( [ x ] )
# 1428 "tmrRetparser.ml"
             in
            _menhir_goto_separated_nonempty_list_SEMICOLON_knowledge_ _menhir_env _menhir_stack _menhir_s _v
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState89 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _, (knwlist : (Proctype.knowledge))) = _menhir_stack in
        let _1 = () in
        let _v : (Proctype.knowledge) = 
# 107 "tmrRetparser.mly"
                                   ( knwlist )
# 1445 "tmrRetparser.ml"
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
                _menhir_run105 _menhir_env (Obj.magic _menhir_stack) MenhirState103 _v
            | LEFT_BRACE ->
                _menhir_run104 _menhir_env (Obj.magic _menhir_stack) MenhirState103
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState103)
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            raise _eRR)
    | _ ->
        _menhir_fail ()

and _menhir_goto_separated_nonempty_list_PERIOD_message_ : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.message list) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    match _menhir_s with
    | MenhirState120 | MenhirState106 | MenhirState5 | MenhirState27 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (x : (Proctype.message list)) = _v in
        let _v : (Proctype.message list) = 
# 144 "<standard.mly>"
    ( x )
# 1483 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_PERIOD_message__ _menhir_env _menhir_stack _menhir_s _v
    | MenhirState59 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (xs : (Proctype.message list)) = _v in
        let (_menhir_stack, _menhir_s, (x : (Proctype.message))) = _menhir_stack in
        let _2 = () in
        let _v : (Proctype.message list) = 
# 243 "<standard.mly>"
    ( x :: xs )
# 1495 "tmrRetparser.ml"
         in
        _menhir_goto_separated_nonempty_list_PERIOD_message_ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        _menhir_fail ()

and _menhir_run90 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | IDENT _v ->
        _menhir_run91 _menhir_env (Obj.magic _menhir_stack) MenhirState90 _v
    | LEFT_BRACE ->
        _menhir_run90 _menhir_env (Obj.magic _menhir_stack) MenhirState90
    | RIGHT_BRACE ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_s = MenhirState90 in
        let _v : (Proctype.knowledge list) = 
# 142 "<standard.mly>"
    ( [] )
# 1517 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_SEMICOLON_knowledge__ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState90

and _menhir_run91 : _menhir_env -> 'ttv_tail -> _menhir_state -> (
# 1 "tmrRetparser.mly"
       (string)
# 1528 "tmrRetparser.ml"
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
            _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState92
        | CONST ->
            _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState92
        | EXP ->
            _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState92
        | HASHCON ->
            _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState92
        | IDENT _v ->
            _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState92 _v
        | K ->
            _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState92
        | LEFT_ANGLEBARCK ->
            _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState92
        | LEFT_BRACK ->
            _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState92
        | MOD ->
            _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState92
        | NONCE ->
            _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState92
        | PK ->
            _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState92
        | SENC ->
            _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState92
        | SK ->
            _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState92
        | TMP ->
            _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState92
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState92)
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s

and _menhir_goto_separated_nonempty_list_SEMICOLON_mode_ : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.mode list) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    match _menhir_s with
    | MenhirState72 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (x : (Proctype.mode list)) = _v in
        let _v : (Proctype.mode list) = 
# 144 "<standard.mly>"
    ( x )
# 1589 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_SEMICOLON_mode__ _menhir_env _menhir_stack _menhir_s _v
    | MenhirState84 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (xs : (Proctype.mode list)) = _v in
        let (_menhir_stack, _menhir_s, (x : (Proctype.mode))) = _menhir_stack in
        let _2 = () in
        let _v : (Proctype.mode list) = 
# 243 "<standard.mly>"
    ( x :: xs )
# 1601 "tmrRetparser.ml"
         in
        _menhir_goto_separated_nonempty_list_SEMICOLON_mode_ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        _menhir_fail ()

and _menhir_fail : unit -> 'a =
  fun () ->
    Printf.fprintf stderr "Internal failure -- please contact the parser generator's developers.\n%!";
    assert false

and _menhir_goto_loption_separated_nonempty_list_PERIOD_message__ : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.message list) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    let _menhir_stack = Obj.magic _menhir_stack in
    let _menhir_stack = Obj.magic _menhir_stack in
    let (xs : (Proctype.message list)) = _v in
    let _v : (Proctype.message list) = let msgs = 
# 232 "<standard.mly>"
    ( xs )
# 1620 "tmrRetparser.ml"
     in
    
# 196 "tmrRetparser.mly"
                                            ( msgs )
# 1625 "tmrRetparser.ml"
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
# 191 "tmrRetparser.mly"
                                                       ( `Concat msgs)
# 1644 "tmrRetparser.ml"
             in
            _menhir_goto_message _menhir_env _menhir_stack _menhir_s _v
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState5 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let ((_menhir_stack, _menhir_s), _, (ms : (Proctype.message list))) = _menhir_stack in
        let _1 = () in
        let _v : (Proctype.mode) = 
# 82 "tmrRetparser.mly"
                             (`Number ms)
# 1661 "tmrRetparser.ml"
         in
        _menhir_goto_mode _menhir_env _menhir_stack _menhir_s _v
    | MenhirState106 ->
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
                _menhir_run127 _menhir_env (Obj.magic _menhir_stack) MenhirState108
            | LEFT_MIDBRACE ->
                _menhir_run109 _menhir_env (Obj.magic _menhir_stack) MenhirState108
            | ENVIRONMENT | RIGHT_BRACE | SEMICOLON ->
                _menhir_reduce24 _menhir_env (Obj.magic _menhir_stack) MenhirState108
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState108)
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState120 ->
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
                    _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState123
                | CONST ->
                    _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState123
                | EXP ->
                    _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState123
                | HASHCON ->
                    _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState123
                | IDENT _v ->
                    _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState123 _v
                | K ->
                    _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState123
                | LEFT_ANGLEBARCK ->
                    _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState123
                | LEFT_BRACK ->
                    _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState123
                | MOD ->
                    _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState123
                | NONCE ->
                    _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState123
                | PK ->
                    _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState123
                | SENC ->
                    _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState123
                | SK ->
                    _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState123
                | TMP ->
                    _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState123
                | _ ->
                    assert (not _menhir_env._menhir_error);
                    _menhir_env._menhir_error <- true;
                    _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState123)
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

and _menhir_reduce40 : _menhir_env -> 'ttv_tail * _menhir_state * (
# 1 "tmrRetparser.mly"
       (string)
# 1755 "tmrRetparser.ml"
) -> 'ttv_return =
  fun _menhir_env _menhir_stack ->
    let (_menhir_stack, _menhir_s, (id : (
# 1 "tmrRetparser.mly"
       (string)
# 1761 "tmrRetparser.ml"
    ))) = _menhir_stack in
    let _v : (Proctype.message) = 
# 173 "tmrRetparser.mly"
             ( `Str id )
# 1766 "tmrRetparser.ml"
     in
    _menhir_goto_message _menhir_env _menhir_stack _menhir_s _v

and _menhir_goto_message : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.message) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    let _menhir_stack = (_menhir_stack, _menhir_s, _v) in
    match _menhir_s with
    | MenhirState44 ->
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
                _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState46
            | CONST ->
                _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState46
            | EXP ->
                _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState46
            | HASHCON ->
                _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState46
            | IDENT _v ->
                _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState46 _v
            | K ->
                _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState46
            | LEFT_ANGLEBARCK ->
                _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState46
            | LEFT_BRACK ->
                _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState46
            | MOD ->
                _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState46
            | NONCE ->
                _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState46
            | PK ->
                _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState46
            | SENC ->
                _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState46
            | SK ->
                _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState46
            | TMP ->
                _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState46
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState46)
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState46 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (((_menhir_stack, _menhir_s), _, (v1 : (Proctype.message))), _, (v2 : (Proctype.message))) = _menhir_stack in
        let _4 = () in
        let _2 = () in
        let _1 = () in
        let _v : (Proctype.message) = 
# 189 "tmrRetparser.mly"
                                                      (`Aenc (v1,v2))
# 1832 "tmrRetparser.ml"
         in
        _menhir_goto_message _menhir_env _menhir_stack _menhir_s _v
    | MenhirState38 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        assert (not _menhir_env._menhir_error);
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | COMMA ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let _menhir_env = _menhir_discard _menhir_env in
            let _tok = _menhir_env._menhir_token in
            (match _tok with
            | AENC ->
                _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState49
            | CONST ->
                _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState49
            | EXP ->
                _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState49
            | HASHCON ->
                _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState49
            | IDENT _v ->
                _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState49 _v
            | K ->
                _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState49
            | LEFT_ANGLEBARCK ->
                _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState49
            | LEFT_BRACK ->
                _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState49
            | MOD ->
                _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState49
            | NONCE ->
                _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState49
            | PK ->
                _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState49
            | SENC ->
                _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState49
            | SK ->
                _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState49
            | TMP ->
                _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState49
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState49)
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState49 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        assert (not _menhir_env._menhir_error);
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | RIGHT_BRACK ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let _menhir_env = _menhir_discard _menhir_env in
            let _menhir_stack = Obj.magic _menhir_stack in
            let (((_menhir_stack, _menhir_s), _, (v : (Proctype.message))), _, (i : (Proctype.message))) = _menhir_stack in
            let _6 = () in
            let _4 = () in
            let _2 = () in
            let _1 = () in
            let _v : (Proctype.message) = 
# 188 "tmrRetparser.mly"
                                                         (`Exp (v,i))
# 1900 "tmrRetparser.ml"
             in
            _menhir_goto_message _menhir_env _menhir_stack _menhir_s _v
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState36 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        assert (not _menhir_env._menhir_error);
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | RIGHT_BRACK ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let _menhir_env = _menhir_discard _menhir_env in
            let _tok = _menhir_env._menhir_token in
            (match _tok with
            | AENC ->
                _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState53
            | CONST ->
                _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState53
            | EXP ->
                _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState53
            | HASHCON ->
                _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState53
            | IDENT _v ->
                _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState53 _v
            | K ->
                _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState53
            | LEFT_ANGLEBARCK ->
                _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState53
            | LEFT_BRACK ->
                _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState53
            | MOD ->
                _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState53
            | NONCE ->
                _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState53
            | PK ->
                _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState53
            | SENC ->
                _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState53
            | SK ->
                _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState53
            | TMP ->
                _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState53
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState53)
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState53 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (((_menhir_stack, _menhir_s), _, (v1 : (Proctype.message))), _, (v2 : (Proctype.message))) = _menhir_stack in
        let _4 = () in
        let _2 = () in
        let _1 = () in
        let _v : (Proctype.message) = 
# 183 "tmrRetparser.mly"
                                                         (`Hash (v1,v2))
# 1967 "tmrRetparser.ml"
         in
        _menhir_goto_message _menhir_env _menhir_stack _menhir_s _v
    | MenhirState106 | MenhirState120 | MenhirState5 | MenhirState59 | MenhirState27 ->
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
                _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState59
            | CONST ->
                _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState59
            | EXP ->
                _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState59
            | HASHCON ->
                _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState59
            | IDENT _v ->
                _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState59 _v
            | K ->
                _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState59
            | LEFT_ANGLEBARCK ->
                _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState59
            | LEFT_BRACK ->
                _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState59
            | MOD ->
                _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState59
            | NONCE ->
                _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState59
            | PK ->
                _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState59
            | SENC ->
                _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState59
            | SK ->
                _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState59
            | TMP ->
                _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState59
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState59)
        | COMMA | KNOWLEDGES | RIGHT_ANGLEBARCK | RIGHT_BRACE | RIGHT_BRACK | SEMICOLON ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, (x : (Proctype.message))) = _menhir_stack in
            let _v : (Proctype.message list) = 
# 241 "<standard.mly>"
    ( [ x ] )
# 2018 "tmrRetparser.ml"
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
# 192 "tmrRetparser.mly"
                                     ( v )
# 2042 "tmrRetparser.ml"
             in
            _menhir_goto_message _menhir_env _menhir_stack _menhir_s _v
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState25 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        assert (not _menhir_env._menhir_error);
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | COMMA ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let _menhir_env = _menhir_discard _menhir_env in
            let _tok = _menhir_env._menhir_token in
            (match _tok with
            | AENC ->
                _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState65
            | CONST ->
                _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState65
            | EXP ->
                _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState65
            | HASHCON ->
                _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState65
            | IDENT _v ->
                _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState65 _v
            | K ->
                _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState65
            | LEFT_ANGLEBARCK ->
                _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState65
            | LEFT_BRACK ->
                _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState65
            | MOD ->
                _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState65
            | NONCE ->
                _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState65
            | PK ->
                _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState65
            | SENC ->
                _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState65
            | SK ->
                _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState65
            | TMP ->
                _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState65
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState65)
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState65 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        assert (not _menhir_env._menhir_error);
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | RIGHT_BRACK ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let _menhir_env = _menhir_discard _menhir_env in
            let _menhir_stack = Obj.magic _menhir_stack in
            let (((_menhir_stack, _menhir_s), _, (m1 : (Proctype.message))), _, (m2 : (Proctype.message))) = _menhir_stack in
            let _6 = () in
            let _4 = () in
            let _2 = () in
            let _1 = () in
            let _v : (Proctype.message) = 
# 180 "tmrRetparser.mly"
                                                           (`Mod (m1,m2))
# 2116 "tmrRetparser.ml"
             in
            _menhir_goto_message _menhir_env _menhir_stack _menhir_s _v
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState15 ->
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
                _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState69
            | CONST ->
                _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState69
            | EXP ->
                _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState69
            | HASHCON ->
                _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState69
            | IDENT _v ->
                _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState69 _v
            | K ->
                _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState69
            | LEFT_ANGLEBARCK ->
                _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState69
            | LEFT_BRACK ->
                _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState69
            | MOD ->
                _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState69
            | NONCE ->
                _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState69
            | PK ->
                _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState69
            | SENC ->
                _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState69
            | SK ->
                _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState69
            | TMP ->
                _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState69
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState69)
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState69 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (((_menhir_stack, _menhir_s), _, (v1 : (Proctype.message))), _, (v2 : (Proctype.message))) = _menhir_stack in
        let _4 = () in
        let _2 = () in
        let _1 = () in
        let _v : (Proctype.message) = 
# 190 "tmrRetparser.mly"
                                                      (`Senc (v1,v2))
# 2183 "tmrRetparser.ml"
         in
        _menhir_goto_message _menhir_env _menhir_stack _menhir_s _v
    | MenhirState92 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let ((_menhir_stack, _menhir_s, (r : (
# 1 "tmrRetparser.mly"
       (string)
# 2192 "tmrRetparser.ml"
        ))), _, (m : (Proctype.message))) = _menhir_stack in
        let _2 = () in
        let _v : (Proctype.knowledge) = 
# 111 "tmrRetparser.mly"
                               ( `Knowledge (r,m) )
# 2198 "tmrRetparser.ml"
         in
        _menhir_goto_knowledge _menhir_env _menhir_stack _menhir_s _v
    | MenhirState123 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (((((((_menhir_stack, _menhir_s), (seq : (
# 5 "tmrRetparser.mly"
       (int)
# 2207 "tmrRetparser.ml"
        ))), (st : (
# 5 "tmrRetparser.mly"
       (int)
# 2211 "tmrRetparser.ml"
        ))), (s : (Proctype.sign))), (r : (
# 1 "tmrRetparser.mly"
       (string)
# 2215 "tmrRetparser.ml"
        ))), _, (ms : (Proctype.message list))), _, (m : (Proctype.message))) = _menhir_stack in
        let _13 = () in
        let _12 = () in
        let _10 = () in
        let _9 = () in
        let _7 = () in
        let _5 = () in
        let _3 = () in
        let _1 = () in
        let _v : (Proctype.action) = 
# 163 "tmrRetparser.mly"
                                                                                                                                         (`Send (seq,st,s,r,ms,m))
# 2228 "tmrRetparser.ml"
         in
        _menhir_goto_action _menhir_env _menhir_stack _menhir_s _v
    | MenhirState125 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (((((_menhir_stack, _menhir_s), (seq : (
# 5 "tmrRetparser.mly"
       (int)
# 2237 "tmrRetparser.ml"
        ))), (st : (
# 5 "tmrRetparser.mly"
       (int)
# 2241 "tmrRetparser.ml"
        ))), (s : (Proctype.sign))), _, (m : (Proctype.message))) = _menhir_stack in
        let _7 = () in
        let _5 = () in
        let _3 = () in
        let _1 = () in
        let _v : (Proctype.action) = 
# 164 "tmrRetparser.mly"
                                                                              (`Receive (seq,st,s,m))
# 2250 "tmrRetparser.ml"
         in
        _menhir_goto_action _menhir_env _menhir_stack _menhir_s _v
    | MenhirState153 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (((((_menhir_stack, _menhir_s), (seq : (
# 1 "tmrRetparser.mly"
       (string)
# 2259 "tmrRetparser.ml"
        ))), (r : (
# 1 "tmrRetparser.mly"
       (string)
# 2263 "tmrRetparser.ml"
        ))), (num : (
# 5 "tmrRetparser.mly"
       (int)
# 2267 "tmrRetparser.ml"
        ))), _, (m : (Proctype.message))) = _menhir_stack in
        let _8 = () in
        let _7 = () in
        let _5 = () in
        let _3 = () in
        let _1 = () in
        let _v : (Proctype.environment) = 
# 124 "tmrRetparser.mly"
                                                                                                                  ( `Env_agent (r,num,m))
# 2277 "tmrRetparser.ml"
         in
        _menhir_goto_envs _menhir_env _menhir_stack _menhir_s _v
    | MenhirState172 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (((((_menhir_stack, _menhir_s), (seq : (
# 1 "tmrRetparser.mly"
       (string)
# 2286 "tmrRetparser.ml"
        ))), _, (r1 : (
# 1 "tmrRetparser.mly"
       (string)
# 2290 "tmrRetparser.ml"
        ))), (r2 : (
# 1 "tmrRetparser.mly"
       (string)
# 2294 "tmrRetparser.ml"
        ))), _, (m : (Proctype.message))) = _menhir_stack in
        let _7 = () in
        let _5 = () in
        let _3 = () in
        let _1 = () in
        let _v : (Proctype.goal) = 
# 138 "tmrRetparser.mly"
                                                                                    ( `Agreegoal (seq,r1,r2,m))
# 2303 "tmrRetparser.ml"
         in
        _menhir_goto_goal _menhir_env _menhir_stack _menhir_s _v
    | MenhirState168 ->
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
# 2334 "tmrRetparser.ml"
                        )) = _v in
                        let ((((_menhir_stack, _menhir_s), (seq : (
# 1 "tmrRetparser.mly"
       (string)
# 2339 "tmrRetparser.ml"
                        ))), _, (m : (Proctype.message))), (r1 : (
# 1 "tmrRetparser.mly"
       (string)
# 2343 "tmrRetparser.ml"
                        ))) = _menhir_stack in
                        let _7 = () in
                        let _5 = () in
                        let _3 = () in
                        let _1 = () in
                        let _v : (Proctype.goal) = 
# 137 "tmrRetparser.mly"
                                                                                          ( `Secretgoal1 (seq,m,r1,r2))
# 2352 "tmrRetparser.ml"
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
# 2378 "tmrRetparser.ml"
            ))), _, (m : (Proctype.message))) = _menhir_stack in
            let _3 = () in
            let _1 = () in
            let _v : (Proctype.goal) = 
# 136 "tmrRetparser.mly"
                                                         ( `Secretgoal (seq,m))
# 2385 "tmrRetparser.ml"
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

and _menhir_goto_mode : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.mode) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    let _menhir_stack = (_menhir_stack, _menhir_s, _v) in
    match _menhir_s with
    | MenhirState84 | MenhirState72 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        assert (not _menhir_env._menhir_error);
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | SEMICOLON ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let _menhir_env = _menhir_discard _menhir_env in
            let _tok = _menhir_env._menhir_token in
            (match _tok with
            | AGENT ->
                _menhir_run73 _menhir_env (Obj.magic _menhir_stack) MenhirState84
            | LEFT_BRACE ->
                _menhir_run72 _menhir_env (Obj.magic _menhir_stack) MenhirState84
            | NUMBER ->
                _menhir_run5 _menhir_env (Obj.magic _menhir_stack) MenhirState84
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState84)
        | RIGHT_BRACE ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, (x : (Proctype.mode))) = _menhir_stack in
            let _v : (Proctype.mode list) = 
# 241 "<standard.mly>"
    ( [ x ] )
# 2427 "tmrRetparser.ml"
             in
            _menhir_goto_separated_nonempty_list_SEMICOLON_mode_ _menhir_env _menhir_stack _menhir_s _v
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState4 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _, (typelist : (Proctype.mode))) = _menhir_stack in
        let _1 = () in
        let _v : (Proctype.mode) = 
# 78 "tmrRetparser.mly"
                           (typelist)
# 2444 "tmrRetparser.ml"
         in
        let _menhir_stack = (_menhir_stack, _v) in
        let _menhir_stack = Obj.magic _menhir_stack in
        assert (not _menhir_env._menhir_error);
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | KNOWLEDGES ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let _menhir_env = _menhir_discard _menhir_env in
            let _tok = _menhir_env._menhir_token in
            (match _tok with
            | IDENT _v ->
                _menhir_run91 _menhir_env (Obj.magic _menhir_stack) MenhirState89 _v
            | LEFT_BRACE ->
                _menhir_run90 _menhir_env (Obj.magic _menhir_stack) MenhirState89
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState89)
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            raise _eRR)
    | _ ->
        _menhir_fail ()

and _menhir_goto_separated_nonempty_list_PERIOD_IDENT_ : _menhir_env -> 'ttv_tail -> _menhir_state -> (string list) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    match _menhir_s with
    | MenhirState75 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (xs : (string list)) = _v in
        let (_menhir_stack, _menhir_s, (x : (
# 1 "tmrRetparser.mly"
       (string)
# 2482 "tmrRetparser.ml"
        ))) = _menhir_stack in
        let _2 = () in
        let _v : (string list) = 
# 243 "<standard.mly>"
    ( x :: xs )
# 2488 "tmrRetparser.ml"
         in
        _menhir_goto_separated_nonempty_list_PERIOD_IDENT_ _menhir_env _menhir_stack _menhir_s _v
    | MenhirState73 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (x : (string list)) = _v in
        let _v : (string list) = 
# 144 "<standard.mly>"
    ( x )
# 2498 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_PERIOD_IDENT__ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        _menhir_fail ()

and _menhir_reduce28 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _v : (Proctype.message list) = 
# 142 "<standard.mly>"
    ( [] )
# 2509 "tmrRetparser.ml"
     in
    _menhir_goto_loption_separated_nonempty_list_PERIOD_message__ _menhir_env _menhir_stack _menhir_s _v

and _menhir_run6 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
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
# 2537 "tmrRetparser.ml"
                ))) = _menhir_stack in
                let _4 = () in
                let _2 = () in
                let _1 = () in
                let _v : (Proctype.message) = 
# 179 "tmrRetparser.mly"
                                       (`Tmp mn)
# 2545 "tmrRetparser.ml"
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

and _menhir_run10 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
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
# 2591 "tmrRetparser.ml"
                ))) = _menhir_stack in
                let _4 = () in
                let _2 = () in
                let _1 = () in
                let _v : (Proctype.message) = 
# 178 "tmrRetparser.mly"
                                         ( `Sk rlnm )
# 2599 "tmrRetparser.ml"
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

and _menhir_run14 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
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
            _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState15
        | CONST ->
            _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState15
        | EXP ->
            _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState15
        | HASHCON ->
            _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState15
        | IDENT _v ->
            _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState15 _v
        | K ->
            _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState15
        | LEFT_ANGLEBARCK ->
            _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState15
        | LEFT_BRACK ->
            _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState15
        | MOD ->
            _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState15
        | NONCE ->
            _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState15
        | PK ->
            _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState15
        | SENC ->
            _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState15
        | SK ->
            _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState15
        | TMP ->
            _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState15
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState15)
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
# 2695 "tmrRetparser.ml"
                ))) = _menhir_stack in
                let _4 = () in
                let _2 = () in
                let _1 = () in
                let _v : (Proctype.message) = 
# 177 "tmrRetparser.mly"
                                         ( `Pk rlnm )
# 2703 "tmrRetparser.ml"
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

and _menhir_run20 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
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
# 2749 "tmrRetparser.ml"
                ))) = _menhir_stack in
                let _4 = () in
                let _2 = () in
                let _1 = () in
                let _v : (Proctype.message) = 
# 174 "tmrRetparser.mly"
                                          (`Var id )
# 2757 "tmrRetparser.ml"
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

and _menhir_run24 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
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
            _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState25
        | CONST ->
            _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState25
        | EXP ->
            _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState25
        | HASHCON ->
            _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState25
        | IDENT _v ->
            _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState25 _v
        | K ->
            _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState25
        | LEFT_ANGLEBARCK ->
            _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState25
        | LEFT_BRACK ->
            _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState25
        | MOD ->
            _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState25
        | NONCE ->
            _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState25
        | PK ->
            _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState25
        | SENC ->
            _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState25
        | SK ->
            _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState25
        | TMP ->
            _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState25
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState25)
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
        _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState26
    | CONST ->
        _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState26
    | EXP ->
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
    | MOD ->
        _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState26
    | NONCE ->
        _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState26
    | PK ->
        _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState26
    | SENC ->
        _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState26
    | SK ->
        _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState26
    | TMP ->
        _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState26
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
        _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState27
    | CONST ->
        _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState27
    | EXP ->
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
    | MOD ->
        _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState27
    | NONCE ->
        _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState27
    | PK ->
        _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState27
    | SENC ->
        _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState27
    | SK ->
        _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState27
    | TMP ->
        _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState27
    | RIGHT_ANGLEBARCK ->
        _menhir_reduce28 _menhir_env (Obj.magic _menhir_stack) MenhirState27
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
# 2944 "tmrRetparser.ml"
                        ))), (rlnm2 : (
# 1 "tmrRetparser.mly"
       (string)
# 2948 "tmrRetparser.ml"
                        ))) = _menhir_stack in
                        let _6 = () in
                        let _4 = () in
                        let _2 = () in
                        let _1 = () in
                        let _v : (Proctype.message) = 
# 182 "tmrRetparser.mly"
                                                           ( `K (rlnm1,rlnm2))
# 2957 "tmrRetparser.ml"
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
# 2994 "tmrRetparser.ml"
) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    let _menhir_stack = (_menhir_stack, _menhir_s, _v) in
    let _menhir_env = _menhir_discard _menhir_env in
    _menhir_reduce40 _menhir_env (Obj.magic _menhir_stack)

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
            _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState36
        | CONST ->
            _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState36
        | EXP ->
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
        | MOD ->
            _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState36
        | NONCE ->
            _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState36
        | PK ->
            _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState36
        | SENC ->
            _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState36
        | SK ->
            _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState36
        | TMP ->
            _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState36
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
    | LEFT_BRACK ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_env = _menhir_discard _menhir_env in
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | AENC ->
            _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState38
        | CONST ->
            _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState38
        | EXP ->
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
        | MOD ->
            _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState38
        | NONCE ->
            _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState38
        | PK ->
            _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState38
        | SENC ->
            _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState38
        | SK ->
            _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState38
        | TMP ->
            _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState38
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

and _menhir_run39 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
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
                let ((_menhir_stack, _menhir_s), (n : (
# 1 "tmrRetparser.mly"
       (string)
# 3125 "tmrRetparser.ml"
                ))) = _menhir_stack in
                let _4 = () in
                let _2 = () in
                let _1 = () in
                let _v : (Proctype.message) = 
# 184 "tmrRetparser.mly"
                                          (`Const n)
# 3133 "tmrRetparser.ml"
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

and _menhir_run43 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
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
            _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState44
        | CONST ->
            _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState44
        | EXP ->
            _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState44
        | HASHCON ->
            _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState44
        | IDENT _v ->
            _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState44 _v
        | K ->
            _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState44
        | LEFT_ANGLEBARCK ->
            _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState44
        | LEFT_BRACK ->
            _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState44
        | MOD ->
            _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState44
        | NONCE ->
            _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState44
        | PK ->
            _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState44
        | SENC ->
            _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState44
        | SK ->
            _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState44
        | TMP ->
            _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState44
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState44)
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s

and _menhir_goto_loption_separated_nonempty_list_SEMICOLON_mode__ : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.mode list) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    let _menhir_stack = Obj.magic _menhir_stack in
    let _menhir_stack = Obj.magic _menhir_stack in
    let (xs : (Proctype.mode list)) = _v in
    let _v : (Proctype.mode list) = let ts = 
# 232 "<standard.mly>"
    ( xs )
# 3213 "tmrRetparser.ml"
     in
    
# 90 "tmrRetparser.mly"
                                         ( ts )
# 3218 "tmrRetparser.ml"
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
        let ((_menhir_stack, _menhir_s), _, (ms : (Proctype.mode list))) = _menhir_stack in
        let _3 = () in
        let _1 = () in
        let _v : (Proctype.mode) = 
# 83 "tmrRetparser.mly"
                                             (`Modelist ms)
# 3235 "tmrRetparser.ml"
         in
        _menhir_goto_mode _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s

and _menhir_goto_loption_separated_nonempty_list_PERIOD_IDENT__ : _menhir_env -> 'ttv_tail -> _menhir_state -> (string list) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    let _menhir_stack = Obj.magic _menhir_stack in
    let _menhir_stack = Obj.magic _menhir_stack in
    let (xs : (string list)) = _v in
    let _v : (string list) = let is = 
# 232 "<standard.mly>"
    ( xs )
# 3253 "tmrRetparser.ml"
     in
    
# 87 "tmrRetparser.mly"
                                    (is)
# 3258 "tmrRetparser.ml"
     in
    let _menhir_stack = Obj.magic _menhir_stack in
    let _menhir_stack = Obj.magic _menhir_stack in
    let (rs : (string list)) = _v in
    let (_menhir_stack, _menhir_s) = _menhir_stack in
    let _1 = () in
    let _v : (Proctype.mode) = 
# 81 "tmrRetparser.mly"
                         (`Agent rs)
# 3268 "tmrRetparser.ml"
     in
    _menhir_goto_mode _menhir_env _menhir_stack _menhir_s _v

and _menhir_run74 : _menhir_env -> 'ttv_tail -> _menhir_state -> (
# 1 "tmrRetparser.mly"
       (string)
# 3275 "tmrRetparser.ml"
) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    let _menhir_stack = (_menhir_stack, _menhir_s, _v) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | PERIOD ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_env = _menhir_discard _menhir_env in
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | IDENT _v ->
            _menhir_run74 _menhir_env (Obj.magic _menhir_stack) MenhirState75 _v
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState75)
    | KNOWLEDGES | RIGHT_BRACE | SEMICOLON ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, (x : (
# 1 "tmrRetparser.mly"
       (string)
# 3298 "tmrRetparser.ml"
        ))) = _menhir_stack in
        let _v : (string list) = 
# 241 "<standard.mly>"
    ( [ x ] )
# 3303 "tmrRetparser.ml"
         in
        _menhir_goto_separated_nonempty_list_PERIOD_IDENT_ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s

and _menhir_errorcase : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    match _menhir_s with
    | MenhirState185 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState179 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState172 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let ((_menhir_stack, _menhir_s, _), _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState168 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let ((_menhir_stack, _menhir_s), _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState165 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        raise _eRR
    | MenhirState159 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState155 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState153 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let ((((_menhir_stack, _menhir_s), _), _), _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState145 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        raise _eRR
    | MenhirState141 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState133 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState127 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState125 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let ((((_menhir_stack, _menhir_s), _), _), _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState123 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState120 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (((((_menhir_stack, _menhir_s), _), _), _), _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState108 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState106 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState104 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState103 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        raise _eRR
    | MenhirState99 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState92 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState90 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState89 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        raise _eRR
    | MenhirState84 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState75 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState73 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState72 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState69 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState65 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState59 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState53 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState49 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState46 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState44 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
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
    | MenhirState25 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState15 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
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
    | AENC ->
        _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState5
    | CONST ->
        _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState5
    | EXP ->
        _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState5
    | HASHCON ->
        _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState5
    | IDENT _v ->
        _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState5 _v
    | K ->
        _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState5
    | LEFT_ANGLEBARCK ->
        _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState5
    | LEFT_BRACK ->
        _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState5
    | MOD ->
        _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState5
    | NONCE ->
        _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState5
    | PK ->
        _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState5
    | SENC ->
        _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState5
    | SK ->
        _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState5
    | TMP ->
        _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState5
    | KNOWLEDGES | RIGHT_BRACE | SEMICOLON ->
        _menhir_reduce28 _menhir_env (Obj.magic _menhir_stack) MenhirState5
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState5

and _menhir_run72 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | AGENT ->
        _menhir_run73 _menhir_env (Obj.magic _menhir_stack) MenhirState72
    | LEFT_BRACE ->
        _menhir_run72 _menhir_env (Obj.magic _menhir_stack) MenhirState72
    | NUMBER ->
        _menhir_run5 _menhir_env (Obj.magic _menhir_stack) MenhirState72
    | RIGHT_BRACE ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_s = MenhirState72 in
        let _v : (Proctype.mode list) = 
# 142 "<standard.mly>"
    ( [] )
# 3539 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_SEMICOLON_mode__ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState72

and _menhir_run73 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | IDENT _v ->
        _menhir_run74 _menhir_env (Obj.magic _menhir_stack) MenhirState73 _v
    | KNOWLEDGES | RIGHT_BRACE | SEMICOLON ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_s = MenhirState73 in
        let _v : (string list) = 
# 142 "<standard.mly>"
    ( [] )
# 3561 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_PERIOD_IDENT__ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState73

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
# 66 "tmrRetparser.mly"
              ( None   )
# 3608 "tmrRetparser.ml"
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
                | TYPES ->
                    let _menhir_stack = Obj.magic _menhir_stack in
                    let _menhir_env = _menhir_discard _menhir_env in
                    let _tok = _menhir_env._menhir_token in
                    (match _tok with
                    | AGENT ->
                        _menhir_run73 _menhir_env (Obj.magic _menhir_stack) MenhirState4
                    | LEFT_BRACE ->
                        _menhir_run72 _menhir_env (Obj.magic _menhir_stack) MenhirState4
                    | NUMBER ->
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
  

# 3666 "tmrRetparser.ml"
