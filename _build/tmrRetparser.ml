
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
  | MenhirState193
  | MenhirState187
  | MenhirState180
  | MenhirState176
  | MenhirState173
  | MenhirState167
  | MenhirState163
  | MenhirState161
  | MenhirState153
  | MenhirState149
  | MenhirState141
  | MenhirState135
  | MenhirState133
  | MenhirState131
  | MenhirState128
  | MenhirState118
  | MenhirState116
  | MenhirState114
  | MenhirState113
  | MenhirState109
  | MenhirState102
  | MenhirState100
  | MenhirState99
  | MenhirState94
  | MenhirState85
  | MenhirState83
  | MenhirState81
  | MenhirState72
  | MenhirState71
  | MenhirState68
  | MenhirState64
  | MenhirState58
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
    | MenhirState114 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (x : (Proctype.agent list)) = _v in
        let _v : (Proctype.agent list) = 
# 144 "<standard.mly>"
    ( x )
# 148 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_SEMICOLON_agent__ _menhir_env _menhir_stack _menhir_s _v
    | MenhirState149 ->
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
    | MenhirState149 | MenhirState114 ->
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
                _menhir_run115 _menhir_env (Obj.magic _menhir_stack) MenhirState149 _v
            | LEFT_BRACE ->
                _menhir_run114 _menhir_env (Obj.magic _menhir_stack) MenhirState149
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState149)
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
    | MenhirState113 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _, (ags : (Proctype.agent))) = _menhir_stack in
        let _1 = () in
        let _v : (Proctype.agent) = 
# 103 "tmrRetparser.mly"
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
                _menhir_run163 _menhir_env (Obj.magic _menhir_stack) MenhirState153
            | LEFT_MIDBRACE ->
                _menhir_run154 _menhir_env (Obj.magic _menhir_stack) MenhirState153
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState153)
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
    
# 153 "tmrRetparser.mly"
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
# 149 "tmrRetparser.mly"
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
    
# 138 "tmrRetparser.mly"
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
# 135 "tmrRetparser.mly"
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
    
# 113 "tmrRetparser.mly"
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
# 109 "tmrRetparser.mly"
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
    
# 179 "tmrRetparser.mly"
                                           ( acts )
# 372 "tmrRetparser.ml"
     in
    let _menhir_stack = (_menhir_stack, _menhir_s, _v) in
    match _menhir_s with
    | MenhirState135 ->
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
# 391 "tmrRetparser.ml"
             in
            _menhir_goto_action _menhir_env _menhir_stack _menhir_s _v
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState118 ->
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
# 107 "tmrRetparser.mly"
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
            _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState133
        | CONST ->
            _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState133
        | EXP ->
            _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState133
        | HASHCON ->
            _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState133
        | IDENT _v ->
            _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState133 _v
        | K ->
            _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState133
        | LEFT_ANGLEBARCK ->
            _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState133
        | LEFT_BRACK ->
            _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState133
        | MOD ->
            _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState133
        | NONCE ->
            _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState133
        | PK ->
            _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState133
        | SENC ->
            _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState133
        | SK ->
            _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState133
        | TMP ->
            _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState133
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState133)
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
                        _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState128
                    | CONST ->
                        _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState128
                    | EXP ->
                        _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState128
                    | HASHCON ->
                        _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState128
                    | IDENT _v ->
                        _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState128 _v
                    | K ->
                        _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState128
                    | LEFT_ANGLEBARCK ->
                        _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState128
                    | LEFT_BRACK ->
                        _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState128
                    | MOD ->
                        _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState128
                    | NONCE ->
                        _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState128
                    | PK ->
                        _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState128
                    | SENC ->
                        _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState128
                    | SK ->
                        _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState128
                    | TMP ->
                        _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState128
                    | RIGHT_BRACK ->
                        _menhir_reduce35 _menhir_env (Obj.magic _menhir_stack) MenhirState128
                    | _ ->
                        assert (not _menhir_env._menhir_error);
                        _menhir_env._menhir_error <- true;
                        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState128)
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
    | MenhirState187 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (x : (Proctype.goal list)) = _v in
        let _v : (Proctype.goal list) = 
# 144 "<standard.mly>"
    ( x )
# 553 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_SEMICOLON_goal__ _menhir_env _menhir_stack _menhir_s _v
    | MenhirState193 ->
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

and _menhir_run174 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
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
                _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState176
            | CONST ->
                _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState176
            | EXP ->
                _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState176
            | HASHCON ->
                _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState176
            | IDENT _v ->
                let _menhir_stack = Obj.magic _menhir_stack in
                let _menhir_s = MenhirState176 in
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
                                _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState180
                            | CONST ->
                                _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState180
                            | EXP ->
                                _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState180
                            | HASHCON ->
                                _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState180
                            | IDENT _v ->
                                _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState180 _v
                            | K ->
                                _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState180
                            | LEFT_ANGLEBARCK ->
                                _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState180
                            | LEFT_BRACK ->
                                _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState180
                            | MOD ->
                                _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState180
                            | NONCE ->
                                _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState180
                            | PK ->
                                _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState180
                            | SENC ->
                                _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState180
                            | SK ->
                                _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState180
                            | TMP ->
                                _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState180
                            | _ ->
                                assert (not _menhir_env._menhir_error);
                                _menhir_env._menhir_error <- true;
                                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState180)
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
                _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState176
            | LEFT_ANGLEBARCK ->
                _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState176
            | LEFT_BRACK ->
                _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState176
            | MOD ->
                _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState176
            | NONCE ->
                _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState176
            | PK ->
                _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState176
            | SENC ->
                _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState176
            | SK ->
                _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState176
            | TMP ->
                _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState176
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState176)
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

