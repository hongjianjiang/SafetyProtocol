
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
  | MenhirState194
  | MenhirState188
  | MenhirState181
  | MenhirState177
  | MenhirState174
  | MenhirState168
  | MenhirState164
  | MenhirState162
  | MenhirState154
  | MenhirState150
  | MenhirState142
  | MenhirState136
  | MenhirState134
  | MenhirState132
  | MenhirState129
  | MenhirState119
  | MenhirState117
  | MenhirState115
  | MenhirState114
  | MenhirState110
  | MenhirState103
  | MenhirState101
  | MenhirState100
  | MenhirState95
  | MenhirState86
  | MenhirState84
  | MenhirState82
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
    | MenhirState115 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (x : (Proctype.agent list)) = _v in
        let _v : (Proctype.agent list) = 
# 144 "<standard.mly>"
    ( x )
# 149 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_SEMICOLON_agent__ _menhir_env _menhir_stack _menhir_s _v
    | MenhirState150 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (xs : (Proctype.agent list)) = _v in
        let (_menhir_stack, _menhir_s, (x : (Proctype.agent))) = _menhir_stack in
        let _2 = () in
        let _v : (Proctype.agent list) = 
# 243 "<standard.mly>"
    ( x :: xs )
# 161 "tmrRetparser.ml"
         in
        _menhir_goto_separated_nonempty_list_SEMICOLON_agent_ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        _menhir_fail ()

and _menhir_goto_agent : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.agent) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    let _menhir_stack = (_menhir_stack, _menhir_s, _v) in
    match _menhir_s with
    | MenhirState150 | MenhirState115 ->
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
                _menhir_run116 _menhir_env (Obj.magic _menhir_stack) MenhirState150 _v
            | LEFT_BRACE ->
                _menhir_run115 _menhir_env (Obj.magic _menhir_stack) MenhirState150
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState150)
        | RIGHT_BRACE ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, (x : (Proctype.agent))) = _menhir_stack in
            let _v : (Proctype.agent list) = 
# 241 "<standard.mly>"
    ( [ x ] )
# 195 "tmrRetparser.ml"
             in
            _menhir_goto_separated_nonempty_list_SEMICOLON_agent_ _menhir_env _menhir_stack _menhir_s _v
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState114 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _, (ags : (Proctype.agent))) = _menhir_stack in
        let _1 = () in
        let _v : (Proctype.agent) = 
# 103 "tmrRetparser.mly"
                      (ags)
# 212 "tmrRetparser.ml"
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
                _menhir_run164 _menhir_env (Obj.magic _menhir_stack) MenhirState154
            | LEFT_MIDBRACE ->
                _menhir_run155 _menhir_env (Obj.magic _menhir_stack) MenhirState154
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState154)
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
# 248 "tmrRetparser.ml"
     in
    
# 153 "tmrRetparser.mly"
                                            ( gols )
# 253 "tmrRetparser.ml"
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
# 149 "tmrRetparser.mly"
                                              (`Goallist gols )
# 270 "tmrRetparser.ml"
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
# 288 "tmrRetparser.ml"
     in
    
# 138 "tmrRetparser.mly"
                                        (envs)
# 293 "tmrRetparser.ml"
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
# 135 "tmrRetparser.mly"
                                             (`Envlist envs )
# 310 "tmrRetparser.ml"
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
# 328 "tmrRetparser.ml"
     in
    
# 113 "tmrRetparser.mly"
                                         (ags)
# 333 "tmrRetparser.ml"
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
# 109 "tmrRetparser.mly"
                                               (`Agentlist agts)
# 350 "tmrRetparser.ml"
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
# 368 "tmrRetparser.ml"
     in
    
# 179 "tmrRetparser.mly"
                                           ( acts )
# 373 "tmrRetparser.ml"
     in
    let _menhir_stack = (_menhir_stack, _menhir_s, _v) in
    match _menhir_s with
    | MenhirState136 ->
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
# 175 "tmrRetparser.mly"
                                               ( `Actlist acts)
# 392 "tmrRetparser.ml"
             in
            _menhir_goto_action _menhir_env _menhir_stack _menhir_s _v
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState119 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (((_menhir_stack, _menhir_s, (name : (
# 1 "tmrRetparser.mly"
       (string)
# 407 "tmrRetparser.ml"
        ))), _, (ms : (Proctype.message list))), _, (actlist : (Proctype.action list))) = _menhir_stack in
        let _4 = () in
        let _2 = () in
        let _v : (Proctype.agent) = 
