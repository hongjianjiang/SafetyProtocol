
const

  NODE_NUM : 3;
  DATA_NUM : 2;

type

  NODE : scalarset(NODE_NUM);
  DATA : scalarset(DATA_NUM);

  ABS_NODE : union {NODE, enum{Other}};

  CACHE_STATE : enum {CACHE_I, CACHE_S, CACHE_E};

  NODE_CMD : enum {NODE_None, NODE_Get, NODE_GetX};

  NODE_STATE : record
    ProcCmd : NODE_CMD;
    InvMarked : boolean;
    CacheState : CACHE_STATE;
    CacheData : DATA;
  end;

  DIR_STATE : record
    Pending : boolean;
    Local : boolean;
    Dirty : boolean;
    HeadVld : boolean;
    HeadPtr : ABS_NODE;
    ShrVld : boolean;
    ShrSet : array [NODE] of boolean;
    InvSet : array [NODE] of boolean;
  end;

  UNI_CMD : enum {UNI_None, UNI_Get, UNI_GetX, UNI_Put, UNI_PutX, UNI_Nak};

  UNI_MSG : record
    Cmd : UNI_CMD;
    Proc : ABS_NODE;
    Data : DATA;
  end;

  INV_CMD : enum {INV_None, INV_Inv, INV_InvAck};

  INV_MSG : record
    Cmd : INV_CMD;
  end;

  RP_CMD : enum {RP_None, RP_Replace};

  RP_MSG : record
    Cmd : RP_CMD;
  end;

  WB_CMD : enum {WB_None, WB_Wb};

  WB_MSG : record
    Cmd : WB_CMD;
    Proc : ABS_NODE;
    Data : DATA;
  end;

  SHWB_CMD : enum {SHWB_None, SHWB_ShWb, SHWB_FAck};

  SHWB_MSG : record
    Cmd : SHWB_CMD;
    Proc : ABS_NODE;
    Data : DATA;
  end;

  NAKC_CMD : enum {NAKC_None, NAKC_Nakc};

  NAKC_MSG : record
    Cmd : NAKC_CMD;
  end;

  STATE : record
  -- Program variables:
    Proc : array [NODE] of NODE_STATE;
    Dir : DIR_STATE;
    MemData : DATA;
    UniMsg : array [NODE] of UNI_MSG;
    InvMsg : array [NODE] of INV_MSG;
    RpMsg : array [NODE] of RP_MSG;
    WbMsg : WB_MSG;
    ShWbMsg : SHWB_MSG;
    NakcMsg : NAKC_MSG;
  -- Auxiliary variables:
    CurrData : DATA;
    PrevData : DATA;
    LastWrVld : boolean;
    LastWrPtr : ABS_NODE;
    PendReqSrc : ABS_NODE;
    PendReqCmd : UNI_CMD;
    Collecting : boolean;
    FwdCmd : UNI_CMD;
    FwdSrc : ABS_NODE;
    LastInvAck : ABS_NODE;
    LastOtherInvAck : ABS_NODE;
  end;

var

  Home : NODE;
  Sta : STATE;

ruleset  src : NODE do
rule "NI_Replace1"
  Sta.RpMsg[src].Cmd = RP_Replace &
  Sta.Dir.ShrVld = true
==>
begin
  Sta.RpMsg[src].Cmd := RP_None;
  Sta.Dir.ShrSet[src] := false;
  Sta.Dir.InvSet[src] := false;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Replace2"
  Sta.RpMsg[src].Cmd = RP_Replace &
  Sta.Dir.ShrVld = false
==>
begin
  Sta.RpMsg[src].Cmd := RP_None;
endrule;
endruleset;

rule "NI_ShWb3"
  Sta.ShWbMsg.Cmd = SHWB_ShWb
==>
begin
  Sta.ShWbMsg.Cmd := SHWB_None;
  Sta.Dir.Pending := false;
  Sta.Dir.Dirty := false;
  Sta.Dir.ShrVld := true;
  for p : NODE do
    Sta.Dir.InvSet[p] := (p = Sta.ShWbMsg.Proc |
    Sta.Dir.ShrSet[p] = true);
    Sta.Dir.ShrSet[p] := (p = Sta.ShWbMsg.Proc |
    Sta.Dir.ShrSet[p] = true);
  end;
  Sta.MemData := Sta.ShWbMsg.Data;
  undefine Sta.ShWbMsg.Proc;
  undefine Sta.ShWbMsg.Data;
endrule;

rule "NI_FAck4"
  Sta.ShWbMsg.Cmd = SHWB_FAck &
  Sta.Dir.Dirty = true
==>
begin
  Sta.ShWbMsg.Cmd := SHWB_None;
  Sta.Dir.Pending := false;
  Sta.Dir.HeadPtr := Sta.ShWbMsg.Proc;
  undefine Sta.ShWbMsg.Proc;
  undefine Sta.ShWbMsg.Data;
endrule;

rule "NI_FAck5"
  Sta.ShWbMsg.Cmd = SHWB_FAck &
  Sta.Dir.Dirty = false
==>
begin
  Sta.ShWbMsg.Cmd := SHWB_None;
  Sta.Dir.Pending := false;
  undefine Sta.ShWbMsg.Proc;
  undefine Sta.ShWbMsg.Data;
endrule;

rule "NI_Wb6"
  Sta.WbMsg.Cmd = WB_Wb
==>
begin
  Sta.WbMsg.Cmd := WB_None;
  Sta.Dir.Dirty := false;
  Sta.Dir.HeadVld := false;
  Sta.MemData := Sta.WbMsg.Data;
  undefine Sta.WbMsg.Proc;
  undefine Sta.WbMsg.Data;
  undefine Sta.Dir.HeadPtr;
endrule;

ruleset  src : NODE do
rule "NI_InvAck_no_exists7"
  Sta.InvMsg[src].Cmd = INV_InvAck &
  Sta.Dir.Pending = true &
  Sta.Dir.InvSet[src] = true &
  Sta.Dir.InvSet[Home] = false &
  forall p : NODE do
    p = src |
    Sta.Dir.InvSet[p] = false
  end &
  Sta.Dir.Local = true &
  Sta.Dir.Dirty = false
==>
begin
  Sta.InvMsg[src].Cmd := INV_None;
  Sta.Dir.InvSet[src] := false;
  Sta.Dir.Pending := false;
  Sta.Dir.Local := false;
  Sta.Collecting := false;
  Sta.LastInvAck := src;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_InvAck_no_exists8"
  Sta.InvMsg[src].Cmd = INV_InvAck &
  Sta.Dir.Pending = true &
  Sta.Dir.InvSet[src] = true &
  Sta.Dir.InvSet[Home] = false &
  forall p : NODE do
    p = src | Sta.Dir.InvSet[p] = false
  end &
  Sta.Dir.Local = false
==>
begin
  Sta.InvMsg[src].Cmd := INV_None;
  Sta.Dir.InvSet[src] := false;
  Sta.Dir.Pending := false;
  Sta.Collecting := false;
  Sta.LastInvAck := src;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_InvAck_no_exists9"
  Sta.InvMsg[src].Cmd = INV_InvAck &
  Sta.Dir.Pending = true &
  Sta.Dir.InvSet[src] = true &
  Sta.Dir.InvSet[Home] = false &
  forall p : NODE do
    p = src |
    Sta.Dir.InvSet[p] = false
  end &
  Sta.Dir.Dirty = true
==>
begin
  Sta.InvMsg[src].Cmd := INV_None;
  Sta.Dir.InvSet[src] := false;
  Sta.Dir.Pending := false;
  Sta.Collecting := false;
  Sta.LastInvAck := src;
endrule;
endruleset;

ruleset  dst : NODE; src : NODE do
rule "NI_InvAck_exists10"
  Sta.InvMsg[src].Cmd = INV_InvAck &
  Sta.Dir.Pending = true &
  Sta.Dir.InvSet[src] = true &
  dst != src &
  Sta.Dir.InvSet[dst] = true
==>
begin
  Sta.InvMsg[src].Cmd := INV_None;
  Sta.LastInvAck := src;
  for p : NODE do
    if ((p != src &
    Sta.Dir.InvSet[p] = true)) then
      Sta.LastOtherInvAck := p;
    end;
  end;
  Sta.Dir.InvSet[src] := false;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_InvAck_exists_Home11"
  Sta.InvMsg[src].Cmd = INV_InvAck &
  Sta.Dir.Pending = true &
  Sta.Dir.InvSet[src] = true &
  Sta.Dir.InvSet[Home] = true
==>
begin
  Sta.InvMsg[src].Cmd := INV_None;
  Sta.LastInvAck := src;
  for p : NODE do
    if ((p != src &
    Sta.Dir.InvSet[p] = true)) then
      Sta.LastOtherInvAck := p;
    end;
  end;
  Sta.Dir.InvSet[src] := false;
endrule;
endruleset;

ruleset  dst : NODE do
rule "NI_Inv12"
  dst != Home &
  Sta.InvMsg[dst].Cmd = INV_Inv &
  Sta.Proc[dst].ProcCmd = NODE_Get
==>
begin
  Sta.InvMsg[dst].Cmd := INV_InvAck;
  Sta.Proc[dst].CacheState := CACHE_I;
  Sta.Proc[dst].InvMarked := true;
  undefine Sta.Proc[dst].CacheData;
endrule;
endruleset;

ruleset  dst : NODE do
rule "NI_Inv13"
  dst != Home &
  Sta.InvMsg[dst].Cmd = INV_Inv &
  Sta.Proc[dst].ProcCmd != NODE_Get
==>
begin
  Sta.InvMsg[dst].Cmd := INV_InvAck;
  Sta.Proc[dst].CacheState := CACHE_I;
  undefine Sta.Proc[dst].CacheData;
endrule;
endruleset;

ruleset  dst : NODE do
rule "NI_Remote_PutX14"
  dst != Home &
  Sta.UniMsg[dst].Cmd = UNI_PutX &
  Sta.Proc[dst].ProcCmd = NODE_GetX
==>
begin
  Sta.UniMsg[dst].Cmd := UNI_None;
  Sta.Proc[dst].ProcCmd := NODE_None;
  Sta.Proc[dst].InvMarked := false;
  Sta.Proc[dst].CacheState := CACHE_E;
  Sta.Proc[dst].CacheData := Sta.UniMsg[dst].Data;
  undefine Sta.UniMsg[dst].Proc;
  undefine Sta.UniMsg[dst].Data;
endrule;
endruleset;

rule "NI_Local_PutXAcksDone15"
  Sta.UniMsg[Home].Cmd = UNI_PutX
==>
begin
  Sta.UniMsg[Home].Cmd := UNI_None;
  Sta.Dir.Pending := false;
  Sta.Dir.Local := true;
  Sta.Dir.HeadVld := false;
  Sta.Proc[Home].ProcCmd := NODE_None;
  Sta.Proc[Home].InvMarked := false;
  Sta.Proc[Home].CacheState := CACHE_E;
  Sta.Proc[Home].CacheData := Sta.UniMsg[Home].Data;
  undefine Sta.UniMsg[Home].Proc;
  undefine Sta.UniMsg[Home].Data;
  undefine Sta.Dir.HeadPtr;
endrule;

ruleset  dst : NODE do
rule "NI_Remote_Put16"
  dst != Home &
  Sta.UniMsg[dst].Cmd = UNI_Put &
  Sta.Proc[dst].InvMarked = true
==>
begin
  Sta.UniMsg[dst].Cmd := UNI_None;
  Sta.Proc[dst].ProcCmd := NODE_None;
  Sta.Proc[dst].InvMarked := false;
  Sta.Proc[dst].CacheState := CACHE_I;
  undefine Sta.Proc[dst].CacheData;
  undefine Sta.UniMsg[dst].Proc;
  undefine Sta.UniMsg[dst].Data;
endrule;
endruleset;

ruleset  dst : NODE do
rule "NI_Remote_Put17"
  dst != Home &
  Sta.UniMsg[dst].Cmd = UNI_Put &
  Sta.Proc[dst].InvMarked = false
==>
begin
  Sta.UniMsg[dst].Cmd := UNI_None;
  Sta.Proc[dst].ProcCmd := NODE_None;
  Sta.Proc[dst].CacheState := CACHE_S;
  Sta.Proc[dst].CacheData := Sta.UniMsg[dst].Data;
  undefine Sta.UniMsg[dst].Proc;
  undefine Sta.UniMsg[dst].Data;
endrule;
endruleset;

rule "NI_Local_Put18"
  Sta.UniMsg[Home].Cmd = UNI_Put &
  Sta.Proc[Home].InvMarked = true
==>
begin
  Sta.UniMsg[Home].Cmd := UNI_None;
  Sta.Dir.Pending := false;
  Sta.Dir.Dirty := false;
  Sta.Dir.Local := true;
  Sta.MemData := Sta.UniMsg[Home].Data;
  Sta.Proc[Home].ProcCmd := NODE_None;
  Sta.Proc[Home].InvMarked := false;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
  undefine Sta.UniMsg[Home].Proc;
  undefine Sta.UniMsg[Home].Data;
endrule;

rule "NI_Local_Put19"
  Sta.UniMsg[Home].Cmd = UNI_Put &
  Sta.Proc[Home].InvMarked = false
==>
begin
  Sta.UniMsg[Home].Cmd := UNI_None;
  Sta.Dir.Pending := false;
  Sta.Dir.Dirty := false;
  Sta.Dir.Local := true;
  Sta.MemData := Sta.UniMsg[Home].Data;
  Sta.Proc[Home].ProcCmd := NODE_None;
  Sta.Proc[Home].CacheState := CACHE_S;
  Sta.Proc[Home].CacheData := Sta.UniMsg[Home].Data;
  undefine Sta.UniMsg[Home].Proc;
  undefine Sta.UniMsg[Home].Data;
endrule;

ruleset  dst : NODE; src : NODE do
rule "NI_Remote_GetX_PutX20"
  src != dst &
  dst != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = dst &
  Sta.Proc[dst].CacheState = CACHE_E &
  src != Home
==>
begin
  Sta.Proc[dst].CacheState := CACHE_I;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := dst;
  Sta.UniMsg[src].Data := Sta.Proc[dst].CacheData;
  Sta.ShWbMsg.Cmd := SHWB_FAck;
  Sta.ShWbMsg.Proc := src;
  undefine Sta.ShWbMsg.Data;
  Sta.FwdCmd := UNI_None;
  Sta.FwdSrc := src;
  undefine Sta.Proc[dst].CacheData;
endrule;
endruleset;

ruleset  dst : NODE; src : NODE do
rule "NI_Remote_GetX_PutX21"
  src != dst &
  dst != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = dst &
  Sta.Proc[dst].CacheState = CACHE_E &
  src = Home
==>
begin
  Sta.Proc[dst].CacheState := CACHE_I;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := dst;
  Sta.UniMsg[src].Data := Sta.Proc[dst].CacheData;
  Sta.FwdCmd := UNI_None;
  Sta.FwdSrc := src;
  undefine Sta.Proc[dst].CacheData;
endrule;
endruleset;

ruleset  dst : NODE; src : NODE do
rule "NI_Remote_GetX_Nak22"
  src != dst &
  dst != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = dst &
  Sta.Proc[dst].CacheState != CACHE_E
==>
begin
  Sta.UniMsg[src].Cmd := UNI_Nak;
  Sta.UniMsg[src].Proc := dst;
  Sta.NakcMsg.Cmd := NAKC_Nakc;
  Sta.FwdCmd := UNI_None;
  Sta.FwdSrc := src;
  undefine Sta.UniMsg[src].Data;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX23"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.Dirty = true
==>
begin
  Sta.Dir.Local := false;
  Sta.Dir.Dirty := true;
  Sta.Dir.HeadVld := true;
  Sta.Dir.HeadPtr := src;
  Sta.Dir.ShrVld := false;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
    Sta.Dir.InvSet[p] := false;
  end;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.Proc[Home].CacheData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX24"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Local = true &
  Sta.Proc[Home].CacheState = CACHE_E &
  Sta.Dir.Dirty = true
==>
begin
  Sta.Dir.Local := false;
  Sta.Dir.Dirty := true;
  Sta.Dir.HeadVld := true;
  Sta.Dir.HeadPtr := src;
  Sta.Dir.ShrVld := false;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
    Sta.Dir.InvSet[p] := false;
  end;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.Proc[Home].CacheData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX25"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = false &
  Sta.Dir.Local = true &
  Sta.Proc[Home].ProcCmd = NODE_Get
==>
begin
  Sta.Dir.Dirty := true;
  Sta.Dir.HeadVld := true;
  Sta.Dir.HeadPtr := src;
  Sta.Dir.ShrVld := false;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
    Sta.Dir.InvSet[p] := false;
  end;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
  Sta.Proc[Home].InvMarked := true;
  Sta.Dir.Local := false;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX26"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadPtr = src &
  forall p : NODE do
    p != src ->
    Sta.Dir.ShrSet[p] = false
  end &
  Sta.Dir.Local = true &
  Sta.Proc[Home].ProcCmd = NODE_Get
==>
begin
  Sta.Dir.Dirty := true;
  Sta.Dir.HeadVld := true;
  Sta.Dir.HeadPtr := src;
  Sta.Dir.ShrVld := false;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
    Sta.Dir.InvSet[p] := false;
  end;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
  Sta.Proc[Home].InvMarked := true;
  Sta.Dir.Local := false;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX27"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Local = true &
  Sta.Proc[Home].CacheState = CACHE_E &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = false &
  Sta.Proc[Home].ProcCmd = NODE_Get
==>
begin
  Sta.Dir.Dirty := true;
  Sta.Dir.HeadVld := true;
  Sta.Dir.HeadPtr := src;
  Sta.Dir.ShrVld := false;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
    Sta.Dir.InvSet[p] := false;
  end;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
  Sta.Proc[Home].InvMarked := true;
  Sta.Dir.Local := false;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX28"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Local = true &
  Sta.Proc[Home].CacheState = CACHE_E &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadPtr = src &
  forall p : NODE do
    p != src ->
    Sta.Dir.ShrSet[p] = false
  end &
  Sta.Dir.Local = true &
  Sta.Proc[Home].ProcCmd = NODE_Get
==>
begin
  Sta.Dir.Dirty := true;
  Sta.Dir.HeadVld := true;
  Sta.Dir.HeadPtr := src;
  Sta.Dir.ShrVld := false;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
    Sta.Dir.InvSet[p] := false;
  end;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
  Sta.Proc[Home].InvMarked := true;
  Sta.Dir.Local := false;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX29"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = false &
  Sta.Dir.Local = true &
  Sta.Proc[Home].ProcCmd != NODE_Get