and _menhir_run187 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | LEFT_BRACE ->
        _menhir_run187 _menhir_env (Obj.magic _menhir_stack) MenhirState187
    | LEFT_MIDBRACE ->
        _menhir_run174 _menhir_env (Obj.magic _menhir_stack) MenhirState187
    | RIGHT_BRACE ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_s = MenhirState187 in
        let _v : (Proctype.goal list) = 
# 142 "<standard.mly>"
    ( [] )
# 722 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_SEMICOLON_goal__ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState187

and _menhir_goto_separated_nonempty_list_SEMICOLON_envs_ : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.environment list) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    match _menhir_s with
    | MenhirState163 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (x : (Proctype.environment list)) = _v in
        let _v : (Proctype.environment list) = 
# 144 "<standard.mly>"
    ( x )
# 740 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_SEMICOLON_envs__ _menhir_env _menhir_stack _menhir_s _v
    | MenhirState167 ->
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

and _menhir_run154 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
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
                                    _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState161
                                | CONST ->
                                    _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState161
                                | EXP ->
                                    _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState161
                                | HASHCON ->
                                    _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState161
                                | IDENT _v ->
                                    _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState161 _v
                                | K ->
                                    _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState161
                                | LEFT_ANGLEBARCK ->
                                    _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState161
                                | LEFT_BRACK ->
                                    _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState161
                                | MOD ->
                                    _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState161
                                | NONCE ->
                                    _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState161
                                | PK ->
                                    _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState161
                                | SENC ->
                                    _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState161
                                | SK ->
                                    _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState161
                                | TMP ->
                                    _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState161
                                | _ ->
                                    assert (not _menhir_env._menhir_error);
                                    _menhir_env._menhir_error <- true;
                                    _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState161)
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

and _menhir_run163 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | LEFT_BRACE ->
        _menhir_run163 _menhir_env (Obj.magic _menhir_stack) MenhirState163
    | LEFT_MIDBRACE ->
        _menhir_run154 _menhir_env (Obj.magic _menhir_stack) MenhirState163
    | RIGHT_BRACE ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_s = MenhirState163 in
        let _v : (Proctype.environment list) = 
# 142 "<standard.mly>"
    ( [] )
# 893 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_SEMICOLON_envs__ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState163

and _menhir_goto_separated_nonempty_list_COMMA_action_ : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.action list) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    match _menhir_s with
    | MenhirState118 | MenhirState135 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (x : (Proctype.action list)) = _v in
        let _v : (Proctype.action list) = 
# 144 "<standard.mly>"
    ( x )
# 911 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_COMMA_action__ _menhir_env _menhir_stack _menhir_s _v
    | MenhirState141 ->
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

and _menhir_run114 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | IDENT _v ->
        _menhir_run115 _menhir_env (Obj.magic _menhir_stack) MenhirState114 _v
    | LEFT_BRACE ->
        _menhir_run114 _menhir_env (Obj.magic _menhir_stack) MenhirState114
    | RIGHT_BRACE ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_s = MenhirState114 in
        let _v : (Proctype.agent list) = 
# 142 "<standard.mly>"
    ( [] )
# 945 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_SEMICOLON_agent__ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState114

and _menhir_run115 : _menhir_env -> 'ttv_tail -> _menhir_state -> (
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
            _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState116
        | CONST ->
            _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState116
        | EXP ->
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
        | MOD ->
            _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState116
        | NONCE ->
            _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState116
        | PK ->
            _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState116
        | SENC ->
            _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState116
        | SK ->
            _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState116
        | TMP ->
            _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState116
        | COMMA ->
            _menhir_reduce35 _menhir_env (Obj.magic _menhir_stack) MenhirState116
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState116)
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s

and _menhir_goto_separated_nonempty_list_SEMICOLON_knowledge_ : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.knowledge list) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    match _menhir_s with
    | MenhirState100 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (x : (Proctype.knowledge list)) = _v in
        let _v : (Proctype.knowledge list) = 
# 144 "<standard.mly>"
    ( x )
# 1019 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_SEMICOLON_knowledge__ _menhir_env _menhir_stack _menhir_s _v
    | MenhirState109 ->
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
    
# 126 "tmrRetparser.mly"
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
# 122 "tmrRetparser.mly"
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

and _menhir_reduce29 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _v : (Proctype.action list) = 
# 142 "<standard.mly>"
    ( [] )
# 1082 "tmrRetparser.ml"
     in
    _menhir_goto_loption_separated_nonempty_list_COMMA_action__ _menhir_env _menhir_stack _menhir_s _v

and _menhir_run119 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
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
# 1111 "tmrRetparser.ml"
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
# 1122 "tmrRetparser.ml"
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

and _menhir_run135 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | LEFT_BRACE ->
        _menhir_run135 _menhir_env (Obj.magic _menhir_stack) MenhirState135
    | LEFT_MIDBRACE ->
        _menhir_run119 _menhir_env (Obj.magic _menhir_stack) MenhirState135
    | RIGHT_BRACE ->
        _menhir_reduce29 _menhir_env (Obj.magic _menhir_stack) MenhirState135
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState135