# 107 "tmrRetparser.mly"
                                                                     (`Agent (name,ms,actlist))
# 414 "tmrRetparser.ml"
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
            _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState134
        | CONST ->
            _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState134
        | EXP ->
            _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState134
        | HASHCON ->
            _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState134
        | IDENT _v ->
            _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState134 _v
        | K ->
            _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState134
        | LEFT_ANGLEBARCK ->
            _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState134
        | LEFT_BRACK ->
            _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState134
        | MOD ->
            _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState134
        | NONCE ->
            _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState134
        | PK ->
            _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState134
        | SENC ->
            _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState134
        | SK ->
            _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState134
        | TMP ->
            _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState134
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState134)
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
                        _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState129
                    | CONST ->
                        _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState129
                    | EXP ->
                        _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState129
                    | HASHCON ->
                        _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState129
                    | IDENT _v ->
                        _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState129 _v
                    | K ->
                        _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState129
                    | LEFT_ANGLEBARCK ->
                        _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState129
                    | LEFT_BRACK ->
                        _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState129
                    | MOD ->
                        _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState129
                    | NONCE ->
                        _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState129
                    | PK ->
                        _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState129
                    | SENC ->
                        _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState129
                    | SK ->
                        _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState129
                    | TMP ->
                        _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState129
                    | RIGHT_BRACK ->
                        _menhir_reduce35 _menhir_env (Obj.magic _menhir_stack) MenhirState129
                    | _ ->
                        assert (not _menhir_env._menhir_error);
                        _menhir_env._menhir_error <- true;
                        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState129)
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

and _menhir_goto_separated_nonempty_list_SEMICOLON_goal_ : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.goal list) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    match _menhir_s with
    | MenhirState188 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (x : (Proctype.goal list)) = _v in
        let _v : (Proctype.goal list) = 
# 144 "<standard.mly>"
    ( x )
# 554 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_SEMICOLON_goal__ _menhir_env _menhir_stack _menhir_s _v
    | MenhirState194 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (xs : (Proctype.goal list)) = _v in
        let (_menhir_stack, _menhir_s, (x : (Proctype.goal))) = _menhir_stack in
        let _2 = () in
        let _v : (Proctype.goal list) = 
# 243 "<standard.mly>"
    ( x :: xs )
# 566 "tmrRetparser.ml"
         in
        _menhir_goto_separated_nonempty_list_SEMICOLON_goal_ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        _menhir_fail ()

and _menhir_run175 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
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
                _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState177
            | CONST ->
                _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState177
            | EXP ->
                _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState177
            | HASHCON ->
                _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState177
            | IDENT _v ->
                let _menhir_stack = Obj.magic _menhir_stack in
                let _menhir_s = MenhirState177 in
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
                                _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState181
                            | CONST ->
                                _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState181
                            | EXP ->
                                _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState181
                            | HASHCON ->
                                _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState181
                            | IDENT _v ->
                                _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState181 _v
                            | K ->
                                _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState181
                            | LEFT_ANGLEBARCK ->
                                _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState181
                            | LEFT_BRACK ->
                                _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState181
                            | MOD ->
                                _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState181
                            | NONCE ->
                                _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState181
                            | PK ->
                                _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState181
                            | SENC ->
                                _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState181
                            | SK ->
                                _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState181
                            | TMP ->
                                _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState181
                            | _ ->
                                assert (not _menhir_env._menhir_error);
                                _menhir_env._menhir_error <- true;
                                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState181)
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
                    _menhir_reduce47 _menhir_env (Obj.magic _menhir_stack)
                | _ ->
                    assert (not _menhir_env._menhir_error);
                    _menhir_env._menhir_error <- true;
                    let _menhir_stack = Obj.magic _menhir_stack in
                    let (_menhir_stack, _menhir_s, _) = _menhir_stack in
                    _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
            | K ->
                _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState177
            | LEFT_ANGLEBARCK ->
                _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState177
            | LEFT_BRACK ->
                _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState177
            | MOD ->
                _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState177
            | NONCE ->
                _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState177
            | PK ->
                _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState177
            | SENC ->
                _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState177
            | SK ->
                _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState177
            | TMP ->
                _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState177
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState177)
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

and _menhir_run188 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | LEFT_BRACE ->
        _menhir_run188 _menhir_env (Obj.magic _menhir_stack) MenhirState188
    | LEFT_MIDBRACE ->
        _menhir_run175 _menhir_env (Obj.magic _menhir_stack) MenhirState188
    | RIGHT_BRACE ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_s = MenhirState188 in
        let _v : (Proctype.goal list) = 
# 142 "<standard.mly>"
    ( [] )
# 723 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_SEMICOLON_goal__ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState188

and _menhir_goto_separated_nonempty_list_SEMICOLON_envs_ : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.environment list) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    match _menhir_s with
    | MenhirState164 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (x : (Proctype.environment list)) = _v in
        let _v : (Proctype.environment list) = 
# 144 "<standard.mly>"
    ( x )
# 741 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_SEMICOLON_envs__ _menhir_env _menhir_stack _menhir_s _v
    | MenhirState168 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (xs : (Proctype.environment list)) = _v in
        let (_menhir_stack, _menhir_s, (x : (Proctype.environment))) = _menhir_stack in
        let _2 = () in
        let _v : (Proctype.environment list) = 
# 243 "<standard.mly>"
    ( x :: xs )
# 753 "tmrRetparser.ml"
         in
        _menhir_goto_separated_nonempty_list_SEMICOLON_envs_ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        _menhir_fail ()

and _menhir_run155 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
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
                                    _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState162
                                | CONST ->
                                    _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState162
                                | EXP ->
                                    _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState162
                                | HASHCON ->
                                    _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState162
                                | IDENT _v ->
                                    _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState162 _v
                                | K ->
                                    _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState162
                                | LEFT_ANGLEBARCK ->
                                    _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState162
                                | LEFT_BRACK ->
                                    _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState162
                                | MOD ->
                                    _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState162
                                | NONCE ->
                                    _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState162
                                | PK ->
                                    _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState162
                                | SENC ->
                                    _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState162
                                | SK ->
                                    _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState162
                                | TMP ->
                                    _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState162
                                | _ ->
                                    assert (not _menhir_env._menhir_error);
                                    _menhir_env._menhir_error <- true;
                                    _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState162)
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

and _menhir_run164 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | LEFT_BRACE ->
        _menhir_run164 _menhir_env (Obj.magic _menhir_stack) MenhirState164
    | LEFT_MIDBRACE ->
        _menhir_run155 _menhir_env (Obj.magic _menhir_stack) MenhirState164
    | RIGHT_BRACE ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_s = MenhirState164 in
        let _v : (Proctype.environment list) = 
# 142 "<standard.mly>"
    ( [] )
# 894 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_SEMICOLON_envs__ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState164

and _menhir_goto_separated_nonempty_list_COMMA_action_ : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.action list) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    match _menhir_s with
    | MenhirState119 | MenhirState136 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (x : (Proctype.action list)) = _v in
        let _v : (Proctype.action list) = 
# 144 "<standard.mly>"
    ( x )
# 912 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_COMMA_action__ _menhir_env _menhir_stack _menhir_s _v
    | MenhirState142 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (xs : (Proctype.action list)) = _v in
        let (_menhir_stack, _menhir_s, (x : (Proctype.action))) = _menhir_stack in
        let _2 = () in
        let _v : (Proctype.action list) = 
# 243 "<standard.mly>"
    ( x :: xs )
# 924 "tmrRetparser.ml"
         in
        _menhir_goto_separated_nonempty_list_COMMA_action_ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        _menhir_fail ()

and _menhir_run115 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | IDENT _v ->
        _menhir_run116 _menhir_env (Obj.magic _menhir_stack) MenhirState115 _v
    | LEFT_BRACE ->
        _menhir_run115 _menhir_env (Obj.magic _menhir_stack) MenhirState115
    | RIGHT_BRACE ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_s = MenhirState115 in
        let _v : (Proctype.agent list) = 
# 142 "<standard.mly>"
    ( [] )
# 946 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_SEMICOLON_agent__ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState115

and _menhir_run116 : _menhir_env -> 'ttv_tail -> _menhir_state -> (
# 1 "tmrRetparser.mly"
       (string)
# 957 "tmrRetparser.ml"
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
            _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState117
        | CONST ->
            _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState117
        | EXP ->
            _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState117
        | HASHCON ->
            _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState117
        | IDENT _v ->
            _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState117 _v
        | K ->
            _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState117
        | LEFT_ANGLEBARCK ->
            _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState117
        | LEFT_BRACK ->
            _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState117
        | MOD ->
            _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState117
        | NONCE ->
            _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState117
        | PK ->
            _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState117
        | SENC ->
            _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState117
        | SK ->
            _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState117
        | TMP ->
            _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState117
        | COMMA ->
            _menhir_reduce35 _menhir_env (Obj.magic _menhir_stack) MenhirState117
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState117)
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s

and _menhir_goto_separated_nonempty_list_SEMICOLON_knowledge_ : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.knowledge list) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    match _menhir_s with
    | MenhirState101 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (x : (Proctype.knowledge list)) = _v in
        let _v : (Proctype.knowledge list) = 
# 144 "<standard.mly>"
    ( x )
# 1020 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_SEMICOLON_knowledge__ _menhir_env _menhir_stack _menhir_s _v
    | MenhirState110 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (xs : (Proctype.knowledge list)) = _v in
        let (_menhir_stack, _menhir_s, (x : (Proctype.knowledge))) = _menhir_stack in
        let _2 = () in
        let _v : (Proctype.knowledge list) = 
# 243 "<standard.mly>"
    ( x :: xs )
# 1032 "tmrRetparser.ml"
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
# 1046 "tmrRetparser.ml"
     in
    
# 126 "tmrRetparser.mly"
                                                 ( knws )
# 1051 "tmrRetparser.ml"
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
# 122 "tmrRetparser.mly"
                                                   ( `Knowledge_list knws)