==>
begin
  Sta.Dir.Dirty := true;
  Sta.Dir.HeadVld := true;
  Sta.Dir.HeadPtr := src;
  Sta.Dir.ShrVld := false;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
    Sta.Dir.InvSet[p] := false;
  end;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
  Sta.Dir.Local := false;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX30"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadPtr = src &
  forall p : NODE do
    p != src ->
    Sta.Dir.ShrSet[p] = false
  end &
  Sta.Dir.Local = true &
  Sta.Proc[Home].ProcCmd != NODE_Get
==>
begin
  Sta.Dir.Dirty := true;
  Sta.Dir.HeadVld := true;
  Sta.Dir.HeadPtr := src;
  Sta.Dir.ShrVld := false;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
    Sta.Dir.InvSet[p] := false;
  end;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
  Sta.Dir.Local := false;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX31"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Local = true &
  Sta.Proc[Home].CacheState = CACHE_E &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = false &
  Sta.Proc[Home].ProcCmd != NODE_Get
==>
begin
  Sta.Dir.Dirty := true;
  Sta.Dir.HeadVld := true;
  Sta.Dir.HeadPtr := src;
  Sta.Dir.ShrVld := false;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
    Sta.Dir.InvSet[p] := false;
  end;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
  Sta.Dir.Local := false;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX32"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Local = true &
  Sta.Proc[Home].CacheState = CACHE_E &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadPtr = src &
  forall p : NODE do
    p != src ->
    Sta.Dir.ShrSet[p] = false
  end &
  Sta.Dir.Local = true &
  Sta.Proc[Home].ProcCmd != NODE_Get
==>
begin
  Sta.Dir.Dirty := true;
  Sta.Dir.HeadVld := true;
  Sta.Dir.HeadPtr := src;
  Sta.Dir.ShrVld := false;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
    Sta.Dir.InvSet[p] := false;
  end;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
  Sta.Dir.Local := false;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX33"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = false &
  Sta.Dir.Local = false
==>
begin
  Sta.Dir.Dirty := true;
  Sta.Dir.HeadVld := true;
  Sta.Dir.HeadPtr := src;
  Sta.Dir.ShrVld := false;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
    Sta.Dir.InvSet[p] := false;
  end;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
  Sta.Dir.Local := false;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX34"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadPtr = src &
  forall p : NODE do
    p != src ->
    Sta.Dir.ShrSet[p] = false
  end &
  Sta.Dir.Local = false
==>
begin
  Sta.Dir.Dirty := true;
  Sta.Dir.HeadVld := true;
  Sta.Dir.HeadPtr := src;
  Sta.Dir.ShrVld := false;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
    Sta.Dir.InvSet[p] := false;
  end;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
  Sta.Dir.Local := false;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX35"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Local = true &
  Sta.Proc[Home].CacheState = CACHE_E &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = false &
  Sta.Dir.Local = false
==>
begin
  Sta.Dir.Dirty := true;
  Sta.Dir.HeadVld := true;
  Sta.Dir.HeadPtr := src;
  Sta.Dir.ShrVld := false;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
    Sta.Dir.InvSet[p] := false;
  end;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
  Sta.Dir.Local := false;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX36"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Local = true &
  Sta.Proc[Home].CacheState = CACHE_E &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadPtr = src &
  forall p : NODE do
    p != src ->
    Sta.Dir.ShrSet[p] = false
  end &
  Sta.Dir.Local = false
==>
begin
  Sta.Dir.Dirty := true;
  Sta.Dir.HeadVld := true;
  Sta.Dir.HeadPtr := src;
  Sta.Dir.ShrVld := false;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
    Sta.Dir.InvSet[p] := false;
  end;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
  Sta.Dir.Local := false;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX37"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = true &
  Sta.Dir.HeadPtr != src &
  Sta.Dir.Local = true &
  Sta.Proc[Home].ProcCmd = NODE_Get &
  Sta.Dir.HeadPtr != src
==>
begin
  Sta.Dir.Pending := true;
  Sta.Dir.Dirty := true;
  for p : NODE do
    if (((p != Home &
    p != src) &
    ((Sta.Dir.ShrVld = true &
    Sta.Dir.ShrSet[p] = true) |
    (Sta.Dir.HeadVld = true &
    Sta.Dir.HeadPtr = p)))) then
      Sta.Dir.InvSet[p] := true;
      Sta.InvMsg[p].Cmd := INV_Inv;
    else
      Sta.Dir.InvSet[p] := false;
      Sta.InvMsg[p].Cmd := INV_None;
    end;
  end;
  Sta.Dir.ShrVld := false;
  Sta.Dir.HeadVld := true;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
  Sta.Proc[Home].InvMarked := true;
  Sta.Dir.Local := false;
  Sta.PendReqSrc := src;
  Sta.PendReqCmd := UNI_GetX;
  Sta.Collecting := true;
  Sta.PrevData := Sta.CurrData;
  Sta.LastOtherInvAck := Sta.Dir.HeadPtr;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
  end;
  Sta.Dir.HeadPtr := src;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX38"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = true &
  !forall p : NODE do
    p != src ->
    Sta.Dir.ShrSet[p] = false
  end &
  Sta.Dir.Local = true &
  Sta.Proc[Home].ProcCmd = NODE_Get &
  Sta.Dir.HeadPtr != src
==>
begin
  Sta.Dir.Pending := true;
  Sta.Dir.Dirty := true;
  for p : NODE do
    if (((p != Home &
    p != src) &
    ((Sta.Dir.ShrVld = true &
    Sta.Dir.ShrSet[p] = true) |
    (Sta.Dir.HeadVld = true &
    Sta.Dir.HeadPtr = p)))) then
      Sta.Dir.InvSet[p] := true;
      Sta.InvMsg[p].Cmd := INV_Inv;
    else
      Sta.Dir.InvSet[p] := false;
      Sta.InvMsg[p].Cmd := INV_None;
    end;
  end;
  Sta.Dir.ShrVld := false;
  Sta.Dir.HeadVld := true;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
  Sta.Proc[Home].InvMarked := true;
  Sta.Dir.Local := false;
  Sta.PendReqSrc := src;
  Sta.PendReqCmd := UNI_GetX;
  Sta.Collecting := true;
  Sta.PrevData := Sta.CurrData;
  Sta.LastOtherInvAck := Sta.Dir.HeadPtr;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
  end;
  Sta.Dir.HeadPtr := src;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX39"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Local = true &
  Sta.Proc[Home].CacheState = CACHE_E &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = true &
  Sta.Dir.HeadPtr != src &
  Sta.Dir.Local = true &
  Sta.Proc[Home].ProcCmd = NODE_Get &
  Sta.Dir.HeadPtr != src
==>
begin
  Sta.Dir.Pending := true;
  Sta.Dir.Dirty := true;
  for p : NODE do
    if (((p != Home &
    p != src) &
    ((Sta.Dir.ShrVld = true &
    Sta.Dir.ShrSet[p] = true) |
    (Sta.Dir.HeadVld = true &
    Sta.Dir.HeadPtr = p)))) then
      Sta.Dir.InvSet[p] := true;
      Sta.InvMsg[p].Cmd := INV_Inv;
    else
      Sta.Dir.InvSet[p] := false;
      Sta.InvMsg[p].Cmd := INV_None;
    end;
  end;
  Sta.Dir.ShrVld := false;
  Sta.Dir.HeadVld := true;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
  Sta.Proc[Home].InvMarked := true;
  Sta.Dir.Local := false;
  Sta.PendReqSrc := src;
  Sta.PendReqCmd := UNI_GetX;
  Sta.Collecting := true;
  Sta.PrevData := Sta.CurrData;
  Sta.LastOtherInvAck := Sta.Dir.HeadPtr;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
  end;
  Sta.Dir.HeadPtr := src;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX40"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Local = true &
  Sta.Proc[Home].CacheState = CACHE_E &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = true &
  !forall p : NODE do
    p != src ->
    Sta.Dir.ShrSet[p] = false
  end &
  Sta.Dir.Local = true &
  Sta.Proc[Home].ProcCmd = NODE_Get &
  Sta.Dir.HeadPtr != src
==>
begin
  Sta.Dir.Pending := true;
  Sta.Dir.Dirty := true;
  for p : NODE do
    if (((p != Home &
    p != src) &
    ((Sta.Dir.ShrVld = true &
    Sta.Dir.ShrSet[p] = true) |
    (Sta.Dir.HeadVld = true &
    Sta.Dir.HeadPtr = p)))) then
      Sta.Dir.InvSet[p] := true;
      Sta.InvMsg[p].Cmd := INV_Inv;
    else
      Sta.Dir.InvSet[p] := false;
      Sta.InvMsg[p].Cmd := INV_None;
    end;
  end;
  Sta.Dir.ShrVld := false;
  Sta.Dir.HeadVld := true;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
  Sta.Proc[Home].InvMarked := true;
  Sta.Dir.Local := false;
  Sta.PendReqSrc := src;
  Sta.PendReqCmd := UNI_GetX;
  Sta.Collecting := true;
  Sta.PrevData := Sta.CurrData;
  Sta.LastOtherInvAck := Sta.Dir.HeadPtr;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
  end;
  Sta.Dir.HeadPtr := src;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX41"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = true &
  Sta.Dir.HeadPtr != src &
  Sta.Dir.Local = true &
  Sta.Proc[Home].ProcCmd = NODE_Get &
  Sta.Dir.HeadPtr = src
==>
begin
  Sta.Dir.Pending := true;
  Sta.Dir.Dirty := true;
  for p : NODE do
    if (((p != Home &
    p != src) &
    ((Sta.Dir.ShrVld = true &
    Sta.Dir.ShrSet[p] = true) |
    (Sta.Dir.HeadVld = true &
    Sta.Dir.HeadPtr = p)))) then
      Sta.Dir.InvSet[p] := true;
      Sta.InvMsg[p].Cmd := INV_Inv;
    else
      Sta.Dir.InvSet[p] := false;
      Sta.InvMsg[p].Cmd := INV_None;
    end;
  end;
  Sta.Dir.ShrVld := false;
  Sta.Dir.HeadVld := true;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
  Sta.Proc[Home].InvMarked := true;
  Sta.Dir.Local := false;
  Sta.PendReqSrc := src;
  Sta.PendReqCmd := UNI_GetX;
  Sta.Collecting := true;
  Sta.PrevData := Sta.CurrData;
  for p : NODE do
    if ((p != src &
    Sta.Dir.ShrSet[p] = true)) then
      Sta.LastOtherInvAck := p;
    end;
  end;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
  end;
  Sta.Dir.HeadPtr := src;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX42"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = true &
  !forall p : NODE do
    p != src ->
    Sta.Dir.ShrSet[p] = false
  end &
  Sta.Dir.Local = true &
  Sta.Proc[Home].ProcCmd = NODE_Get &
  Sta.Dir.HeadPtr = src
==>
begin
  Sta.Dir.Pending := true;
  Sta.Dir.Dirty := true;
  for p : NODE do
    if (((p != Home &
    p != src) &
    ((Sta.Dir.ShrVld = true &
    Sta.Dir.ShrSet[p] = true) |
    (Sta.Dir.HeadVld = true &
    Sta.Dir.HeadPtr = p)))) then
      Sta.Dir.InvSet[p] := true;
      Sta.InvMsg[p].Cmd := INV_Inv;
    else
      Sta.Dir.InvSet[p] := false;
      Sta.InvMsg[p].Cmd := INV_None;
    end;
  end;
  Sta.Dir.ShrVld := false;
  Sta.Dir.HeadVld := true;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
  Sta.Proc[Home].InvMarked := true;
  Sta.Dir.Local := false;
  Sta.PendReqSrc := src;
  Sta.PendReqCmd := UNI_GetX;
  Sta.Collecting := true;
  Sta.PrevData := Sta.CurrData;
  for p : NODE do
    if ((p != src &
    Sta.Dir.ShrSet[p] = true)) then
      Sta.LastOtherInvAck := p;
    end;
  end;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
  end;
  Sta.Dir.HeadPtr := src;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX43"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Local = true &
  Sta.Proc[Home].CacheState = CACHE_E &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = true &
  Sta.Dir.HeadPtr != src &
  Sta.Dir.Local = true &
  Sta.Proc[Home].ProcCmd = NODE_Get &
  Sta.Dir.HeadPtr = src
==>
begin
  Sta.Dir.Pending := true;
  Sta.Dir.Dirty := true;
  for p : NODE do
    if (((p != Home &
    p != src) &
    ((Sta.Dir.ShrVld = true &
    Sta.Dir.ShrSet[p] = true) |
    (Sta.Dir.HeadVld = true &
    Sta.Dir.HeadPtr = p)))) then
      Sta.Dir.InvSet[p] := true;
      Sta.InvMsg[p].Cmd := INV_Inv;
    else
      Sta.Dir.InvSet[p] := false;
      Sta.InvMsg[p].Cmd := INV_None;
    end;
  end;
  Sta.Dir.ShrVld := false;
  Sta.Dir.HeadVld := true;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
  Sta.Proc[Home].InvMarked := true;
  Sta.Dir.Local := false;
  Sta.PendReqSrc := src;
  Sta.PendReqCmd := UNI_GetX;
  Sta.Collecting := true;
  Sta.PrevData := Sta.CurrData;
  for p : NODE do
    if ((p != src &
    Sta.Dir.ShrSet[p] = true)) then
      Sta.LastOtherInvAck := p;
    end;
  end;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
  end;
  Sta.Dir.HeadPtr := src;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX44"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Local = true &
  Sta.Proc[Home].CacheState = CACHE_E &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = true &
  !forall p : NODE do
    p != src ->
    Sta.Dir.ShrSet[p] = false
  end &
  Sta.Dir.Local = true &
  Sta.Proc[Home].ProcCmd = NODE_Get &
  Sta.Dir.HeadPtr = src
==>
begin
  Sta.Dir.Pending := true;
  Sta.Dir.Dirty := true;
  for p : NODE do
    if (((p != Home &
    p != src) &
    ((Sta.Dir.ShrVld = true &
    Sta.Dir.ShrSet[p] = true) |
    (Sta.Dir.HeadVld = true &
    Sta.Dir.HeadPtr = p)))) then
      Sta.Dir.InvSet[p] := true;
      Sta.InvMsg[p].Cmd := INV_Inv;
    else
      Sta.Dir.InvSet[p] := false;
      Sta.InvMsg[p].Cmd := INV_None;
    end;
  end;
  Sta.Dir.ShrVld := false;
  Sta.Dir.HeadVld := true;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
  Sta.Proc[Home].InvMarked := true;
  Sta.Dir.Local := false;
  Sta.PendReqSrc := src;
  Sta.PendReqCmd := UNI_GetX;
  Sta.Collecting := true;
  Sta.PrevData := Sta.CurrData;
  for p : NODE do
    if ((p != src &
    Sta.Dir.ShrSet[p] = true)) then
      Sta.LastOtherInvAck := p;
    end;
  end;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
  end;
  Sta.Dir.HeadPtr := src;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX45"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = true &
  Sta.Dir.HeadPtr != src &
  Sta.Dir.Local = true &
  Sta.Proc[Home].ProcCmd != NODE_Get &
  Sta.Dir.HeadPtr != src
==>
begin
  Sta.Dir.Pending := true;
  Sta.Dir.Dirty := true;
  for p : NODE do
    if (((p != Home &
    p != src) &
    ((Sta.Dir.ShrVld = true &
    Sta.Dir.ShrSet[p] = true) |
    (Sta.Dir.HeadVld = true &
    Sta.Dir.HeadPtr = p)))) then
      Sta.Dir.InvSet[p] := true;
      Sta.InvMsg[p].Cmd := INV_Inv;
    else
      Sta.Dir.InvSet[p] := false;
      Sta.InvMsg[p].Cmd := INV_None;
    end;
  end;
  Sta.Dir.ShrVld := false;
  Sta.Dir.HeadVld := true;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
  Sta.Dir.Local := false;
  Sta.PendReqSrc := src;
  Sta.PendReqCmd := UNI_GetX;
  Sta.Collecting := true;
  Sta.PrevData := Sta.CurrData;
  Sta.LastOtherInvAck := Sta.Dir.HeadPtr;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
  end;
  Sta.Dir.HeadPtr := src;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX46"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = true &
  !forall p : NODE do
    p != src ->
    Sta.Dir.ShrSet[p] = false
  end &
  Sta.Dir.Local = true &
  Sta.Proc[Home].ProcCmd != NODE_Get &
  Sta.Dir.HeadPtr != src
==>
begin
  Sta.Dir.Pending := true;
  Sta.Dir.Dirty := true;
  for p : NODE do
    if (((p != Home &
    p != src) &
    ((Sta.Dir.ShrVld = true &
    Sta.Dir.ShrSet[p] = true) |
    (Sta.Dir.HeadVld = true &
    Sta.Dir.HeadPtr = p)))) then
      Sta.Dir.InvSet[p] := true;
      Sta.InvMsg[p].Cmd := INV_Inv;
    else
      Sta.Dir.InvSet[p] := false;
      Sta.InvMsg[p].Cmd := INV_None;
    end;
  end;
  Sta.Dir.ShrVld := false;
  Sta.Dir.HeadVld := true;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
  Sta.Dir.Local := false;
  Sta.PendReqSrc := src;
  Sta.PendReqCmd := UNI_GetX;
  Sta.Collecting := true;
  Sta.PrevData := Sta.CurrData;
  Sta.LastOtherInvAck := Sta.Dir.HeadPtr;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
  end;
  Sta.Dir.HeadPtr := src;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX47"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Local = true &
  Sta.Proc[Home].CacheState = CACHE_E &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = true &
  Sta.Dir.HeadPtr != src &
  Sta.Dir.Local = true &
  Sta.Proc[Home].ProcCmd != NODE_Get &
  Sta.Dir.HeadPtr != src
==>
begin
  Sta.Dir.Pending := true;
  Sta.Dir.Dirty := true;
  for p : NODE do
    if (((p != Home &
    p != src) &
    ((Sta.Dir.ShrVld = true &
    Sta.Dir.ShrSet[p] = true) |
    (Sta.Dir.HeadVld = true &
    Sta.Dir.HeadPtr = p)))) then
      Sta.Dir.InvSet[p] := true;
      Sta.InvMsg[p].Cmd := INV_Inv;
    else
      Sta.Dir.InvSet[p] := false;
      Sta.InvMsg[p].Cmd := INV_None;
    end;
  end;
  Sta.Dir.ShrVld := false;
  Sta.Dir.HeadVld := true;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
  Sta.Dir.Local := false;
  Sta.PendReqSrc := src;
  Sta.PendReqCmd := UNI_GetX;
  Sta.Collecting := true;
  Sta.PrevData := Sta.CurrData;
  Sta.LastOtherInvAck := Sta.Dir.HeadPtr;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
  end;
  Sta.Dir.HeadPtr := src;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX48"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Local = true &
  Sta.Proc[Home].CacheState = CACHE_E &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = true &
  !forall p : NODE do
    p != src ->
    Sta.Dir.ShrSet[p] = false
  end &
  Sta.Dir.Local = true &
  Sta.Proc[Home].ProcCmd != NODE_Get &
  Sta.Dir.HeadPtr != src