and _menhir_goto_goal : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.goal) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    let _menhir_stack = (_menhir_stack, _menhir_s, _v) in
    match _menhir_s with
    | MenhirState193 | MenhirState187 ->
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
                _menhir_run187 _menhir_env (Obj.magic _menhir_stack) MenhirState193
            | LEFT_MIDBRACE ->
                _menhir_run174 _menhir_env (Obj.magic _menhir_stack) MenhirState193
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState193)
        | RIGHT_BRACE ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, (x : (Proctype.goal))) = _menhir_stack in
            let _v : (Proctype.goal list) = 
# 241 "<standard.mly>"
    ( [ x ] )
# 1189 "tmrRetparser.ml"
             in
            _menhir_goto_separated_nonempty_list_SEMICOLON_goal_ _menhir_env _menhir_stack _menhir_s _v
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState173 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _, (goallist : (Proctype.goal))) = _menhir_stack in
        let _1 = () in
        let _v : (Proctype.goal) = 
# 141 "tmrRetparser.mly"
                          ( goallist )
# 1206 "tmrRetparser.ml"
         in
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (g : (Proctype.goal)) = _v in
        let ((((_menhir_stack, (t : (Proctype.mode))), (k : (Proctype.knowledge))), (ag : (Proctype.agent))), (env : (Proctype.environment))) = _menhir_stack in
        let _v : (Proctype.pocolcontext) = 
# 73 "tmrRetparser.mly"
                                                                 ( `Pocol (t,k,ag,g,env) )
# 1215 "tmrRetparser.ml"
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
# 1229 "tmrRetparser.ml"
            ))), (p : (Proctype.pocolcontext))) = _menhir_stack in
            let _5 = () in
            let _3 = () in
            let _1 = () in
            let _v : (Proctype.protocols) = 
# 69 "tmrRetparser.mly"
                                                       ( `Protocol (name,p))
# 1237 "tmrRetparser.ml"
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
# 1252 "tmrRetparser.ml"
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
    | MenhirState167 | MenhirState163 ->
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
                _menhir_run163 _menhir_env (Obj.magic _menhir_stack) MenhirState167
            | LEFT_MIDBRACE ->
                _menhir_run154 _menhir_env (Obj.magic _menhir_stack) MenhirState167
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState167)
        | RIGHT_BRACE ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, (x : (Proctype.environment))) = _menhir_stack in
            let _v : (Proctype.environment list) = 
# 241 "<standard.mly>"
    ( [ x ] )
# 1296 "tmrRetparser.ml"
             in
            _menhir_goto_separated_nonempty_list_SEMICOLON_envs_ _menhir_env _menhir_stack _menhir_s _v
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState153 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _, (envlist : (Proctype.environment))) = _menhir_stack in
        let _1 = () in
        let _v : (Proctype.environment) = 
# 130 "tmrRetparser.mly"
                                 ( envlist )
# 1313 "tmrRetparser.ml"
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
                _menhir_run187 _menhir_env (Obj.magic _menhir_stack) MenhirState173
            | LEFT_MIDBRACE ->
                _menhir_run174 _menhir_env (Obj.magic _menhir_stack) MenhirState173
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState173)
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
            _menhir_run135 _menhir_env (Obj.magic _menhir_stack) MenhirState141
        | LEFT_MIDBRACE ->
            _menhir_run119 _menhir_env (Obj.magic _menhir_stack) MenhirState141
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState141)
    | ENVIRONMENT | RIGHT_BRACE | SEMICOLON ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, (x : (Proctype.action))) = _menhir_stack in
        let _v : (Proctype.action list) = 
# 241 "<standard.mly>"
    ( [ x ] )
# 1367 "tmrRetparser.ml"
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
    | MenhirState109 | MenhirState100 ->
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
                _menhir_run101 _menhir_env (Obj.magic _menhir_stack) MenhirState109 _v
            | LEFT_BRACE ->
                _menhir_run100 _menhir_env (Obj.magic _menhir_stack) MenhirState109
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState109)
        | RIGHT_BRACE ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, (x : (Proctype.knowledge))) = _menhir_stack in
            let _v : (Proctype.knowledge list) = 
# 241 "<standard.mly>"
    ( [ x ] )
# 1405 "tmrRetparser.ml"
             in
            _menhir_goto_separated_nonempty_list_SEMICOLON_knowledge_ _menhir_env _menhir_stack _menhir_s _v
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState99 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _, (knwlist : (Proctype.knowledge))) = _menhir_stack in
        let _1 = () in
        let _v : (Proctype.knowledge) = 
# 117 "tmrRetparser.mly"
                                   ( knwlist )
# 1422 "tmrRetparser.ml"
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
                _menhir_run115 _menhir_env (Obj.magic _menhir_stack) MenhirState113 _v
            | LEFT_BRACE ->
                _menhir_run114 _menhir_env (Obj.magic _menhir_stack) MenhirState113
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState113)
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
    | MenhirState128 | MenhirState116 | MenhirState5 | MenhirState27 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (x : (Proctype.message list)) = _v in
        let _v : (Proctype.message list) = 
# 144 "<standard.mly>"
    ( x )
# 1460 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_PERIOD_message__ _menhir_env _menhir_stack _menhir_s _v
    | MenhirState58 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (xs : (Proctype.message list)) = _v in
        let (_menhir_stack, _menhir_s, (x : (Proctype.message))) = _menhir_stack in
        let _2 = () in
        let _v : (Proctype.message list) = 
# 243 "<standard.mly>"
    ( x :: xs )