# 1068 "tmrRetparser.ml"
         in
        _menhir_goto_knowledge _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s

and _menhir_reduce29 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _v : (Proctype.action list) = 
# 142 "<standard.mly>"
    ( [] )
# 1083 "tmrRetparser.ml"
     in
    _menhir_goto_loption_separated_nonempty_list_COMMA_action__ _menhir_env _menhir_stack _menhir_s _v

and _menhir_run120 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
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
# 169 "tmrRetparser.mly"
         (`Minus)
# 1112 "tmrRetparser.ml"
                 in
                _menhir_goto_sign _menhir_env _menhir_stack _v
            | PLUS ->
                let _menhir_stack = Obj.magic _menhir_stack in
                let _menhir_env = _menhir_discard _menhir_env in
                let _menhir_stack = Obj.magic _menhir_stack in
                let _1 = () in
                let _v : (Proctype.sign) = 
# 170 "tmrRetparser.mly"
        (`Plus)
# 1123 "tmrRetparser.ml"
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

and _menhir_run136 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | LEFT_BRACE ->
        _menhir_run136 _menhir_env (Obj.magic _menhir_stack) MenhirState136
    | LEFT_MIDBRACE ->
        _menhir_run120 _menhir_env (Obj.magic _menhir_stack) MenhirState136
    | RIGHT_BRACE ->
        _menhir_reduce29 _menhir_env (Obj.magic _menhir_stack) MenhirState136
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState136

and _menhir_goto_goal : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.goal) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    let _menhir_stack = (_menhir_stack, _menhir_s, _v) in
    match _menhir_s with
    | MenhirState194 | MenhirState188 ->
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
                _menhir_run188 _menhir_env (Obj.magic _menhir_stack) MenhirState194
            | LEFT_MIDBRACE ->
                _menhir_run175 _menhir_env (Obj.magic _menhir_stack) MenhirState194
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState194)
        | RIGHT_BRACE ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, (x : (Proctype.goal))) = _menhir_stack in
            let _v : (Proctype.goal list) = 
# 241 "<standard.mly>"
    ( [ x ] )
# 1190 "tmrRetparser.ml"
             in
            _menhir_goto_separated_nonempty_list_SEMICOLON_goal_ _menhir_env _menhir_stack _menhir_s _v
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState174 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _, (goallist : (Proctype.goal))) = _menhir_stack in
        let _1 = () in
        let _v : (Proctype.goal) = 
# 141 "tmrRetparser.mly"
                          ( goallist )