==>
begin
  Sta.Dir.Pending := true;
  Sta.Dir.Dirty := true;
  for p : NODE do
    if (((p != Home &
    p != src) &
    ((Sta.Dir.ShrVld = true &
    Sta.Dir.ShrSet[p] = true) |
    (Sta.Dir.HeadVld = true &
    Sta.Dir.HeadPtr = p)))) then
      Sta.Dir.InvSet[p] := true;
      Sta.InvMsg[p].Cmd := INV_Inv;
    else
      Sta.Dir.InvSet[p] := false;
      Sta.InvMsg[p].Cmd := INV_None;
    end;
  end;
  Sta.Dir.ShrVld := false;
  Sta.Dir.HeadVld := true;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
  Sta.Dir.Local := false;
  Sta.PendReqSrc := src;
  Sta.PendReqCmd := UNI_GetX;
  Sta.Collecting := true;
  Sta.PrevData := Sta.CurrData;
  Sta.LastOtherInvAck := Sta.Dir.HeadPtr;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
  end;
  Sta.Dir.HeadPtr := src;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX49"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = true &
  Sta.Dir.HeadPtr != src &
  Sta.Dir.Local = true &
  Sta.Proc[Home].ProcCmd != NODE_Get &
  Sta.Dir.HeadPtr = src
==>
begin
  Sta.Dir.Pending := true;
  Sta.Dir.Dirty := true;
  for p : NODE do
    if (((p != Home &
    p != src) &
    ((Sta.Dir.ShrVld = true &
    Sta.Dir.ShrSet[p] = true) |
    (Sta.Dir.HeadVld = true &
    Sta.Dir.HeadPtr = p)))) then
      Sta.Dir.InvSet[p] := true;
      Sta.InvMsg[p].Cmd := INV_Inv;
    else
      Sta.Dir.InvSet[p] := false;
      Sta.InvMsg[p].Cmd := INV_None;
    end;
  end;
  Sta.Dir.ShrVld := false;
  Sta.Dir.HeadVld := true;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
  Sta.Dir.Local := false;
  Sta.PendReqSrc := src;
  Sta.PendReqCmd := UNI_GetX;
  Sta.Collecting := true;
  Sta.PrevData := Sta.CurrData;
  for p : NODE do
    if ((p != src &
    Sta.Dir.ShrSet[p] = true)) then
      Sta.LastOtherInvAck := p;
    end;
  end;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
  end;
  Sta.Dir.HeadPtr := src;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX50"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = true &
  !forall p : NODE do
    p != src ->
    Sta.Dir.ShrSet[p] = false
  end &
  Sta.Dir.Local = true &
  Sta.Proc[Home].ProcCmd != NODE_Get &
  Sta.Dir.HeadPtr = src
==>
begin
  Sta.Dir.Pending := true;
  Sta.Dir.Dirty := true;
  for p : NODE do
    if (((p != Home &
    p != src) &
    ((Sta.Dir.ShrVld = true &
    Sta.Dir.ShrSet[p] = true) |
    (Sta.Dir.HeadVld = true &
    Sta.Dir.HeadPtr = p)))) then
      Sta.Dir.InvSet[p] := true;
      Sta.InvMsg[p].Cmd := INV_Inv;
    else
      Sta.Dir.InvSet[p] := false;
      Sta.InvMsg[p].Cmd := INV_None;
    end;
  end;
  Sta.Dir.ShrVld := false;
  Sta.Dir.HeadVld := true;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
  Sta.Dir.Local := false;
  Sta.PendReqSrc := src;
  Sta.PendReqCmd := UNI_GetX;
  Sta.Collecting := true;
  Sta.PrevData := Sta.CurrData;
  for p : NODE do
    if ((p != src &
    Sta.Dir.ShrSet[p] = true)) then
      Sta.LastOtherInvAck := p;
    end;
  end;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
  end;
  Sta.Dir.HeadPtr := src;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX51"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Local = true &
  Sta.Proc[Home].CacheState = CACHE_E &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = true &
  Sta.Dir.HeadPtr != src &
  Sta.Dir.Local = true &
  Sta.Proc[Home].ProcCmd != NODE_Get &
  Sta.Dir.HeadPtr = src
==>
begin
  Sta.Dir.Pending := true;
  Sta.Dir.Dirty := true;
  for p : NODE do
    if (((p != Home &
    p != src) &
    ((Sta.Dir.ShrVld = true &
    Sta.Dir.ShrSet[p] = true) |
    (Sta.Dir.HeadVld = true &
    Sta.Dir.HeadPtr = p)))) then
      Sta.Dir.InvSet[p] := true;
      Sta.InvMsg[p].Cmd := INV_Inv;
    else
      Sta.Dir.InvSet[p] := false;
      Sta.InvMsg[p].Cmd := INV_None;
    end;
  end;
  Sta.Dir.ShrVld := false;
  Sta.Dir.HeadVld := true;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
  Sta.Dir.Local := false;
  Sta.PendReqSrc := src;
  Sta.PendReqCmd := UNI_GetX;
  Sta.Collecting := true;
  Sta.PrevData := Sta.CurrData;
  for p : NODE do
    if ((p != src &
    Sta.Dir.ShrSet[p] = true)) then
      Sta.LastOtherInvAck := p;
    end;
  end;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
  end;
  Sta.Dir.HeadPtr := src;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX52"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Local = true &
  Sta.Proc[Home].CacheState = CACHE_E &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = true &
  !forall p : NODE do
    p != src ->
    Sta.Dir.ShrSet[p] = false
  end &
  Sta.Dir.Local = true &
  Sta.Proc[Home].ProcCmd != NODE_Get &
  Sta.Dir.HeadPtr = src
==>
begin
  Sta.Dir.Pending := true;
  Sta.Dir.Dirty := true;
  for p : NODE do
    if (((p != Home &
    p != src) &
    ((Sta.Dir.ShrVld = true &
    Sta.Dir.ShrSet[p] = true) |
    (Sta.Dir.HeadVld = true &
    Sta.Dir.HeadPtr = p)))) then
      Sta.Dir.InvSet[p] := true;
      Sta.InvMsg[p].Cmd := INV_Inv;
    else
      Sta.Dir.InvSet[p] := false;
      Sta.InvMsg[p].Cmd := INV_None;
    end;
  end;
  Sta.Dir.ShrVld := false;
  Sta.Dir.HeadVld := true;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
  Sta.Dir.Local := false;
  Sta.PendReqSrc := src;
  Sta.PendReqCmd := UNI_GetX;
  Sta.Collecting := true;
  Sta.PrevData := Sta.CurrData;
  for p : NODE do
    if ((p != src &
    Sta.Dir.ShrSet[p] = true)) then
      Sta.LastOtherInvAck := p;
    end;
  end;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
  end;
  Sta.Dir.HeadPtr := src;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX53"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = true &
  Sta.Dir.HeadPtr != src &
  Sta.Dir.Local = false &
  Sta.Dir.HeadPtr != src
==>
begin
  Sta.Dir.Pending := true;
  Sta.Dir.Dirty := true;
  for p : NODE do
    if (((p != Home &
    p != src) &
    ((Sta.Dir.ShrVld = true &
    Sta.Dir.ShrSet[p] = true) |
    (Sta.Dir.HeadVld = true &
    Sta.Dir.HeadPtr = p)))) then
      Sta.Dir.InvSet[p] := true;
      Sta.InvMsg[p].Cmd := INV_Inv;
    else
      Sta.Dir.InvSet[p] := false;
      Sta.InvMsg[p].Cmd := INV_None;
    end;
  end;
  Sta.Dir.ShrVld := false;
  Sta.Dir.HeadVld := true;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
  Sta.Dir.Local := false;
  Sta.PendReqSrc := src;
  Sta.PendReqCmd := UNI_GetX;
  Sta.Collecting := true;
  Sta.PrevData := Sta.CurrData;
  Sta.LastOtherInvAck := Sta.Dir.HeadPtr;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
  end;
  Sta.Dir.HeadPtr := src;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX54"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = true &
  !forall p : NODE do
    p != src ->
    Sta.Dir.ShrSet[p] = false
  end &
  Sta.Dir.Local = false &
  Sta.Dir.HeadPtr != src
==>
begin
  Sta.Dir.Pending := true;
  Sta.Dir.Dirty := true;
  for p : NODE do
    if (((p != Home &
    p != src) &
    ((Sta.Dir.ShrVld = true &
    Sta.Dir.ShrSet[p] = true) |
    (Sta.Dir.HeadVld = true &
    Sta.Dir.HeadPtr = p)))) then
      Sta.Dir.InvSet[p] := true;
      Sta.InvMsg[p].Cmd := INV_Inv;
    else
      Sta.Dir.InvSet[p] := false;
      Sta.InvMsg[p].Cmd := INV_None;
    end;
  end;
  Sta.Dir.ShrVld := false;
  Sta.Dir.HeadVld := true;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
  Sta.Dir.Local := false;
  Sta.PendReqSrc := src;
  Sta.PendReqCmd := UNI_GetX;
  Sta.Collecting := true;
  Sta.PrevData := Sta.CurrData;
  Sta.LastOtherInvAck := Sta.Dir.HeadPtr;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
  end;
  Sta.Dir.HeadPtr := src;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX55"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Local = true &
  Sta.Proc[Home].CacheState = CACHE_E &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = true &
  Sta.Dir.HeadPtr != src &
  Sta.Dir.Local = false &
  Sta.Dir.HeadPtr != src
==>
begin
  Sta.Dir.Pending := true;
  Sta.Dir.Dirty := true;
  for p : NODE do
    if (((p != Home &
    p != src) &
    ((Sta.Dir.ShrVld = true &
    Sta.Dir.ShrSet[p] = true) |
    (Sta.Dir.HeadVld = true &
    Sta.Dir.HeadPtr = p)))) then
      Sta.Dir.InvSet[p] := true;
      Sta.InvMsg[p].Cmd := INV_Inv;
    else
      Sta.Dir.InvSet[p] := false;
      Sta.InvMsg[p].Cmd := INV_None;
    end;
  end;
  Sta.Dir.ShrVld := false;
  Sta.Dir.HeadVld := true;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
  Sta.Dir.Local := false;
  Sta.PendReqSrc := src;
  Sta.PendReqCmd := UNI_GetX;
  Sta.Collecting := true;
  Sta.PrevData := Sta.CurrData;
  Sta.LastOtherInvAck := Sta.Dir.HeadPtr;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
  end;
  Sta.Dir.HeadPtr := src;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX56"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Local = true &
  Sta.Proc[Home].CacheState = CACHE_E &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = true &
  !forall p : NODE do
    p != src ->
    Sta.Dir.ShrSet[p] = false
  end &
  Sta.Dir.Local = false &
  Sta.Dir.HeadPtr != src
==>
begin
  Sta.Dir.Pending := true;
  Sta.Dir.Dirty := true;
  for p : NODE do
    if (((p != Home &
    p != src) &
    ((Sta.Dir.ShrVld = true &
    Sta.Dir.ShrSet[p] = true) |
    (Sta.Dir.HeadVld = true &
    Sta.Dir.HeadPtr = p)))) then
      Sta.Dir.InvSet[p] := true;
      Sta.InvMsg[p].Cmd := INV_Inv;
    else
      Sta.Dir.InvSet[p] := false;
      Sta.InvMsg[p].Cmd := INV_None;
    end;
  end;
  Sta.Dir.ShrVld := false;
  Sta.Dir.HeadVld := true;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
  Sta.Dir.Local := false;
  Sta.PendReqSrc := src;
  Sta.PendReqCmd := UNI_GetX;
  Sta.Collecting := true;
  Sta.PrevData := Sta.CurrData;
  Sta.LastOtherInvAck := Sta.Dir.HeadPtr;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
  end;
  Sta.Dir.HeadPtr := src;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX57"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = true &
  Sta.Dir.HeadPtr != src &
  Sta.Dir.Local = false &
  Sta.Dir.HeadPtr = src
==>
begin
  Sta.Dir.Pending := true;
  Sta.Dir.Dirty := true;
  for p : NODE do
    if (((p != Home &
    p != src) &
    ((Sta.Dir.ShrVld = true &
    Sta.Dir.ShrSet[p] = true) |
    (Sta.Dir.HeadVld = true &
    Sta.Dir.HeadPtr = p)))) then
      Sta.Dir.InvSet[p] := true;
      Sta.InvMsg[p].Cmd := INV_Inv;
    else
      Sta.Dir.InvSet[p] := false;
      Sta.InvMsg[p].Cmd := INV_None;
    end;
  end;
  Sta.Dir.ShrVld := false;
  Sta.Dir.HeadVld := true;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
  Sta.Dir.Local := false;
  Sta.PendReqSrc := src;
  Sta.PendReqCmd := UNI_GetX;
  Sta.Collecting := true;
  Sta.PrevData := Sta.CurrData;
  for p : NODE do
    if ((p != src &
    Sta.Dir.ShrSet[p] = true)) then
      Sta.LastOtherInvAck := p;
    end;
  end;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
  end;
  Sta.Dir.HeadPtr := src;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX58"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = true &
  !forall p : NODE do
    p != src ->
    Sta.Dir.ShrSet[p] = false
  end &
  Sta.Dir.Local = false &
  Sta.Dir.HeadPtr = src
==>
begin
  Sta.Dir.Pending := true;
  Sta.Dir.Dirty := true;
  for p : NODE do
    if (((p != Home &
    p != src) &
    ((Sta.Dir.ShrVld = true &
    Sta.Dir.ShrSet[p] = true) |
    (Sta.Dir.HeadVld = true &
    Sta.Dir.HeadPtr = p)))) then
      Sta.Dir.InvSet[p] := true;
      Sta.InvMsg[p].Cmd := INV_Inv;
    else
      Sta.Dir.InvSet[p] := false;
      Sta.InvMsg[p].Cmd := INV_None;
    end;
  end;
  Sta.Dir.ShrVld := false;
  Sta.Dir.HeadVld := true;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
  Sta.Dir.Local := false;
  Sta.PendReqSrc := src;
  Sta.PendReqCmd := UNI_GetX;
  Sta.Collecting := true;
  Sta.PrevData := Sta.CurrData;
  for p : NODE do
    if ((p != src &
    Sta.Dir.ShrSet[p] = true)) then
      Sta.LastOtherInvAck := p;
    end;
  end;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
  end;
  Sta.Dir.HeadPtr := src;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX59"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Local = true &
  Sta.Proc[Home].CacheState = CACHE_E &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = true &
  Sta.Dir.HeadPtr != src &
  Sta.Dir.Local = false &
  Sta.Dir.HeadPtr = src
==>
begin
  Sta.Dir.Pending := true;
  Sta.Dir.Dirty := true;
  for p : NODE do
    if (((p != Home &
    p != src) &
    ((Sta.Dir.ShrVld = true &
    Sta.Dir.ShrSet[p] = true) |
    (Sta.Dir.HeadVld = true &
    Sta.Dir.HeadPtr = p)))) then
      Sta.Dir.InvSet[p] := true;
      Sta.InvMsg[p].Cmd := INV_Inv;
    else
      Sta.Dir.InvSet[p] := false;
      Sta.InvMsg[p].Cmd := INV_None;
    end;
  end;
  Sta.Dir.ShrVld := false;
  Sta.Dir.HeadVld := true;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
  Sta.Dir.Local := false;
  Sta.PendReqSrc := src;
  Sta.PendReqCmd := UNI_GetX;
  Sta.Collecting := true;
  Sta.PrevData := Sta.CurrData;
  for p : NODE do
    if ((p != src &
    Sta.Dir.ShrSet[p] = true)) then
      Sta.LastOtherInvAck := p;
    end;
  end;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
  end;
  Sta.Dir.HeadPtr := src;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_PutX60"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Local = true &
  Sta.Proc[Home].CacheState = CACHE_E &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = true &
  !forall p : NODE do
    p != src ->
    Sta.Dir.ShrSet[p] = false
  end &
  Sta.Dir.Local = false &
  Sta.Dir.HeadPtr = src
==>
begin
  Sta.Dir.Pending := true;
  Sta.Dir.Dirty := true;
  for p : NODE do
    if (((p != Home &
    p != src) &
    ((Sta.Dir.ShrVld = true &
    Sta.Dir.ShrSet[p] = true) |
    (Sta.Dir.HeadVld = true &
    Sta.Dir.HeadPtr = p)))) then
      Sta.Dir.InvSet[p] := true;
      Sta.InvMsg[p].Cmd := INV_Inv;
    else
      Sta.Dir.InvSet[p] := false;
      Sta.InvMsg[p].Cmd := INV_None;
    end;
  end;
  Sta.Dir.ShrVld := false;
  Sta.Dir.HeadVld := true;
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
  Sta.Dir.Local := false;
  Sta.PendReqSrc := src;
  Sta.PendReqCmd := UNI_GetX;
  Sta.Collecting := true;
  Sta.PrevData := Sta.CurrData;
  for p : NODE do
    if ((p != src &
    Sta.Dir.ShrSet[p] = true)) then
      Sta.LastOtherInvAck := p;
    end;
  end;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
  end;
  Sta.Dir.HeadPtr := src;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_GetX61"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = true &
  Sta.Dir.Local = false &
  Sta.Dir.HeadPtr != src &
  Sta.Dir.HeadPtr != Home
==>
begin
  Sta.Dir.Pending := true;
  Sta.UniMsg[src].Cmd := UNI_GetX;
  Sta.UniMsg[src].Proc := Sta.Dir.HeadPtr;
  Sta.FwdCmd := UNI_GetX;
  Sta.PendReqSrc := src;
  Sta.PendReqCmd := UNI_GetX;
  Sta.Collecting := false;
  undefine Sta.UniMsg[src].Data;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_GetX62"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = true &
  Sta.Dir.Local = false &
  Sta.Dir.HeadPtr != src &
  Sta.Dir.HeadPtr = Home
==>
begin
  Sta.Dir.Pending := true;
  Sta.UniMsg[src].Cmd := UNI_GetX;
  Sta.UniMsg[src].Proc := Sta.Dir.HeadPtr;
  Sta.PendReqSrc := src;
  Sta.PendReqCmd := UNI_GetX;
  Sta.Collecting := false;
  undefine Sta.UniMsg[src].Data;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_Nak63"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Pending = true
==>
begin
  Sta.UniMsg[src].Cmd := UNI_Nak;
  Sta.UniMsg[src].Proc := Home;
  undefine Sta.UniMsg[src].Data;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_Nak64"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Dirty = true &
  Sta.Dir.Local = true &
  Sta.Proc[Home].CacheState != CACHE_E
==>
begin
  Sta.UniMsg[src].Cmd := UNI_Nak;
  Sta.UniMsg[src].Proc := Home;
  undefine Sta.UniMsg[src].Data;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_GetX_Nak65"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_GetX &
  Sta.UniMsg[src].Proc = Home &
  Sta.Dir.Dirty = true &
  Sta.Dir.Local = false &
  Sta.Dir.HeadPtr = src