# 1472 "tmrRetparser.ml"
         in
        _menhir_goto_separated_nonempty_list_PERIOD_message_ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        _menhir_fail ()

and _menhir_goto_separated_nonempty_list_PERIOD_function1_ : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.function1 list) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    match _menhir_s with
    | MenhirState72 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (x : (Proctype.function1 list)) = _v in
        let _v : (Proctype.function1 list) = 
# 144 "<standard.mly>"
    ( x )
# 1488 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_PERIOD_function1__ _menhir_env _menhir_stack _menhir_s _v
    | MenhirState81 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (xs : (Proctype.function1 list)) = _v in
        let (_menhir_stack, _menhir_s, (x : (Proctype.function1))) = _menhir_stack in
        let _2 = () in
        let _v : (Proctype.function1 list) = 
# 243 "<standard.mly>"
    ( x :: xs )
# 1500 "tmrRetparser.ml"
         in
        _menhir_goto_separated_nonempty_list_PERIOD_function1_ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        _menhir_fail ()

and _menhir_run100 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | IDENT _v ->
        _menhir_run101 _menhir_env (Obj.magic _menhir_stack) MenhirState100 _v
    | LEFT_BRACE ->
        _menhir_run100 _menhir_env (Obj.magic _menhir_stack) MenhirState100
    | RIGHT_BRACE ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_s = MenhirState100 in
        let _v : (Proctype.knowledge list) = 
# 142 "<standard.mly>"
    ( [] )
# 1522 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_SEMICOLON_knowledge__ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState100

and _menhir_run101 : _menhir_env -> 'ttv_tail -> _menhir_state -> (
# 1 "tmrRetparser.mly"
       (string)
# 1533 "tmrRetparser.ml"
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
            _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState102
        | CONST ->
            _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState102
        | EXP ->
            _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState102
        | HASHCON ->
            _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState102
        | IDENT _v ->
            _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState102 _v
        | K ->
            _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState102
        | LEFT_ANGLEBARCK ->
            _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState102
        | LEFT_BRACK ->
            _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState102
        | MOD ->
            _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState102
        | NONCE ->
            _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState102
        | PK ->
            _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState102
        | SENC ->
            _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState102
        | SK ->
            _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState102
        | TMP ->
            _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState102
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState102)
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s

and _menhir_goto_separated_nonempty_list_SEMICOLON_mode_ : _menhir_env -> 'ttv_tail -> _menhir_state -> (Proctype.mode list) -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s _v ->
    match _menhir_s with
    | MenhirState71 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (x : (Proctype.mode list)) = _v in
        let _v : (Proctype.mode list) = 
# 144 "<standard.mly>"
    ( x )
# 1594 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_SEMICOLON_mode__ _menhir_env _menhir_stack _menhir_s _v
    | MenhirState94 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (xs : (Proctype.mode list)) = _v in
        let (_menhir_stack, _menhir_s, (x : (Proctype.mode))) = _menhir_stack in
        let _2 = () in
        let _v : (Proctype.mode list) = 
# 243 "<standard.mly>"
    ( x :: xs )
# 1606 "tmrRetparser.ml"
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
# 1625 "tmrRetparser.ml"
     in
    
# 206 "tmrRetparser.mly"
                                            ( msgs )
# 1630 "tmrRetparser.ml"
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
# 1649 "tmrRetparser.ml"
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
# 1666 "tmrRetparser.ml"
         in
        _menhir_goto_mode _menhir_env _menhir_stack _menhir_s _v
    | MenhirState116 ->
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
                _menhir_run135 _menhir_env (Obj.magic _menhir_stack) MenhirState118
            | LEFT_MIDBRACE ->
                _menhir_run119 _menhir_env (Obj.magic _menhir_stack) MenhirState118
            | ENVIRONMENT | RIGHT_BRACE | SEMICOLON ->
                _menhir_reduce29 _menhir_env (Obj.magic _menhir_stack) MenhirState118
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState118)
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState128 ->
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
                    _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState131
                | CONST ->
                    _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState131
                | EXP ->
                    _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState131
                | HASHCON ->
                    _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState131
                | IDENT _v ->
                    _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState131 _v
                | K ->
                    _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState131
                | LEFT_ANGLEBARCK ->
                    _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState131
                | LEFT_BRACK ->
                    _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState131
                | MOD ->
                    _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState131
                | NONCE ->
                    _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState131
                | PK ->
                    _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState131
                | SENC ->
                    _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState131
                | SK ->
                    _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState131
                | TMP ->
                    _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState131
                | _ ->
                    assert (not _menhir_env._menhir_error);
                    _menhir_env._menhir_error <- true;
                    _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState131)
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
# 1760 "tmrRetparser.ml"
) -> 'ttv_return =
  fun _menhir_env _menhir_stack ->
    let (_menhir_stack, _menhir_s, (id : (
# 1 "tmrRetparser.mly"
       (string)
# 1766 "tmrRetparser.ml"
    ))) = _menhir_stack in
    let _v : (Proctype.message) = 
# 183 "tmrRetparser.mly"
             ( `Str id )
# 1771 "tmrRetparser.ml"
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
# 1837 "tmrRetparser.ml"
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
# 1905 "tmrRetparser.ml"
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
            let _menhir_stack = Obj.magic _menhir_stack in
            let ((_menhir_stack, _menhir_s), _, (v : (Proctype.message))) = _menhir_stack in
            let _4 = () in
            let _2 = () in
            let _1 = () in
            let _v : (Proctype.message) = 
# 193 "tmrRetparser.mly"
                                             (`Hash v)