# 1207 "tmrRetparser.ml"
         in
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (g : (Proctype.goal)) = _v in
        let ((((_menhir_stack, (t : (Proctype.mode))), (k : (Proctype.knowledge))), (ag : (Proctype.agent))), (env : (Proctype.environment))) = _menhir_stack in
        let _v : (Proctype.pocolcontext) = 
# 73 "tmrRetparser.mly"
                                                                 ( `Pocol (t,k,ag,g,env) )
# 1216 "tmrRetparser.ml"
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
# 1230 "tmrRetparser.ml"
            ))), (p : (Proctype.pocolcontext))) = _menhir_stack in
            let _5 = () in
            let _3 = () in
            let _1 = () in
            let _v : (Proctype.protocols) = 
# 69 "tmrRetparser.mly"
                                                       ( `Protocol (name,p))
# 1238 "tmrRetparser.ml"
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
# 64 "tmrRetparser.mly"
                       ( Some p )
# 1253 "tmrRetparser.ml"
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
    | MenhirState168 | MenhirState164 ->
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
                _menhir_run164 _menhir_env (Obj.magic _menhir_stack) MenhirState168
            | LEFT_MIDBRACE ->
                _menhir_run155 _menhir_env (Obj.magic _menhir_stack) MenhirState168
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState168)
        | RIGHT_BRACE ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, (x : (Proctype.environment))) = _menhir_stack in
            let _v : (Proctype.environment list) = 
# 241 "<standard.mly>"
    ( [ x ] )
# 1297 "tmrRetparser.ml"
             in
            _menhir_goto_separated_nonempty_list_SEMICOLON_envs_ _menhir_env _menhir_stack _menhir_s _v
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState154 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _, (envlist : (Proctype.environment))) = _menhir_stack in
        let _1 = () in
        let _v : (Proctype.environment) = 
# 130 "tmrRetparser.mly"
                                 ( envlist )
# 1314 "tmrRetparser.ml"
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
                _menhir_run188 _menhir_env (Obj.magic _menhir_stack) MenhirState174
            | LEFT_MIDBRACE ->
                _menhir_run175 _menhir_env (Obj.magic _menhir_stack) MenhirState174
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState174)
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
            _menhir_run136 _menhir_env (Obj.magic _menhir_stack) MenhirState142
        | LEFT_MIDBRACE ->
            _menhir_run120 _menhir_env (Obj.magic _menhir_stack) MenhirState142
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState142)
    | ENVIRONMENT | RIGHT_BRACE | SEMICOLON ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, (x : (Proctype.action))) = _menhir_stack in
        let _v : (Proctype.action list) = 
# 241 "<standard.mly>"
    ( [ x ] )
# 1368 "tmrRetparser.ml"
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
    | MenhirState110 | MenhirState101 ->
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
                _menhir_run102 _menhir_env (Obj.magic _menhir_stack) MenhirState110 _v
            | LEFT_BRACE ->
                _menhir_run101 _menhir_env (Obj.magic _menhir_stack) MenhirState110
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState110)
        | RIGHT_BRACE ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, (x : (Proctype.knowledge))) = _menhir_stack in
            let _v : (Proctype.knowledge list) = 
# 241 "<standard.mly>"
    ( [ x ] )
# 1406 "tmrRetparser.ml"
             in
            _menhir_goto_separated_nonempty_list_SEMICOLON_knowledge_ _menhir_env _menhir_stack _menhir_s _v
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState100 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _, (knwlist : (Proctype.knowledge))) = _menhir_stack in
        let _1 = () in
        let _v : (Proctype.knowledge) = 
# 117 "tmrRetparser.mly"
                                   ( knwlist )
# 1423 "tmrRetparser.ml"
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
                _menhir_run116 _menhir_env (Obj.magic _menhir_stack) MenhirState114 _v
            | LEFT_BRACE ->
                _menhir_run115 _menhir_env (Obj.magic _menhir_stack) MenhirState114
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState114)
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
    | MenhirState129 | MenhirState117 | MenhirState5 | MenhirState27 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (x : (Proctype.message list)) = _v in
        let _v : (Proctype.message list) = 
# 144 "<standard.mly>"
    ( x )
# 1461 "tmrRetparser.ml"
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
# 1473 "tmrRetparser.ml"
         in
        _menhir_goto_separated_nonempty_list_PERIOD_message_ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        _menhir_fail ()

and _menhir_goto_separated_nonempty_list_PERIOD_function1_ : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.function1 list) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    match _menhir_s with
    | MenhirState73 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (x : (Proctype.function1 list)) = _v in
        let _v : (Proctype.function1 list) = 
# 144 "<standard.mly>"
    ( x )
# 1489 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_PERIOD_function1__ _menhir_env _menhir_stack _menhir_s _v
    | MenhirState82 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (xs : (Proctype.function1 list)) = _v in
        let (_menhir_stack, _menhir_s, (x : (Proctype.function1))) = _menhir_stack in
        let _2 = () in
        let _v : (Proctype.function1 list) = 
# 243 "<standard.mly>"
    ( x :: xs )
# 1501 "tmrRetparser.ml"
         in
        _menhir_goto_separated_nonempty_list_PERIOD_function1_ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        _menhir_fail ()

and _menhir_run101 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | IDENT _v ->
        _menhir_run102 _menhir_env (Obj.magic _menhir_stack) MenhirState101 _v
    | LEFT_BRACE ->
        _menhir_run101 _menhir_env (Obj.magic _menhir_stack) MenhirState101
    | RIGHT_BRACE ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_s = MenhirState101 in
        let _v : (Proctype.knowledge list) = 
# 142 "<standard.mly>"
    ( [] )