==>
begin
  Sta.UniMsg[src].Cmd := UNI_Nak;
  Sta.UniMsg[src].Proc := Home;
  undefine Sta.UniMsg[src].Data;
endrule;
endruleset;

ruleset  dst : NODE; src : NODE do
rule "NI_Remote_Get_Put66"
  src != dst &
  dst != Home &
  Sta.UniMsg[src].Cmd = UNI_Get &
  Sta.UniMsg[src].Proc = dst &
  Sta.Proc[dst].CacheState = CACHE_E &
  src != Home
==>
begin
  Sta.Proc[dst].CacheState := CACHE_S;
  Sta.UniMsg[src].Cmd := UNI_Put;
  Sta.UniMsg[src].Proc := dst;
  Sta.UniMsg[src].Data := Sta.Proc[dst].CacheData;
  Sta.ShWbMsg.Cmd := SHWB_ShWb;
  Sta.ShWbMsg.Proc := src;
  Sta.ShWbMsg.Data := Sta.Proc[dst].CacheData;
  Sta.FwdCmd := UNI_None;
  Sta.FwdSrc := src;
endrule;
endruleset;

ruleset  dst : NODE; src : NODE do
rule "NI_Remote_Get_Put67"
  src != dst &
  dst != Home &
  Sta.UniMsg[src].Cmd = UNI_Get &
  Sta.UniMsg[src].Proc = dst &
  Sta.Proc[dst].CacheState = CACHE_E &
  src = Home
==>
begin
  Sta.Proc[dst].CacheState := CACHE_S;
  Sta.UniMsg[src].Cmd := UNI_Put;
  Sta.UniMsg[src].Proc := dst;
  Sta.UniMsg[src].Data := Sta.Proc[dst].CacheData;
  Sta.FwdCmd := UNI_None;
  Sta.FwdSrc := src;
endrule;
endruleset;

ruleset  dst : NODE; src : NODE do
rule "NI_Remote_Get_Nak68"
  src != dst &
  dst != Home &
  Sta.UniMsg[src].Cmd = UNI_Get &
  Sta.UniMsg[src].Proc = dst &
  Sta.Proc[dst].CacheState != CACHE_E
==>
begin
  Sta.UniMsg[src].Cmd := UNI_Nak;
  Sta.UniMsg[src].Proc := dst;
  Sta.NakcMsg.Cmd := NAKC_Nakc;
  Sta.FwdCmd := UNI_None;
  Sta.FwdSrc := src;
  undefine Sta.UniMsg[src].Data;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_Get_Put69"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_Get &
  Sta.UniMsg[src].Proc = Home &
  Sta.RpMsg[src].Cmd != RP_Replace &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.Dirty = true
==>
begin
  Sta.Dir.Dirty := false;
  Sta.Dir.HeadVld := true;
  Sta.Dir.HeadPtr := src;
  Sta.MemData := Sta.Proc[Home].CacheData;
  Sta.Proc[Home].CacheState := CACHE_S;
  Sta.UniMsg[src].Cmd := UNI_Put;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.Proc[Home].CacheData;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_Get_Put70"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_Get &
  Sta.UniMsg[src].Proc = Home &
  Sta.RpMsg[src].Cmd != RP_Replace &
  Sta.Dir.Pending = false &
  Sta.Dir.Local = true &
  Sta.Proc[Home].CacheState = CACHE_E &
  Sta.Dir.Dirty = true
==>
begin
  Sta.Dir.Dirty := false;
  Sta.Dir.HeadVld := true;
  Sta.Dir.HeadPtr := src;
  Sta.MemData := Sta.Proc[Home].CacheData;
  Sta.Proc[Home].CacheState := CACHE_S;
  Sta.UniMsg[src].Cmd := UNI_Put;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.Proc[Home].CacheData;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_Get_Put71"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_Get &
  Sta.UniMsg[src].Proc = Home &
  Sta.RpMsg[src].Cmd != RP_Replace &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = true
==>
begin
  Sta.Dir.ShrVld := true;
  Sta.Dir.ShrSet[src] := true;
  for p : NODE do
    Sta.Dir.InvSet[p] := (p = src |
    Sta.Dir.ShrSet[p] = true);
  end;
  Sta.UniMsg[src].Cmd := UNI_Put;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_Get_Put72"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_Get &
  Sta.UniMsg[src].Proc = Home &
  Sta.RpMsg[src].Cmd != RP_Replace &
  Sta.Dir.Pending = false &
  Sta.Dir.Local = true &
  Sta.Proc[Home].CacheState = CACHE_E &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = true
==>
begin
  Sta.Dir.ShrVld := true;
  Sta.Dir.ShrSet[src] := true;
  for p : NODE do
    Sta.Dir.InvSet[p] := (p = src |
    Sta.Dir.ShrSet[p] = true);
  end;
  Sta.UniMsg[src].Cmd := UNI_Put;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_Get_Put73"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_Get &
  Sta.UniMsg[src].Proc = Home &
  Sta.RpMsg[src].Cmd != RP_Replace &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = false
==>
begin
  Sta.Dir.HeadVld := true;
  Sta.Dir.HeadPtr := src;
  Sta.UniMsg[src].Cmd := UNI_Put;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_Get_Put74"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_Get &
  Sta.UniMsg[src].Proc = Home &
  Sta.RpMsg[src].Cmd != RP_Replace &
  Sta.Dir.Pending = false &
  Sta.Dir.Local = true &
  Sta.Proc[Home].CacheState = CACHE_E &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = false
==>
begin
  Sta.Dir.HeadVld := true;
  Sta.Dir.HeadPtr := src;
  Sta.UniMsg[src].Cmd := UNI_Put;
  Sta.UniMsg[src].Proc := Home;
  Sta.UniMsg[src].Data := Sta.MemData;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_Get_Get75"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_Get &
  Sta.UniMsg[src].Proc = Home &
  Sta.RpMsg[src].Cmd != RP_Replace &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = true &
  Sta.Dir.Local = false &
  Sta.Dir.HeadPtr != src &
  Sta.Dir.HeadPtr != Home
==>
begin
  Sta.Dir.Pending := true;
  Sta.UniMsg[src].Cmd := UNI_Get;
  Sta.UniMsg[src].Proc := Sta.Dir.HeadPtr;
  Sta.FwdCmd := UNI_Get;
  Sta.PendReqSrc := src;
  Sta.PendReqCmd := UNI_Get;
  Sta.Collecting := false;
  undefine Sta.UniMsg[src].Data;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_Get_Get76"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_Get &
  Sta.UniMsg[src].Proc = Home &
  Sta.RpMsg[src].Cmd != RP_Replace &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = true &
  Sta.Dir.Local = false &
  Sta.Dir.HeadPtr != src &
  Sta.Dir.HeadPtr = Home
==>
begin
  Sta.Dir.Pending := true;
  Sta.UniMsg[src].Cmd := UNI_Get;
  Sta.UniMsg[src].Proc := Sta.Dir.HeadPtr;
  Sta.PendReqSrc := src;
  Sta.PendReqCmd := UNI_Get;
  Sta.Collecting := false;
  undefine Sta.UniMsg[src].Data;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_Get_Nak77"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_Get &
  Sta.UniMsg[src].Proc = Home &
  Sta.RpMsg[src].Cmd != RP_Replace &
  Sta.Dir.Pending = true
==>
begin
  Sta.UniMsg[src].Cmd := UNI_Nak;
  Sta.UniMsg[src].Proc := Home;
  undefine Sta.UniMsg[src].Data;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_Get_Nak78"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_Get &
  Sta.UniMsg[src].Proc = Home &
  Sta.RpMsg[src].Cmd != RP_Replace &
  Sta.Dir.Dirty = true &
  Sta.Dir.Local = true &
  Sta.Proc[Home].CacheState != CACHE_E
==>
begin
  Sta.UniMsg[src].Cmd := UNI_Nak;
  Sta.UniMsg[src].Proc := Home;
  undefine Sta.UniMsg[src].Data;
endrule;
endruleset;

ruleset  src : NODE do
rule "NI_Local_Get_Nak79"
  src != Home &
  Sta.UniMsg[src].Cmd = UNI_Get &
  Sta.UniMsg[src].Proc = Home &
  Sta.RpMsg[src].Cmd != RP_Replace &
  Sta.Dir.Dirty = true &
  Sta.Dir.Local = false &
  Sta.Dir.HeadPtr = src
==>
begin
  Sta.UniMsg[src].Cmd := UNI_Nak;
  Sta.UniMsg[src].Proc := Home;
  undefine Sta.UniMsg[src].Data;
endrule;
endruleset;

rule "NI_Nak_Clear80"
  Sta.NakcMsg.Cmd = NAKC_Nakc
==>
begin
  Sta.NakcMsg.Cmd := NAKC_None;
  Sta.Dir.Pending := false;
endrule;

ruleset  dst : NODE do
rule "NI_Nak81"
  Sta.UniMsg[dst].Cmd = UNI_Nak
==>
begin
  Sta.UniMsg[dst].Cmd := UNI_None;
  Sta.Proc[dst].ProcCmd := NODE_None;
  Sta.Proc[dst].InvMarked := false;
  undefine Sta.UniMsg[dst].Proc;
  undefine Sta.UniMsg[dst].Data;
endrule;
endruleset;

rule "PI_Local_Replace82"
  Sta.Proc[Home].ProcCmd = NODE_None &
  Sta.Proc[Home].CacheState = CACHE_S
==>
begin
  Sta.Dir.Local := false;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
endrule;

ruleset  src : NODE do
rule "PI_Remote_Replace83"
  src != Home &
  Sta.Proc[src].ProcCmd = NODE_None &
  Sta.Proc[src].CacheState = CACHE_S
==>
begin
  Sta.Proc[src].CacheState := CACHE_I;
  Sta.RpMsg[src].Cmd := RP_Replace;
  undefine Sta.Proc[src].CacheData;
endrule;
endruleset;

rule "PI_Local_PutX84"
  Sta.Proc[Home].ProcCmd = NODE_None &
  Sta.Proc[Home].CacheState = CACHE_E &
  Sta.Dir.Pending = true
==>
begin
  Sta.Proc[Home].CacheState := CACHE_I;
  Sta.Dir.Dirty := false;
  Sta.MemData := Sta.Proc[Home].CacheData;
  undefine Sta.Proc[Home].CacheData;
endrule;

rule "PI_Local_PutX85"
  Sta.Proc[Home].ProcCmd = NODE_None &
  Sta.Proc[Home].CacheState = CACHE_E &
  Sta.Dir.Pending = false
==>
begin
  Sta.Proc[Home].CacheState := CACHE_I;
  Sta.Dir.Local := false;
  Sta.Dir.Dirty := false;
  Sta.MemData := Sta.Proc[Home].CacheData;
  undefine Sta.Proc[Home].CacheData;
endrule;

ruleset  dst : NODE do
rule "PI_Remote_PutX86"
  dst != Home &
  Sta.Proc[dst].ProcCmd = NODE_None &
  Sta.Proc[dst].CacheState = CACHE_E
==>
begin
  Sta.Proc[dst].CacheState := CACHE_I;
  Sta.WbMsg.Cmd := WB_Wb;
  Sta.WbMsg.Proc := dst;
  Sta.WbMsg.Data := Sta.Proc[dst].CacheData;
  undefine Sta.Proc[dst].CacheData;
endrule;
endruleset;

rule "PI_Local_GetX_PutX87"
  Sta.Proc[Home].ProcCmd = NODE_None &
  Sta.Proc[Home].CacheState = CACHE_I &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = true
==>
begin
  Sta.Dir.Local := true;
  Sta.Dir.Dirty := true;
  for p : NODE do
    if ((p != Home &
    ((Sta.Dir.ShrVld = true &
    Sta.Dir.ShrSet[p] = true) |
    (Sta.Dir.HeadVld = true &
    Sta.Dir.HeadPtr = p)))) then
      Sta.Dir.InvSet[p] := true;
      Sta.InvMsg[p].Cmd := INV_Inv;
    else
      Sta.Dir.InvSet[p] := false;
      Sta.InvMsg[p].Cmd := INV_None;
    end;
    Sta.Dir.ShrSet[p] := false;
  end;
  Sta.Dir.Pending := true;
  Sta.Collecting := true;
  Sta.PrevData := Sta.CurrData;
  Sta.LastOtherInvAck := Sta.Dir.HeadPtr;
  Sta.Dir.HeadVld := false;
  Sta.Dir.ShrVld := false;
  undefine Sta.Dir.HeadPtr;
  Sta.Proc[Home].ProcCmd := NODE_None;
  Sta.Proc[Home].InvMarked := false;
  Sta.Proc[Home].CacheState := CACHE_E;
  Sta.Proc[Home].CacheData := Sta.MemData;
endrule;

rule "PI_Local_GetX_PutX88"
  Sta.Proc[Home].ProcCmd = NODE_None &
  Sta.Proc[Home].CacheState = CACHE_S &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = true
==>
begin
  Sta.Dir.Local := true;
  Sta.Dir.Dirty := true;
  for p : NODE do
    if ((p != Home &
    ((Sta.Dir.ShrVld = true &
    Sta.Dir.ShrSet[p] = true) |
    (Sta.Dir.HeadVld = true &
    Sta.Dir.HeadPtr = p)))) then
      Sta.Dir.InvSet[p] := true;
      Sta.InvMsg[p].Cmd := INV_Inv;
    else
      Sta.Dir.InvSet[p] := false;
      Sta.InvMsg[p].Cmd := INV_None;
    end;
    Sta.Dir.ShrSet[p] := false;
  end;
  Sta.Dir.Pending := true;
  Sta.Collecting := true;
  Sta.PrevData := Sta.CurrData;
  Sta.LastOtherInvAck := Sta.Dir.HeadPtr;
  Sta.Dir.HeadVld := false;
  Sta.Dir.ShrVld := false;
  undefine Sta.Dir.HeadPtr;
  Sta.Proc[Home].ProcCmd := NODE_None;
  Sta.Proc[Home].InvMarked := false;
  Sta.Proc[Home].CacheState := CACHE_E;
  Sta.Proc[Home].CacheData := Sta.MemData;
endrule;

rule "PI_Local_GetX_PutX89"
  Sta.Proc[Home].ProcCmd = NODE_None &
  Sta.Proc[Home].CacheState = CACHE_I &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = false
==>
begin
  Sta.Dir.Local := true;
  Sta.Dir.Dirty := true;
  Sta.Proc[Home].ProcCmd := NODE_None;
  Sta.Proc[Home].InvMarked := false;
  Sta.Proc[Home].CacheState := CACHE_E;
  Sta.Proc[Home].CacheData := Sta.MemData;
endrule;

rule "PI_Local_GetX_PutX90"
  Sta.Proc[Home].ProcCmd = NODE_None &
  Sta.Proc[Home].CacheState = CACHE_S &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = false &
  Sta.Dir.HeadVld = false
==>
begin
  Sta.Dir.Local := true;
  Sta.Dir.Dirty := true;
  Sta.Proc[Home].ProcCmd := NODE_None;
  Sta.Proc[Home].InvMarked := false;
  Sta.Proc[Home].CacheState := CACHE_E;
  Sta.Proc[Home].CacheData := Sta.MemData;
endrule;

rule "PI_Local_GetX_GetX91"
  Sta.Proc[Home].ProcCmd = NODE_None &
  Sta.Proc[Home].CacheState = CACHE_I &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = true &
  Sta.Dir.HeadPtr != Home
==>
begin
  Sta.Proc[Home].ProcCmd := NODE_GetX;
  Sta.Dir.Pending := true;
  Sta.UniMsg[Home].Cmd := UNI_GetX;
  Sta.UniMsg[Home].Proc := Sta.Dir.HeadPtr;
  Sta.FwdCmd := UNI_GetX;
  Sta.PendReqSrc := Home;
  Sta.PendReqCmd := UNI_GetX;
  Sta.Collecting := false;
  undefine Sta.UniMsg[Home].Data;
endrule;

rule "PI_Local_GetX_GetX92"
  Sta.Proc[Home].ProcCmd = NODE_None &
  Sta.Proc[Home].CacheState = CACHE_S &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = true &
  Sta.Dir.HeadPtr != Home
==>
begin
  Sta.Proc[Home].ProcCmd := NODE_GetX;
  Sta.Dir.Pending := true;
  Sta.UniMsg[Home].Cmd := UNI_GetX;
  Sta.UniMsg[Home].Proc := Sta.Dir.HeadPtr;
  Sta.FwdCmd := UNI_GetX;
  Sta.PendReqSrc := Home;
  Sta.PendReqCmd := UNI_GetX;
  Sta.Collecting := false;
  undefine Sta.UniMsg[Home].Data;
endrule;

rule "PI_Local_GetX_GetX93"
  Sta.Proc[Home].ProcCmd = NODE_None &
  Sta.Proc[Home].CacheState = CACHE_I &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = true &
  Sta.Dir.HeadPtr = Home
==>
begin
  Sta.Proc[Home].ProcCmd := NODE_GetX;
  Sta.Dir.Pending := true;
  Sta.UniMsg[Home].Cmd := UNI_GetX;
  Sta.UniMsg[Home].Proc := Sta.Dir.HeadPtr;
  Sta.PendReqSrc := Home;
  Sta.PendReqCmd := UNI_GetX;
  Sta.Collecting := false;
  undefine Sta.UniMsg[Home].Data;
endrule;

rule "PI_Local_GetX_GetX94"
  Sta.Proc[Home].ProcCmd = NODE_None &
  Sta.Proc[Home].CacheState = CACHE_S &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = true &
  Sta.Dir.HeadPtr = Home
==>
begin
  Sta.Proc[Home].ProcCmd := NODE_GetX;
  Sta.Dir.Pending := true;
  Sta.UniMsg[Home].Cmd := UNI_GetX;
  Sta.UniMsg[Home].Proc := Sta.Dir.HeadPtr;
  Sta.PendReqSrc := Home;
  Sta.PendReqCmd := UNI_GetX;
  Sta.Collecting := false;
  undefine Sta.UniMsg[Home].Data;
endrule;

ruleset  src : NODE do
rule "PI_Remote_GetX95"
  src != Home &
  Sta.Proc[src].ProcCmd = NODE_None &
  Sta.Proc[src].CacheState = CACHE_I
==>
begin
  Sta.Proc[src].ProcCmd := NODE_GetX;
  Sta.UniMsg[src].Cmd := UNI_GetX;
  Sta.UniMsg[src].Proc := Home;
  undefine Sta.UniMsg[src].Data;
endrule;
endruleset;

rule "PI_Local_Get_Put96"
  Sta.Proc[Home].ProcCmd = NODE_None &
  Sta.Proc[Home].CacheState = CACHE_I &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = false &
  Sta.Proc[Home].InvMarked = true