# 1930 "tmrRetparser.ml"
             in
            _menhir_goto_message _menhir_env _menhir_stack _menhir_s _v
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState116 | MenhirState128 | MenhirState5 | MenhirState58 | MenhirState27 ->
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
                _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState58
            | CONST ->
                _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState58
            | EXP ->
                _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState58
            | HASHCON ->
                _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState58
            | IDENT _v ->
                _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState58 _v
            | K ->
                _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState58
            | LEFT_ANGLEBARCK ->
                _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState58
            | LEFT_BRACK ->
                _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState58
            | MOD ->
                _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState58
            | NONCE ->
                _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState58
            | PK ->
                _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState58
            | SENC ->
                _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState58
            | SK ->
                _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState58
            | TMP ->
                _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState58
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState58)
        | COMMA | KNOWLEDGES | RIGHT_ANGLEBARCK | RIGHT_BRACE | RIGHT_BRACK | SEMICOLON ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, (x : (Proctype.message))) = _menhir_stack in
            let _v : (Proctype.message list) = 
# 241 "<standard.mly>"
    ( [ x ] )
# 1987 "tmrRetparser.ml"
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
# 2011 "tmrRetparser.ml"
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
                _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState64
            | CONST ->
                _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState64
            | EXP ->
                _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState64
            | HASHCON ->
                _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState64
            | IDENT _v ->
                _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState64 _v
            | K ->
                _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState64
            | LEFT_ANGLEBARCK ->
                _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState64
            | LEFT_BRACK ->
                _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState64
            | MOD ->
                _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState64
            | NONCE ->
                _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState64
            | PK ->
                _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState64
            | SENC ->
                _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState64
            | SK ->
                _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState64
            | TMP ->
                _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState64
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState64)
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState64 ->
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
# 2085 "tmrRetparser.ml"
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
                _menhir_run43 _menhir_env (Obj.magic _menhir_stack) MenhirState68
            | CONST ->
                _menhir_run39 _menhir_env (Obj.magic _menhir_stack) MenhirState68
            | EXP ->
                _menhir_run37 _menhir_env (Obj.magic _menhir_stack) MenhirState68
            | HASHCON ->
                _menhir_run35 _menhir_env (Obj.magic _menhir_stack) MenhirState68
            | IDENT _v ->
                _menhir_run34 _menhir_env (Obj.magic _menhir_stack) MenhirState68 _v
            | K ->
                _menhir_run28 _menhir_env (Obj.magic _menhir_stack) MenhirState68
            | LEFT_ANGLEBARCK ->
                _menhir_run27 _menhir_env (Obj.magic _menhir_stack) MenhirState68
            | LEFT_BRACK ->
                _menhir_run26 _menhir_env (Obj.magic _menhir_stack) MenhirState68
            | MOD ->
                _menhir_run24 _menhir_env (Obj.magic _menhir_stack) MenhirState68
            | NONCE ->
                _menhir_run20 _menhir_env (Obj.magic _menhir_stack) MenhirState68
            | PK ->
                _menhir_run16 _menhir_env (Obj.magic _menhir_stack) MenhirState68
            | SENC ->
                _menhir_run14 _menhir_env (Obj.magic _menhir_stack) MenhirState68
            | SK ->
                _menhir_run10 _menhir_env (Obj.magic _menhir_stack) MenhirState68
            | TMP ->
                _menhir_run6 _menhir_env (Obj.magic _menhir_stack) MenhirState68
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState68)
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, _) = _menhir_stack in
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s)
    | MenhirState68 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (((_menhir_stack, _menhir_s), _, (v1 : (Proctype.message))), _, (v2 : (Proctype.message))) = _menhir_stack in
        let _4 = () in
        let _2 = () in
        let _1 = () in
        let _v : (Proctype.message) = 
# 200 "tmrRetparser.mly"
                                                      (`Senc (v1,v2))
# 2152 "tmrRetparser.ml"
         in
        _menhir_goto_message _menhir_env _menhir_stack _menhir_s _v
    | MenhirState102 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let ((_menhir_stack, _menhir_s, (r : (
# 1 "tmrRetparser.mly"
       (string)
# 2161 "tmrRetparser.ml"
        ))), _, (m : (Proctype.message))) = _menhir_stack in
        let _2 = () in
        let _v : (Proctype.knowledge) = 
# 121 "tmrRetparser.mly"
                               ( `Knowledge (r,m) )