# 1523 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_SEMICOLON_knowledge__ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState101

and _menhir_run102 : _menhir_env -> 'ttv_tail -> _menhir_state -> (
# 1 "tmrRetparser.mly"
       (string)
# 1534 "tmrRetparser.ml"
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
            _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState103
        | CONST ->
            _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState103
        | EXP ->
            _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState103
        | HASHCON ->
            _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState103
        | IDENT _v ->
            _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState103 _v
        | K ->
            _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState103
        | LEFT_ANGLEBARCK ->
            _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState103
        | LEFT_BRACK ->
            _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState103
        | MOD ->
            _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState103
        | NONCE ->
            _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState103
        | PK ->
            _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState103
        | SENC ->
            _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState103
        | SK ->
            _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState103
        | TMP ->
            _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState103
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState103)
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
# 1595 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_SEMICOLON_mode__ _menhir_env _menhir_stack _menhir_s _v
    | MenhirState95 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (xs : (Proctype.mode list)) = _v in
        let (_menhir_stack, _menhir_s, (x : (Proctype.mode))) = _menhir_stack in
        let _2 = () in
        let _v : (Proctype.mode list) = 
# 243 "<standard.mly>"
    ( x :: xs )
# 1607 "tmrRetparser.ml"
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
# 1626 "tmrRetparser.ml"
     in
    
# 206 "tmrRetparser.mly"
                                            ( msgs )
# 1631 "tmrRetparser.ml"
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
# 201 "tmrRetparser.mly"
                                                       ( `Concat msgs)
# 1650 "tmrRetparser.ml"
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
# 81 "tmrRetparser.mly"
                             (`Number ms)
# 1667 "tmrRetparser.ml"
         in
        _menhir_goto_mode _menhir_env _menhir_stack _menhir_s _v
    | MenhirState117 ->
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
                _menhir_run136 _menhir_env (Obj.magic _menhir_stack) MenhirState119
            | LEFT_MIDBRACE ->
                _menhir_run120 _menhir_env (Obj.magic _menhir_stack) MenhirState119
            | ENVIRONMENT | RIGHT_BRACE | SEMICOLON ->
                _menhir_reduce29 _menhir_env (Obj.magic _menhir_stack) MenhirState119
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState119)
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState129 ->
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
                    _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState132
                | CONST ->
                    _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState132
                | EXP ->
                    _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState132
                | HASHCON ->
                    _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState132
                | IDENT _v ->
                    _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState132 _v
                | K ->
                    _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState132
                | LEFT_ANGLEBARCK ->
                    _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState132
                | LEFT_BRACK ->
                    _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState132
                | MOD ->
                    _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState132
                | NONCE ->
                    _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState132
                | PK ->
                    _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState132
                | SENC ->
                    _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState132
                | SK ->
                    _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState132
                | TMP ->
                    _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState132
                | _ ->
                    assert (not _menhir_env._menhir_error);
                    _menhir_env._menhir_error <- true;
                    _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState132)
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

and _menhir_reduce47 : _menhir_env -> 'ttv_tail * _menhir_state * (
# 1 "tmrRetparser.mly"
       (string)
# 1761 "tmrRetparser.ml"
) -> 'ttv_return =
  fun _menhir_env _menhir_stack ->
    let (_menhir_stack, _menhir_s, (id : (
# 1 "tmrRetparser.mly"
       (string)
# 1767 "tmrRetparser.ml"
    ))) = _menhir_stack in
    let _v : (Proctype.message) = 
# 183 "tmrRetparser.mly"
             ( `Str id )
# 1772 "tmrRetparser.ml"
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
# 199 "tmrRetparser.mly"
                                                      (`Aenc (v1,v2))
# 1838 "tmrRetparser.ml"
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
# 198 "tmrRetparser.mly"
                                                         (`Exp (v,i))
# 1906 "tmrRetparser.ml"
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
# 193 "tmrRetparser.mly"
                                                         (`Hash (v1,v2))
# 1973 "tmrRetparser.ml"
         in
        _menhir_goto_message _menhir_env _menhir_stack _menhir_s _v
    | MenhirState117 | MenhirState129 | MenhirState5 | MenhirState59 | MenhirState27 ->
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
# 2024 "tmrRetparser.ml"
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
# 202 "tmrRetparser.mly"
                                     ( v )
# 2048 "tmrRetparser.ml"
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
# 190 "tmrRetparser.mly"
                                                           (`Mod (m1,m2))
# 2122 "tmrRetparser.ml"
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
# 200 "tmrRetparser.mly"
                                                      (`Senc (v1,v2))
# 2189 "tmrRetparser.ml"
         in
        _menhir_goto_message _menhir_env _menhir_stack _menhir_s _v
    | MenhirState103 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let ((_menhir_stack, _menhir_s, (r : (
# 1 "tmrRetparser.mly"
       (string)
# 2198 "tmrRetparser.ml"
        ))), _, (m : (Proctype.message))) = _menhir_stack in
        let _2 = () in
        let _v : (Proctype.knowledge) = 
# 121 "tmrRetparser.mly"
                               ( `Knowledge (r,m) )
# 2204 "tmrRetparser.ml"
         in
        _menhir_goto_knowledge _menhir_env _menhir_stack _menhir_s _v
    | MenhirState132 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let ((((((_menhir_stack, _menhir_s), (seq : (
# 5 "tmrRetparser.mly"
       (int)
# 2213 "tmrRetparser.ml"
        ))), (s : (Proctype.sign))), (r : (
# 1 "tmrRetparser.mly"
       (string)
# 2217 "tmrRetparser.ml"
        ))), _, (ms : (Proctype.message list))), _, (m : (Proctype.message))) = _menhir_stack in
        let _11 = () in
        let _10 = () in
        let _8 = () in
        let _7 = () in
        let _5 = () in
        let _3 = () in
        let _1 = () in
        let _v : (Proctype.action) = 
# 173 "tmrRetparser.mly"
                                                                                                                           (`Send (seq,s,r,ms,m))