==>
begin
  Sta.Dir.Local := true;
  Sta.Proc[Home].ProcCmd := NODE_None;
  Sta.Proc[Home].InvMarked := false;
  Sta.Proc[Home].CacheState := CACHE_I;
  undefine Sta.Proc[Home].CacheData;
endrule;

rule "PI_Local_Get_Put97"
  Sta.Proc[Home].ProcCmd = NODE_None &
  Sta.Proc[Home].CacheState = CACHE_I &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = false &
  Sta.Proc[Home].InvMarked = false
==>
begin
  Sta.Dir.Local := true;
  Sta.Proc[Home].ProcCmd := NODE_None;
  Sta.Proc[Home].CacheState := CACHE_S;
  Sta.Proc[Home].CacheData := Sta.MemData;
endrule;

rule "PI_Local_Get_Get98"
  Sta.Proc[Home].ProcCmd = NODE_None &
  Sta.Proc[Home].CacheState = CACHE_I &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = true &
  Sta.Dir.HeadPtr != Home
==>
begin
  Sta.Proc[Home].ProcCmd := NODE_Get;
  Sta.Dir.Pending := true;
  Sta.UniMsg[Home].Cmd := UNI_Get;
  Sta.UniMsg[Home].Proc := Sta.Dir.HeadPtr;
  undefine Sta.UniMsg[Home].Data;
  Sta.FwdCmd := UNI_Get;
  Sta.PendReqSrc := Home;
  Sta.PendReqCmd := UNI_Get;
  Sta.Collecting := false;
endrule;

rule "PI_Local_Get_Get99"
  Sta.Proc[Home].ProcCmd = NODE_None &
  Sta.Proc[Home].CacheState = CACHE_I &
  Sta.Dir.Pending = false &
  Sta.Dir.Dirty = true &
  Sta.Dir.HeadPtr = Home
==>
begin
  Sta.Proc[Home].ProcCmd := NODE_Get;
  Sta.Dir.Pending := true;
  Sta.UniMsg[Home].Cmd := UNI_Get;
  Sta.UniMsg[Home].Proc := Sta.Dir.HeadPtr;
  undefine Sta.UniMsg[Home].Data;
  Sta.PendReqSrc := Home;
  Sta.PendReqCmd := UNI_Get;
  Sta.Collecting := false;
endrule;

ruleset  src : NODE do
rule "PI_Remote_Get100"
  src != Home &
  Sta.Proc[src].ProcCmd = NODE_None &
  Sta.Proc[src].CacheState = CACHE_I
==>
begin
  Sta.Proc[src].ProcCmd := NODE_Get;
  Sta.UniMsg[src].Cmd := UNI_Get;
  Sta.UniMsg[src].Proc := Home;
  undefine Sta.UniMsg[src].Data;
endrule;
endruleset;

ruleset  data : DATA; src : NODE do
rule "Store101"
  Sta.Proc[src].CacheState = CACHE_E
==>
begin
  Sta.Proc[src].CacheData := data;
  Sta.CurrData := data;
  Sta.LastWrVld := true;
  Sta.LastWrPtr := src;
endrule;
endruleset;

ruleset  h : NODE; d : DATA do
startstate
  Home := h;
  undefine Sta;
  Sta.MemData := d;
  Sta.Dir.Pending := false;
  Sta.Dir.Local := false;
  Sta.Dir.Dirty := false;
  Sta.Dir.HeadVld := false;
  Sta.Dir.ShrVld := false;
  Sta.WbMsg.Cmd := WB_None;
  Sta.ShWbMsg.Cmd := SHWB_None;
  Sta.NakcMsg.Cmd := NAKC_None;
  for p : NODE do
    Sta.Proc[p].ProcCmd := NODE_None;
    Sta.Proc[p].InvMarked := false;
    Sta.Proc[p].CacheState := CACHE_I;
    Sta.Dir.ShrSet[p] := false;
    Sta.Dir.InvSet[p] := false;
    Sta.UniMsg[p].Cmd := UNI_None;
    Sta.InvMsg[p].Cmd := INV_None;
    Sta.RpMsg[p].Cmd := RP_None;
  end;
  Sta.CurrData := d;
  Sta.PrevData := d;
  Sta.LastWrVld := false;
  Sta.Collecting := false;
  Sta.FwdCmd := UNI_None;
endstartstate;
endruleset;

invariant "CacheStateProp"
  forall p : NODE do
    forall q : NODE do
      (p != q ->
      !(Sta.Proc[p].CacheState = CACHE_E &
      Sta.Proc[q].CacheState = CACHE_E))
    end
  end;

invariant "CacheDataPropE"
  forall p : NODE do
    (Sta.Proc[p].CacheState = CACHE_E ->
    Sta.Proc[p].CacheData = Sta.CurrData)
  end;

invariant "CacheDataPropSNC"
  forall p : NODE do
    (Sta.Proc[p].CacheState = CACHE_S ->
    (Sta.Collecting = false ->
    Sta.Proc[p].CacheData = Sta.CurrData))
  end;

invariant "CacheDataPropSC"
  forall p : NODE do
    (Sta.Proc[p].CacheState = CACHE_S ->
    (Sta.Collecting = true ->
    Sta.Proc[p].CacheData = Sta.PrevData))
  end;

invariant "MemDataProp"
  (Sta.Dir.Dirty = false ->
  Sta.MemData = Sta.CurrData);

  

invariant "lemma_1"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Dir.InvSet[i] = true & Sta.Dir.Pending = false -> Sta.Dir.HeadPtr = j)
end end ;




invariant "lemma_2"
forall j : NODE do 
j != Home -> 
  (Sta.UniMsg[j].Cmd != UNI_Put & Sta.UniMsg[j].Data = Sta.CurrData -> Sta.UniMsg[j].Proc != Home)
end ;




invariant "lemma_3"
forall i : NODE do 
i != Home -> 
  (Sta.Proc[i].InvMarked = true & Sta.Dir.HeadVld = true -> Sta.UniMsg[i].Cmd != UNI_Nak)
end ;




invariant "lemma_4"
forall i : NODE do 
i != Home -> 
  (Sta.ShWbMsg.Proc = i -> Sta.Dir.HeadVld = true)
end ;




invariant "lemma_5"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[i].Data != Sta.CurrData & Sta.Dir.InvSet[j] = true -> Sta.UniMsg[Home].Cmd != UNI_Nak)
end end ;




invariant "lemma_6"
forall j : NODE do 
j != Home -> 
  (Sta.UniMsg[j].Data = Sta.CurrData & Sta.Proc[j].ProcCmd != NODE_Get -> Sta.Proc[Home].CacheState != CACHE_S)
end ;




invariant "lemma_7"
forall i : NODE do 
i != Home -> 
  (Sta.UniMsg[Home].Cmd = UNI_GetX & Sta.UniMsg[Home].Proc != i -> Sta.WbMsg.Cmd != WB_Wb)
end ;




invariant "lemma_8"
forall i : NODE do 
i != Home -> 
  (Sta.Dir.ShrVld = true & Sta.Proc[i].CacheState = CACHE_S -> Sta.Dir.ShrSet[i] = true)
end ;




invariant "lemma_9"
forall j : NODE do 
j != Home -> 
  (Sta.Dir.HeadPtr = j & Sta.Dir.InvSet[j] = true -> Sta.Dir.Dirty = false)
end ;




invariant "lemma_10"

Sta.ShWbMsg.Data = Sta.CurrData -> Sta.UniMsg[Home].Cmd != UNI_Get;




invariant "lemma_11"
forall j : NODE do 
j != Home -> 
  (Sta.UniMsg[j].Cmd = UNI_PutX -> Sta.Dir.Local = false)
end ;




invariant "lemma_12"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.ShWbMsg.Proc = i & Sta.UniMsg[i].Proc = j -> Sta.UniMsg[i].Cmd != UNI_GetX)
end end ;




invariant "lemma_13"
forall i : NODE do 
i != Home -> 
  (Sta.UniMsg[Home].Cmd != UNI_Nak & Sta.NakcMsg.Cmd = NAKC_Nakc -> Sta.UniMsg[Home].Proc != i)
end ;




invariant "lemma_14"
forall i : NODE do 
i != Home -> 
  (Sta.WbMsg.Cmd = WB_Wb -> Sta.Proc[i].CacheState != CACHE_E)
end ;




invariant "lemma_15"
forall i : NODE do 
i != Home -> 
  (Sta.Proc[Home].CacheState = CACHE_S & Sta.Dir.InvSet[i] = true -> Sta.Dir.HeadVld = true)
end ;




invariant "lemma_16"
forall j : NODE do 
j != Home -> 
  (Sta.Proc[j].CacheData = Sta.CurrData & Sta.Proc[j].CacheState != CACHE_S -> Sta.Dir.ShrSet[j] = false)
end ;




invariant "lemma_17"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Proc = i & Sta.ShWbMsg.Cmd = SHWB_FAck -> Sta.Dir.HeadPtr = i)
end end ;




invariant "lemma_18"
forall j : NODE do 
j != Home -> 
  (Sta.ShWbMsg.Cmd = SHWB_FAck -> Sta.UniMsg[j].Cmd != UNI_PutX)
end ;




invariant "lemma_19"
forall i : NODE do 
i != Home -> 
  (Sta.Proc[Home].CacheState != CACHE_E & Sta.Proc[i].InvMarked = true -> Sta.Dir.Dirty = false)
end ;




invariant "lemma_20"
forall j : NODE do 
j != Home -> 
  (Sta.Dir.ShrVld = false & Sta.Dir.InvSet[j] = true -> Sta.Dir.Pending = true)
end ;




invariant "lemma_21"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[i].Cmd = UNI_Put & Sta.UniMsg[Home].Cmd = UNI_Get -> Sta.UniMsg[j].Proc != i)
end end ;




invariant "lemma_22"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.InvMsg[i].Cmd = INV_InvAck & Sta.UniMsg[Home].Proc = j -> Sta.InvMsg[j].Cmd != INV_InvAck)
end end ;




invariant "lemma_23"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Dir.InvSet[i] = true & Sta.UniMsg[i].Proc = j -> Sta.Dir.HeadVld = false)
end end ;




invariant "lemma_24"
forall j : NODE do 
j != Home -> 
  (Sta.ShWbMsg.Proc = j -> Sta.Dir.InvSet[Home] = false)
end ;




invariant "lemma_25"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[i].CacheData = Sta.CurrData & Sta.Proc[Home].ProcCmd != NODE_None -> Sta.UniMsg[j].Proc != i)
end end ;




invariant "lemma_26"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.InvMsg[i].Cmd = INV_Inv & Sta.UniMsg[Home].Proc = j -> Sta.Proc[j].InvMarked = false)
end end ;




invariant "lemma_27"
forall j : NODE do 
j != Home -> 
  (Sta.UniMsg[j].Cmd = UNI_Nak -> Sta.Proc[j].CacheState = CACHE_I)
end ;




invariant "lemma_28"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Proc = i & Sta.Dir.Dirty = false -> Sta.Dir.HeadVld = false)
end end ;




invariant "lemma_29"
forall i : NODE do 
i != Home -> 
  (Sta.UniMsg[i].Cmd = UNI_Get & Sta.NakcMsg.Cmd = NAKC_Nakc -> Sta.UniMsg[i].Proc = Home)
end ;




invariant "lemma_30"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Proc = i & Sta.UniMsg[i].Proc = j -> Sta.Proc[j].ProcCmd = NODE_GetX)
end end ;




invariant "lemma_31"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[j].ProcCmd = NODE_GetX & Sta.UniMsg[j].Proc = i -> Sta.Dir.InvSet[j] = false)
end end ;




invariant "lemma_32"
forall j : NODE do 
j != Home -> 
  (Sta.NakcMsg.Cmd = NAKC_Nakc & Sta.Dir.HeadPtr != j -> Sta.MemData = Sta.CurrData)
end ;




invariant "lemma_33"
forall j : NODE do 
j != Home -> 
  (Sta.Proc[j].CacheState = CACHE_S & Sta.WbMsg.Cmd = WB_Wb -> Sta.InvMsg[j].Cmd = INV_Inv)
end ;




invariant "lemma_34"

Sta.WbMsg.Data = Sta.CurrData -> Sta.Dir.ShrVld = false;




invariant "lemma_35"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[i].Data != Sta.CurrData & Sta.UniMsg[j].Cmd = UNI_Put -> Sta.UniMsg[Home].Proc != j)
end end ;




invariant "lemma_36"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Data != Sta.CurrData & Sta.InvMsg[i].Cmd != INV_Inv -> Sta.Proc[i].CacheState != CACHE_S)
end end ;




invariant "lemma_37"
forall i : NODE do 
i != Home -> 
  (Sta.Proc[i].InvMarked = true & Sta.ShWbMsg.Proc = i -> Sta.UniMsg[i].Cmd != UNI_Nak)
end ;




invariant "lemma_38"
forall i : NODE do 
i != Home -> 
  (Sta.Proc[i].CacheData = Sta.CurrData & Sta.Dir.InvSet[i] = false -> Sta.Proc[Home].CacheState != CACHE_S)
end ;




invariant "lemma_39"
forall i : NODE do 
i != Home -> 
  (Sta.Proc[i].ProcCmd = NODE_Get & Sta.UniMsg[i].Data = Sta.CurrData -> Sta.RpMsg[i].Cmd != RP_Replace)
end ;




invariant "lemma_40"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Proc = i & Sta.Dir.InvSet[i] = true -> Sta.Dir.HeadPtr != j)
end end ;




invariant "lemma_41"
forall i : NODE do 
i != Home -> 
  (Sta.Proc[i].CacheState != CACHE_S & Sta.Proc[i].CacheState != CACHE_I -> Sta.Dir.Pending = true)
end ;




invariant "lemma_42"
forall i : NODE do 
i != Home -> 
  (Sta.UniMsg[i].Data != Sta.CurrData -> Sta.UniMsg[i].Cmd != UNI_GetX)
end ;




invariant "lemma_43"
forall j : NODE do 
j != Home -> 
  (Sta.Proc[j].CacheState = CACHE_S & Sta.Dir.Pending = false -> Sta.Dir.ShrSet[j] = true)
end ;




invariant "lemma_44"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Cmd = UNI_GetX & Sta.UniMsg[i].Cmd = UNI_Put -> Sta.UniMsg[j].Proc != i)
end end ;




invariant "lemma_45"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.RpMsg[j].Cmd = RP_Replace & Sta.Dir.InvSet[j] = true -> Sta.UniMsg[j].Proc != i)
end end ;




invariant "lemma_46"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[i].InvMarked = true & Sta.Proc[Home].ProcCmd != NODE_None -> Sta.UniMsg[j].Proc != i)
end end ;




invariant "lemma_47"
forall j : NODE do 
j != Home -> 
  (Sta.Proc[Home].CacheState != CACHE_E & Sta.InvMsg[j].Cmd = INV_Inv -> Sta.MemData = Sta.CurrData)
end ;




invariant "lemma_48"
forall i : NODE do 
i != Home -> 
  (Sta.Dir.HeadVld = true & Sta.ShWbMsg.Cmd = SHWB_FAck -> Sta.ShWbMsg.Proc = i)
end ;




invariant "lemma_49"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.InvMsg[j].Cmd = INV_Inv & Sta.Proc[Home].ProcCmd != NODE_None -> Sta.Proc[i].CacheState != CACHE_S)
end end ;




invariant "lemma_50"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Data = Sta.CurrData & Sta.Proc[i].CacheData != Sta.CurrData -> Sta.Dir.InvSet[j] = false)
end end ;




invariant "lemma_51"
forall i : NODE do 
i != Home -> 
  (Sta.RpMsg[i].Cmd = RP_Replace & Sta.UniMsg[i].Data = Sta.CurrData -> Sta.Proc[i].InvMarked = false)
end ;




invariant "lemma_52"
forall j : NODE do 
j != Home -> 
  (Sta.UniMsg[j].Proc != Home & Sta.Proc[Home].CacheState = CACHE_E -> Sta.UniMsg[j].Cmd != UNI_GetX)
end ;




invariant "lemma_53"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.InvMsg[j].Cmd != INV_Inv & Sta.Proc[i].CacheData != Sta.CurrData -> Sta.Proc[j].CacheState = CACHE_I)
end end ;




invariant "lemma_54"
forall i : NODE do 
i != Home -> 
  (Sta.Dir.ShrSet[i] = false & Sta.Dir.Pending = false -> Sta.Proc[i].CacheState = CACHE_I)
end ;




invariant "lemma_55"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[i].Cmd = UNI_GetX & Sta.UniMsg[i].Proc != Home -> Sta.Proc[j].CacheState != CACHE_E)
end end ;




invariant "lemma_56"
forall j : NODE do 
j != Home -> 
  (Sta.Proc[j].CacheState = CACHE_S -> Sta.Proc[j].ProcCmd = NODE_None)
end ;




invariant "lemma_57"
forall i : NODE do 
i != Home -> 
  (Sta.Proc[Home].ProcCmd = NODE_Get & Sta.Dir.ShrSet[i] = true -> Sta.UniMsg[Home].Cmd = UNI_Nak)
end ;




invariant "lemma_58"
forall i : NODE do 
i != Home -> 
  (Sta.ShWbMsg.Proc = i -> Sta.Proc[i].InvMarked = false)
end ;




invariant "lemma_59"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Proc = i & Sta.Proc[i].CacheState != CACHE_I -> Sta.UniMsg[Home].Proc != i)
end end ;




invariant "lemma_60"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[Home].ProcCmd = NODE_Get & Sta.Dir.InvSet[j] = true -> Sta.InvMsg[i].Cmd != INV_Inv)
end end ;




invariant "lemma_61"
forall i : NODE do 
i != Home -> 
  (Sta.Proc[i].CacheState = CACHE_S & Sta.InvMsg[i].Cmd != INV_Inv -> Sta.Proc[i].CacheData = Sta.CurrData)
end ;




invariant "lemma_62"
forall i : NODE do 
i != Home -> 
  (Sta.Proc[i].ProcCmd = NODE_Get & Sta.Dir.ShrSet[i] = true -> Sta.UniMsg[i].Proc = Home)
end ;




invariant "lemma_63"
forall j : NODE do 
j != Home -> 
  (Sta.Proc[j].ProcCmd != NODE_None & Sta.ShWbMsg.Data = Sta.CurrData -> Sta.UniMsg[j].Proc = Home)
end ;




invariant "lemma_64"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[Home].Cmd != UNI_Nak & Sta.InvMsg[j].Cmd = INV_Inv -> Sta.UniMsg[Home].Proc != i)
end end ;




invariant "lemma_65"
forall i : NODE do 
i != Home -> 
  (Sta.Dir.HeadPtr = i & Sta.NakcMsg.Cmd = NAKC_Nakc -> Sta.Proc[i].InvMarked = false)
end ;