# 2167 "tmrRetparser.ml"
         in
        _menhir_goto_knowledge _menhir_env _menhir_stack _menhir_s _v
    | MenhirState131 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let ((((((_menhir_stack, _menhir_s), (seq : (
# 5 "tmrRetparser.mly"
       (int)
# 2176 "tmrRetparser.ml"
        ))), (s : (Proctype.sign))), (r : (
# 1 "tmrRetparser.mly"
       (string)
# 2180 "tmrRetparser.ml"
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
# 2192 "tmrRetparser.ml"
         in
        _menhir_goto_action _menhir_env _menhir_stack _menhir_s _v
    | MenhirState133 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let ((((_menhir_stack, _menhir_s), (seq : (
# 5 "tmrRetparser.mly"
       (int)
# 2201 "tmrRetparser.ml"
        ))), (s : (Proctype.sign))), _, (m : (Proctype.message))) = _menhir_stack in
        let _5 = () in
        let _3 = () in
        let _1 = () in
        let _v : (Proctype.action) = 
# 174 "tmrRetparser.mly"
                                                                (`Receive (seq,s,m))
# 2209 "tmrRetparser.ml"
         in
        _menhir_goto_action _menhir_env _menhir_stack _menhir_s _v
    | MenhirState161 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (((((_menhir_stack, _menhir_s), (seq : (
# 1 "tmrRetparser.mly"
       (string)
# 2218 "tmrRetparser.ml"
        ))), (r : (
# 1 "tmrRetparser.mly"
       (string)
# 2222 "tmrRetparser.ml"
        ))), (num : (
# 5 "tmrRetparser.mly"
       (int)
# 2226 "tmrRetparser.ml"
        ))), _, (m : (Proctype.message))) = _menhir_stack in
        let _8 = () in
        let _7 = () in
        let _5 = () in
        let _3 = () in
        let _1 = () in
        let _v : (Proctype.environment) = 
# 134 "tmrRetparser.mly"
                                                                                                                  ( `Env_agent (r,num,m))
# 2236 "tmrRetparser.ml"
         in
        _menhir_goto_envs _menhir_env _menhir_stack _menhir_s _v
    | MenhirState180 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (((((_menhir_stack, _menhir_s), (seq : (
# 1 "tmrRetparser.mly"
       (string)
# 2245 "tmrRetparser.ml"
        ))), _, (r1 : (
# 1 "tmrRetparser.mly"
       (string)
# 2249 "tmrRetparser.ml"
        ))), (r2 : (
# 1 "tmrRetparser.mly"
       (string)
# 2253 "tmrRetparser.ml"
        ))), _, (m : (Proctype.message))) = _menhir_stack in
        let _7 = () in
        let _5 = () in
        let _3 = () in
        let _1 = () in
        let _v : (Proctype.goal) = 
# 148 "tmrRetparser.mly"
                                                                                    ( `Agreegoal (seq,r1,r2,m))
# 2262 "tmrRetparser.ml"
         in
        _menhir_goto_goal _menhir_env _menhir_stack _menhir_s _v
    | MenhirState176 ->
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
# 2293 "tmrRetparser.ml"
                        )) = _v in
                        let ((((_menhir_stack, _menhir_s), (seq : (
# 1 "tmrRetparser.mly"
       (string)
# 2298 "tmrRetparser.ml"
                        ))), _, (m : (Proctype.message))), (r1 : (
# 1 "tmrRetparser.mly"
       (string)
# 2302 "tmrRetparser.ml"
                        ))) = _menhir_stack in
                        let _7 = () in
                        let _5 = () in
                        let _3 = () in
                        let _1 = () in
                        let _v : (Proctype.goal) = 
# 147 "tmrRetparser.mly"
                                                                                          ( `Secretgoal1 (seq,m,r1,r2))
# 2311 "tmrRetparser.ml"
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
# 2337 "tmrRetparser.ml"
            ))), _, (m : (Proctype.message))) = _menhir_stack in
            let _3 = () in
            let _1 = () in
            let _v : (Proctype.goal) = 
# 146 "tmrRetparser.mly"
                                                         ( `Secretgoal (seq,m))
# 2344 "tmrRetparser.ml"
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
            _menhir_run76 _menhir_env (Obj.magic _menhir_stack) MenhirState81
        | MOD ->
            _menhir_run75 _menhir_env (Obj.magic _menhir_stack) MenhirState81
        | PK ->
            _menhir_run74 _menhir_env (Obj.magic _menhir_stack) MenhirState81
        | SK ->
            _menhir_run73 _menhir_env (Obj.magic _menhir_stack) MenhirState81
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState81)
    | KNOWLEDGES | RIGHT_BRACE | SEMICOLON ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, (x : (Proctype.function1))) = _menhir_stack in
        let _v : (Proctype.function1 list) = 
# 241 "<standard.mly>"
    ( [ x ] )
# 2386 "tmrRetparser.ml"
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
    | MenhirState94 | MenhirState71 ->
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
                _menhir_run83 _menhir_env (Obj.magic _menhir_stack) MenhirState94
            | FUNCTION ->
                _menhir_run72 _menhir_env (Obj.magic _menhir_stack) MenhirState94
            | LEFT_BRACE ->
                _menhir_run71 _menhir_env (Obj.magic _menhir_stack) MenhirState94
            | NUMBER ->
                _menhir_run5 _menhir_env (Obj.magic _menhir_stack) MenhirState94
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState94)
        | RIGHT_BRACE ->
            let _menhir_stack = Obj.magic _menhir_stack in
            let (_menhir_stack, _menhir_s, (x : (Proctype.mode))) = _menhir_stack in
            let _v : (Proctype.mode list) = 
# 241 "<standard.mly>"
    ( [ x ] )
# 2428 "tmrRetparser.ml"
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
# 2445 "tmrRetparser.ml"
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
                _menhir_run101 _menhir_env (Obj.magic _menhir_stack) MenhirState99 _v
            | LEFT_BRACE ->
                _menhir_run100 _menhir_env (Obj.magic _menhir_stack) MenhirState99
            | _ ->
                assert (not _menhir_env._menhir_error);
                _menhir_env._menhir_error <- true;
                _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState99)
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
    | MenhirState85 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (xs : (string list)) = _v in
        let (_menhir_stack, _menhir_s, (x : (
# 1 "tmrRetparser.mly"
       (string)
# 2483 "tmrRetparser.ml"
        ))) = _menhir_stack in
        let _2 = () in
        let _v : (string list) = 
# 243 "<standard.mly>"
    ( x :: xs )
# 2489 "tmrRetparser.ml"
         in
        _menhir_goto_separated_nonempty_list_PERIOD_IDENT_ _menhir_env _menhir_stack _menhir_s _v
    | MenhirState83 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_stack = Obj.magic _menhir_stack in
        let (x : (string list)) = _v in
        let _v : (string list) = 
# 144 "<standard.mly>"
    ( x )
# 2499 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_PERIOD_IDENT__ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        _menhir_fail ()

and _menhir_reduce35 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _v : (Proctype.message list) = 
# 142 "<standard.mly>"
    ( [] )
# 2510 "tmrRetparser.ml"
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
# 2538 "tmrRetparser.ml"
                ))) = _menhir_stack in
                let _4 = () in
                let _2 = () in
                let _1 = () in
                let _v : (Proctype.message) = 
# 189 "tmrRetparser.mly"
                                       (`Tmp mn)
# 2546 "tmrRetparser.ml"
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
# 2592 "tmrRetparser.ml"
                ))) = _menhir_stack in
                let _4 = () in
                let _2 = () in
                let _1 = () in
                let _v : (Proctype.message) = 