# 2229 "tmrRetparser.ml"
         in
        _menhir_goto_action _menhir_env _menhir_stack _menhir_s _v
    | MenhirState134 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let ((((_menhir_stack, _menhir_s), (seq : (
# 5 "tmrRetparser.mly"
       (int)
# 2238 "tmrRetparser.ml"
        ))), (s : (Proctype.sign))), _, (m : (Proctype.message))) = _menhir_stack in
        let _5 = () in
        let _3 = () in
        let _1 = () in
        let _v : (Proctype.action) = 
# 174 "tmrRetparser.mly"
                                                                (`Receive (seq,s,m))
# 2246 "tmrRetparser.ml"
         in
        _menhir_goto_action _menhir_env _menhir_stack _menhir_s _v
    | MenhirState162 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (((((_menhir_stack, _menhir_s), (seq : (
# 1 "tmrRetparser.mly"
       (string)
# 2255 "tmrRetparser.ml"
        ))), (r : (
# 1 "tmrRetparser.mly"
       (string)
# 2259 "tmrRetparser.ml"
        ))), (num : (
# 5 "tmrRetparser.mly"
       (int)
# 2263 "tmrRetparser.ml"
        ))), _, (m : (Proctype.message))) = _menhir_stack in
        let _8 = () in
        let _7 = () in
        let _5 = () in
        let _3 = () in
        let _1 = () in
        let _v : (Proctype.environment) = 
# 134 "tmrRetparser.mly"
                                                                                                                  ( `Env_agent (r,num,m))
# 2273 "tmrRetparser.ml"
         in
        _menhir_goto_envs _menhir_env _menhir_stack _menhir_s _v
    | MenhirState181 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (((((_menhir_stack, _menhir_s), (seq : (
# 1 "tmrRetparser.mly"
       (string)
# 2282 "tmrRetparser.ml"
        ))), _, (r1 : (
# 1 "tmrRetparser.mly"
       (string)
# 2286 "tmrRetparser.ml"
        ))), (r2 : (
# 1 "tmrRetparser.mly"
       (string)
# 2290 "tmrRetparser.ml"
        ))), _, (m : (Proctype.message))) = _menhir_stack in
        let _7 = () in
        let _5 = () in
        let _3 = () in
        let _1 = () in
        let _v : (Proctype.goal) = 
# 148 "tmrRetparser.mly"
                                                                                    ( `Agreegoal (seq,r1,r2,m))
# 2299 "tmrRetparser.ml"
         in
        _menhir_goto_goal _menhir_env _menhir_stack _menhir_s _v
    | MenhirState177 ->
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
# 2330 "tmrRetparser.ml"
                        )) = _v in
                        let ((((_menhir_stack, _menhir_s), (seq : (
# 1 "tmrRetparser.mly"
       (string)
# 2335 "tmrRetparser.ml"
                        ))), _, (m : (Proctype.message))), (r1 : (
# 1 "tmrRetparser.mly"
       (string)
# 2339 "tmrRetparser.ml"
                        ))) = _menhir_stack in
                        let _7 = () in
                        let _5 = () in
                        let _3 = () in
                        let _1 = () in
                        let _v : (Proctype.goal) = 
# 147 "tmrRetparser.mly"
                                                                                          ( `Secretgoal1 (seq,m,r1,r2))
# 2348 "tmrRetparser.ml"
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
# 2374 "tmrRetparser.ml"
            ))), _, (m : (Proctype.message))) = _menhir_stack in
            let _3 = () in
            let _1 = () in
            let _v : (Proctype.goal) = 