invariant "lemma_66"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Cmd = UNI_PutX & Sta.Proc[i].CacheState = CACHE_S -> Sta.Proc[i].CacheData = Sta.CurrData)
end end ;




invariant "lemma_67"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Cmd = UNI_Nak & Sta.Dir.ShrSet[j] = true -> Sta.Proc[i].InvMarked = false)
end end ;




invariant "lemma_68"
forall j : NODE do 
j != Home -> 
  (Sta.UniMsg[j].Proc != Home & Sta.Dir.HeadPtr = j -> Sta.UniMsg[j].Cmd != UNI_GetX)
end ;




invariant "lemma_69"
forall i : NODE do 
i != Home -> 
  (Sta.UniMsg[Home].Proc != i -> Sta.Dir.InvSet[Home] = false)
end ;




invariant "lemma_70"
forall i : NODE do 
i != Home -> 
  (Sta.WbMsg.Cmd = WB_Wb -> Sta.InvMsg[i].Cmd != INV_Inv)
end ;




invariant "lemma_71"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Proc = i & Sta.UniMsg[j].Cmd = UNI_Get -> Sta.UniMsg[i].Proc != j)
end end ;




invariant "lemma_72"
forall i : NODE do 
i != Home -> 
  (Sta.Dir.HeadPtr != i & Sta.Proc[i].CacheState != CACHE_I -> Sta.Proc[Home].CacheState != CACHE_S)
end ;




invariant "lemma_73"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[i].Cmd = UNI_GetX & Sta.Proc[j].CacheData = Sta.CurrData -> Sta.UniMsg[i].Proc = Home)
end end ;




invariant "lemma_74"
forall i : NODE do 
i != Home -> 
  (Sta.InvMsg[i].Cmd = INV_InvAck -> Sta.Dir.HeadPtr != i)
end ;




invariant "lemma_75"
forall i : NODE do 
i != Home -> 
  (Sta.Proc[i].CacheState != CACHE_I -> Sta.UniMsg[i].Cmd != UNI_Get)
end ;




invariant "lemma_76"
forall i : NODE do 
i != Home -> 
  (Sta.ShWbMsg.Proc = i -> Sta.UniMsg[i].Cmd != UNI_Put)
end ;




invariant "lemma_77"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Proc = i & Sta.UniMsg[i].Cmd = UNI_GetX -> Sta.UniMsg[i].Proc = Home)
end end ;




invariant "lemma_78"
forall i : NODE do 
i != Home -> 
  (Sta.Proc[Home].CacheState = CACHE_S & Sta.UniMsg[i].Proc != Home -> Sta.UniMsg[i].Cmd != UNI_GetX)
end ;




invariant "lemma_79"
forall i : NODE do 
i != Home -> 
  (Sta.Proc[i].ProcCmd = NODE_GetX -> Sta.UniMsg[i].Cmd != UNI_Get)
end ;




invariant "lemma_80"
forall j : NODE do 
j != Home -> 
  (Sta.Proc[j].ProcCmd != NODE_Get -> Sta.UniMsg[j].Cmd != UNI_Get)
end ;




invariant "lemma_81"
forall i : NODE do 
i != Home -> 
  (Sta.RpMsg[i].Cmd = RP_Replace & Sta.ShWbMsg.Data = Sta.CurrData -> Sta.Proc[i].CacheState != CACHE_S)
end ;




invariant "lemma_82"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[Home].Proc = i & Sta.Proc[i].CacheState = CACHE_S -> Sta.UniMsg[j].Proc != i)
end end ;




invariant "lemma_83"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[i].Data != Sta.CurrData & Sta.UniMsg[j].Data = Sta.CurrData -> Sta.Proc[j].ProcCmd = NODE_Get)
end end ;




invariant "lemma_84"
forall i : NODE do 
i != Home -> 
  (Sta.MemData != Sta.CurrData & Sta.InvMsg[i].Cmd = INV_Inv -> Sta.Proc[Home].ProcCmd = NODE_None)
end ;




invariant "lemma_85"
forall i : NODE do 
i != Home -> 
  (Sta.Proc[Home].ProcCmd = NODE_Get & Sta.Dir.Dirty = true -> Sta.Dir.InvSet[i] = false)
end ;




invariant "lemma_86"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[Home].ProcCmd != NODE_None & Sta.InvMsg[j].Cmd = INV_InvAck -> Sta.UniMsg[i].Cmd != UNI_Put)
end end ;




invariant "lemma_87"
forall j : NODE do 
j != Home -> 
  (Sta.UniMsg[Home].Cmd != UNI_Nak & Sta.Proc[Home].ProcCmd != NODE_None -> Sta.Proc[j].CacheState != CACHE_S)
end ;




invariant "lemma_88"
forall i : NODE do 
i != Home -> 
  (Sta.UniMsg[Home].Proc = i & Sta.InvMsg[i].Cmd = INV_Inv -> Sta.Dir.Dirty = false)
end ;




invariant "lemma_89"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.InvMsg[i].Cmd = INV_InvAck & Sta.Dir.HeadPtr = j -> Sta.Proc[Home].CacheState = CACHE_I)
end end ;




invariant "lemma_90"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.InvMsg[j].Cmd = INV_Inv & Sta.Proc[i].CacheState != CACHE_I -> Sta.Dir.Local = true)
end end ;




invariant "lemma_91"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[Home].Cmd = UNI_Nak & Sta.Proc[i].CacheData != Sta.CurrData -> Sta.UniMsg[j].Proc != i)
end end ;




invariant "lemma_92"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[i].CacheData = Sta.CurrData & Sta.UniMsg[j].Data != Sta.CurrData -> Sta.Dir.InvSet[j] = false)
end end ;




invariant "lemma_93"
forall j : NODE do 
j != Home -> 
  (Sta.UniMsg[j].Cmd = UNI_Put & Sta.Dir.HeadVld = true -> Sta.UniMsg[Home].Cmd != UNI_Get)
end ;




invariant "lemma_94"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.InvMsg[i].Cmd = INV_Inv & Sta.Dir.HeadVld = true -> Sta.Dir.InvSet[j] = false)
end end ;




invariant "lemma_95"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[i].CacheData = Sta.CurrData & Sta.ShWbMsg.Proc = j -> Sta.ShWbMsg.Cmd = SHWB_ShWb)
end end ;




invariant "lemma_96"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.ShWbMsg.Cmd = SHWB_ShWb & Sta.UniMsg[j].Proc = i -> Sta.UniMsg[j].Cmd != UNI_Nak)
end end ;




invariant "lemma_97"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[j].InvMarked = true & Sta.Proc[i].InvMarked = true -> Sta.UniMsg[Home].Proc != j)
end end ;




invariant "lemma_98"
forall j : NODE do 
j != Home -> 
  (Sta.WbMsg.Cmd = WB_Wb & Sta.UniMsg[Home].Cmd = UNI_Get -> Sta.UniMsg[Home].Proc != j)
end ;




invariant "lemma_99"
forall j : NODE do 
j != Home -> 
  (Sta.WbMsg.Data = Sta.CurrData -> Sta.Proc[j].InvMarked = false)
end ;




invariant "lemma_100"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[i].Cmd = UNI_GetX & Sta.UniMsg[i].Proc = j -> Sta.InvMsg[i].Cmd != INV_Inv)
end end ;




invariant "lemma_101"
forall j : NODE do 
j != Home -> 
  (Sta.MemData != Sta.CurrData & Sta.Dir.HeadPtr != j -> Sta.UniMsg[Home].Proc != j)
end ;




invariant "lemma_102"
forall j : NODE do 
j != Home -> 
  (Sta.UniMsg[Home].Data = Sta.CurrData -> Sta.Proc[j].CacheState = CACHE_I)
end ;




invariant "lemma_103"
forall i : NODE do 
i != Home -> 
  (Sta.UniMsg[i].Proc != Home & Sta.ShWbMsg.Data = Sta.CurrData -> Sta.Proc[i].ProcCmd = NODE_None)
end ;




invariant "lemma_104"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[j].CacheData != Sta.CurrData & Sta.Dir.HeadPtr = i -> Sta.UniMsg[i].Cmd != UNI_Put)
end end ;




invariant "lemma_105"
forall j : NODE do 
j != Home -> 
  (Sta.Dir.Pending = false & Sta.Dir.Dirty = true -> Sta.Dir.InvSet[j] = false)
end ;




invariant "lemma_106"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Dir.HeadVld = true & Sta.Proc[i].CacheData != Sta.CurrData -> Sta.UniMsg[j].Cmd != UNI_Put)
end end ;




invariant "lemma_107"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.InvMsg[i].Cmd = INV_InvAck & Sta.UniMsg[j].Cmd = UNI_Put -> Sta.UniMsg[Home].Cmd != UNI_Nak)
end end ;




invariant "lemma_108"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[Home].ProcCmd = NODE_Get & Sta.InvMsg[j].Cmd = INV_InvAck -> Sta.Proc[i].CacheState = CACHE_I)
end end ;




invariant "lemma_109"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Proc = i & Sta.Dir.InvSet[i] = true -> Sta.Proc[Home].ProcCmd = NODE_None)
end end ;




invariant "lemma_110"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[Home].CacheState = CACHE_S & Sta.Proc[j].CacheData = Sta.CurrData -> Sta.Dir.HeadPtr = i)
end end ;




invariant "lemma_111"
forall j : NODE do 
j != Home -> 
  (Sta.UniMsg[j].Proc != Home & Sta.UniMsg[Home].Cmd = UNI_PutX -> Sta.UniMsg[j].Cmd != UNI_Nak)
end ;




invariant "lemma_112"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Proc = i & Sta.Dir.Dirty = false -> Sta.Dir.HeadPtr != j)
end end ;




invariant "lemma_113"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Proc = i & Sta.UniMsg[j].Cmd = UNI_GetX -> Sta.Proc[Home].CacheState = CACHE_I)
end end ;




invariant "lemma_114"

Sta.WbMsg.Cmd = WB_Wb -> Sta.Dir.ShrVld = false;




invariant "lemma_115"
forall j : NODE do 
j != Home -> 
  (Sta.InvMsg[j].Cmd = INV_InvAck & Sta.Dir.Dirty = true -> Sta.Dir.Local = true)
end ;




invariant "lemma_116"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.InvMsg[i].Cmd = INV_Inv & Sta.Proc[Home].ProcCmd = NODE_Get -> Sta.UniMsg[j].Proc != i)
end end ;




invariant "lemma_117"
forall i : NODE do 
i != Home -> 
  (Sta.Dir.InvSet[i] = true & Sta.Dir.HeadPtr = i -> Sta.Dir.ShrVld = true)
end ;




invariant "lemma_118"
forall i : NODE do 
i != Home -> 
  (Sta.Proc[i].CacheData = Sta.CurrData & Sta.Proc[Home].CacheState != CACHE_I -> Sta.Dir.InvSet[i] = true)
end ;




invariant "lemma_119"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Data = Sta.CurrData & Sta.Dir.HeadPtr = i -> Sta.UniMsg[i].Proc != j)
end end ;




invariant "lemma_120"
forall j : NODE do 
j != Home -> 
  (Sta.InvMsg[j].Cmd = INV_Inv & Sta.UniMsg[j].Data != Sta.CurrData -> Sta.UniMsg[Home].Cmd != UNI_Nak)
end ;




invariant "lemma_121"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Proc = i & Sta.Dir.InvSet[i] = true -> Sta.Proc[Home].CacheState != CACHE_S)
end end ;




invariant "lemma_122"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[i].CacheState != CACHE_S & Sta.Proc[i].CacheState != CACHE_I -> Sta.Dir.HeadPtr = j)
end end ;




invariant "lemma_123"
forall i : NODE do 
i != Home -> 
  (Sta.UniMsg[i].Data != Sta.CurrData -> Sta.UniMsg[Home].Cmd != UNI_Put)
end ;




invariant "lemma_124"
forall j : NODE do 
j != Home -> 
  (Sta.WbMsg.Data = Sta.CurrData -> Sta.Dir.HeadPtr = j)
end ;




invariant "lemma_125"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.InvMsg[i].Cmd = INV_InvAck -> Sta.Dir.ShrSet[j] = false)
end end ;




invariant "lemma_126"
forall i : NODE do 
i != Home -> 
  (Sta.Proc[i].CacheData = Sta.CurrData & Sta.UniMsg[Home].Cmd != UNI_Nak -> Sta.Proc[Home].ProcCmd != NODE_Get)
end ;




invariant "lemma_127"
forall i : NODE do 
i != Home -> 
  (Sta.Dir.ShrSet[i] = true -> Sta.MemData = Sta.CurrData)
end ;




invariant "lemma_128"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.InvMsg[i].Cmd = INV_InvAck & Sta.UniMsg[j].Cmd = UNI_Get -> Sta.UniMsg[j].Proc = Home)
end end ;




invariant "lemma_129"
forall j : NODE do 
j != Home -> 
  (Sta.WbMsg.Data = Sta.CurrData & Sta.Proc[j].CacheData = Sta.CurrData -> Sta.Proc[j].CacheState = CACHE_S)
end ;




invariant "lemma_130"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Dir.HeadPtr = j & Sta.Proc[i].CacheData != Sta.CurrData -> Sta.Proc[j].CacheState != CACHE_S)
end end ;




invariant "lemma_131"

Sta.Proc[Home].CacheState != CACHE_E & Sta.Dir.Dirty = true -> Sta.Dir.HeadVld = true;




invariant "lemma_132"
forall i : NODE do 
i != Home -> 
  (Sta.Dir.InvSet[i] = true & Sta.UniMsg[i].Data = Sta.CurrData -> Sta.Proc[i].ProcCmd != NODE_GetX)
end ;




invariant "lemma_133"
forall j : NODE do 
j != Home -> 
  (Sta.Proc[Home].CacheState != CACHE_E & Sta.Dir.Dirty = true -> Sta.InvMsg[j].Cmd != INV_Inv)
end ;




invariant "lemma_134"
forall j : NODE do 
j != Home -> 
  (Sta.UniMsg[j].Proc = Home -> Sta.UniMsg[j].Cmd != UNI_PutX)
end ;




invariant "lemma_135"
forall i : NODE do 
i != Home -> 
  (Sta.InvMsg[i].Cmd = INV_InvAck & Sta.UniMsg[Home].Cmd != UNI_Nak -> Sta.UniMsg[Home].Proc != i)
end ;




invariant "lemma_136"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[j].InvMarked = true & Sta.UniMsg[i].Data = Sta.CurrData -> Sta.UniMsg[Home].Cmd != UNI_Get)
end end ;




invariant "lemma_137"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Dir.HeadVld = true & Sta.UniMsg[i].Proc = j -> Sta.Proc[i].InvMarked = false)
end end ;




invariant "lemma_138"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Data = Sta.CurrData & Sta.Proc[j].ProcCmd != NODE_Get -> Sta.UniMsg[i].Proc != j)
end end ;




invariant "lemma_139"
forall j : NODE do 
j != Home -> 
  (Sta.UniMsg[j].Proc != Home & Sta.Dir.ShrVld = true -> Sta.Proc[j].ProcCmd = NODE_None)
end ;




invariant "lemma_140"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.InvMsg[i].Cmd = INV_InvAck & Sta.Proc[j].CacheState = CACHE_S -> Sta.Dir.InvSet[j] = true)
end end ;




invariant "lemma_141"
forall j : NODE do 
j != Home -> 
  (Sta.MemData != Sta.CurrData & Sta.InvMsg[j].Cmd = INV_InvAck -> Sta.UniMsg[Home].Proc != j)
end ;




invariant "lemma_142"
forall j : NODE do 
j != Home -> 
  (Sta.UniMsg[Home].Data = Sta.CurrData & Sta.UniMsg[j].Cmd = UNI_Get -> Sta.UniMsg[j].Proc = Home)
end ;




invariant "lemma_143"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[i].InvMarked = true & Sta.UniMsg[j].Data != Sta.CurrData -> Sta.NakcMsg.Cmd != NAKC_Nakc)
end end ;




invariant "lemma_144"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Proc = i & Sta.Proc[Home].CacheState = CACHE_S -> Sta.Proc[i].CacheState = CACHE_I)
end end ;




invariant "lemma_145"
forall i : NODE do 
i != Home -> 
  (Sta.MemData != Sta.CurrData & Sta.Proc[Home].ProcCmd != NODE_None -> Sta.InvMsg[i].Cmd != INV_Inv)
end ;




invariant "lemma_146"

Sta.MemData != Sta.CurrData & Sta.Proc[Home].CacheState = CACHE_I -> Sta.Dir.HeadVld = true;




invariant "lemma_147"
forall i : NODE do 
i != Home -> 
  (Sta.Proc[i].CacheData = Sta.CurrData -> Sta.UniMsg[Home].Cmd != UNI_PutX)
end ;




invariant "lemma_148"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[Home].ProcCmd = NODE_Get & Sta.Proc[i].CacheData != Sta.CurrData -> Sta.InvMsg[j].Cmd != INV_Inv)
end end ;




invariant "lemma_149"
forall i : NODE do 
i != Home -> 
  (Sta.ShWbMsg.Data = Sta.CurrData & Sta.Proc[i].CacheState != CACHE_I -> Sta.RpMsg[i].Cmd != RP_Replace)
end ;




invariant "lemma_150"
forall i : NODE do 
i != Home -> 
  (Sta.UniMsg[Home].Cmd = UNI_GetX -> Sta.InvMsg[i].Cmd != INV_Inv)
end ;




invariant "lemma_151"
forall i : NODE do 
i != Home -> 
  (Sta.Proc[i].CacheState = CACHE_E -> Sta.Dir.HeadVld = true)
end ;




invariant "lemma_152"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.RpMsg[j].Cmd = RP_Replace & Sta.UniMsg[j].Data = Sta.CurrData -> Sta.Proc[i].InvMarked = false)
end end ;




invariant "lemma_153"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[j].CacheData != Sta.CurrData & Sta.UniMsg[Home].Proc = j -> Sta.UniMsg[i].Proc != j)
end end ;




invariant "lemma_154"
forall j : NODE do 
j != Home -> 
  (Sta.InvMsg[j].Cmd = INV_Inv & Sta.Proc[Home].ProcCmd != NODE_None -> Sta.Dir.Dirty = false)
end ;




invariant "lemma_155"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Dir.InvSet[i] = true & Sta.InvMsg[j].Cmd = INV_InvAck -> Sta.Proc[Home].ProcCmd = NODE_None)
end end ;




invariant "lemma_156"
forall i : NODE do 
i != Home -> 
  (Sta.Proc[i].CacheData != Sta.CurrData -> Sta.InvMsg[i].Cmd != INV_InvAck)
end ;




invariant "lemma_157"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Data = Sta.CurrData & Sta.UniMsg[i].Proc = j -> Sta.Proc[Home].ProcCmd != NODE_Get)
end end ;