# 188 "tmrRetparser.mly"
                                         ( `Sk rlnm )
# 2600 "tmrRetparser.ml"
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
# 2696 "tmrRetparser.ml"
                ))) = _menhir_stack in
                let _4 = () in
                let _2 = () in
                let _1 = () in
                let _v : (Proctype.message) = 
# 187 "tmrRetparser.mly"
                                         ( `Pk rlnm )
# 2704 "tmrRetparser.ml"
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
# 2750 "tmrRetparser.ml"
                ))) = _menhir_stack in
                let _4 = () in
                let _2 = () in
                let _1 = () in
                let _v : (Proctype.message) = 
# 184 "tmrRetparser.mly"
                                          (`Var id )
# 2758 "tmrRetparser.ml"
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
# 2945 "tmrRetparser.ml"
                        ))), (rlnm2 : (
# 1 "tmrRetparser.mly"
       (string)
# 2949 "tmrRetparser.ml"
                        ))) = _menhir_stack in
                        let _6 = () in
                        let _4 = () in
                        let _2 = () in
                        let _1 = () in
                        let _v : (Proctype.message) = 
# 192 "tmrRetparser.mly"
                                                           ( `K (rlnm1,rlnm2))
# 2958 "tmrRetparser.ml"
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
# 2995 "tmrRetparser.ml"
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
# 3126 "tmrRetparser.ml"
                ))) = _menhir_stack in
                let _4 = () in
                let _2 = () in
                let _1 = () in
                let _v : (Proctype.message) = 
# 194 "tmrRetparser.mly"
                                          (`Const n)
# 3134 "tmrRetparser.ml"
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
# 3214 "tmrRetparser.ml"
     in
    
# 99 "tmrRetparser.mly"
                                         ( ts )
# 3219 "tmrRetparser.ml"
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
# 3236 "tmrRetparser.ml"
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
# 3254 "tmrRetparser.ml"
     in
    
# 93 "tmrRetparser.mly"
                                       (fs)
# 3259 "tmrRetparser.ml"
     in
    let _menhir_stack = Obj.magic _menhir_stack in
    let _menhir_stack = Obj.magic _menhir_stack in
    let (fs : (Proctype.function1 list)) = _v in
    let (_menhir_stack, _menhir_s) = _menhir_stack in
    let _1 = () in
    let _v : (Proctype.mode) = 
# 82 "tmrRetparser.mly"
                               (`Function fs)
# 3269 "tmrRetparser.ml"
     in
    _menhir_goto_mode _menhir_env _menhir_stack _menhir_s _v

and _menhir_run73 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_env = _menhir_discard _menhir_env in
    let _menhir_stack = Obj.magic _menhir_stack in
    let sk = () in
    let _v : (Proctype.function1) = 
# 87 "tmrRetparser.mly"
          (`Sk sk)
# 3281 "tmrRetparser.ml"
     in
    _menhir_goto_function1 _menhir_env _menhir_stack _menhir_s _v

and _menhir_run74 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_env = _menhir_discard _menhir_env in
    let _menhir_stack = Obj.magic _menhir_stack in
    let pk = () in
    let _v : (Proctype.function1) = 
# 86 "tmrRetparser.mly"
          (`Pk pk)
# 3293 "tmrRetparser.ml"
     in
    _menhir_goto_function1 _menhir_env _menhir_stack _menhir_s _v

and _menhir_run75 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_env = _menhir_discard _menhir_env in
    let _menhir_stack = Obj.magic _menhir_stack in
    let mod1 = () in
    let _v : (Proctype.function1) = 
# 89 "tmrRetparser.mly"
               (`Mod mod1)
# 3305 "tmrRetparser.ml"
     in
    _menhir_goto_function1 _menhir_env _menhir_stack _menhir_s _v

and _menhir_run76 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_env = _menhir_discard _menhir_env in
    let _menhir_stack = Obj.magic _menhir_stack in
    let exp = () in
    let _v : (Proctype.function1) = 
# 88 "tmrRetparser.mly"
             (`Exp exp)
# 3317 "tmrRetparser.ml"
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
# 3329 "tmrRetparser.ml"
     in
    