# 146 "tmrRetparser.mly"
                                                         ( `Secretgoal (seq,m))
# 2381 "tmrRetparser.ml"
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

and _menhir_goto_function1 : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.function1) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    let _menhir_stack = (_menhir_stack, _menhir_s, _v) in
    let _menhir_stack = Obj.magic _menhir_stack in
    assert (not _menhir_env._menhir_error);
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | PERIOD ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_env = _menhir_discard _menhir_env in
        let _tok = _menhir_env._menhir_token in
        (match _tok with
        | EXP ->
            _menhir_run77 _menhir_env (Obj.magic _menhir_stack) MenhirState82
        | MOD ->
            _menhir_run76 _menhir_env (Obj.magic _menhir_stack) MenhirState82
        | PK ->
            _menhir_run75 _menhir_env (Obj.magic _menhir_stack) MenhirState82
        | SK ->
            _menhir_run74 _menhir_env (Obj.magic _menhir_stack) MenhirState82
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState82)
    | KNOWLEDGES | RIGHT_BRACE | SEMICOLON ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, (x : (Proctype.function1))) = _menhir_stack in
        let _v : (Proctype.function1 list) = 
# 241 "<standard.mly>"
    ( [ x ] )
# 2423 "tmrRetparser.ml"
         in
        _menhir_goto_separated_nonempty_list_PERIOD_function1_ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s

and _menhir_goto_mode : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.mode) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    let _menhir_stack = (_menhir_stack, _menhir_s, _v) in
    match _menhir_s with
    | MenhirState95 | MenhirState72 ->
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
                _menhir_run84 _menhir_env (Obj.magic _menhir_stack) MenhirState95
            | FUNCTION ->
                _menhir_run73 _menhir_env (Obj.magic _menhir_stack) MenhirState95
            | LEFT_BRACE ->
                _menhir_run72 _menhir_env (Obj.magic _menhir_stack) MenhirState95
            | NUMBER ->
                _menhir_run5 _menhir_env (Obj.magic _menhir_stack) MenhirState95
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState95)
        | RIGHT_BRACE ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, (x : (Proctype.mode))) = _menhir_stack in
            let _v : (Proctype.mode list) = 
# 241 "<standard.mly>"
    ( [ x ] )
# 2465 "tmrRetparser.ml"
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
# 77 "tmrRetparser.mly"
                           (typelist)
# 2482 "tmrRetparser.ml"
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
                _menhir_run102 _menhir_env (Obj.magic _menhir_stack) MenhirState100 _v
            | LEFT_BRACE ->
                _menhir_run101 _menhir_env (Obj.magic _menhir_stack) MenhirState100
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState100)
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
    | MenhirState86 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (xs : (string list)) = _v in
        let (_menhir_stack, _menhir_s, (x : (
# 1 "tmrRetparser.mly"
       (string)
# 2520 "tmrRetparser.ml"
        ))) = _menhir_stack in
        let _2 = () in
        let _v : (string list) = 
# 243 "<standard.mly>"
    ( x :: xs )
# 2526 "tmrRetparser.ml"
         in
        _menhir_goto_separated_nonempty_list_PERIOD_IDENT_ _menhir_env _menhir_stack _menhir_s _v
    | MenhirState84 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (x : (string list)) = _v in
        let _v : (string list) = 
# 144 "<standard.mly>"
    ( x )
# 2536 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_PERIOD_IDENT__ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        _menhir_fail ()

and _menhir_reduce35 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _v : (Proctype.message list) = 
# 142 "<standard.mly>"
    ( [] )
# 2547 "tmrRetparser.ml"
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
# 2575 "tmrRetparser.ml"
                ))) = _menhir_stack in
                let _4 = () in
                let _2 = () in
                let _1 = () in
                let _v : (Proctype.message) = 
# 189 "tmrRetparser.mly"
                                       (`Tmp mn)
# 2583 "tmrRetparser.ml"
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
# 2629 "tmrRetparser.ml"
                ))) = _menhir_stack in
                let _4 = () in
                let _2 = () in
                let _1 = () in
                let _v : (Proctype.message) = 
# 188 "tmrRetparser.mly"
                                         ( `Sk rlnm )
# 2637 "tmrRetparser.ml"
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
# 2733 "tmrRetparser.ml"
                ))) = _menhir_stack in
                let _4 = () in
                let _2 = () in
                let _1 = () in
                let _v : (Proctype.message) = 
# 187 "tmrRetparser.mly"
                                         ( `Pk rlnm )
# 2741 "tmrRetparser.ml"
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
# 2787 "tmrRetparser.ml"
                ))) = _menhir_stack in
                let _4 = () in
                let _2 = () in
                let _1 = () in
                let _v : (Proctype.message) = 
# 184 "tmrRetparser.mly"
                                          (`Var id )
# 2795 "tmrRetparser.ml"
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
        _menhir_reduce35 _menhir_env (Obj.magic _menhir_stack) MenhirState27
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
# 2982 "tmrRetparser.ml"
                        ))), (rlnm2 : (
# 1 "tmrRetparser.mly"
       (string)
# 2986 "tmrRetparser.ml"
                        ))) = _menhir_stack in
                        let _6 = () in
                        let _4 = () in
                        let _2 = () in
                        let _1 = () in
                        let _v : (Proctype.message) = 
# 192 "tmrRetparser.mly"
                                                           ( `K (rlnm1,rlnm2))
# 2995 "tmrRetparser.ml"
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
# 3032 "tmrRetparser.ml"
) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    let _menhir_stack = (_menhir_stack, _menhir_s, _v) in
    let _menhir_env = _menhir_discard _menhir_env in
    _menhir_reduce47 _menhir_env (Obj.magic _menhir_stack)

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
# 3163 "tmrRetparser.ml"
                ))) = _menhir_stack in
                let _4 = () in
                let _2 = () in
                let _1 = () in
                let _v : (Proctype.message) = 
# 194 "tmrRetparser.mly"
                                          (`Const n)
# 3171 "tmrRetparser.ml"
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
# 3251 "tmrRetparser.ml"
     in
    
# 99 "tmrRetparser.mly"
                                         ( ts )
# 3256 "tmrRetparser.ml"
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
# 3273 "tmrRetparser.ml"
         in
        _menhir_goto_mode _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s

and _menhir_goto_loption_separated_nonempty_list_PERIOD_function1__ : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.function1 list) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    let _menhir_stack = Obj.magic _menhir_stack in
    let _menhir_stack = Obj.magic _menhir_stack in
    let (xs : (Proctype.function1 list)) = _v in
    let _v : (Proctype.function1 list) = let fs = 
# 232 "<standard.mly>"
    ( xs )
# 3291 "tmrRetparser.ml"
     in
    
# 93 "tmrRetparser.mly"
                                       (fs)
# 3296 "tmrRetparser.ml"
     in
    let _menhir_stack = Obj.magic _menhir_stack in
    let _menhir_stack = Obj.magic _menhir_stack in
    let (fs : (Proctype.function1 list)) = _v in
    let (_menhir_stack, _menhir_s) = _menhir_stack in
    let _1 = () in
    let _v : (Proctype.mode) = 
# 82 "tmrRetparser.mly"
                               (`Function fs)
# 3306 "tmrRetparser.ml"
     in
    _menhir_goto_mode _menhir_env _menhir_stack _menhir_s _v

and _menhir_run74 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_env = _menhir_discard _menhir_env in
    let _menhir_stack = Obj.magic _menhir_stack in
    let sk = () in
    let _v : (Proctype.function1) = 