invariant "lemma_158"
forall j : NODE do 
j != Home -> 
  (Sta.UniMsg[Home].Cmd = UNI_Get -> Sta.Proc[j].CacheState != CACHE_S)
end ;




invariant "lemma_159"
forall i : NODE do 
i != Home -> 
  (Sta.WbMsg.Cmd = WB_Wb & Sta.Proc[i].ProcCmd = NODE_GetX -> Sta.UniMsg[i].Proc = Home)
end ;




invariant "lemma_160"
forall i : NODE do 
i != Home -> 
  (Sta.Dir.Pending = false & Sta.Proc[i].CacheState != CACHE_I -> Sta.Dir.HeadPtr = i)
end ;




invariant "lemma_161"
forall i : NODE do 
i != Home -> 
  (Sta.UniMsg[Home].Proc = i & Sta.UniMsg[Home].Cmd = UNI_Get -> Sta.Dir.HeadVld = false)
end ;




invariant "lemma_162"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Dir.InvSet[i] = false & Sta.Dir.InvSet[j] = true -> Sta.Proc[i].CacheState != CACHE_S)
end end ;




invariant "lemma_163"
forall i : NODE do 
i != Home -> 
  (Sta.UniMsg[i].Proc != Home & Sta.Proc[i].ProcCmd = NODE_Get -> Sta.ShWbMsg.Cmd != SHWB_FAck)
end ;




invariant "lemma_164"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[Home].Proc = i & Sta.UniMsg[i].Proc = j -> Sta.UniMsg[Home].Cmd != UNI_Get)
end end ;




invariant "lemma_165"
forall j : NODE do 
j != Home -> 
  (Sta.UniMsg[Home].Cmd = UNI_Put -> Sta.UniMsg[Home].Proc = j)
end ;




invariant "lemma_166"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.InvMsg[i].Cmd != INV_InvAck & Sta.UniMsg[i].Cmd = UNI_PutX -> Sta.UniMsg[i].Proc = j)
end end ;




invariant "lemma_167"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.InvMsg[i].Cmd = INV_InvAck & Sta.UniMsg[Home].Proc = i -> Sta.InvMsg[j].Cmd != INV_InvAck)
end end ;




invariant "lemma_168"
forall i : NODE do 
i != Home -> 
  (Sta.UniMsg[Home].Cmd = UNI_GetX & Sta.UniMsg[Home].Proc = i -> Sta.WbMsg.Cmd != WB_Wb)
end ;




invariant "lemma_169"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.InvMsg[j].Cmd = INV_Inv & Sta.Dir.HeadPtr = i -> Sta.UniMsg[i].Cmd != UNI_Put)
end end ;




invariant "lemma_170"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Proc = i & Sta.Proc[i].CacheState = CACHE_S -> Sta.InvMsg[i].Cmd = INV_Inv)
end end ;




invariant "lemma_171"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[j].CacheData != Sta.CurrData & Sta.Proc[Home].CacheState != CACHE_I -> Sta.Dir.HeadPtr != i)
end end ;




invariant "lemma_172"
forall i : NODE do 
i != Home -> 
  (Sta.MemData != Sta.CurrData & Sta.Dir.InvSet[i] = true -> Sta.Proc[Home].CacheState != CACHE_I)
end ;




invariant "lemma_173"
forall j : NODE do 
j != Home -> 
  (Sta.UniMsg[j].Data != Sta.CurrData & Sta.Proc[Home].ProcCmd = NODE_Get -> Sta.Proc[j].InvMarked = true)
end ;




invariant "lemma_174"
forall i : NODE do 
i != Home -> 
  (Sta.MemData != Sta.CurrData & Sta.Proc[Home].CacheState = CACHE_I -> Sta.UniMsg[i].Cmd != UNI_Put)
end ;




invariant "lemma_175"
forall j : NODE do 
j != Home -> 
  (Sta.Proc[j].ProcCmd != NODE_None & Sta.ShWbMsg.Cmd = SHWB_FAck -> Sta.UniMsg[j].Proc = Home)
end ;




invariant "lemma_176"
forall i : NODE do 
i != Home -> 
  (Sta.InvMsg[i].Cmd = INV_InvAck & Sta.Dir.HeadVld = true -> Sta.Dir.Dirty = true)
end ;




invariant "lemma_177"
forall j : NODE do 
j != Home -> 
  (Sta.UniMsg[j].Cmd = UNI_Put -> Sta.Proc[j].ProcCmd = NODE_Get)
end ;




invariant "lemma_178"
forall i : NODE do 
i != Home -> 
  (Sta.UniMsg[Home].Data = Sta.CurrData -> Sta.UniMsg[i].Cmd != UNI_PutX)
end ;




invariant "lemma_179"
forall i : NODE do 
i != Home -> 
  (Sta.Proc[i].CacheState = CACHE_E -> Sta.UniMsg[i].Cmd != UNI_Get)
end ;




invariant "lemma_180"
forall j : NODE do 
j != Home -> 
  (Sta.Proc[j].InvMarked = true & Sta.ShWbMsg.Proc = j -> Sta.UniMsg[j].Cmd = UNI_Put)
end ;




invariant "lemma_181"
forall j : NODE do 
j != Home -> 
  (Sta.UniMsg[j].Proc != Home & Sta.ShWbMsg.Cmd = SHWB_ShWb -> Sta.Proc[j].ProcCmd != NODE_Get)
end ;




invariant "lemma_182"
forall j : NODE do 
j != Home -> 
  (Sta.UniMsg[j].Data = Sta.CurrData & Sta.Proc[Home].CacheState = CACHE_E -> Sta.Proc[j].ProcCmd != NODE_GetX)
end ;




invariant "lemma_183"
forall i : NODE do 
i != Home -> 
  (Sta.Dir.Pending = false & Sta.Dir.InvSet[i] = false -> Sta.Proc[i].CacheState != CACHE_S)
end ;




invariant "lemma_184"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[j].CacheData = Sta.CurrData & Sta.Proc[i].CacheState = CACHE_E -> Sta.Proc[j].CacheState = CACHE_S)
end end ;




invariant "lemma_185"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[j].CacheState = CACHE_S & Sta.Proc[i].CacheData != Sta.CurrData -> Sta.InvMsg[j].Cmd = INV_Inv)
end end ;




invariant "lemma_186"
forall i : NODE do 
i != Home -> 
  (Sta.ShWbMsg.Proc = i -> Sta.Dir.HeadVld = false)
end ;




invariant "lemma_187"
forall j : NODE do 
j != Home -> 
  (Sta.UniMsg[Home].Proc = j -> Sta.Proc[Home].CacheState = CACHE_I)
end ;




invariant "lemma_188"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[Home].Proc != j & Sta.UniMsg[i].Proc = j -> Sta.UniMsg[Home].Cmd != UNI_Get)
end end ;




invariant "lemma_189"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Dir.InvSet[i] = true & Sta.Dir.ShrSet[j] = true -> Sta.Dir.ShrSet[i] = true)
end end ;




invariant "lemma_190"
forall j : NODE do 
j != Home -> 
  (Sta.InvMsg[j].Cmd = INV_Inv -> Sta.WbMsg.Cmd != WB_Wb)
end ;




invariant "lemma_191"
forall i : NODE do 
i != Home -> 
  (Sta.Dir.ShrVld = false & Sta.Proc[i].CacheState != CACHE_I -> Sta.Proc[Home].CacheState != CACHE_S)
end ;




invariant "lemma_192"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.InvMsg[i].Cmd = INV_InvAck & Sta.UniMsg[j].Proc = i -> Sta.Proc[Home].ProcCmd != NODE_Get)
end end ;




invariant "lemma_193"
forall i : NODE do 
i != Home -> 
  (Sta.UniMsg[Home].Proc = i & Sta.UniMsg[Home].Cmd != UNI_Nak -> Sta.Dir.InvSet[i] = false)
end ;




invariant "lemma_194"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[i].Cmd = UNI_Get & Sta.UniMsg[i].Proc = j -> Sta.RpMsg[i].Cmd != RP_Replace)
end end ;




invariant "lemma_195"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.RpMsg[i].Cmd = RP_Replace & Sta.Proc[i].InvMarked = true -> Sta.UniMsg[i].Proc != j)
end end ;




invariant "lemma_196"
forall i : NODE do 
i != Home -> 
  (Sta.UniMsg[i].Data != Sta.CurrData & Sta.Proc[Home].ProcCmd = NODE_Get -> Sta.Dir.InvSet[i] = false)
end ;




invariant "lemma_197"
forall j : NODE do 
j != Home -> 
  (Sta.Dir.HeadVld = false & Sta.Dir.InvSet[j] = true -> Sta.Proc[Home].CacheState != CACHE_S)
end ;




invariant "lemma_198"
forall j : NODE do 
j != Home -> 
  (Sta.UniMsg[j].Proc != Home & Sta.UniMsg[j].Cmd = UNI_GetX -> Sta.Dir.HeadPtr != j)
end ;




invariant "lemma_199"
forall i : NODE do 
i != Home -> 
  (Sta.ShWbMsg.Proc != i & Sta.ShWbMsg.Cmd = SHWB_FAck -> Sta.Dir.HeadVld = false)
end ;




invariant "lemma_200"
forall j : NODE do 
j != Home -> 
  (Sta.Dir.ShrSet[j] = true -> Sta.Dir.InvSet[j] = true)
end ;




invariant "lemma_201"
forall j : NODE do 
j != Home -> 
  (Sta.Proc[j].CacheState = CACHE_S -> Sta.UniMsg[j].Proc != Home)
end ;




invariant "lemma_202"
forall i : NODE do 
i != Home -> 
  (Sta.UniMsg[Home].Cmd = UNI_PutX & Sta.Proc[i].ProcCmd = NODE_Get -> Sta.UniMsg[i].Proc = Home)
end ;




invariant "lemma_203"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Dir.ShrSet[i] = true -> Sta.UniMsg[j].Proc != i)
end end ;




invariant "lemma_204"
forall i : NODE do 
i != Home -> 
  (Sta.UniMsg[Home].Cmd = UNI_GetX & Sta.UniMsg[i].Data = Sta.CurrData -> Sta.Proc[i].ProcCmd != NODE_GetX)
end ;




invariant "lemma_205"
forall i : NODE do 
i != Home -> 
  (Sta.Proc[i].CacheData = Sta.CurrData & Sta.WbMsg.Data = Sta.CurrData -> Sta.Dir.InvSet[i] = true)
end ;




invariant "lemma_206"
forall i : NODE do 
i != Home -> 
  (Sta.ShWbMsg.Cmd = SHWB_FAck -> Sta.Proc[i].CacheState != CACHE_E)
end ;




invariant "lemma_207"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.InvMsg[i].Cmd = INV_InvAck & Sta.Proc[Home].ProcCmd != NODE_None -> Sta.UniMsg[j].Proc != i)
end end ;




invariant "lemma_208"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.InvMsg[i].Cmd = INV_InvAck & Sta.UniMsg[i].Proc = j -> Sta.RpMsg[i].Cmd != RP_Replace)
end end ;




invariant "lemma_209"
forall i : NODE do 
i != Home -> 
  (Sta.Dir.Local = true & Sta.Dir.ShrSet[i] = true -> Sta.Proc[Home].CacheData = Sta.CurrData)
end ;




invariant "lemma_210"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[i].CacheData = Sta.CurrData & Sta.Proc[j].CacheState != CACHE_I -> Sta.Proc[i].CacheState = CACHE_S)
end end ;




invariant "lemma_211"
forall j : NODE do 
j != Home -> 
  (Sta.ShWbMsg.Proc != j -> Sta.Proc[j].CacheState != CACHE_E)
end ;




invariant "lemma_212"
forall i : NODE do 
i != Home -> 
  (Sta.Proc[i].CacheData = Sta.CurrData -> Sta.WbMsg.Cmd != WB_Wb)
end ;




invariant "lemma_213"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.ShWbMsg.Proc != j & Sta.ShWbMsg.Cmd = SHWB_FAck -> Sta.Dir.HeadPtr != i)
end end ;




invariant "lemma_214"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Cmd != UNI_GetX & Sta.UniMsg[i].Cmd = UNI_PutX -> Sta.UniMsg[i].Proc = j)
end end ;




invariant "lemma_215"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[j].CacheState = CACHE_S & Sta.InvMsg[i].Cmd = INV_Inv -> Sta.Dir.Local = true)
end end ;




invariant "lemma_216"
forall j : NODE do 
j != Home -> 
  (Sta.Proc[j].InvMarked = true & Sta.Dir.HeadVld = true -> Sta.UniMsg[j].Cmd != UNI_Nak)
end ;




invariant "lemma_217"

Sta.Proc[Home].CacheData = Sta.CurrData -> Sta.Dir.Local = true;




invariant "lemma_218"
forall i : NODE do 
i != Home -> 
  (Sta.UniMsg[i].Data != Sta.CurrData & Sta.Proc[i].InvMarked = false -> Sta.Proc[Home].CacheState != CACHE_S)
end ;




invariant "lemma_219"
forall j : NODE do 
j != Home -> 
  (Sta.Dir.InvSet[j] = false & Sta.Proc[j].CacheState = CACHE_S -> Sta.Proc[j].CacheData = Sta.CurrData)
end ;




invariant "lemma_220"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Proc = i & Sta.Proc[i].InvMarked = true -> Sta.UniMsg[Home].Proc != j)
end end ;




invariant "lemma_221"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Cmd = UNI_Put & Sta.UniMsg[i].Proc = j -> Sta.UniMsg[Home].Proc != i)
end end ;




invariant "lemma_222"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Dir.HeadPtr = i & Sta.Proc[Home].CacheState != CACHE_I -> Sta.InvMsg[j].Cmd != INV_InvAck)
end end ;




invariant "lemma_223"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[Home].Cmd = UNI_GetX & Sta.Dir.HeadPtr = i -> Sta.UniMsg[Home].Proc != j)
end end ;




invariant "lemma_224"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.MemData != Sta.CurrData & Sta.UniMsg[i].Data != Sta.CurrData -> Sta.UniMsg[Home].Proc != j)
end end ;




invariant "lemma_225"
forall i : NODE do 
i != Home -> 
  (Sta.UniMsg[Home].Proc = i & Sta.UniMsg[Home].Cmd != UNI_Nak -> Sta.Dir.Pending = true)
end ;




invariant "lemma_226"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Data = Sta.CurrData & Sta.UniMsg[i].Proc = j -> Sta.UniMsg[Home].Cmd != UNI_Nak)
end end ;




invariant "lemma_227"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[i].Cmd = UNI_PutX & Sta.Proc[Home].ProcCmd = NODE_Get -> Sta.UniMsg[i].Proc = j)
end end ;




invariant "lemma_228"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Dir.HeadVld = true & Sta.UniMsg[i].Cmd != UNI_PutX -> Sta.UniMsg[i].Proc != j)
end end ;




invariant "lemma_229"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.InvMsg[i].Cmd = INV_InvAck & Sta.Proc[j].CacheData = Sta.CurrData -> Sta.Dir.Local = true)
end end ;




invariant "lemma_230"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[i].Proc != Home & Sta.Proc[j].CacheState != CACHE_I -> Sta.UniMsg[i].Cmd != UNI_Get)
end end ;




invariant "lemma_231"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Proc = i & Sta.UniMsg[i].Data = Sta.CurrData -> Sta.NakcMsg.Cmd != NAKC_Nakc)
end end ;




invariant "lemma_232"
forall i : NODE do 
i != Home -> 
  (Sta.WbMsg.Cmd = WB_Wb & Sta.UniMsg[i].Data = Sta.CurrData -> Sta.Proc[i].ProcCmd = NODE_Get)
end ;




invariant "lemma_233"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Dir.InvSet[j] = false & Sta.Proc[j].CacheState != CACHE_I -> Sta.Dir.HeadPtr = i)
end end ;




invariant "lemma_234"
forall i : NODE do 
i != Home -> 
  (Sta.UniMsg[Home].Proc = i & Sta.UniMsg[Home].Cmd != UNI_Nak -> Sta.Proc[i].CacheState = CACHE_I)
end ;




invariant "lemma_235"
forall i : NODE do 
i != Home -> 
  (Sta.WbMsg.Data = Sta.CurrData & Sta.Proc[i].CacheData != Sta.CurrData -> Sta.MemData != Sta.CurrData)
end ;




invariant "lemma_236"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[j].CacheData != Sta.CurrData & Sta.Dir.HeadPtr = i -> Sta.MemData != Sta.CurrData)
end end ;




invariant "lemma_237"
forall j : NODE do 
j != Home -> 
  (Sta.UniMsg[Home].Cmd = UNI_PutX & Sta.UniMsg[j].Data = Sta.CurrData -> Sta.UniMsg[j].Cmd = UNI_Put)
end ;




invariant "lemma_238"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.NakcMsg.Cmd = NAKC_Nakc & Sta.UniMsg[i].Proc = j -> Sta.UniMsg[i].Cmd != UNI_Get)
end end ;




invariant "lemma_239"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Proc = i & Sta.UniMsg[i].Proc = j -> Sta.Dir.InvSet[j] = false)
end end ;




invariant "lemma_240"

Sta.Proc[Home].CacheData = Sta.CurrData -> Sta.ShWbMsg.Cmd != SHWB_FAck;




invariant "lemma_241"
forall i : NODE do 
i != Home -> 
  (Sta.Proc[i].InvMarked = true -> Sta.UniMsg[Home].Cmd != UNI_Put)
end ;




invariant "lemma_242"
forall i : NODE do 
i != Home -> 
  (Sta.Dir.HeadVld = false & Sta.InvMsg[i].Cmd != INV_Inv -> Sta.Proc[i].CacheState != CACHE_S)
end ;




invariant "lemma_243"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[i].CacheData = Sta.CurrData & Sta.Dir.InvSet[i] = false -> Sta.InvMsg[j].Cmd != INV_Inv)
end end ;




invariant "lemma_244"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.NakcMsg.Cmd = NAKC_Nakc & Sta.UniMsg[i].Proc = j -> Sta.Proc[j].InvMarked = false)
end end ;




invariant "lemma_245"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Proc = i & Sta.UniMsg[j].Cmd = UNI_Get -> Sta.Dir.Local = false)
end end ;




invariant "lemma_246"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[i].CacheData = Sta.CurrData & Sta.UniMsg[j].Cmd = UNI_GetX -> Sta.UniMsg[j].Proc != i)
end end ;




invariant "lemma_247"
forall j : NODE do 
j != Home -> 
  (Sta.Proc[j].CacheState != CACHE_E -> Sta.Dir.InvSet[Home] = false)
end ;




invariant "lemma_248"
forall i : NODE do 
i != Home -> 
  (Sta.Proc[i].InvMarked = false & Sta.UniMsg[i].Cmd = UNI_Put -> Sta.UniMsg[Home].Cmd != UNI_GetX)
end ;




invariant "lemma_249"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Cmd = UNI_PutX & Sta.UniMsg[i].Cmd != UNI_Nak -> Sta.UniMsg[j].Proc = i)
end end ;