# 96 "tmrRetparser.mly"
                                    (is)
# 3334 "tmrRetparser.ml"
     in
    let _menhir_stack = Obj.magic _menhir_stack in
    let _menhir_stack = Obj.magic _menhir_stack in
    let (rs : (string list)) = _v in
    let (_menhir_stack, _menhir_s) = _menhir_stack in
    let _1 = () in
    let _v : (Proctype.mode) = 
# 80 "tmrRetparser.mly"
                         (`Agent rs)
# 3344 "tmrRetparser.ml"
     in
    _menhir_goto_mode _menhir_env _menhir_stack _menhir_s _v

and _menhir_run84 : _menhir_env -> 'ttv_tail -> _menhir_state -> (
# 1 "tmrRetparser.mly"
       (string)
# 3351 "tmrRetparser.ml"
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
            _menhir_run84 _menhir_env (Obj.magic _menhir_stack) MenhirState85 _v
        | _ ->
            assert (not _menhir_env._menhir_error);
            _menhir_env._menhir_error <- true;
            _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState85)
    | KNOWLEDGES | RIGHT_BRACE | SEMICOLON ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, (x : (
# 1 "tmrRetparser.mly"
       (string)
# 3374 "tmrRetparser.ml"
        ))) = _menhir_stack in
        let _v : (string list) = 
# 241 "<standard.mly>"
    ( [ x ] )
# 3379 "tmrRetparser.ml"
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
    | MenhirState193 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState187 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState180 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let ((_menhir_stack, _menhir_s, _), _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState176 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let ((_menhir_stack, _menhir_s), _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState173 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        raise _eRR
    | MenhirState167 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState163 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState161 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let ((((_menhir_stack, _menhir_s), _), _), _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState153 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        raise _eRR
    | MenhirState149 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState141 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState135 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState133 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (((_menhir_stack, _menhir_s), _), _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState131 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState128 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let ((((_menhir_stack, _menhir_s), _), _), _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState118 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState116 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState114 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState113 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        raise _eRR
    | MenhirState109 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState102 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState100 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState99 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        raise _eRR
    | MenhirState94 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState85 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState83 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState81 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState72 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState71 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState68 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState64 ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let (_menhir_stack, _menhir_s, _) = _menhir_stack in
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) _menhir_s
    | MenhirState58 ->
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

and _menhir_run71 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | AGENT ->
        _menhir_run83 _menhir_env (Obj.magic _menhir_stack) MenhirState71
    | FUNCTION ->
        _menhir_run72 _menhir_env (Obj.magic _menhir_stack) MenhirState71
    | LEFT_BRACE ->
        _menhir_run71 _menhir_env (Obj.magic _menhir_stack) MenhirState71
    | NUMBER ->
        _menhir_run5 _menhir_env (Obj.magic _menhir_stack) MenhirState71
    | RIGHT_BRACE ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_s = MenhirState71 in
        let _v : (Proctype.mode list) = 
# 142 "<standard.mly>"
    ( [] )
# 3621 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_SEMICOLON_mode__ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState71

and _menhir_run72 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | EXP ->
        _menhir_run76 _menhir_env (Obj.magic _menhir_stack) MenhirState72
    | MOD ->
        _menhir_run75 _menhir_env (Obj.magic _menhir_stack) MenhirState72
    | PK ->
        _menhir_run74 _menhir_env (Obj.magic _menhir_stack) MenhirState72
    | SK ->
        _menhir_run73 _menhir_env (Obj.magic _menhir_stack) MenhirState72
    | KNOWLEDGES | RIGHT_BRACE | SEMICOLON ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_s = MenhirState72 in
        let _v : (Proctype.function1 list) = 
# 142 "<standard.mly>"
    ( [] )
# 3649 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_PERIOD_function1__ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState72

and _menhir_run83 : _menhir_env -> 'ttv_tail -> _menhir_state -> 'ttv_return =
  fun _menhir_env _menhir_stack _menhir_s ->
    let _menhir_stack = (_menhir_stack, _menhir_s) in
    let _menhir_env = _menhir_discard _menhir_env in
    let _tok = _menhir_env._menhir_token in
    match _tok with
    | IDENT _v ->
        _menhir_run84 _menhir_env (Obj.magic _menhir_stack) MenhirState83 _v
    | KNOWLEDGES | RIGHT_BRACE | SEMICOLON ->
        let _menhir_stack = Obj.magic _menhir_stack in
        let _menhir_s = MenhirState83 in
        let _v : (string list) = 
# 142 "<standard.mly>"
    ( [] )
# 3671 "tmrRetparser.ml"
         in
        _menhir_goto_loption_separated_nonempty_list_PERIOD_IDENT__ _menhir_env _menhir_stack _menhir_s _v
    | _ ->
        assert (not _menhir_env._menhir_error);
        _menhir_env._menhir_error <- true;
        _menhir_errorcase _menhir_env (Obj.magic _menhir_stack) MenhirState83

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
# 3718 "tmrRetparser.ml"
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
                        _menhir_run83 _menhir_env (Obj.magic _menhir_stack) MenhirState4
                    | FUNCTION ->
                        _menhir_run72 _menhir_env (Obj.magic _menhir_stack) MenhirState4
                    | LEFT_BRACE ->
                        _menhir_run71 _menhir_env (Obj.magic _menhir_stack) MenhirState4
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
  

# 3778 "tmrRetparser.ml"