# 87 "tmrRetparser.mly"
          (`Sk sk)
# 3318 "tmrRetparser.ml"
     in
    _menhir_goto_function1 _menhir_env _menhir_stack _menhir_s _v

and _menhir_run75 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_env = _menhir_discard _menhir_env in
    let _menhir_stack = Obj.magic _menhir_stack in
    let pk = () in
    let _v : (Proctype.function1) = 
# 86 "tmrRetparser.mly"
          (`Pk pk)
# 3330 "tmrRetparser.ml"
     in
    _menhir_goto_function1 _menhir_env _menhir_stack _menhir_s _v

and _menhir_run76 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_env = _menhir_discard _menhir_env in
    let _menhir_stack = Obj.magic _menhir_stack in
    let mod1 = () in
    let _v : (Proctype.function1) = 
# 89 "tmrRetparser.mly"
               (`Mod mod1)
# 3342 "tmrRetparser.ml"
     in
    _menhir_goto_function1 _menhir_env _menhir_stack _menhir_s _v

and _menhir_run77 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_env = _menhir_discard _menhir_env in
    let _menhir_stack = Obj.magic _menhir_stack in
    let exp = () in
    let _v : (Proctype.function1) = 
# 88 "tmrRetparser.mly"
             (`Exp exp)
# 3354 "tmrRetparser.ml"
     in
    _menhir_goto_function1 _menhir_env _menhir_stack _menhir_s _v

and _menhir_goto_loption_separated_nonempty_list_PERIOD_IDENT__ : _menhir_env -> 'ttv_tail -> _menhir_state -> (string list) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    let _menhir_stack = Obj.magic _menhir_stack in
    let _menhir_stack = Obj.magic _menhir_stack in
    let (xs : (string list)) = _v in
    let _v : (string list) = let is = 
# 232 "<standard.mly>"
    ( xs )
# 3366 "tmrRetparser.ml"
     in
    
# 96 "tmrRetparser.mly"
                                    (is)
# 3371 "tmrRetparser.ml"
     in
    let _menhir_stack = Obj.magic _menhir_stack in
    let _menhir_stack = Obj.magic _menhir_stack in
    let (rs : (string list)) = _v in
    let (_menhir_stack, _menhir_s) = _menhir_stack in
    let _1 = () in
    let _v : (Proctype.mode) = 
# 80 "tmrRetparser.mly"
                         (`Agent rs)
# 3381 "tmrRetparser.ml"
     in
    _menhir_goto_mode _menhir_env _menhir_stack _menhir_s _v

and _menhir_run85 : _menhir_env -> 'ttv_tail -> _menhir_state -> (
# 1 "tmrRetparser.mly"
       (string)
# 3388 "tmrRetparser.ml"
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
            _menhir_run85 _menhir_env (Obj.magic _menhir_stack) MenhirState86 _v
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState86)
    | KNOWLEDGES | RIGHT_BRACE | SEMICOLON ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, (x : (
# 1 "tmrRetparser.mly"
       (string)
# 3411 "tmrRetparser.ml"
        ))) = _menhir_stack in
        let _v : (string list) = 
# 241 "<standard.mly>"
    ( [ x ] )
# 3416 "tmrRetparser.ml"
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
    | MenhirState194 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState188 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState181 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let ((_menhir_stack, _menhir_s, _), _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState177 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let ((_menhir_stack, _menhir_s), _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState174 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        raise _eRR
    | MenhirState168 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState164 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState162 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let ((((_menhir_stack, _menhir_s), _), _), _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState154 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        raise _eRR
    | MenhirState150 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState142 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState136 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState134 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (((_menhir_stack, _menhir_s), _), _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState132 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState129 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let ((((_menhir_stack, _menhir_s), _), _), _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState119 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState117 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState115 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState114 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        raise _eRR
    | MenhirState110 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState103 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState101 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState100 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        raise _eRR
    | MenhirState95 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState86 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState84 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState82 ->
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
        _menhir_reduce35 _menhir_env (Obj.magic _menhir_stack) MenhirState5
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
        _menhir_run84 _menhir_env (Obj.magic _menhir_stack) MenhirState72
    | FUNCTION ->
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
# 3662 "tmrRetparser.ml"
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
    | EXP ->
        _menhir_run77 _menhir_env (Obj.magic _menhir_stack) MenhirState73
    | MOD ->
        _menhir_run76 _menhir_env (Obj.magic _menhir_stack) MenhirState73
    | PK ->
        _menhir_run75 _menhir_env (Obj.magic _menhir_stack) MenhirState73
    | SK ->
        _menhir_run74 _menhir_env (Obj.magic _menhir_stack) MenhirState73
    | KNOWLEDGES | RIGHT_BRACE | SEMICOLON ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_s = MenhirState73 in
        let _v : (Proctype.function1 list) = 
# 142 "<standard.mly>"
    ( [] )
# 3690 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_PERIOD_function1__ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState73

and _menhir_run84 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | IDENT _v ->
        _menhir_run85 _menhir_env (Obj.magic _menhir_stack) MenhirState84 _v
    | KNOWLEDGES | RIGHT_BRACE | SEMICOLON ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_s = MenhirState84 in
        let _v : (string list) = 
# 142 "<standard.mly>"
    ( [] )
# 3712 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_PERIOD_IDENT__ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState84

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
# 65 "tmrRetparser.mly"
              ( None   )
# 3759 "tmrRetparser.ml"
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
                        _menhir_run84 _menhir_env (Obj.magic _menhir_stack) MenhirState4
                    | FUNCTION ->
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
  

# 3819 "tmrRetparser.ml"