invariant "lemma_250"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.InvMsg[j].Cmd = INV_Inv & Sta.Proc[Home].ProcCmd != NODE_None -> Sta.InvMsg[i].Cmd != INV_InvAck)
end end ;




invariant "lemma_251"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Cmd = UNI_PutX & Sta.UniMsg[i].Proc != j -> Sta.UniMsg[j].Proc = i)
end end ;




invariant "lemma_252"
forall i : NODE do 
i != Home -> 
  (Sta.UniMsg[i].Cmd = UNI_GetX & Sta.UniMsg[i].Proc != Home -> Sta.Dir.HeadPtr != i)
end ;




invariant "lemma_253"
forall j : NODE do 
j != Home -> 
  (Sta.MemData != Sta.CurrData & Sta.UniMsg[Home].Cmd = UNI_Get -> Sta.Dir.HeadPtr = j)
end ;




invariant "lemma_254"
forall i : NODE do 
i != Home -> 
  (Sta.UniMsg[Home].Cmd != UNI_Nak & Sta.Proc[Home].ProcCmd = NODE_Get -> Sta.Proc[i].CacheState != CACHE_E)
end ;




invariant "lemma_255"
forall i : NODE do 
i != Home -> 
  (Sta.ShWbMsg.Proc != i & Sta.Proc[i].CacheState = CACHE_S -> Sta.Dir.InvSet[i] = true)
end ;




invariant "lemma_256"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.InvMsg[i].Cmd = INV_InvAck & Sta.UniMsg[Home].Cmd = UNI_Nak -> Sta.InvMsg[j].Cmd != INV_Inv)
end end ;




invariant "lemma_257"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Cmd = UNI_Put & Sta.InvMsg[i].Cmd = INV_Inv -> Sta.Proc[Home].ProcCmd != NODE_Get)
end end ;




invariant "lemma_258"
forall i : NODE do 
i != Home -> 
  (Sta.Dir.ShrVld = true & Sta.UniMsg[i].Data = Sta.CurrData -> Sta.Proc[i].ProcCmd != NODE_GetX)
end ;




invariant "lemma_259"
forall i : NODE do 
i != Home -> 
  (Sta.UniMsg[Home].Cmd = UNI_PutX -> Sta.Proc[i].CacheState != CACHE_S)
end ;




invariant "lemma_260"
forall j : NODE do 
j != Home -> 
  (Sta.Proc[j].InvMarked = true & Sta.Dir.Dirty = true -> Sta.Dir.HeadPtr != j)
end ;




invariant "lemma_261"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Dir.InvSet[i] = false & Sta.Dir.InvSet[j] = true -> Sta.Proc[i].CacheState = CACHE_I)
end end ;




invariant "lemma_262"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[i].Data != Sta.CurrData & Sta.Dir.Local = false -> Sta.Dir.InvSet[j] = false)
end end ;




invariant "lemma_263"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.InvMsg[j].Cmd = INV_Inv & Sta.Dir.Local = false -> Sta.Proc[i].CacheState != CACHE_S)
end end ;




invariant "lemma_264"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[i].Proc = j -> Sta.UniMsg[Home].Cmd != UNI_PutX)
end end ;




invariant "lemma_265"
forall i : NODE do 
i != Home -> 
  (Sta.UniMsg[i].Data = Sta.CurrData & Sta.Proc[i].ProcCmd != NODE_Get -> Sta.Dir.ShrSet[i] = false)
end ;




invariant "lemma_266"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[j].ProcCmd = NODE_GetX & Sta.UniMsg[j].Data = Sta.CurrData -> Sta.Dir.InvSet[i] = false)
end end ;




invariant "lemma_267"
forall i : NODE do 
i != Home -> 
  (Sta.Dir.InvSet[i] = true -> Sta.NakcMsg.Cmd != NAKC_Nakc)
end ;




invariant "lemma_268"
forall j : NODE do 
j != Home -> 
  (Sta.Proc[j].InvMarked = true & Sta.Dir.ShrSet[j] = true -> Sta.RpMsg[j].Cmd != RP_Replace)
end ;




invariant "lemma_269"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Cmd = UNI_PutX & Sta.Proc[i].ProcCmd = NODE_Get -> Sta.UniMsg[j].Proc = i)
end end ;




invariant "lemma_270"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Proc = i & Sta.Dir.InvSet[i] = true -> Sta.Dir.Pending = true)
end end ;




invariant "lemma_271"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Dir.HeadPtr != i & Sta.Proc[j].CacheData = Sta.CurrData -> Sta.MemData = Sta.CurrData)
end end ;




invariant "lemma_272"
forall j : NODE do 
j != Home -> 
  (Sta.Proc[j].CacheState = CACHE_S & Sta.WbMsg.Data = Sta.CurrData -> Sta.InvMsg[j].Cmd = INV_Inv)
end ;




invariant "lemma_273"
forall i : NODE do 
i != Home -> 
  (Sta.UniMsg[Home].Cmd = UNI_PutX -> Sta.Proc[i].CacheState = CACHE_I)
end ;




invariant "lemma_274"
forall j : NODE do 
j != Home -> 
  (Sta.Proc[j].CacheState != CACHE_I & Sta.Proc[j].CacheState != CACHE_S -> Sta.Proc[j].CacheData = Sta.CurrData)
end ;




invariant "lemma_275"
forall i : NODE do 
i != Home -> 
  (Sta.UniMsg[Home].Cmd != UNI_Nak & Sta.Dir.ShrSet[i] = true -> Sta.UniMsg[Home].Proc != i)
end ;




invariant "lemma_276"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[Home].Cmd = UNI_Nak & Sta.InvMsg[j].Cmd = INV_Inv -> Sta.Dir.InvSet[i] = false)
end end ;




invariant "lemma_277"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[i].Cmd = UNI_PutX & Sta.Dir.Pending = true -> Sta.UniMsg[i].Proc = j)
end end ;




invariant "lemma_278"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[j].CacheState = CACHE_S -> Sta.UniMsg[i].Cmd != UNI_PutX)
end end ;




invariant "lemma_279"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[j].InvMarked = true & Sta.UniMsg[i].Proc = j -> Sta.NakcMsg.Cmd != NAKC_Nakc)
end end ;




invariant "lemma_280"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[i].ProcCmd != NODE_GetX & Sta.Dir.HeadPtr = i -> Sta.UniMsg[i].Proc != j)
end end ;




invariant "lemma_281"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Cmd = UNI_Put & Sta.UniMsg[Home].Proc = j -> Sta.InvMsg[i].Cmd != INV_InvAck)
end end ;




invariant "lemma_282"
forall i : NODE do 
i != Home -> 
  (Sta.UniMsg[Home].Proc = i & Sta.Dir.Dirty = true -> Sta.InvMsg[i].Cmd != INV_InvAck)
end ;




invariant "lemma_283"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Cmd = UNI_Get & Sta.Proc[i].CacheState = CACHE_S -> Sta.UniMsg[j].Proc != i)
end end ;




invariant "lemma_284"
forall i : NODE do 
i != Home -> 
  (Sta.ShWbMsg.Proc != i & Sta.Dir.Dirty = false -> Sta.ShWbMsg.Cmd != SHWB_FAck)
end ;




invariant "lemma_285"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[j].CacheData = Sta.CurrData & Sta.UniMsg[i].Proc = j -> Sta.Dir.HeadVld = false)
end end ;




invariant "lemma_286"
forall i : NODE do 
i != Home -> 
  (Sta.UniMsg[Home].Cmd = UNI_Get -> Sta.UniMsg[i].Cmd != UNI_PutX)
end ;




invariant "lemma_287"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.MemData != Sta.CurrData & Sta.UniMsg[i].Cmd = UNI_Put -> Sta.UniMsg[Home].Proc != j)
end end ;




invariant "lemma_288"

Sta.Proc[Home].CacheState != CACHE_S & Sta.Proc[Home].CacheState != CACHE_I -> Sta.Dir.ShrVld = false;




invariant "lemma_289"

Sta.Dir.Pending = true -> Sta.Dir.ShrVld = false;




invariant "lemma_290"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Data = Sta.CurrData & Sta.Proc[i].CacheState = CACHE_E -> Sta.UniMsg[j].Cmd = UNI_Put)
end end ;




invariant "lemma_291"
forall j : NODE do 
j != Home -> 
  (Sta.UniMsg[Home].Cmd = UNI_Get -> Sta.Proc[j].CacheState = CACHE_I)
end ;




invariant "lemma_292"
forall i : NODE do 
i != Home -> 
  (Sta.Proc[Home].ProcCmd != NODE_None & Sta.Proc[i].CacheState = CACHE_S -> Sta.Proc[i].CacheData = Sta.CurrData)
end ;




invariant "lemma_293"
forall j : NODE do 
j != Home -> 
  (Sta.UniMsg[j].Proc != Home & Sta.Proc[Home].CacheState != CACHE_I -> Sta.UniMsg[j].Cmd != UNI_Get)
end ;




invariant "lemma_294"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Data = Sta.CurrData & Sta.UniMsg[i].Cmd = UNI_PutX -> Sta.UniMsg[i].Proc != j)
end end ;




invariant "lemma_295"
forall j : NODE do 
j != Home -> 
  (Sta.Proc[j].CacheState = CACHE_S & Sta.WbMsg.Cmd = WB_Wb -> Sta.Dir.InvSet[j] = true)
end ;




invariant "lemma_296"
forall i : NODE do 
i != Home -> 
  (Sta.UniMsg[i].Cmd = UNI_GetX & Sta.Proc[Home].CacheState = CACHE_S -> Sta.UniMsg[i].Proc = Home)
end ;




invariant "lemma_297"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.InvMsg[i].Cmd = INV_Inv & Sta.UniMsg[Home].Proc = j -> Sta.InvMsg[j].Cmd != INV_InvAck)
end end ;




invariant "lemma_298"

Sta.Dir.HeadVld = false -> Sta.WbMsg.Cmd != WB_Wb;




invariant "lemma_299"
forall i : NODE do 
i != Home -> 
  (Sta.UniMsg[i].Data != Sta.CurrData -> Sta.UniMsg[i].Cmd = UNI_Put)
end ;




invariant "lemma_300"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Proc = i & Sta.UniMsg[j].Cmd = UNI_Get -> Sta.Proc[i].CacheState = CACHE_I)
end end ;




invariant "lemma_301"
forall j : NODE do 
j != Home -> 
  (Sta.Dir.HeadPtr != j & Sta.Dir.Dirty = true -> Sta.Proc[Home].CacheData = Sta.CurrData)
end ;




invariant "lemma_302"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.WbMsg.Cmd = WB_Wb -> Sta.UniMsg[j].Proc != i)
end end ;




invariant "lemma_303"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Dir.ShrSet[j] = false & Sta.Dir.ShrSet[i] = true -> Sta.Proc[j].CacheState != CACHE_S)
end end ;




invariant "lemma_304"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.InvMsg[i].Cmd = INV_InvAck & Sta.Proc[j].CacheState != CACHE_I -> Sta.UniMsg[Home].Proc != j)
end end ;




invariant "lemma_305"
forall j : NODE do 
j != Home -> 
  (Sta.Proc[Home].CacheState = CACHE_E -> Sta.Proc[j].CacheState != CACHE_E)
end ;




invariant "lemma_306"
forall i : NODE do 
i != Home -> 
  (Sta.UniMsg[i].Proc != Home & Sta.Dir.Pending = false -> Sta.UniMsg[i].Cmd != UNI_Get)
end ;




invariant "lemma_307"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[j].CacheData = Sta.CurrData & Sta.Proc[j].CacheState != CACHE_S -> Sta.Dir.ShrSet[i] = false)
end end ;




invariant "lemma_308"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[Home].Proc = i & Sta.UniMsg[Home].Cmd != UNI_Nak -> Sta.Proc[j].CacheState != CACHE_S)
end end ;




invariant "lemma_309"
forall j : NODE do 
j != Home -> 
  (Sta.Dir.InvSet[j] = false & Sta.Proc[j].CacheData = Sta.CurrData -> Sta.Proc[Home].CacheState = CACHE_I)
end ;




invariant "lemma_310"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[j].ProcCmd = NODE_GetX & Sta.UniMsg[j].Data = Sta.CurrData -> Sta.Dir.HeadPtr = i)
end end ;




invariant "lemma_311"
forall j : NODE do 
j != Home -> 
  (Sta.UniMsg[j].Data != Sta.CurrData & Sta.InvMsg[j].Cmd = INV_InvAck -> Sta.Dir.Local = true)
end ;




invariant "lemma_312"
forall j : NODE do 
j != Home -> 
  (Sta.WbMsg.Cmd = WB_Wb & Sta.UniMsg[j].Data = Sta.CurrData -> Sta.RpMsg[j].Cmd != RP_Replace)
end ;




invariant "lemma_313"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Proc = i & Sta.Dir.HeadPtr = j -> Sta.Proc[i].CacheState != CACHE_S)
end end ;




invariant "lemma_314"
forall j : NODE do 
j != Home -> 
  (Sta.Dir.HeadVld = true & Sta.InvMsg[j].Cmd = INV_InvAck -> Sta.Dir.Local = false)
end ;




invariant "lemma_315"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[i].CacheData = Sta.CurrData & Sta.InvMsg[j].Cmd = INV_InvAck -> Sta.UniMsg[Home].Proc != i)
end end ;




invariant "lemma_316"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[Home].Cmd = UNI_GetX & Sta.UniMsg[Home].Proc != j -> Sta.Proc[i].InvMarked = false)
end end ;




invariant "lemma_317"
forall i : NODE do 
i != Home -> 
  (Sta.Proc[i].InvMarked = true & Sta.UniMsg[i].Cmd != UNI_Put -> Sta.Dir.HeadPtr != i)
end ;




invariant "lemma_318"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[j].CacheState != CACHE_I & Sta.Dir.Pending = false -> Sta.Dir.HeadPtr = i)
end end ;




invariant "lemma_319"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.InvMsg[i].Cmd = INV_Inv & Sta.UniMsg[Home].Proc = j -> Sta.UniMsg[Home].Cmd = UNI_Nak)
end end ;




invariant "lemma_320"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[j].InvMarked = true & Sta.UniMsg[i].Proc = j -> Sta.UniMsg[Home].Proc != j)
end end ;




invariant "lemma_321"
forall i : NODE do 
i != Home -> 
  (Sta.UniMsg[i].Proc != Home & Sta.Proc[i].ProcCmd != NODE_None -> Sta.ShWbMsg.Proc != i)
end ;




invariant "lemma_322"
forall i : NODE do 
i != Home -> 
  (Sta.MemData != Sta.CurrData & Sta.Proc[Home].CacheState = CACHE_I -> Sta.Dir.InvSet[i] = false)
end ;




invariant "lemma_323"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[Home].Cmd = UNI_GetX & Sta.UniMsg[j].Cmd = UNI_Put -> Sta.Proc[i].InvMarked = false)
end end ;




invariant "lemma_324"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[j].InvMarked = true -> Sta.Proc[i].CacheState != CACHE_E)
end end ;




invariant "lemma_325"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Proc = i & Sta.Proc[i].InvMarked = true -> Sta.Proc[Home].ProcCmd = NODE_None)
end end ;




invariant "lemma_326"
forall i : NODE do 
i != Home -> 
  (Sta.ShWbMsg.Proc != i -> Sta.UniMsg[i].Cmd != UNI_PutX)
end ;




invariant "lemma_327"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[i].Cmd = UNI_PutX & Sta.UniMsg[i].Data = Sta.CurrData -> Sta.UniMsg[i].Proc = j)
end end ;




invariant "lemma_328"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.MemData != Sta.CurrData & Sta.UniMsg[Home].Proc = j -> Sta.InvMsg[i].Cmd != INV_Inv)
end end ;




invariant "lemma_329"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[Home].Proc = i & Sta.UniMsg[j].Data != Sta.CurrData -> Sta.Proc[i].CacheState != CACHE_S)
end end ;




invariant "lemma_330"
forall j : NODE do 
j != Home -> 
  (Sta.WbMsg.Data = Sta.CurrData & Sta.UniMsg[Home].Proc != j -> Sta.UniMsg[Home].Cmd != UNI_GetX)
end ;




invariant "lemma_331"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Dir.InvSet[i] = true & Sta.InvMsg[j].Cmd = INV_InvAck -> Sta.Proc[Home].ProcCmd != NODE_Get)
end end ;




invariant "lemma_332"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[Home].ProcCmd != NODE_Get & Sta.UniMsg[i].Cmd = UNI_PutX -> Sta.UniMsg[i].Proc = j)
end end ;




invariant "lemma_333"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.InvMsg[i].Cmd = INV_Inv & Sta.Proc[j].CacheState != CACHE_I -> Sta.Dir.InvSet[j] = true)
end end ;




invariant "lemma_334"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Proc = i & Sta.UniMsg[i].Cmd = UNI_Put -> Sta.UniMsg[j].Cmd != UNI_Get)
end end ;




invariant "lemma_335"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Cmd = UNI_PutX & Sta.Proc[j].CacheState != CACHE_S -> Sta.UniMsg[j].Proc = i)
end end ;




invariant "lemma_336"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[j].CacheData = Sta.CurrData & Sta.UniMsg[i].Proc = j -> Sta.Dir.Local = true)
end end ;




invariant "lemma_337"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[i].Proc != j & Sta.UniMsg[i].Data = Sta.CurrData -> Sta.UniMsg[i].Cmd = UNI_Put)
end end ;




invariant "lemma_338"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.UniMsg[j].Proc = i & Sta.Proc[j].ProcCmd != NODE_GetX -> Sta.Dir.HeadPtr != j)
end end ;




invariant "lemma_339"
forall i : NODE do forall j : NODE do 
i != j & i != Home & j != Home  -> 
  (Sta.Proc[i].InvMarked = true & Sta.UniMsg[Home].Proc = j -> Sta.InvMsg[j].Cmd != INV_Inv)
end end ;




invariant "lemma_340"
forall i : NODE do 
i != Home -> 
  (Sta.Dir.ShrSet[i] = true -> Sta.NakcMsg.Cmd != NAKC_Nakc)
end ;




invariant "lemma_341"
forall i : NODE do 
i != Home -> 
  (Sta.Proc[i].CacheData != Sta.CurrData -> Sta.Proc[i].ProcCmd != NODE_GetX)
end ;




invariant "lemma_342"
forall i : NODE do 
i != Home -> 
  (Sta.Proc[Home].CacheState != CACHE_E & Sta.Dir.Dirty = true -> Sta.Dir.InvSet[i] = false)
end ;




invariant "lemma_343"
forall j : NODE do 
j != Home -> 
  (Sta.UniMsg[Home].Cmd = UNI_Nak & Sta.UniMsg[j].Cmd = UNI_Put -> Sta.MemData = Sta.CurrData)
end ;

