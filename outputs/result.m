const
  roleANum:1;
  roleBNum:1;
  roleCNum:1;
  roleDNum:1;
  totalFact:100;
  msgLength:5;
  chanNum:18;
  invokeNum:10;
type
  indexType:0..totalFact;
  roleANums:1..roleANum;
  roleBNums:1..roleBNum;
  roleCNums:1..roleCNum;
  roleDNums:1..roleDNum;
  msgLen:0..msgLength;
  chanNums:0..chanNum;
  invokeNums:0..invokeNum;

  AgentType : enum{anyAgent,Intruder, UE, SEAF, AUSF, UDM}; ---Intruder 
  NonceType : enum{anyNonce, supi, ue, ue1, prekey, certA, eapm, seafn, ausf, sucm, certC, start};
  ConstType : enum{anyNumber};
  MsgType : enum {null,agent,nonce,key,aenc,senc,sign,concat,hash,tmp,mod,e,number};
  
  EncryptType : enum{PK,SK,Symk,MsgK};
  KeyType: record 
    encType: EncryptType; 
    ag: AgentType; 
    ag1:AgentType;
    ag2:AgentType;
    m:indexType;
  end;

  AStatus: enum{A1,A2,A3,A4,A5,A6,A7,A8};
  BStatus: enum{B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16};
  CStatus: enum{C1,C2,C3,C4,C5,C6,C7,C8,C9,C10};
  DStatus: enum{D1,D2};

  Message: record
    msgType : MsgType;
    ag : AgentType;
    noncePart : NonceType;
    constPart : ConstType;
    tmpPart : indexType;
    k : KeyType;
    modMsg1 : indexType;
    modMsg2 : indexType;
    hashMsg : indexType;
    expMsg1 : indexType;
    expMsg2 : indexType;
    signMsg : indexType;
    signKey : indexType;
    aencMsg : indexType;
    aencKey : indexType;
    sencMsg : indexType;
    sencKey : indexType;
    concatPart: Array[msgLen] of indexType;--- concatParts could be written in arrays: concatPart: Array[msgLen] of indexType
    length : indexType;
  end;

  Channel: record
    msg : Message;
    sender : AgentType;
    receiver : AgentType;
    empty : boolean;
  end;
  RoleA : record
   supi : NonceType;
   ue : NonceType;
   ue1 : NonceType;
   prekey : NonceType;
   certA : NonceType;
   eapm : NonceType;
   seafn : NonceType;
   ausf : NonceType;
   sucm : NonceType;
   certC : NonceType;
   start : NonceType;
   A : AgentType;
   B : AgentType;
   C : AgentType;
   D : AgentType;
   x10 : Message;
   x1 : Message;
   x2 : Message;
   x3 : Message;
   x4 : Message;
   x5 : Message;
   x6 : Message;
   x7 : Message;
   x8 : Message;
   x9 : Message;

   locsupi : NonceType;
   locue : NonceType;
   locue1 : NonceType;
   locprekey : NonceType;
   loccertA : NonceType;
   loceapm : NonceType;
   locseafn : NonceType;
   locausf : NonceType;
   locsucm : NonceType;
   loccertC : NonceType;
   locstart : NonceType;
   locA : AgentType;
   locB : AgentType;
   locC : AgentType;
   locD : AgentType;
   locx10 : Message;
   locx1 : Message;
   locx2 : Message;
   locx3 : Message;
   locx4 : Message;
   locx5 : Message;
   locx6 : Message;
   locx7 : Message;
   locx8 : Message;
   locx9 : Message;
   
   st: AStatus;
   commit : boolean;
  end;
  RoleB : record
   supi : NonceType;
   ue : NonceType;
   ue1 : NonceType;
   prekey : NonceType;
   certA : NonceType;
   eapm : NonceType;
   seafn : NonceType;
   ausf : NonceType;
   sucm : NonceType;
   certC : NonceType;
   start : NonceType;
   A : AgentType;
   B : AgentType;
   C : AgentType;
   D : AgentType;
   x10 : Message;
   x1 : Message;
   x2 : Message;
   x3 : Message;
   x4 : Message;
   x5 : Message;
   x6 : Message;
   x7 : Message;
   x8 : Message;
   x9 : Message;

   locsupi : NonceType;
   locue : NonceType;
   locue1 : NonceType;
   locprekey : NonceType;
   loccertA : NonceType;
   loceapm : NonceType;
   locseafn : NonceType;
   locausf : NonceType;
   locsucm : NonceType;
   loccertC : NonceType;
   locstart : NonceType;
   locA : AgentType;
   locB : AgentType;
   locC : AgentType;
   locD : AgentType;
   locx10 : Message;
   locx1 : Message;
   locx2 : Message;
   locx3 : Message;
   locx4 : Message;
   locx5 : Message;
   locx6 : Message;
   locx7 : Message;
   locx8 : Message;
   locx9 : Message;
   
   st: BStatus;
   commit : boolean;
  end;
  RoleC : record
   supi : NonceType;
   ue : NonceType;
   ue1 : NonceType;
   prekey : NonceType;
   certA : NonceType;
   eapm : NonceType;
   seafn : NonceType;
   ausf : NonceType;
   sucm : NonceType;
   certC : NonceType;
   start : NonceType;
   A : AgentType;
   B : AgentType;
   C : AgentType;
   D : AgentType;
   x10 : Message;
   x1 : Message;
   x2 : Message;
   x3 : Message;
   x4 : Message;
   x5 : Message;
   x6 : Message;
   x7 : Message;
   x8 : Message;
   x9 : Message;

   locsupi : NonceType;
   locue : NonceType;
   locue1 : NonceType;
   locprekey : NonceType;
   loccertA : NonceType;
   loceapm : NonceType;
   locseafn : NonceType;
   locausf : NonceType;
   locsucm : NonceType;
   loccertC : NonceType;
   locstart : NonceType;
   locA : AgentType;
   locB : AgentType;
   locC : AgentType;
   locD : AgentType;
   locx10 : Message;
   locx1 : Message;
   locx2 : Message;
   locx3 : Message;
   locx4 : Message;
   locx5 : Message;
   locx6 : Message;
   locx7 : Message;
   locx8 : Message;
   locx9 : Message;
   
   st: CStatus;
   commit : boolean;
  end;
  RoleD : record
   supi : NonceType;
   ue : NonceType;
   ue1 : NonceType;
   prekey : NonceType;
   certA : NonceType;
   eapm : NonceType;
   seafn : NonceType;
   ausf : NonceType;
   sucm : NonceType;
   certC : NonceType;
   start : NonceType;
   A : AgentType;
   B : AgentType;
   C : AgentType;
   D : AgentType;
   x10 : Message;
   x1 : Message;
   x2 : Message;
   x3 : Message;
   x4 : Message;
   x5 : Message;
   x6 : Message;
   x7 : Message;
   x8 : Message;
   x9 : Message;

   locsupi : NonceType;
   locue : NonceType;
   locue1 : NonceType;
   locprekey : NonceType;
   loccertA : NonceType;
   loceapm : NonceType;
   locseafn : NonceType;
   locausf : NonceType;
   locsucm : NonceType;
   loccertC : NonceType;
   locstart : NonceType;
   locA : AgentType;
   locB : AgentType;
   locC : AgentType;
   locD : AgentType;
   locx10 : Message;
   locx1 : Message;
   locx2 : Message;
   locx3 : Message;
   locx4 : Message;
   locx5 : Message;
   locx6 : Message;
   locx7 : Message;
   locx8 : Message;
   locx9 : Message;
   
   st: DStatus;
   commit : boolean;
  end;

  msgSet: record
    content : Array[indexType] of indexType;
    length : indexType;
  end;
  
var
  ch : Array[chanNums] of Channel;
  roleA : Array[roleANums] of RoleA;
  roleB : Array[roleBNums] of RoleB;
  roleC : Array[roleCNums] of RoleC;
  roleD : Array[roleDNums] of RoleD;

  ---intruder    : RoleIntruder;
  msgs : Array[indexType] of Message;
  msg_end: indexType;
  pat1Set: msgSet;
  sPat1Set: msgSet;
  pat2Set: msgSet;
  sPat2Set: msgSet;
  pat3Set: msgSet;
  sPat3Set: msgSet;
  pat4Set: msgSet;
  sPat4Set: msgSet;
  pat5Set: msgSet;
  sPat5Set: msgSet;
  pat6Set: msgSet;
  sPat6Set: msgSet;
  pat7Set: msgSet;
  sPat7Set: msgSet;
  pat8Set: msgSet;
  sPat8Set: msgSet;
  pat9Set: msgSet;
  sPat9Set: msgSet;
  pat10Set: msgSet;
  sPat10Set: msgSet;
  pat11Set: msgSet;
  sPat11Set: msgSet;
  pat12Set: msgSet;
  sPat12Set: msgSet;
  pat13Set: msgSet;
  sPat13Set: msgSet;
  pat14Set: msgSet;
  sPat14Set: msgSet;
  pat15Set: msgSet;
  sPat15Set: msgSet;
  pat16Set: msgSet;
  sPat16Set: msgSet;
  pat17Set: msgSet;
  sPat17Set: msgSet;
  pat18Set: msgSet;
  sPat18Set: msgSet;
  pat19Set: msgSet;
  sPat19Set: msgSet;
  pat20Set: msgSet;
  sPat20Set: msgSet;
  pat21Set: msgSet;
  sPat21Set: msgSet;
  pat22Set: msgSet;
  sPat22Set: msgSet;
  pat23Set: msgSet;
  sPat23Set: msgSet;
  pat24Set: msgSet;
  sPat24Set: msgSet;

  A_known : Array[indexType] of boolean;
  B_known : Array[indexType] of boolean;
  C_known : Array[indexType] of boolean;
  D_known : Array[indexType] of boolean;
  Spy_known: Array[indexType] of boolean;
  ---systemEvent   : array[eventNums] of Event;
  ---eve_end       : eventNums;
  emit: Array[indexType] of boolean;
  gnum : indexType;


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
        | (msg.msgType=tmp & msgs[i].tmpPart=msg.tmpPart)
        | (msg.msgType=mod & msgs[i].modMsg1=msg.modMsg1 & msgs[i].modMsg2=msg.modMsg2)
        | (msg.msgType=e & msgs[i].expMsg1=msg.expMsg1 & msgs[i].expMsg2=msg.expMsg2)
        | (msg.msgType=number & msgs[i].constPart=msg.constPart)
        | (msg.msgType=key & (msgs[i].k.encType=msg.k.encType & msg.k.encType != Symk & msgs[i].k.ag=msg.k.ag))
        | (msg.msgType=key & (msgs[i].k.encType=msg.k.encType & msg.k.encType = Symk & msgs[i].k.ag1=msg.k.ag1 & msgs[i].k.ag2=msg.k.ag2))
        | (msg.msgType=aenc & (msgs[i].aencMsg=msg.aencMsg & msgs[i].aencKey=msg.aencKey))
        | (msg.msgType=senc & (msgs[i].sencMsg=msg.sencMsg & msgs[i].sencKey=msg.sencKey))
        | (msg.msgType=sign & (msgs[i].signMsg=msg.signMsg & msgs[i].signKey=msg.signKey))
        | (msg.msgType=hash & (msgs[i].hashMsg=msg.hashMsg)) 
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
end;

procedure printMsg(msg:Message);
  var i:indexType;
  begin
    if msg.msgType=null then
      put "null\n";
    elsif msg.msgType=agent then
      put msg.ag;
    elsif msg.msgType=nonce then
      put msg.noncePart;
    elsif msg.msgType=key then
      if msg.k.encType=PK then
        put "PK(";
        put msg.k.ag;
        put ")";
      elsif msg.k.encType=SK then
        put "SK(";
        put msg.k.ag;
        put ")";
      elsif msg.k.encType=Symk then
        put "SymK(";
        put msg.k.ag;
        put ")";
      endif;
      elsif msg.msgType=aenc then
        put "aenc{";
        printMsg(msgs[msg.aencMsg]);
        put "}";
        printMsg(msgs[msg.aencKey]);
      elsif msg.msgType=senc then
        put "senc{";
        printMsg(msgs[msg.sencMsg]);
        put "}";
        printMsg(msgs[msg.sencKey]);
      elsif msg.msgType = sign then 
        put "sign{";
        printMsg(msgs[msg.signMsg]);
        put "}";
        printMsg(msgs[msg.signKey]);
      elsif msg.msgType = hash then 
        put "hash(";
        printMsg(msgs[msg.hashMsg]);
        put ");"
      elsif msg.msgType=mod then 
        put "mod{";
        printMsg(msgs[msg.modMsg1]);
        put ",";
        printMsg(msgs[msg.modMsg2]);
        put "}";
      elsif msg.msgType= e then 
        put "exp{";
        printMsg(msgs[msg.expMsg1]);
        put ",";
        printMsg(msgs[msg.expMsg2]);
        put "}";
      elsif msg.msgType = number then 
        put msg.constPart;
      elsif msg.msgType = tmp then 
        put "tmp{";
        printMsg(msgs[msg.tmpPart]);
        put "}";
      elsif msg.msgType=concat then
        put "concat(";
        i := 1;
        while i < msg.length do
          printMsg(msgs[msg.concatPart[i]]);
          put ",";
          i := i+1;
        end;
        printMsg(msgs[msg.concatPart[i]]);
        put")";
      endif;
    end;
function inverseKey(msgK:Message):Message;
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
    elsif (msgK.msgType != key) then 
      if (msgK.k.encType = MsgK) then 
        key_inv.msgType := msgK.msgType;
        ---key_inv.k.m := msgK.k.m;
        if (msgK.msgType = mod) then 
          ---key_inv.modMsg1 := msgK.modMsg1;
          ---key_inv.modMsg2 := msgK.modMsg2;
        ---elsif (msgK.msgType = e) then 
          ---key_inv.expMsg1 := msgK.expMsg1;
          ---key_inv.expMsg2 := msgK.expMsg2;
          key_inv := msgs[msgs[msgK.modMsg1].expMsg1];
          key_inv.k.encType := MsgK;
          elsif (msgK.msgType = hash) then 
          key_inv := msgs[msgK.hashMsg];
          key_inv.k.encType := MsgK;
        endif;
      endif;
    endif;
    return key_inv;
  end;
function inverseKeyIndex(msgK:Message):indexType;
  var key_inv:Message;
      index : indexType;
  begin
    key_inv := inverseKey(msgK);
    get_msgNo(key_inv,index);
    return index;
  end;
function judge(msg:Message;ag:AgentType) :boolean;
  begin
    if msg.msgType = aenc then 
      return msgs[msg.aencKey].k.ag = ag;
    elsif msg.msgType = senc then 
      if msgs[msg.sencKey].k.m =0 then 
        return (msgs[msg.sencKey].k.ag1 = ag |msgs[msg.sencKey].k.ag2 = ag) 
      endif;
    endif;
    return true;
  end;

--- Sorry, construct_function of this pattern has not been written!

function construct2By11(msgNo1,msgNo2:indexType):Message;
  var index : indexType;
      msg : Message;
  begin
   index := 0;
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 2) then
       if (msgs[i].concatPart[1] = msgNo1 & msgs[i].concatPart[2] = msgNo2) then
         index := i;
         msg := msgs[index];
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg.msgType := concat;
     msg.concatPart[1] := msgNo1;
     msg.concatPart[2] := msgNo2;
     msg.length := 2;
   endif;
   return msg;
  end;

function constructIndex2By11(msgNo1,msgNo2:indexType):indexType;
  var index : indexType;
  begin
   index := 0;
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 2) then
       if (msgs[i].concatPart[1] = msgNo1 & msgs[i].concatPart[2] = msgNo2) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     index:=msg_end+1;
   endif;
   return index;
  end;

--- Sorry, construct_function of this pattern has not been written!

function construct4By23(msgNo21, msgNo32:indexType):Message;
  var index: indexType;
      msg : Message;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = aenc) then
       if (msgs[i].aencMsg = msgNo21 & msgs[i].aencKey = msgNo32) then
         index := i;
         msg := msgs[index];
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg.msgType := aenc;
     msg.aencMsg := msgNo21;
     msg.aencKey := msgNo32;
     msg.length := 1;
   endif;
   return msg;
  end;

function constructIndex4By23(msgNo21, msgNo32:indexType):indexType;
  var index: indexType;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = aenc) then
       if (msgs[i].aencMsg = msgNo21 & msgs[i].aencKey = msgNo32) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     index := msg_end + 1;
   endif;
   return index;
  end;

function construct5By13(msgNo11, msgNo32:indexType):Message;
  var index: indexType;
      msg : Message;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = aenc) then
       if (msgs[i].aencMsg = msgNo11 & msgs[i].aencKey = msgNo32) then
         index := i;
         msg := msgs[index];
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg.msgType := aenc;
     msg.aencMsg := msgNo11;
     msg.aencKey := msgNo32;
     msg.length := 1;
   endif;
   return msg;
  end;

function constructIndex5By13(msgNo11, msgNo32:indexType):indexType;
  var index: indexType;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = aenc) then
       if (msgs[i].aencMsg = msgNo11 & msgs[i].aencKey = msgNo32) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     index := msg_end + 1;
   endif;
   return index;
  end;

function construct6By1111(msgNo1,msgNo2,msgNo3,msgNo4:indexType):Message;
  var index : indexType;
      msg : Message;
  begin
   index := 0;
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 4) then
       if (msgs[i].concatPart[1] = msgNo1 & msgs[i].concatPart[2] = msgNo2 & msgs[i].concatPart[3] = msgNo3 & msgs[i].concatPart[4] = msgNo4) then
         index := i;
         msg := msgs[index];
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg.msgType := concat;
     msg.concatPart[1] := msgNo1;
     msg.concatPart[2] := msgNo2;
     msg.concatPart[3] := msgNo3;
     msg.concatPart[4] := msgNo4;
     msg.length := 4;
   endif;
   return msg;
  end;

function constructIndex6By1111(msgNo1,msgNo2,msgNo3,msgNo4:indexType):indexType;
  var index : indexType;
  begin
   index := 0;
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 4) then
       if (msgs[i].concatPart[1] = msgNo1 & msgs[i].concatPart[2] = msgNo2 & msgs[i].concatPart[3] = msgNo3 & msgs[i].concatPart[4] = msgNo4) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     index:=msg_end+1;
   endif;
   return index;
  end;

function construct7By63(msgNo61, msgNo32:indexType):Message;
  var index: indexType;
      msg : Message;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = sign) then
       if (msgs[i].signMsg = msgNo61 & msgs[i].signKey = msgNo32) then
         index := i;
         msg := msgs[index];
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg.msgType := sign;
     msg.signMsg := msgNo61;
     msg.signKey := msgNo32;
     msg.length := 1;
   endif;
   return msg;
  end;

function constructIndex7By63(msgNo61, msgNo32:indexType):indexType;
  var index: indexType;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = sign) then
       if (msgs[i].signMsg = msgNo61 & msgs[i].signKey = msgNo32) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     index := msg_end + 1;
   endif;
   return index;
  end;

function construct8By111(msgNo1,msgNo2,msgNo3:indexType):Message;
  var index : indexType;
      msg : Message;
  begin
   index := 0;
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 3) then
       if (msgs[i].concatPart[1] = msgNo1 & msgs[i].concatPart[2] = msgNo2 & msgs[i].concatPart[3] = msgNo3) then
         index := i;
         msg := msgs[index];
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg.msgType := concat;
     msg.concatPart[1] := msgNo1;
     msg.concatPart[2] := msgNo2;
     msg.concatPart[3] := msgNo3;
     msg.length := 3;
   endif;
   return msg;
  end;

function constructIndex8By111(msgNo1,msgNo2,msgNo3:indexType):indexType;
  var index : indexType;
  begin
   index := 0;
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 3) then
       if (msgs[i].concatPart[1] = msgNo1 & msgs[i].concatPart[2] = msgNo2 & msgs[i].concatPart[3] = msgNo3) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     index:=msg_end+1;
   endif;
   return index;
  end;

function construct9By8(msgNo81:indexType):Message;
  var index: indexType;
      msg : Message;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = hash) then
       if (msgs[i].hashMsg = msgNo81) then
         index := i;
         msg := msgs[index];
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg.msgType := hash;
     msg.hashMsg := msgNo81;
     msg.length := 1;
   endif;
   return msg;
  end;

function constructIndex9By8(msgNo81:indexType):indexType;
  var index: indexType;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = hash) then
       if (msgs[i].hashMsg = msgNo81) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     index := msg_end + 1;
   endif;
   return index;
  end;

function construct10By69(msgNo61, msgNo92:indexType):Message;
  var index: indexType;
      msg : Message;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = senc) then
       if (msgs[i].sencMsg = msgNo61 & msgs[i].sencKey = msgNo92) then
         index := i;
         msg := msgs[index];
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg.msgType := senc;
     msg.sencMsg := msgNo61;
     msg.sencKey := msgNo92;
     msg.length := 1;
   endif;
   return msg;
  end;
function constructIndex10By69(msgNo61, msgNo92:indexType):indexType;
  var index: indexType;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = senc) then
       if (msgs[i].sencMsg = msgNo61 & msgs[i].sencKey = msgNo92) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
      index:= msg_end + 1;
   endif;
   return index;
  end;
function construct11By51710(msgNo1,msgNo2,msgNo3,msgNo4:indexType):Message;
  var index : indexType;
      msg : Message;
  begin
   index := 0;
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 4) then
       if (msgs[i].concatPart[1] = msgNo1 & msgs[i].concatPart[2] = msgNo2 & msgs[i].concatPart[3] = msgNo3 & msgs[i].concatPart[4] = msgNo4) then
         index := i;
         msg := msgs[index];
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg.msgType := concat;
     msg.concatPart[1] := msgNo1;
     msg.concatPart[2] := msgNo2;
     msg.concatPart[3] := msgNo3;
     msg.concatPart[4] := msgNo4;
     msg.length := 4;
   endif;
   return msg;
  end;

function constructIndex11By51710(msgNo1,msgNo2,msgNo3,msgNo4:indexType):indexType;
  var index : indexType;
  begin
   index := 0;
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 4) then
       if (msgs[i].concatPart[1] = msgNo1 & msgs[i].concatPart[2] = msgNo2 & msgs[i].concatPart[3] = msgNo3 & msgs[i].concatPart[4] = msgNo4) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     index:=msg_end+1;
   endif;
   return index;
  end;

--- Sorry, construct_function of this pattern has not been written!

--- Sorry, construct_function of this pattern has not been written!

function construct14By131(msgNo1,msgNo2:indexType):Message;
  var index : indexType;
      msg : Message;
  begin
   index := 0;
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 2) then
       if (msgs[i].concatPart[1] = msgNo1 & msgs[i].concatPart[2] = msgNo2) then
         index := i;
         msg := msgs[index];
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg.msgType := concat;
     msg.concatPart[1] := msgNo1;
     msg.concatPart[2] := msgNo2;
     msg.length := 2;
   endif;
   return msg;
  end;

function constructIndex14By131(msgNo1,msgNo2:indexType):indexType;
  var index : indexType;
  begin
   index := 0;
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 2) then
       if (msgs[i].concatPart[1] = msgNo1 & msgs[i].concatPart[2] = msgNo2) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     index:=msg_end+1;
   endif;
   return index;
  end;

--- Sorry, construct_function of this pattern has not been written!

--- Sorry, construct_function of this pattern has not been written!

--- Sorry, construct_function of this pattern has not been written!

--- Sorry, construct_function of this pattern has not been written!

function construct19By1718(msgNo1,msgNo2:indexType):Message;
  var index : indexType;
      msg : Message;
  begin
   index := 0;
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 2) then
       if (msgs[i].concatPart[1] = msgNo1 & msgs[i].concatPart[2] = msgNo2) then
         index := i;
         msg := msgs[index];
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg.msgType := concat;
     msg.concatPart[1] := msgNo1;
     msg.concatPart[2] := msgNo2;
     msg.length := 2;
   endif;
   return msg;
  end;

function constructIndex19By1718(msgNo1,msgNo2:indexType):indexType;
  var index : indexType;
  begin
   index := 0;
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 2) then
       if (msgs[i].concatPart[1] = msgNo1 & msgs[i].concatPart[2] = msgNo2) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     index:=msg_end+1;
   endif;
   return index;
  end;

--- Sorry, construct_function of this pattern has not been written!

--- Sorry, construct_function of this pattern has not been written!

--- Sorry, construct_function of this pattern has not been written!

--- Sorry, construct_function of this pattern has not been written!

function construct24By20212223(msgNo1,msgNo2,msgNo3,msgNo4:indexType):Message;
  var index : indexType;
      msg : Message;
  begin
   index := 0;
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 4) then
       if (msgs[i].concatPart[1] = msgNo1 & msgs[i].concatPart[2] = msgNo2 & msgs[i].concatPart[3] = msgNo3 & msgs[i].concatPart[4] = msgNo4) then
         index := i;
         msg := msgs[index];
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg.msgType := concat;
     msg.concatPart[1] := msgNo1;
     msg.concatPart[2] := msgNo2;
     msg.concatPart[3] := msgNo3;
     msg.concatPart[4] := msgNo4;
     msg.length := 4;
   endif;
   return msg;
  end;

function constructIndex24By20212223(msgNo1,msgNo2,msgNo3,msgNo4:indexType):indexType;
  var index : indexType;
  begin
   index := 0;
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 4) then
       if (msgs[i].concatPart[1] = msgNo1 & msgs[i].concatPart[2] = msgNo2 & msgs[i].concatPart[3] = msgNo3 & msgs[i].concatPart[4] = msgNo4) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     index:=msg_end+1;
   endif;
   return index;
  end;

---pat1: supi 
procedure lookAddPat1(supi:NonceType; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
      index:=0;
      for i: indexType do
        if(msgs[i].msgType=nonce) then
          if(msgs[i].noncePart=supi) then
            index:=i;
          endif;
        endif;
      endfor;
      if(index=0) then
        msg_end := msg_end + 1 ;
        index := msg_end;
        msgs[index].msgType := nonce;
        msgs[index].noncePart:=supi; 
        msgs[index].length := 1;
      endif;
      num:=index;
      msg:=msgs[index];
  end;

---pat1: supi 
procedure isPat1(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag1 := false;
    if (msg.msgType = nonce) then
      flag1 := true;
    endif;
    flag := flag1;
  end;

---spat1: supi 
procedure constructSpat1(supi:NonceType; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = nonce) then
        if (msgs[i].noncePart = supi) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := nonce;
      msgs[index].noncePart := supi;
      msgs[index].length := 1;
    endif;
    sPat1Set.length := sPat1Set.length + 1;
    sPat1Set.content[sPat1Set.length] := index;
    num := index;
  end;

---pat2: supi.ue 
procedure lookAddPat2(supi:NonceType; ue:NonceType; Var msg:Message; Var num : indexType);
  Var msg1,msg2: Message;
     index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat1(supi, msg1, i1);
   lookAddPat1(ue, msg2, i2);
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length=2) then
       if (msgs[i].concatPart[1]=i1 & msgs[i].concatPart[2]=i2) then
          index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := concat;
     msgs[index].concatPart[1]:=i1;
     msgs[index].concatPart[2]:=i2; 
     msgs[index].length := 2;
   endif;
   num:=index;
   msg:=msgs[index];
  end;

---pat2: supi.ue 
procedure isPat2(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     if(msg.msgType = concat) then
        isPat1(msgs[msg.concatPart[1]],flagPart1);
        isPat1(msgs[msg.concatPart[2]],flagPart2);
       if (flagPart1 & flagPart2) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---spat2: supi.ue 
procedure constructSpat2(supi:NonceType; ue:NonceType; Var num: indexType);
  Var i,index, i1, i2:indexType;
  begin
    index:=0;
    constructSpat1(supi, i1);
    constructSpat1(ue, i2);
    i := 1;
    while(i<= msg_end) do
      if (msgs[i].msgType = concat & msgs[i].length = 2) then
        if (msgs[i].concatPart[1] = i1 & msgs[i].concatPart[2] = i2) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := concat;
      msgs[index].concatPart[1] := i1;
      msgs[index].concatPart[2] := i2;
      msgs[index].length := 2;
    endif;
    sPat2Set.length := sPat2Set.length + 1;
    sPat2Set.content[sPat2Set.length] := index;
    num := index;
  end;

---pat3: pk(D) 
procedure lookAddPat3(DPk:AgentType; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
    index:=0;
    for i: indexType do
      if (msgs[i].msgType = key) then
        if (msgs[i].k.encType = PK & msgs[i].k.ag = DPk) then
          index:=i;
        endif;
      endif;
    endfor;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := key;
      msgs[index].k.encType:=PK; 
      msgs[index].k.ag:=DPk;
      msgs[index].length := 1;
    endif;
    num:=index;
    msg:=msgs[index];
  end;

---pat3: pk(D) 
procedure isPat3(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag1 := false;
    if (msg.msgType = key & msg.k.encType = PK) then
      flag1 := true;
    endif;
    flag := flag1;
  end;

---spat3: pk(D) 
procedure constructSpat3(DPk:AgentType; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = key & msgs[i].k.encType = PK) then
        if (msgs[i].k.ag = DPk) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := key;
      msgs[index].k.encType := PK;
      msgs[index].k.ag := DPk;
      msgs[index].length := 1;
    endif;
    sPat3Set.length := sPat3Set.length + 1;
    sPat3Set.content[sPat3Set.length] := index;
    num := index;
  end;

---pat4: aenc{supi.ue}pk(D) 
procedure lookAddPat4(supi:NonceType; ue:NonceType; DPk:AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat2(supi, ue,msg1,i1);
   lookAddPat3(DPk,msg2,i2);
   for i : indexType do
     if (msgs[i].msgType = aenc) then
       if (msgs[i].aencMsg = i1 & msgs[i].aencKey = i2) then
          index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := aenc;
     msgs[index].aencMsg := i1; 
     msgs[index].aencKey := i2;     
     msgs[index].length := 1;
   endif;
   num:=index;
   msg:=msgs[index];
  end;

---pat4: aenc{supi.ue}pk(D) 
procedure isPat4(msg:Message; Var flag:boolean);
  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1 := false;
    flagPart2 := false;
    if (msg.msgType = aenc) then
      isPat2(msgs[msg.aencMsg],flagPart1);
      isPat3(msgs[msg.aencKey],flagPart2);
      if (flagPart1 & flagPart2) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;

---spat4: aenc{supi.ue}pk(D) 
procedure constructSpat4(supi:NonceType; ue:NonceType; DPk:AgentType; Var num: indexType);
  Var i,index,i1,i2:indexType;
  begin
    index:=0;
    constructSpat2(supi, ue, i1);
    constructSpat3(DPk, i2);
    i := 1;
    while(i <= msg_end) do
      if (msgs[i].msgType = aenc) then
        if (msgs[i].aencMsg = i1 & msgs[i].aencKey = i2) then
           index:=i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := aenc;
      msgs[index].aencMsg := i1; 
      msgs[index].aencKey := i2; 
      msgs[index].length := 1;
    endif;
    sPat4Set.length := sPat4Set.length + 1;
    sPat4Set.content[sPat4Set.length] := index;
    num := index;
  end;

---pat5: aenc{prekey}pk(C) 
procedure lookAddPat5(prekey:NonceType; CPk:AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat1(prekey,msg1,i1);
   lookAddPat3(CPk,msg2,i2);
   for i : indexType do
     if (msgs[i].msgType = aenc) then
       if (msgs[i].aencMsg = i1 & msgs[i].aencKey = i2) then
          index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := aenc;
     msgs[index].aencMsg := i1; 
     msgs[index].aencKey := i2;     
     msgs[index].length := 1;
   endif;
   num:=index;
   msg:=msgs[index];
  end;

---pat5: aenc{prekey}pk(C) 
procedure isPat5(msg:Message; Var flag:boolean);
  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1 := false;
    flagPart2 := false;
    if (msg.msgType = aenc) then
      isPat1(msgs[msg.aencMsg],flagPart1);
      isPat3(msgs[msg.aencKey],flagPart2);
      if (flagPart1 & flagPart2) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;

---spat5: aenc{prekey}pk(C) 
procedure constructSpat5(prekey:NonceType; CPk:AgentType; Var num: indexType);
  Var i,index,i1,i2:indexType;
  begin
    index:=0;
    constructSpat1(prekey, i1);
    constructSpat3(CPk, i2);
    i := 1;
    while(i <= msg_end) do
      if (msgs[i].msgType = aenc) then
        if (msgs[i].aencMsg = i1 & msgs[i].aencKey = i2) then
           index:=i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := aenc;
      msgs[index].aencMsg := i1; 
      msgs[index].aencKey := i2; 
      msgs[index].length := 1;
    endif;
    sPat5Set.length := sPat5Set.length + 1;
    sPat5Set.content[sPat5Set.length] := index;
    num := index;
  end;

---pat6: start.ue1.ausf.certC 
procedure lookAddPat6(start:NonceType; ue1:NonceType; ausf:NonceType; certC:NonceType; Var msg:Message; Var num : indexType);
  Var msg1,msg2,msg3,msg4: Message;
     index,i1,i2,i3,i4:indexType;
  begin
   index:=0;
   lookAddPat1(start, msg1, i1);
   lookAddPat1(ue1, msg2, i2);
   lookAddPat1(ausf, msg3, i3);
   lookAddPat1(certC, msg4, i4);
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length=4) then
       if (msgs[i].concatPart[1]=i1 & msgs[i].concatPart[2]=i2 & msgs[i].concatPart[3]=i3 & msgs[i].concatPart[4]=i4) then
          index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := concat;
     msgs[index].concatPart[1]:=i1;
     msgs[index].concatPart[2]:=i2;
     msgs[index].concatPart[3]:=i3;
     msgs[index].concatPart[4]:=i4; 
     msgs[index].length := 4;
   endif;
   num:=index;
   msg:=msgs[index];
  end;

---pat6: start.ue1.ausf.certC 
procedure isPat6(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2,flagPart3,flagPart4: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     flagPart3 := false;
     flagPart4 := false;
     if(msg.msgType = concat) then
        isPat1(msgs[msg.concatPart[1]],flagPart1);
        isPat1(msgs[msg.concatPart[2]],flagPart2);
        isPat1(msgs[msg.concatPart[3]],flagPart3);
        isPat1(msgs[msg.concatPart[4]],flagPart4);
       if (flagPart1 & flagPart2 & flagPart3 & flagPart4) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---spat6: start.ue1.ausf.certC 
procedure constructSpat6(start:NonceType; ue1:NonceType; ausf:NonceType; certC:NonceType; Var num: indexType);
  Var i,index, i1, i2, i3, i4:indexType;
  begin
    index:=0;
    constructSpat1(start, i1);
    constructSpat1(ue1, i2);
    constructSpat1(ausf, i3);
    constructSpat1(certC, i4);
    i := 1;
    while(i<= msg_end) do
      if (msgs[i].msgType = concat & msgs[i].length = 4) then
        if (msgs[i].concatPart[1] = i1 & msgs[i].concatPart[2] = i2 & msgs[i].concatPart[3] = i3 & msgs[i].concatPart[4] = i4) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := concat;
      msgs[index].concatPart[1] := i1;
      msgs[index].concatPart[2] := i2;
      msgs[index].concatPart[3] := i3;
      msgs[index].concatPart[4] := i4;
      msgs[index].length := 4;
    endif;
    sPat6Set.length := sPat6Set.length + 1;
    sPat6Set.content[sPat6Set.length] := index;
    num := index;
  end;

---pat7: sign(start.ue1.ausf.certC,sk(A)) 
procedure lookAddPat7(start:NonceType; ue1:NonceType; ausf:NonceType; certC:NonceType; ASk:AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat6(start, ue1, ausf, certC,msg1,i1);
   lookAddPat3(ASk,msg2,i2);
   for i : indexType do
     if (msgs[i].msgType = sign) then
       if (msgs[i].signMsg = i1 & msgs[i].signKey = i2) then
          index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := sign;
     msgs[index].signMsg := i1; 
     msgs[index].signKey := i2;     
          msgs[index].length := 1;
   endif;
   num:=index;
   msg:=msgs[index];
  end;

---pat7: sign(start.ue1.ausf.certC,sk(A)) 
procedure isPat7(msg:Message; Var flag:boolean);
  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1 := false;
    flagPart2 := false;
    if (msg.msgType = sign) then
      isPat6(msgs[msg.signMsg],flagPart1);
      isPat3(msgs[msg.signKey],flagPart2);
      if (flagPart1 & flagPart2) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;

---spat7: sign(start.ue1.ausf.certC,sk(A)) 
procedure constructSpat7(start:NonceType; ue1:NonceType; ausf:NonceType; certC:NonceType; ASk:AgentType; Var num: indexType);
  Var i,index,i1,i2:indexType;
  begin
    index:=0;
    constructSpat6(start, ue1, ausf, certC, i1);
    constructSpat3(ASk, i2);
    i := 1;
    while(i <= msg_end) do
      if (msgs[i].msgType = sign) then
        if (msgs[i].signMsg = i1 & msgs[i].signKey = i2) then
           index:=i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := sign;
      msgs[index].signMsg := i1; 
      msgs[index].signKey := i2; 
      msgs[index].length := 1;
    endif;
    sPat7Set.length := sPat7Set.length + 1;
    sPat7Set.content[sPat7Set.length] := index;
    num := index;
  end;

---pat8: ue1.ausf.prekey 
procedure lookAddPat8(ue1:NonceType; ausf:NonceType; prekey:NonceType; Var msg:Message; Var num : indexType);
  Var msg1,msg2,msg3: Message;
     index,i1,i2,i3:indexType;
  begin
   index:=0;
   lookAddPat1(ue1, msg1, i1);
   lookAddPat1(ausf, msg2, i2);
   lookAddPat1(prekey, msg3, i3);
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length=3) then
       if (msgs[i].concatPart[1]=i1 & msgs[i].concatPart[2]=i2 & msgs[i].concatPart[3]=i3) then
          index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := concat;
     msgs[index].concatPart[1]:=i1;
     msgs[index].concatPart[2]:=i2;
     msgs[index].concatPart[3]:=i3; 
     msgs[index].length := 3;
   endif;
   num:=index;
   msg:=msgs[index];
  end;

---pat8: ue1.ausf.prekey 
procedure isPat8(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2,flagPart3: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     flagPart3 := false;
     if(msg.msgType = concat) then
        isPat1(msgs[msg.concatPart[1]],flagPart1);
        isPat1(msgs[msg.concatPart[2]],flagPart2);
        isPat1(msgs[msg.concatPart[3]],flagPart3);
       if (flagPart1 & flagPart2 & flagPart3) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---spat8: ue1.ausf.prekey 
procedure constructSpat8(ue1:NonceType; ausf:NonceType; prekey:NonceType; Var num: indexType);
  Var i,index, i1, i2, i3:indexType;
  begin
    index:=0;
    constructSpat1(ue1, i1);
    constructSpat1(ausf, i2);
    constructSpat1(prekey, i3);
    i := 1;
    while(i<= msg_end) do
      if (msgs[i].msgType = concat & msgs[i].length = 3) then
        if (msgs[i].concatPart[1] = i1 & msgs[i].concatPart[2] = i2 & msgs[i].concatPart[3] = i3) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := concat;
      msgs[index].concatPart[1] := i1;
      msgs[index].concatPart[2] := i2;
      msgs[index].concatPart[3] := i3;
      msgs[index].length := 3;
    endif;
    sPat8Set.length := sPat8Set.length + 1;
    sPat8Set.content[sPat8Set.length] := index;
    num := index;
  end;

---pat9: hash(ue1.ausf.prekey) 
procedure lookAddPat9(ue1:NonceType; ausf:NonceType; prekey:NonceType; Var msg:Message; Var num : indexType);
  Var msg1: Message;
      index,i1:indexType;
  begin
   index:=0;
   lookAddPat8(ue1, ausf, prekey,msg1,i1);
   for i : indexType do
     if (msgs[i].msgType = hash) then
       if (msgs[i].hashMsg = i1) then
          index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := hash;
     msgs[index].hashMsg := i1; 
     msgs[index].length := 1;
   endif;
   num:=index;
   msg:=msgs[index];
  end;

---pat9: hash(ue1.ausf.prekey) 
procedure isPat9(msg:Message; Var flag:boolean);
  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1 := false;
    if (msg.msgType = hash) then
      isPat8(msgs[msg.hashMsg],flagPart1);
      if (flagPart1) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;

---spat9: hash(ue1.ausf.prekey) 
procedure constructSpat9(ue1:NonceType; ausf:NonceType; prekey:NonceType; Var num: indexType);
  Var i,index,i1:indexType;
  begin
    index:=0;
    constructSpat8(ue1, ausf, prekey, i1);
    i := 1;
    while(i <= msg_end) do
      if (msgs[i].msgType = hash) then
        if (msgs[i].hashMsg = i1) then
           index:=i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := hash;
      msgs[index].hashMsg := i1; 
      msgs[index].length := 1;
    endif;
    sPat9Set.length := sPat9Set.length + 1;
    sPat9Set.content[sPat9Set.length] := index;
    num := index;
  end;

---pat10: senc{start.ue1.ausf.certC}hash(ue1.ausf.prekey) 
procedure lookAddPat10(start:NonceType; ue1:NonceType; ausf:NonceType; certC:NonceType; prekey:NonceType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat6(start, ue1, ausf, certC,msg1,i1);
   lookAddPat9(ue1, ausf, prekey,msg2,i2);
   for i : indexType do
     if (msgs[i].msgType = senc) then
       if (msgs[i].sencMsg = i1 & msgs[i].sencKey = i2) then
          index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := senc;
     msgs[index].sencMsg := i1; 
     msgs[index].sencKey := i2; 
    msgs[i2].k.encType := MsgK;
     msgs[i2].k.m := i2;

     msgs[index].length := 1;
   endif;
   num:=index;
   msg:=msgs[index];
  end;

---pat10: senc{start.ue1.ausf.certC}hash(ue1.ausf.prekey) 
procedure isPat10(msg:Message; Var flag:boolean);
  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1:=false;
    flagPart2:=false;
    if msg.msgType = senc then
      isPat6(msgs[msg.sencMsg],flagPart1);
      isPat9(msgs[msg.sencKey],flagPart2);
      if flagPart1 & flagPart2 then
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;

---spat10: senc{start.ue1.ausf.certC}hash(ue1.ausf.prekey) 
procedure constructSpat10(start:NonceType; ue1:NonceType; ausf:NonceType; certC:NonceType; prekey:NonceType; Var num: indexType);
  Var i,index,i1,i2:indexType;
  begin
    index:=0;
    constructSpat6(start, ue1, ausf, certC, i1);
    constructSpat9(ue1, ausf, prekey, i2);
    i := 1;
    while(i <= msg_end) do
      if (msgs[i].msgType = senc) then
        if (msgs[i].sencMsg = i1 & msgs[i].sencKey = i2) then
           index:=i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := senc;
      msgs[index].sencMsg := i1; 
      msgs[index].sencKey := i2; 
      msgs[index].length := 1;
    endif;
    sPat10Set.length := sPat10Set.length + 1;
    sPat10Set.content[sPat10Set.length] := index;
    num := index;
  end;

---pat11: aenc{prekey}pk(C).certA.sign(start.ue1.ausf.certC,sk(A)).senc{start.ue1.ausf.certC}hash(ue1.ausf.prekey) 
procedure lookAddPat11(prekey:NonceType; CPk:AgentType; certA:NonceType; start:NonceType; ue1:NonceType; ausf:NonceType; certC:NonceType; ASk:AgentType; Var msg:Message; Var num : indexType);
  Var msg1,msg2,msg3,msg4: Message;
     index,i1,i2,i3,i4:indexType;
  begin
   index:=0;
   lookAddPat5(prekey, CPk, msg1, i1);
   lookAddPat1(certA, msg2, i2);
   lookAddPat7(start, ue1, ausf, certC, ASk, msg3, i3);
   lookAddPat10(start, ue1, ausf, certC, prekey, msg4, i4);
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length=4) then
       if (msgs[i].concatPart[1]=i1 & msgs[i].concatPart[2]=i2 & msgs[i].concatPart[3]=i3 & msgs[i].concatPart[4]=i4) then
          index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := concat;
     msgs[index].concatPart[1]:=i1;
     msgs[index].concatPart[2]:=i2;
     msgs[index].concatPart[3]:=i3;
     msgs[index].concatPart[4]:=i4; 
     msgs[index].length := 4;
   endif;
   num:=index;
   msg:=msgs[index];
  end;

---pat11: aenc{prekey}pk(C).certA.sign(start.ue1.ausf.certC,sk(A)).senc{start.ue1.ausf.certC}hash(ue1.ausf.prekey) 
procedure isPat11(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2,flagPart3,flagPart4: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     flagPart3 := false;
     flagPart4 := false;
     if(msg.msgType = concat) then
        isPat5(msgs[msg.concatPart[1]],flagPart1);
        isPat1(msgs[msg.concatPart[2]],flagPart2);
        isPat7(msgs[msg.concatPart[3]],flagPart3);
        isPat10(msgs[msg.concatPart[4]],flagPart4);
       if (flagPart1 & flagPart2 & flagPart3 & flagPart4) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---spat11: aenc{prekey}pk(C).certA.sign(start.ue1.ausf.certC,sk(A)).senc{start.ue1.ausf.certC}hash(ue1.ausf.prekey) 
procedure constructSpat11(prekey:NonceType; CPk:AgentType; certA:NonceType; start:NonceType; ue1:NonceType; ausf:NonceType; certC:NonceType; ASk:AgentType; Var num: indexType);
  Var i,index, i1, i2, i3, i4:indexType;
  begin
    index:=0;
    constructSpat5(prekey, CPk, i1);
    constructSpat1(certA, i2);
    constructSpat7(start, ue1, ausf, certC, ASk, i3);
    constructSpat10(start, ue1, ausf, certC, prekey, i4);
    i := 1;
    while(i<= msg_end) do
      if (msgs[i].msgType = concat & msgs[i].length = 4) then
        if (msgs[i].concatPart[1] = i1 & msgs[i].concatPart[2] = i2 & msgs[i].concatPart[3] = i3 & msgs[i].concatPart[4] = i4) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := concat;
      msgs[index].concatPart[1] := i1;
      msgs[index].concatPart[2] := i2;
      msgs[index].concatPart[3] := i3;
      msgs[index].concatPart[4] := i4;
      msgs[index].length := 4;
    endif;
    sPat11Set.length := sPat11Set.length + 1;
    sPat11Set.content[sPat11Set.length] := index;
    num := index;
  end;

---pat12: x10 
procedure lookAddPat12(x10:Message; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
    get_msgNo(msgs[x10.tmpPart],index); 
    num:=index;
    msg:=msgs[index];
  end;

---pat12: x10 
procedure isPat12(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag := true;
  end;

---spat12: x10 
procedure constructSpat12(x10:Message; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = tmp) then
        if (msgs[i].tmpPart = x10.tmpPart) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := tmp;
      msgs[index].tmpPart := x10.tmpPart;
      msgs[index].length := 1;
    endif;
    sPat12Set.length := sPat12Set.length + 1;
    sPat12Set.content[sPat12Set.length] := index;
    num := index;
  end;

---pat13: x1 
procedure lookAddPat13(x1:Message; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
    get_msgNo(msgs[x1.tmpPart],index); 
    num:=index;
    msg:=msgs[index];
  end;

---pat13: x1 
procedure isPat13(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag := true;
  end;

---spat13: x1 
procedure constructSpat13(x1:Message; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = tmp) then
        if (msgs[i].tmpPart = x1.tmpPart) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := tmp;
      msgs[index].tmpPart := x1.tmpPart;
      msgs[index].length := 1;
    endif;
    sPat13Set.length := sPat13Set.length + 1;
    sPat13Set.content[sPat13Set.length] := index;
    num := index;
  end;

---pat14: x1.seafn 
procedure lookAddPat14(x1:Message; seafn:NonceType; Var msg:Message; Var num : indexType);
  Var msg1,msg2: Message;
     index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat13(x1, msg1, i1);
   lookAddPat1(seafn, msg2, i2);
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length=2) then
       if (msgs[i].concatPart[1]=i1 & msgs[i].concatPart[2]=i2) then
          index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := concat;
     msgs[index].concatPart[1]:=i1;
     msgs[index].concatPart[2]:=i2; 
     msgs[index].length := 2;
   endif;
   num:=index;
   msg:=msgs[index];
  end;

---pat14: x1.seafn 
procedure isPat14(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     if(msg.msgType = concat) then
        isPat13(msgs[msg.concatPart[1]],flagPart1);
        isPat1(msgs[msg.concatPart[2]],flagPart2);
       if (flagPart1 & flagPart2) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---spat14: x1.seafn 
procedure constructSpat14(x1:Message; seafn:NonceType; Var num: indexType);
  Var i,index, i1, i2:indexType;
  begin
    index:=0;
    constructSpat13(x1, i1);
    constructSpat1(seafn, i2);
    i := 1;
    while(i<= msg_end) do
      if (msgs[i].msgType = concat & msgs[i].length = 2) then
        if (msgs[i].concatPart[1] = i1 & msgs[i].concatPart[2] = i2) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := concat;
      msgs[index].concatPart[1] := i1;
      msgs[index].concatPart[2] := i2;
      msgs[index].length := 2;
    endif;
    sPat14Set.length := sPat14Set.length + 1;
    sPat14Set.content[sPat14Set.length] := index;
    num := index;
  end;

---pat15: x2 
procedure lookAddPat15(x2:Message; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
    get_msgNo(msgs[x2.tmpPart],index); 
    num:=index;
    msg:=msgs[index];
  end;

---pat15: x2 
procedure isPat15(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag := true;
  end;

---spat15: x2 
procedure constructSpat15(x2:Message; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = tmp) then
        if (msgs[i].tmpPart = x2.tmpPart) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := tmp;
      msgs[index].tmpPart := x2.tmpPart;
      msgs[index].length := 1;
    endif;
    sPat15Set.length := sPat15Set.length + 1;
    sPat15Set.content[sPat15Set.length] := index;
    num := index;
  end;

---pat16: x3 
procedure lookAddPat16(x3:Message; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
    get_msgNo(msgs[x3.tmpPart],index); 
    num:=index;
    msg:=msgs[index];
  end;

---pat16: x3 
procedure isPat16(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag := true;
  end;

---spat16: x3 
procedure constructSpat16(x3:Message; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = tmp) then
        if (msgs[i].tmpPart = x3.tmpPart) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := tmp;
      msgs[index].tmpPart := x3.tmpPart;
      msgs[index].length := 1;
    endif;
    sPat16Set.length := sPat16Set.length + 1;
    sPat16Set.content[sPat16Set.length] := index;
    num := index;
  end;

---pat17: x4 
procedure lookAddPat17(x4:Message; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
    get_msgNo(msgs[x4.tmpPart],index); 
    num:=index;
    msg:=msgs[index];
  end;

---pat17: x4 
procedure isPat17(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag := true;
  end;

---spat17: x4 
procedure constructSpat17(x4:Message; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = tmp) then
        if (msgs[i].tmpPart = x4.tmpPart) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := tmp;
      msgs[index].tmpPart := x4.tmpPart;
      msgs[index].length := 1;
    endif;
    sPat17Set.length := sPat17Set.length + 1;
    sPat17Set.content[sPat17Set.length] := index;
    num := index;
  end;

---pat18: x5 
procedure lookAddPat18(x5:Message; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
    get_msgNo(msgs[x5.tmpPart],index); 
    num:=index;
    msg:=msgs[index];
  end;

---pat18: x5 
procedure isPat18(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag := true;
  end;

---spat18: x5 
procedure constructSpat18(x5:Message; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = tmp) then
        if (msgs[i].tmpPart = x5.tmpPart) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := tmp;
      msgs[index].tmpPart := x5.tmpPart;
      msgs[index].length := 1;
    endif;
    sPat18Set.length := sPat18Set.length + 1;
    sPat18Set.content[sPat18Set.length] := index;
    num := index;
  end;

---pat19: x4.x5 
procedure lookAddPat19(x4:Message; x5:Message; Var msg:Message; Var num : indexType);
  Var msg1,msg2: Message;
     index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat17(x4, msg1, i1);
   lookAddPat18(x5, msg2, i2);
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length=2) then
       if (msgs[i].concatPart[1]=i1 & msgs[i].concatPart[2]=i2) then
          index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := concat;
     msgs[index].concatPart[1]:=i1;
     msgs[index].concatPart[2]:=i2; 
     msgs[index].length := 2;
   endif;
   num:=index;
   msg:=msgs[index];
  end;

---pat19: x4.x5 
procedure isPat19(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     if(msg.msgType = concat) then
        isPat17(msgs[msg.concatPart[1]],flagPart1);
        isPat18(msgs[msg.concatPart[2]],flagPart2);
       if (flagPart1 & flagPart2) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---spat19: x4.x5 
procedure constructSpat19(x4:Message; x5:Message; Var num: indexType);
  Var i,index, i1, i2:indexType;
  begin
    index:=0;
    constructSpat17(x4, i1);
    constructSpat18(x5, i2);
    i := 1;
    while(i<= msg_end) do
      if (msgs[i].msgType = concat & msgs[i].length = 2) then
        if (msgs[i].concatPart[1] = i1 & msgs[i].concatPart[2] = i2) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := concat;
      msgs[index].concatPart[1] := i1;
      msgs[index].concatPart[2] := i2;
      msgs[index].length := 2;
    endif;
    sPat19Set.length := sPat19Set.length + 1;
    sPat19Set.content[sPat19Set.length] := index;
    num := index;
  end;

---pat20: x6 
procedure lookAddPat20(x6:Message; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
    get_msgNo(msgs[x6.tmpPart],index); 
    num:=index;
    msg:=msgs[index];
  end;

---pat20: x6 
procedure isPat20(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag := true;
  end;

---spat20: x6 
procedure constructSpat20(x6:Message; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = tmp) then
        if (msgs[i].tmpPart = x6.tmpPart) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := tmp;
      msgs[index].tmpPart := x6.tmpPart;
      msgs[index].length := 1;
    endif;
    sPat20Set.length := sPat20Set.length + 1;
    sPat20Set.content[sPat20Set.length] := index;
    num := index;
  end;

---pat21: x7 
procedure lookAddPat21(x7:Message; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
    get_msgNo(msgs[x7.tmpPart],index); 
    num:=index;
    msg:=msgs[index];
  end;

---pat21: x7 
procedure isPat21(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag := true;
  end;

---spat21: x7 
procedure constructSpat21(x7:Message; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = tmp) then
        if (msgs[i].tmpPart = x7.tmpPart) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := tmp;
      msgs[index].tmpPart := x7.tmpPart;
      msgs[index].length := 1;
    endif;
    sPat21Set.length := sPat21Set.length + 1;
    sPat21Set.content[sPat21Set.length] := index;
    num := index;
  end;

---pat22: x8 
procedure lookAddPat22(x8:Message; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
    get_msgNo(msgs[x8.tmpPart],index); 
    num:=index;
    msg:=msgs[index];
  end;

---pat22: x8 
procedure isPat22(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag := true;
  end;

---spat22: x8 
procedure constructSpat22(x8:Message; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = tmp) then
        if (msgs[i].tmpPart = x8.tmpPart) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := tmp;
      msgs[index].tmpPart := x8.tmpPart;
      msgs[index].length := 1;
    endif;
    sPat22Set.length := sPat22Set.length + 1;
    sPat22Set.content[sPat22Set.length] := index;
    num := index;
  end;

---pat23: x9 
procedure lookAddPat23(x9:Message; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
    get_msgNo(msgs[x9.tmpPart],index); 
    num:=index;
    msg:=msgs[index];
  end;

---pat23: x9 
procedure isPat23(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag := true;
  end;

---spat23: x9 
procedure constructSpat23(x9:Message; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = tmp) then
        if (msgs[i].tmpPart = x9.tmpPart) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := tmp;
      msgs[index].tmpPart := x9.tmpPart;
      msgs[index].length := 1;
    endif;
    sPat23Set.length := sPat23Set.length + 1;
    sPat23Set.content[sPat23Set.length] := index;
    num := index;
  end;

---pat24: x6.x7.x8.x9 
procedure lookAddPat24(x6:Message; x7:Message; x8:Message; x9:Message; Var msg:Message; Var num : indexType);
  Var msg1,msg2,msg3,msg4: Message;
     index,i1,i2,i3,i4:indexType;
  begin
   index:=0;
   lookAddPat20(x6, msg1, i1);
   lookAddPat21(x7, msg2, i2);
   lookAddPat22(x8, msg3, i3);
   lookAddPat23(x9, msg4, i4);
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length=4) then
       if (msgs[i].concatPart[1]=i1 & msgs[i].concatPart[2]=i2 & msgs[i].concatPart[3]=i3 & msgs[i].concatPart[4]=i4) then
          index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := concat;
     msgs[index].concatPart[1]:=i1;
     msgs[index].concatPart[2]:=i2;
     msgs[index].concatPart[3]:=i3;
     msgs[index].concatPart[4]:=i4; 
     msgs[index].length := 4;
   endif;
   num:=index;
   msg:=msgs[index];
  end;

---pat24: x6.x7.x8.x9 
procedure isPat24(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2,flagPart3,flagPart4: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     flagPart3 := false;
     flagPart4 := false;
     if(msg.msgType = concat) then
        isPat20(msgs[msg.concatPart[1]],flagPart1);
        isPat21(msgs[msg.concatPart[2]],flagPart2);
        isPat22(msgs[msg.concatPart[3]],flagPart3);
        isPat23(msgs[msg.concatPart[4]],flagPart4);
       if (flagPart1 & flagPart2 & flagPart3 & flagPart4) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---spat24: x6.x7.x8.x9 
procedure constructSpat24(x6:Message; x7:Message; x8:Message; x9:Message; Var num: indexType);
  Var i,index, i1, i2, i3, i4:indexType;
  begin
    index:=0;
    constructSpat20(x6, i1);
    constructSpat21(x7, i2);
    constructSpat22(x8, i3);
    constructSpat23(x9, i4);
    i := 1;
    while(i<= msg_end) do
      if (msgs[i].msgType = concat & msgs[i].length = 4) then
        if (msgs[i].concatPart[1] = i1 & msgs[i].concatPart[2] = i2 & msgs[i].concatPart[3] = i3 & msgs[i].concatPart[4] = i4) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := concat;
      msgs[index].concatPart[1] := i1;
      msgs[index].concatPart[2] := i2;
      msgs[index].concatPart[3] := i3;
      msgs[index].concatPart[4] := i4;
      msgs[index].length := 4;
    endif;
    sPat24Set.length := sPat24Set.length + 1;
    sPat24Set.content[sPat24Set.length] := index;
    num := index;
  end;

procedure cons1(supi:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat1(supi,msg,num);
  end;
procedure destruct1(msg:Message; Var supi:NonceType);
  begin
    supi:=msg.noncePart;
  end;
procedure cons2(supi:NonceType; ue:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat2(supi, ue,msg,num);
  end;
procedure destruct2(msg:Message; Var supi:NonceType; Var ue:NonceType);
  Var msgNum1,msgNum2: Message;
      k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    supi := msgNum1.noncePart;
    msgNum2 := msgs[msg.concatPart[2]];
    ue := msgNum2.noncePart
  end;
procedure cons3(DPk:AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat3(DPk,msg,num);
  end;
procedure cons4(supi:NonceType; ue:NonceType; DPk:AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat4(supi, ue, DPk,msg,num);
  end;
procedure destruct4(msg:Message; Var supi:NonceType; Var ue:NonceType; Var DPk:AgentType);
  var k1:KeyType;
      aencMsg:Message;
      begin
    clear aencMsg;
    k1:=msgs[msg.aencKey].k;
    DPk := k1.ag;
    aencMsg:=msgs[msg.aencMsg];
    destruct2(aencMsg,supi, ue);
  end;
procedure cons5(prekey:NonceType; CPk:AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat5(prekey, CPk,msg,num);
  end;
procedure destruct5(msg:Message; Var prekey:NonceType; Var CPk:AgentType);
  var k1:KeyType;
  var msgKey:Message;
      msg1:Message;
   begin
    clear msg1;
    msgKey := msgs[msg.aencKey];
    k1 := msgs[msg.aencKey].k;
    CPk := k1.ag;
    msg1:=msgs[msg.aencMsg];
    prekey:=msg1.noncePart;
   end;
procedure cons6(start:NonceType; ue1:NonceType; ausf:NonceType; certC:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat6(start, ue1, ausf, certC,msg,num);
  end;
procedure destruct6(msg:Message; Var start:NonceType; Var ue1:NonceType; Var ausf:NonceType; Var certC:NonceType);
  Var msgNum1,msgNum2,msgNum3,msgNum4: Message;
      k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    start := msgNum1.noncePart;
    msgNum2 := msgs[msg.concatPart[2]];
    ue1 := msgNum2.noncePart;
    msgNum3 := msgs[msg.concatPart[3]];
    ausf := msgNum3.noncePart;
    msgNum4 := msgs[msg.concatPart[4]];
    certC := msgNum4.noncePart
  end;
procedure cons7(start:NonceType; ue1:NonceType; ausf:NonceType; certC:NonceType; ASk:AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat7(start, ue1, ausf, certC, ASk,msg,num);
  end;
procedure destruct7(msg:Message; Var start:NonceType; Var ue1:NonceType; Var ausf:NonceType; Var certC:NonceType; Var ASk:AgentType);
  var k1:KeyType;
      signMsg:Message;
      begin
    clear signMsg;
    k1:=msgs[msg.signKey].k;
    ASk := k1.ag;
    signMsg:=msgs[msg.signMsg];
    destruct6(signMsg,start, ue1, ausf, certC);
  end;
procedure cons8(ue1:NonceType; ausf:NonceType; prekey:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat8(ue1, ausf, prekey,msg,num);
  end;
procedure destruct8(msg:Message; Var ue1:NonceType; Var ausf:NonceType; Var prekey:NonceType);
  Var msgNum1,msgNum2,msgNum3: Message;
      k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    ue1 := msgNum1.noncePart;
    msgNum2 := msgs[msg.concatPart[2]];
    ausf := msgNum2.noncePart;
    msgNum3 := msgs[msg.concatPart[3]];
    prekey := msgNum3.noncePart
  end;
procedure cons9(ue1:NonceType; ausf:NonceType; prekey:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat9(ue1, ausf, prekey,msg,num);
  end;
procedure cons10(start:NonceType; ue1:NonceType; ausf:NonceType; certC:NonceType; prekey:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat10(start, ue1, ausf, certC, prekey,msg,num);
  end;
procedure cons11(prekey:NonceType; CPk:AgentType; certA:NonceType; start:NonceType; ue1:NonceType; ausf:NonceType; certC:NonceType; ASk:AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat11(prekey, CPk, certA, start, ue1, ausf, certC, ASk,msg,num);
  end;
procedure destruct11(msg:Message; Var prekey:NonceType; Var CPk:AgentType; Var certA:NonceType; Var start:NonceType; Var ue1:NonceType; Var ausf:NonceType; Var certC:NonceType; Var ASk:AgentType);
  Var msgNum1,msgNum2,msgNum3,msgNum4: Message;
      k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    destruct5(msgNum1,prekey, CPk);
    msgNum2 := msgs[msg.concatPart[2]];
    certA := msgNum2.noncePart;
;

  end;
procedure cons12(x10:Message; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat12(x10,msg,num);
  end;
procedure destruct12(msg:Message; Var x10:Message);
  var msgNo:indexType;
  begin
    get_msgNo(msg,msgNo);
    x10:=msg;
    x10.tmpPart:=msgNo;
  end;
procedure cons13(x1:Message; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat13(x1,msg,num);
  end;
procedure destruct13(msg:Message; Var x1:Message);
  var msgNo:indexType;
  begin
    get_msgNo(msg,msgNo);
    x1:=msg;
    x1.tmpPart:=msgNo;
  end;
procedure cons14(x1:Message; seafn:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat14(x1, seafn,msg,num);
  end;
procedure destruct14(msg:Message; Var x1:Message; Var seafn:NonceType);
  Var msgNum1,msgNum2: Message;
      k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    x1.msgType := tmp;
    x1.tmpPart := msg.concatPart[1];
    msgNum2 := msgs[msg.concatPart[2]];
    seafn := msgNum2.noncePart
  end;
procedure cons15(x2:Message; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat15(x2,msg,num);
  end;
procedure destruct15(msg:Message; Var x2:Message);
  var msgNo:indexType;
  begin
    get_msgNo(msg,msgNo);
    x2:=msg;
    x2.tmpPart:=msgNo;
  end;
procedure cons16(x3:Message; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat16(x3,msg,num);
  end;
procedure destruct16(msg:Message; Var x3:Message);
  var msgNo:indexType;
  begin
    get_msgNo(msg,msgNo);
    x3:=msg;
    x3.tmpPart:=msgNo;
  end;
procedure cons17(x4:Message; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat17(x4,msg,num);
  end;
procedure destruct17(msg:Message; Var x4:Message);
  var msgNo:indexType;
  begin
    get_msgNo(msg,msgNo);
    x4:=msg;
    x4.tmpPart:=msgNo;
  end;
procedure cons18(x5:Message; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat18(x5,msg,num);
  end;
procedure destruct18(msg:Message; Var x5:Message);
  var msgNo:indexType;
  begin
    get_msgNo(msg,msgNo);
    x5:=msg;
    x5.tmpPart:=msgNo;
  end;
procedure cons19(x4:Message; x5:Message; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat19(x4, x5,msg,num);
  end;
procedure destruct19(msg:Message; Var x4:Message; Var x5:Message);
  Var msgNum1,msgNum2: Message;
      k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    x4.msgType := tmp;
    x4.tmpPart := msg.concatPart[1];
    msgNum2 := msgs[msg.concatPart[2]];
    x5.msgType := tmp;
    x5.tmpPart := msg.concatPart[2]
  end;
procedure cons20(x6:Message; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat20(x6,msg,num);
  end;
procedure destruct20(msg:Message; Var x6:Message);
  var msgNo:indexType;
  begin
    get_msgNo(msg,msgNo);
    x6:=msg;
    x6.tmpPart:=msgNo;
  end;
procedure cons21(x7:Message; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat21(x7,msg,num);
  end;
procedure destruct21(msg:Message; Var x7:Message);
  var msgNo:indexType;
  begin
    get_msgNo(msg,msgNo);
    x7:=msg;
    x7.tmpPart:=msgNo;
  end;
procedure cons22(x8:Message; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat22(x8,msg,num);
  end;
procedure destruct22(msg:Message; Var x8:Message);
  var msgNo:indexType;
  begin
    get_msgNo(msg,msgNo);
    x8:=msg;
    x8.tmpPart:=msgNo;
  end;
procedure cons23(x9:Message; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat23(x9,msg,num);
  end;
procedure destruct23(msg:Message; Var x9:Message);
  var msgNo:indexType;
  begin
    get_msgNo(msg,msgNo);
    x9:=msg;
    x9.tmpPart:=msgNo;
  end;
procedure cons24(x6:Message; x7:Message; x8:Message; x9:Message; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat24(x6, x7, x8, x9,msg,num);
  end;
procedure destruct24(msg:Message; Var x6:Message; Var x7:Message; Var x8:Message; Var x9:Message);
  Var msgNum1,msgNum2,msgNum3,msgNum4: Message;
      k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    x6.msgType := tmp;
    x6.tmpPart := msg.concatPart[1];
    msgNum2 := msgs[msg.concatPart[2]];
    x7.msgType := tmp;
    x7.tmpPart := msg.concatPart[2];
    msgNum3 := msgs[msg.concatPart[3]];
    x8.msgType := tmp;
    x8.tmpPart := msg.concatPart[3];
    msgNum4 := msgs[msg.concatPart[4]];
    x9.msgType := tmp;
    x9.tmpPart := msg.concatPart[4]
  end;
function exist(PatnSet:msgSet; msgNo:indexType):boolean;
  var flag:boolean;
  begin
    flag := false;
    for i:msgLen do
      if (msgNo != 0 & PatnSet.content[i] = msgNo) then 
        flag := true;
      endif;
    endfor;
    return flag;
  end;
function matchAgent(locAg: AgentType; Var Ag: AgentType):boolean;  ---if ag equals to locAg which was derived from recieving msg, or anyAgent, then true
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
  end;

function matchTmp(locm:Message;Var m:Message):boolean; ---if m equals to locm which was derived from recieving msg, or tmp, then true
  var flag : boolean;
  var index1,index2 :indexType;
  begin 
    flag := false;
    get_msgNo(m,index2);
    get_msgNo(locm,index1);
    if (m.msgType = tmp) then 
      if (m.tmpPart =0) then 
        flag := true;
        m:=locm;
      elsif ( index1 = index2) then 
        flag := true;
      endif;
    else 
      flag := false;
    endif;
     return flag;
  end;

function matchNonce(locNa: NonceType; Var Na: NonceType):boolean;  ---if Na equals to locNa which was derived from recieving msg, or anyNonce, then true
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
  end;

function matchNumber(locNm: ConstType; Var Nm: ConstType):boolean;  ---if Nm equals to locNm which was derived from recieving msg, or anyNumber, then true
  var flag : boolean;
  begin
    flag := false;
    if (Nm = anyNumber) then
      flag := true;
      Nm := locNm;
    elsif locNm = Nm then 
      flag := true;
    else
      flag := false;
    endif;
    return flag;
  end;

function match(m1:Message; var m2:Message):boolean;
  var concatFlag: boolean;
      i,msgNo: indexType;
  begin 
    if m1.msgType = tmp then  
      return true;
    elsif m1.msgType = agent & m2.msgType = agent then
	    return matchAgent(m1.ag,m2.ag); ---ag and noncePart should be initiallized as anyAgent or anyNonce (m1.ag != anyAgent & m2.ag != anyAgent &)
    elsif m1.msgType = nonce & m2.msgType = nonce then
	    return matchNonce(m1.noncePart,m2.noncePart); --- m1.noncePart != anyNonce & m2.noncePart != anyNonce &
    elsif m1.msgType = number & m2.msgType = number then 
      return matchNumber(m1.constPart,m2.constPart);
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
	    return true;
      --match(msgs[m1.sencMsg], msgs[m2.sencMsg]) & match(msgs[m1.sencKey], msgs[m2.sencKey]);
    elsif (m1.msgType = mod & m2.msgType = mod) then 
      return match(msgs[m1.modMsg1],msgs[m2.modMsg1]) & match(msgs[m1.modMsg2],msgs[m2.modMsg2]);
    elsif (m1.msgType = e & m2.msgType = e) then 
      return match(msgs[m1.expMsg1],msgs[m2.expMsg1]) & match(msgs[m1.expMsg2],msgs[m2.expMsg2]);
    elsif (m1.msgType = concat & m2.msgType = concat) & (m1.length = m2.length)  then
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
  end;

function matchPat(m1:Message; sPatnSet: msgSet):boolean;
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
  end;

ruleset i:roleANums do
rule " roleA1 "
roleA[i].st = A1 & ch[1].empty = true & !roleA[i].commit 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons4(roleA[i].supi,roleA[i].ue,roleA[i].D,msg,msgNo);
   ch[1].empty := false;
   ch[1].msg := msg;
   ch[1].sender := roleA[i].A;
   ch[1].receiver := Intruder;
   roleA[i].st := A2;
   put "roleA[i] in st1\n";
end;
rule " roleA2 "
roleA[i].st = A2 & ch[6].empty = false & !roleA[i].commit & judge(ch[6].msg,roleA[i].A) 
==>
var flag_pat1:boolean;
    msg:Message;
begin
   clear msg;
   msg := ch[6].msg;
   isPat1(msg, flag_pat1);
   if(flag_pat1) then
     destruct1(msg,roleA[i].locstart);
     if(matchNonce(roleA[i].locstart, roleA[i].start))then
       ch[6].empty:=true;
       clear ch[6].msg;
       roleA[i].st := A3;
     endif;
   endif;
   put "roleA[i] in st2\n";
end;
rule " roleA3 "
roleA[i].st = A3 & ch[7].empty = true & !roleA[i].commit 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons1(roleA[i].ue1,msg,msgNo);
   ch[7].empty := false;
   ch[7].msg := msg;
   ch[7].sender := roleA[i].A;
   ch[7].receiver := Intruder;
   roleA[i].st := A4;
   put "roleA[i] in st3\n";
end;
rule " roleA4 "
roleA[i].st = A4 & ch[10].empty = false & !roleA[i].commit & judge(ch[10].msg,roleA[i].A) 
==>
var flag_pat2:boolean;
    msg:Message;
begin
   clear msg;
   msg := ch[10].msg;
   isPat2(msg, flag_pat2);
   if(flag_pat2) then
     destruct2(msg,roleA[i].locausf,roleA[i].loccertC);
     if(matchNonce(roleA[i].locausf, roleA[i].ausf) & matchNonce(roleA[i].loccertC, roleA[i].certC))then
       ch[10].empty:=true;
       clear ch[10].msg;
       roleA[i].st := A5;
     endif;
   endif;
   put "roleA[i] in st4\n";
end;
rule " roleA5 "
roleA[i].st = A5 & ch[11].empty = true & !roleA[i].commit 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons11(roleA[i].prekey,roleA[i].C,roleA[i].certA,roleA[i].start,roleA[i].ue1,roleA[i].ausf,roleA[i].certC,roleA[i].A,msg,msgNo);
   ch[11].empty := false;
   ch[11].msg := msg;
   ch[11].sender := roleA[i].A;
   ch[11].receiver := Intruder;
   roleA[i].st := A6;
   put "roleA[i] in st5\n";
end;
rule " roleA6 "
roleA[i].st = A6 & ch[14].empty = false & !roleA[i].commit & judge(ch[14].msg,roleA[i].A) 
==>
var flag_pat12:boolean;
    msg:Message;
begin
   clear msg;
   msg := ch[14].msg;
   isPat12(msg, flag_pat12);
   if(flag_pat12) then
     destruct12(msg,roleA[i].locx10);
     if(matchTmp(roleA[i].locx10, roleA[i].x10))then
       ch[14].empty:=true;
       clear ch[14].msg;
       roleA[i].st := A7;
     endif;
   endif;
   put "roleA[i] in st6\n";
end;
rule " roleA7 "
roleA[i].st = A7 & ch[15].empty = true & !roleA[i].commit 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons1(roleA[i].eapm,msg,msgNo);
   ch[15].empty := false;
   ch[15].msg := msg;
   ch[15].sender := roleA[i].A;
   ch[15].receiver := Intruder;
   roleA[i].st := A8;
   put "roleA[i] in st7\n";
end;
rule " roleA8 "
roleA[i].st = A8 & ch[18].empty = false & !roleA[i].commit & judge(ch[18].msg,roleA[i].A) 
==>
var flag_pat1:boolean;
    msg:Message;
begin
   clear msg;
   msg := ch[18].msg;
   isPat1(msg, flag_pat1);
   if(flag_pat1) then
     destruct1(msg,roleA[i].locsucm);
     if(matchNonce(roleA[i].locsucm, roleA[i].sucm))then
       ch[18].empty:=true;
       clear ch[18].msg;
       roleA[i].st := A1;
     endif;
   endif;
   put "roleA[i] in st8\n";
   roleA[i].commit := true;
end;
endruleset;

ruleset i:roleBNums do
rule " roleB1 "
roleB[i].st = B1 & ch[1].empty = false & !roleB[i].commit & judge(ch[1].msg,roleB[i].B) 
==>
var flag_pat13:boolean;
    msg:Message;
begin
   clear msg;
   msg := ch[1].msg;
   isPat13(msg, flag_pat13);
   if(flag_pat13) then
     destruct13(msg,roleB[i].locx1);
     if(matchTmp(roleB[i].locx1, roleB[i].x1))then
       ch[1].empty:=true;
       clear ch[1].msg;
       roleB[i].st := B2;
     endif;
   endif;
   put "roleB[i] in st1\n";
end;
rule " roleB2 "
roleB[i].st = B2 & ch[2].empty = true & !roleB[i].commit 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons14(roleB[i].x1,roleB[i].seafn,msg,msgNo);
   ch[2].empty := false;
   ch[2].msg := msg;
   ch[2].sender := roleB[i].B;
   ch[2].receiver := Intruder;
   roleB[i].st := B3;
   put "roleB[i] in st2\n";
end;
rule " roleB3 "
roleB[i].st = B3 & ch[5].empty = false & !roleB[i].commit & judge(ch[5].msg,roleB[i].B) 
==>
var flag_pat15:boolean;
    msg:Message;
begin
   clear msg;
   msg := ch[5].msg;
   isPat15(msg, flag_pat15);
   if(flag_pat15) then
     destruct15(msg,roleB[i].locx2);
     if(matchTmp(roleB[i].locx2, roleB[i].x2))then
       ch[5].empty:=true;
       clear ch[5].msg;
       roleB[i].st := B4;
     endif;
   endif;
   put "roleB[i] in st3\n";
end;
rule " roleB4 "
roleB[i].st = B4 & ch[6].empty = true & !roleB[i].commit 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons15(roleB[i].x2,msg,msgNo);
   ch[6].empty := false;
   ch[6].msg := msg;
   ch[6].sender := roleB[i].B;
   ch[6].receiver := Intruder;
   roleB[i].st := B5;
   put "roleB[i] in st4\n";
end;
rule " roleB5 "
roleB[i].st = B5 & ch[7].empty = false & !roleB[i].commit & judge(ch[7].msg,roleB[i].B) 
==>
var flag_pat16:boolean;
    msg:Message;
begin
   clear msg;
   msg := ch[7].msg;
   isPat16(msg, flag_pat16);
   if(flag_pat16) then
     destruct16(msg,roleB[i].locx3);
     if(matchTmp(roleB[i].locx3, roleB[i].x3))then
       ch[7].empty:=true;
       clear ch[7].msg;
       roleB[i].st := B6;
     endif;
   endif;
   put "roleB[i] in st5\n";
end;
rule " roleB6 "
roleB[i].st = B6 & ch[8].empty = true & !roleB[i].commit 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons16(roleB[i].x3,msg,msgNo);
   ch[8].empty := false;
   ch[8].msg := msg;
   ch[8].sender := roleB[i].B;
   ch[8].receiver := Intruder;
   roleB[i].st := B7;
   put "roleB[i] in st6\n";
end;
rule " roleB7 "
roleB[i].st = B7 & ch[9].empty = false & !roleB[i].commit & judge(ch[9].msg,roleB[i].B) 
==>
var flag_pat19:boolean;
    msg:Message;
begin
   clear msg;
   msg := ch[9].msg;
   isPat19(msg, flag_pat19);
   if(flag_pat19) then
     destruct19(msg,roleB[i].locx4,roleB[i].locx5);
     if(matchTmp(roleB[i].locx4, roleB[i].x4) & matchTmp(roleB[i].locx5, roleB[i].x5))then
       ch[9].empty:=true;
       clear ch[9].msg;
       roleB[i].st := B8;
     endif;
   endif;
   put "roleB[i] in st7\n";
end;
rule " roleB8 "
roleB[i].st = B8 & ch[10].empty = true & !roleB[i].commit 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons19(roleB[i].x4,roleB[i].x5,msg,msgNo);
   ch[10].empty := false;
   ch[10].msg := msg;
   ch[10].sender := roleB[i].B;
   ch[10].receiver := Intruder;
   roleB[i].st := B9;
   put "roleB[i] in st8\n";
end;
rule " roleB9 "
roleB[i].st = B9 & ch[11].empty = false & !roleB[i].commit & judge(ch[11].msg,roleB[i].B) 
==>
var flag_pat24:boolean;
    msg:Message;
begin
   clear msg;
   msg := ch[11].msg;
   isPat24(msg, flag_pat24);
   if(flag_pat24) then
     destruct24(msg,roleB[i].locx6,roleB[i].locx7,roleB[i].locx8,roleB[i].locx9);
     if(matchTmp(roleB[i].locx6, roleB[i].x6) & matchTmp(roleB[i].locx7, roleB[i].x7) & matchTmp(roleB[i].locx8, roleB[i].x8) & matchTmp(roleB[i].locx9, roleB[i].x9))then
       ch[11].empty:=true;
       clear ch[11].msg;
       roleB[i].st := B10;
     endif;
   endif;
   put "roleB[i] in st9\n";
end;
rule " roleB10 "
roleB[i].st = B10 & ch[12].empty = true & !roleB[i].commit 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons24(roleB[i].x6,roleB[i].x7,roleB[i].x8,roleB[i].x9,msg,msgNo);
   ch[12].empty := false;
   ch[12].msg := msg;
   ch[12].sender := roleB[i].B;
   ch[12].receiver := Intruder;
   roleB[i].st := B11;
   put "roleB[i] in st10\n";
end;
rule " roleB11 "
roleB[i].st = B11 & ch[13].empty = false & !roleB[i].commit & judge(ch[13].msg,roleB[i].B) 
==>
var flag_pat12:boolean;
    msg:Message;
begin
   clear msg;
   msg := ch[13].msg;
   isPat12(msg, flag_pat12);
   if(flag_pat12) then
     destruct12(msg,roleB[i].locx10);
     if(matchTmp(roleB[i].locx10, roleB[i].x10))then
       ch[13].empty:=true;
       clear ch[13].msg;
       roleB[i].st := B12;
     endif;
   endif;
   put "roleB[i] in st11\n";
end;
rule " roleB12 "
roleB[i].st = B12 & ch[14].empty = true & !roleB[i].commit 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons12(roleB[i].x10,msg,msgNo);
   ch[14].empty := false;
   ch[14].msg := msg;
   ch[14].sender := roleB[i].B;
   ch[14].receiver := Intruder;
   roleB[i].st := B13;
   put "roleB[i] in st12\n";
end;
rule " roleB13 "
roleB[i].st = B13 & ch[15].empty = false & !roleB[i].commit & judge(ch[15].msg,roleB[i].B) 
==>
var flag_pat1:boolean;
    msg:Message;
begin
   clear msg;
   msg := ch[15].msg;
   isPat1(msg, flag_pat1);
   if(flag_pat1) then
     destruct1(msg,roleB[i].loceapm);
     if(matchNonce(roleB[i].loceapm, roleB[i].eapm))then
       ch[15].empty:=true;
       clear ch[15].msg;
       roleB[i].st := B14;
     endif;
   endif;
   put "roleB[i] in st13\n";
end;
rule " roleB14 "
roleB[i].st = B14 & ch[16].empty = true & !roleB[i].commit 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons1(roleB[i].eapm,msg,msgNo);
   ch[16].empty := false;
   ch[16].msg := msg;
   ch[16].sender := roleB[i].B;
   ch[16].receiver := Intruder;
   roleB[i].st := B15;
   put "roleB[i] in st14\n";
end;
rule " roleB15 "
roleB[i].st = B15 & ch[17].empty = false & !roleB[i].commit & judge(ch[17].msg,roleB[i].B) 
==>
var flag_pat1:boolean;
    msg:Message;
begin
   clear msg;
   msg := ch[17].msg;
   isPat1(msg, flag_pat1);
   if(flag_pat1) then
     destruct1(msg,roleB[i].locsucm);
     if(matchNonce(roleB[i].locsucm, roleB[i].sucm))then
       ch[17].empty:=true;
       clear ch[17].msg;
       roleB[i].st := B16;
     endif;
   endif;
   put "roleB[i] in st15\n";
end;
rule " roleB16 "
roleB[i].st = B16 & ch[18].empty = true & !roleB[i].commit 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons1(roleB[i].sucm,msg,msgNo);
   ch[18].empty := false;
   ch[18].msg := msg;
   ch[18].sender := roleB[i].B;
   ch[18].receiver := Intruder;
   roleB[i].st := B1;
   put "roleB[i] in st16\n";
   roleB[i].commit := true;
end;
endruleset;

ruleset i:roleCNums do
rule " roleC1 "
roleC[i].st = C1 & ch[2].empty = false & !roleC[i].commit & judge(ch[2].msg,roleC[i].C) 
==>
var flag_pat14:boolean;
    msg:Message;
begin
   clear msg;
   msg := ch[2].msg;
   isPat14(msg, flag_pat14);
   if(flag_pat14) then
     destruct14(msg,roleC[i].locx1,roleC[i].locseafn);
     if(matchTmp(roleC[i].locx1, roleC[i].x1) & matchNonce(roleC[i].locseafn, roleC[i].seafn))then
       ch[2].empty:=true;
       clear ch[2].msg;
       roleC[i].st := C2;
     endif;
   endif;
   put "roleC[i] in st1\n";
end;
rule " roleC2 "
roleC[i].st = C2 & ch[3].empty = true & !roleC[i].commit 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons14(roleC[i].x1,roleC[i].seafn,msg,msgNo);
   ch[3].empty := false;
   ch[3].msg := msg;
   ch[3].sender := roleC[i].C;
   ch[3].receiver := Intruder;
   roleC[i].st := C3;
   put "roleC[i] in st2\n";
end;
rule " roleC3 "
roleC[i].st = C3 & ch[4].empty = false & !roleC[i].commit & judge(ch[4].msg,roleC[i].C) 
==>
var flag_pat1:boolean;
    msg:Message;
begin
   clear msg;
   msg := ch[4].msg;
   isPat1(msg, flag_pat1);
   if(flag_pat1) then
     destruct1(msg,roleC[i].locstart);
     if(matchNonce(roleC[i].locstart, roleC[i].start))then
       ch[4].empty:=true;
       clear ch[4].msg;
       roleC[i].st := C4;
     endif;
   endif;
   put "roleC[i] in st3\n";
end;
rule " roleC4 "
roleC[i].st = C4 & ch[5].empty = true & !roleC[i].commit 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons1(roleC[i].start,msg,msgNo);
   ch[5].empty := false;
   ch[5].msg := msg;
   ch[5].sender := roleC[i].C;
   ch[5].receiver := Intruder;
   roleC[i].st := C5;
   put "roleC[i] in st4\n";
end;
rule " roleC5 "
roleC[i].st = C5 & ch[8].empty = false & !roleC[i].commit & judge(ch[8].msg,roleC[i].C) 
==>
var flag_pat1:boolean;
    msg:Message;
begin
   clear msg;
   msg := ch[8].msg;
   isPat1(msg, flag_pat1);
   if(flag_pat1) then
     destruct1(msg,roleC[i].locue1);
     if(matchNonce(roleC[i].locue1, roleC[i].ue1))then
       ch[8].empty:=true;
       clear ch[8].msg;
       roleC[i].st := C6;
     endif;
   endif;
   put "roleC[i] in st5\n";
end;
rule " roleC6 "
roleC[i].st = C6 & ch[9].empty = true & !roleC[i].commit 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons2(roleC[i].ausf,roleC[i].certC,msg,msgNo);
   ch[9].empty := false;
   ch[9].msg := msg;
   ch[9].sender := roleC[i].C;
   ch[9].receiver := Intruder;
   roleC[i].st := C7;
   put "roleC[i] in st6\n";
end;
rule " roleC7 "
roleC[i].st = C7 & ch[12].empty = false & !roleC[i].commit & judge(ch[12].msg,roleC[i].C) 
==>
var flag_pat24:boolean;
    msg:Message;
begin
   clear msg;
   msg := ch[12].msg;
   isPat24(msg, flag_pat24);
   if(flag_pat24) then
     destruct24(msg,roleC[i].locx6,roleC[i].locx7,roleC[i].locx8,roleC[i].locx9);
     if(matchTmp(roleC[i].locx6, roleC[i].x6) & matchTmp(roleC[i].locx7, roleC[i].x7) & matchTmp(roleC[i].locx8, roleC[i].x8) & matchTmp(roleC[i].locx9, roleC[i].x9))then
       ch[12].empty:=true;
       clear ch[12].msg;
       roleC[i].st := C8;
     endif;
   endif;
   put "roleC[i] in st7\n";
end;
rule " roleC8 "
roleC[i].st = C8 & ch[13].empty = true & !roleC[i].commit 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons10(roleC[i].start,roleC[i].ue1,roleC[i].ausf,roleC[i].certC,roleC[i].prekey,msg,msgNo);
   ch[13].empty := false;
   ch[13].msg := msg;
   ch[13].sender := roleC[i].C;
   ch[13].receiver := Intruder;
   roleC[i].st := C9;
   put "roleC[i] in st8\n";
end;
rule " roleC9 "
roleC[i].st = C9 & ch[16].empty = false & !roleC[i].commit & judge(ch[16].msg,roleC[i].C) 
==>
var flag_pat1:boolean;
    msg:Message;
begin
   clear msg;
   msg := ch[16].msg;
   isPat1(msg, flag_pat1);
   if(flag_pat1) then
     destruct1(msg,roleC[i].loceapm);
     if(matchNonce(roleC[i].loceapm, roleC[i].eapm))then
       ch[16].empty:=true;
       clear ch[16].msg;
       roleC[i].st := C10;
     endif;
   endif;
   put "roleC[i] in st9\n";
end;
rule " roleC10 "
roleC[i].st = C10 & ch[17].empty = true & !roleC[i].commit 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons1(roleC[i].sucm,msg,msgNo);
   ch[17].empty := false;
   ch[17].msg := msg;
   ch[17].sender := roleC[i].C;
   ch[17].receiver := Intruder;
   roleC[i].st := C1;
   put "roleC[i] in st10\n";
   roleC[i].commit := true;
end;
endruleset;

ruleset i:roleDNums do
rule " roleD1 "
roleD[i].st = D1 & ch[3].empty = false & !roleD[i].commit & judge(ch[3].msg,roleD[i].D) 
==>
var flag_pat14:boolean;
    msg:Message;
begin
   clear msg;
   msg := ch[3].msg;
   isPat14(msg, flag_pat14);
   if(flag_pat14) then
     destruct14(msg,roleD[i].locx1,roleD[i].locseafn);
     if(matchTmp(roleD[i].locx1, roleD[i].x1) & matchNonce(roleD[i].locseafn, roleD[i].seafn))then
       ch[3].empty:=true;
       clear ch[3].msg;
       roleD[i].st := D2;
     endif;
   endif;
   put "roleD[i] in st1\n";
end;
rule " roleD2 "
roleD[i].st = D2 & ch[4].empty = true & !roleD[i].commit 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons1(roleD[i].start,msg,msgNo);
   ch[4].empty := false;
   ch[4].msg := msg;
   ch[4].sender := roleD[i].D;
   ch[4].receiver := Intruder;
   roleD[i].st := D1;
   put "roleD[i] in st2\n";
   roleD[i].commit := true;
end;
endruleset;


---rule of intruder to get msg from ch[1] 
rule "intruderGetMsgFromCh[1]" 
  ch[1].empty = false & ch[1].sender != Intruder ==>
  var flag_pat4:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[1].msg;
    printMsg(ch[1].msg);
    get_msgNo(msg, msgNo);
    msg.tmpPart := msgNo;
    isPat4(msg,flag_pat4);
    if (flag_pat4) then
      if(!exist(pat4Set,msgNo)) then
        pat4Set.length:=pat4Set.length+1;
        pat4Set.content[pat4Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
      ch[1].empty := true;
      clear ch[1].msg;
    endif;
    put "intruder get msg from ch[1].\n";
  end;

---rule of intruder to get msg from ch[7] 
rule "intruderGetMsgFromCh[7]" 
  ch[7].empty = false & ch[7].sender != Intruder ==>
  var flag_pat1:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[7].msg;
    printMsg(ch[7].msg);
    get_msgNo(msg, msgNo);
    msg.tmpPart := msgNo;
    isPat1(msg,flag_pat1);
    if (flag_pat1) then
      if(!exist(pat1Set,msgNo)) then
        pat1Set.length:=pat1Set.length+1;
        pat1Set.content[pat1Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
      ch[7].empty := true;
      clear ch[7].msg;
    endif;
    put "intruder get msg from ch[7].\n";
  end;

---rule of intruder to get msg from ch[11] 
rule "intruderGetMsgFromCh[11]" 
  ch[11].empty = false & ch[11].sender != Intruder ==>
  var flag_pat11:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[11].msg;
    printMsg(ch[11].msg);
    get_msgNo(msg, msgNo);
    msg.tmpPart := msgNo;
    isPat11(msg,flag_pat11);
    if (flag_pat11) then
      if(!exist(pat11Set,msgNo)) then
        pat11Set.length:=pat11Set.length+1;
        pat11Set.content[pat11Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
      ch[11].empty := true;
      clear ch[11].msg;
    endif;
    put "intruder get msg from ch[11].\n";
  end;

---rule of intruder to get msg from ch[15] 
rule "intruderGetMsgFromCh[15]" 
  ch[15].empty = false & ch[15].sender != Intruder ==>
  var flag_pat1:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[15].msg;
    printMsg(ch[15].msg);
    get_msgNo(msg, msgNo);
    msg.tmpPart := msgNo;
    isPat1(msg,flag_pat1);
    if (flag_pat1) then
      if(!exist(pat1Set,msgNo)) then
        pat1Set.length:=pat1Set.length+1;
        pat1Set.content[pat1Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
      ch[15].empty := true;
      clear ch[15].msg;
    endif;
    put "intruder get msg from ch[15].\n";
  end;

---rule of intruder to get msg from ch[2] 
rule "intruderGetMsgFromCh[2]" 
  ch[2].empty = false & ch[2].sender != Intruder ==>
  var flag_pat14:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[2].msg;
    printMsg(ch[2].msg);
    get_msgNo(msg, msgNo);
    msg.tmpPart := msgNo;
    isPat14(msg,flag_pat14);
    if (flag_pat14) then
      if(!exist(pat14Set,msgNo)) then
        pat14Set.length:=pat14Set.length+1;
        pat14Set.content[pat14Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
      ch[2].empty := true;
      clear ch[2].msg;
    endif;
    put "intruder get msg from ch[2].\n";
  end;

---rule of intruder to get msg from ch[6] 
rule "intruderGetMsgFromCh[6]" 
  ch[6].empty = false & ch[6].sender != Intruder ==>
  var flag_pat15:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[6].msg;
    printMsg(ch[6].msg);
    get_msgNo(msg, msgNo);
    msg.tmpPart := msgNo;
    isPat15(msg,flag_pat15);
    if (flag_pat15) then
      if(!exist(pat15Set,msgNo)) then
        pat15Set.length:=pat15Set.length+1;
        pat15Set.content[pat15Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
      ch[6].empty := true;
      clear ch[6].msg;
    endif;
    put "intruder get msg from ch[6].\n";
  end;

---rule of intruder to get msg from ch[8] 
rule "intruderGetMsgFromCh[8]" 
  ch[8].empty = false & ch[8].sender != Intruder ==>
  var flag_pat16:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[8].msg;
    printMsg(ch[8].msg);
    get_msgNo(msg, msgNo);
    msg.tmpPart := msgNo;
    isPat16(msg,flag_pat16);
    if (flag_pat16) then
      if(!exist(pat16Set,msgNo)) then
        pat16Set.length:=pat16Set.length+1;
        pat16Set.content[pat16Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
      ch[8].empty := true;
      clear ch[8].msg;
    endif;
    put "intruder get msg from ch[8].\n";
  end;

---rule of intruder to get msg from ch[10] 
rule "intruderGetMsgFromCh[10]" 
  ch[10].empty = false & ch[10].sender != Intruder ==>
  var flag_pat19:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[10].msg;
    printMsg(ch[10].msg);
    get_msgNo(msg, msgNo);
    msg.tmpPart := msgNo;
    isPat19(msg,flag_pat19);
    if (flag_pat19) then
      if(!exist(pat19Set,msgNo)) then
        pat19Set.length:=pat19Set.length+1;
        pat19Set.content[pat19Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
      ch[10].empty := true;
      clear ch[10].msg;
    endif;
    put "intruder get msg from ch[10].\n";
  end;

---rule of intruder to get msg from ch[12] 
rule "intruderGetMsgFromCh[12]" 
  ch[12].empty = false & ch[12].sender != Intruder ==>
  var flag_pat24:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[12].msg;
    printMsg(ch[12].msg);
    get_msgNo(msg, msgNo);
    msg.tmpPart := msgNo;
    isPat24(msg,flag_pat24);
    if (flag_pat24) then
      if(!exist(pat24Set,msgNo)) then
        pat24Set.length:=pat24Set.length+1;
        pat24Set.content[pat24Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
      ch[12].empty := true;
      clear ch[12].msg;
    endif;
    put "intruder get msg from ch[12].\n";
  end;

---rule of intruder to get msg from ch[14] 
rule "intruderGetMsgFromCh[14]" 
  ch[14].empty = false & ch[14].sender != Intruder ==>
  var flag_pat12:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[14].msg;
    printMsg(ch[14].msg);
    get_msgNo(msg, msgNo);
    msg.tmpPart := msgNo;
    isPat12(msg,flag_pat12);
    if (flag_pat12) then
      if(!exist(pat12Set,msgNo)) then
        pat12Set.length:=pat12Set.length+1;
        pat12Set.content[pat12Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
      ch[14].empty := true;
      clear ch[14].msg;
    endif;
    put "intruder get msg from ch[14].\n";
  end;

---rule of intruder to get msg from ch[16] 
rule "intruderGetMsgFromCh[16]" 
  ch[16].empty = false & ch[16].sender != Intruder ==>
  var flag_pat1:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[16].msg;
    printMsg(ch[16].msg);
    get_msgNo(msg, msgNo);
    msg.tmpPart := msgNo;
    isPat1(msg,flag_pat1);
    if (flag_pat1) then
      if(!exist(pat1Set,msgNo)) then
        pat1Set.length:=pat1Set.length+1;
        pat1Set.content[pat1Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
      ch[16].empty := true;
      clear ch[16].msg;
    endif;
    put "intruder get msg from ch[16].\n";
  end;

---rule of intruder to get msg from ch[18] 
rule "intruderGetMsgFromCh[18]" 
  ch[18].empty = false & ch[18].sender != Intruder ==>
  var flag_pat1:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[18].msg;
    printMsg(ch[18].msg);
    get_msgNo(msg, msgNo);
    msg.tmpPart := msgNo;
    isPat1(msg,flag_pat1);
    if (flag_pat1) then
      if(!exist(pat1Set,msgNo)) then
        pat1Set.length:=pat1Set.length+1;
        pat1Set.content[pat1Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
      ch[18].empty := true;
      clear ch[18].msg;
    endif;
    put "intruder get msg from ch[18].\n";
  end;

---rule of intruder to get msg from ch[3] 
rule "intruderGetMsgFromCh[3]" 
  ch[3].empty = false & ch[3].sender != Intruder ==>
  var flag_pat14:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[3].msg;
    printMsg(ch[3].msg);
    get_msgNo(msg, msgNo);
    msg.tmpPart := msgNo;
    isPat14(msg,flag_pat14);
    if (flag_pat14) then
      if(!exist(pat14Set,msgNo)) then
        pat14Set.length:=pat14Set.length+1;
        pat14Set.content[pat14Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
      ch[3].empty := true;
      clear ch[3].msg;
    endif;
    put "intruder get msg from ch[3].\n";
  end;

---rule of intruder to get msg from ch[5] 
rule "intruderGetMsgFromCh[5]" 
  ch[5].empty = false & ch[5].sender != Intruder ==>
  var flag_pat1:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[5].msg;
    printMsg(ch[5].msg);
    get_msgNo(msg, msgNo);
    msg.tmpPart := msgNo;
    isPat1(msg,flag_pat1);
    if (flag_pat1) then
      if(!exist(pat1Set,msgNo)) then
        pat1Set.length:=pat1Set.length+1;
        pat1Set.content[pat1Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
      ch[5].empty := true;
      clear ch[5].msg;
    endif;
    put "intruder get msg from ch[5].\n";
  end;

---rule of intruder to get msg from ch[9] 
rule "intruderGetMsgFromCh[9]" 
  ch[9].empty = false & ch[9].sender != Intruder ==>
  var flag_pat2:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[9].msg;
    printMsg(ch[9].msg);
    get_msgNo(msg, msgNo);
    msg.tmpPart := msgNo;
    isPat2(msg,flag_pat2);
    if (flag_pat2) then
      if(!exist(pat2Set,msgNo)) then
        pat2Set.length:=pat2Set.length+1;
        pat2Set.content[pat2Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
      ch[9].empty := true;
      clear ch[9].msg;
    endif;
    put "intruder get msg from ch[9].\n";
  end;

---rule of intruder to get msg from ch[13] 
rule "intruderGetMsgFromCh[13]" 
  ch[13].empty = false & ch[13].sender != Intruder ==>
  var flag_pat10:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[13].msg;
    printMsg(ch[13].msg);
    get_msgNo(msg, msgNo);
    msg.tmpPart := msgNo;
    isPat10(msg,flag_pat10);
    if (flag_pat10) then
      if(!exist(pat10Set,msgNo)) then
        pat10Set.length:=pat10Set.length+1;
        pat10Set.content[pat10Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
      ch[13].empty := true;
      clear ch[13].msg;
    endif;
    put "intruder get msg from ch[13].\n";
  end;

---rule of intruder to get msg from ch[17] 
rule "intruderGetMsgFromCh[17]" 
  ch[17].empty = false & ch[17].sender != Intruder ==>
  var flag_pat1:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[17].msg;
    printMsg(ch[17].msg);
    get_msgNo(msg, msgNo);
    msg.tmpPart := msgNo;
    isPat1(msg,flag_pat1);
    if (flag_pat1) then
      if(!exist(pat1Set,msgNo)) then
        pat1Set.length:=pat1Set.length+1;
        pat1Set.content[pat1Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
      ch[17].empty := true;
      clear ch[17].msg;
    endif;
    put "intruder get msg from ch[17].\n";
  end;

---rule of intruder to get msg from ch[4] 
rule "intruderGetMsgFromCh[4]" 
  ch[4].empty = false & ch[4].sender != Intruder ==>
  var flag_pat1:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[4].msg;
    printMsg(ch[4].msg);
    get_msgNo(msg, msgNo);
    msg.tmpPart := msgNo;
    isPat1(msg,flag_pat1);
    if (flag_pat1) then
      if(!exist(pat1Set,msgNo)) then
        pat1Set.length:=pat1Set.length+1;
        pat1Set.content[pat1Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
      ch[4].empty := true;
      clear ch[4].msg;
    endif;
    put "intruder get msg from ch[4].\n";
  end;

---rule of intruder to emit msg into ch[6].
ruleset i: msgLen do
  ruleset j: roleANums do
    rule "intruderEmitMsgIntoCh[6]"
      roleA[j].st = A2 & ch[6].empty=true & i <= pat15Set.length & pat15Set.content[i] != 0 & Spy_known[pat15Set.content[i]] & !emit[pat15Set.content[i]] ---& matchPat(msgs[pat15Set.content[i]], sPat15Set)
      ==>
      begin
         clear ch[6];
        ch[6].msg:=msgs[pat15Set.content[i]];
        ch[6].sender:=Intruder;
        ch[6].receiver:=roleA[j].A;
        ch[6].empty:=false;
        emit[pat15Set.content[i]] := true;
        put "intruder emit msg into ch[6].\n";
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[10].
ruleset i: msgLen do
  ruleset j: roleANums do
    rule "intruderEmitMsgIntoCh[10]"
      roleA[j].st = A4 & ch[10].empty=true & i <= pat19Set.length & pat19Set.content[i] != 0 & Spy_known[pat19Set.content[i]] & !emit[pat19Set.content[i]] ---& matchPat(msgs[pat19Set.content[i]], sPat19Set)
      ==>
      begin
         clear ch[10];
        ch[10].msg:=msgs[pat19Set.content[i]];
        ch[10].sender:=Intruder;
        ch[10].receiver:=roleA[j].A;
        ch[10].empty:=false;
        emit[pat19Set.content[i]] := true;
        put "intruder emit msg into ch[10].\n";
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[14].
ruleset i: msgLen do
  ruleset j: roleANums do
    rule "intruderEmitMsgIntoCh[14]"
      roleA[j].st = A6 & ch[14].empty=true & i <= pat12Set.length & pat12Set.content[i] != 0 & Spy_known[pat12Set.content[i]] & !emit[pat12Set.content[i]] ---& matchPat(msgs[pat12Set.content[i]], sPat12Set)
      ==>
      begin
         clear ch[14];
        ch[14].msg:=msgs[pat12Set.content[i]];
        ch[14].sender:=Intruder;
        ch[14].receiver:=roleA[j].A;
        ch[14].empty:=false;
        emit[pat12Set.content[i]] := true;
        put "intruder emit msg into ch[14].\n";
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[18].
ruleset i: msgLen do
  ruleset j: roleANums do
    rule "intruderEmitMsgIntoCh[18]"
      roleA[j].st = A8 & ch[18].empty=true & i <= pat1Set.length & pat1Set.content[i] != 0 & Spy_known[pat1Set.content[i]] & !emit[pat1Set.content[i]] ---& matchPat(msgs[pat1Set.content[i]], sPat1Set)
      ==>
      begin
         clear ch[18];
        ch[18].msg:=msgs[pat1Set.content[i]];
        ch[18].sender:=Intruder;
        ch[18].receiver:=roleA[j].A;
        ch[18].empty:=false;
        emit[pat1Set.content[i]] := true;
        put "intruder emit msg into ch[18].\n";
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[1].
ruleset i: msgLen do
  ruleset j: roleBNums do
    rule "intruderEmitMsgIntoCh[1]"
      roleB[j].st = B1 & ch[1].empty=true & i <= pat4Set.length & pat4Set.content[i] != 0 & Spy_known[pat4Set.content[i]] & !emit[pat4Set.content[i]] ---& matchPat(msgs[pat4Set.content[i]], sPat4Set)
      ==>
      begin
         clear ch[1];
        ch[1].msg:=msgs[pat4Set.content[i]];
        ch[1].sender:=Intruder;
        ch[1].receiver:=roleB[j].B;
        ch[1].empty:=false;
        emit[pat4Set.content[i]] := true;
        put "intruder emit msg into ch[1].\n";
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[5].
ruleset i: msgLen do
  ruleset j: roleBNums do
    rule "intruderEmitMsgIntoCh[5]"
      roleB[j].st = B3 & ch[5].empty=true & i <= pat1Set.length & pat1Set.content[i] != 0 & Spy_known[pat1Set.content[i]] & !emit[pat1Set.content[i]] ---& matchPat(msgs[pat1Set.content[i]], sPat1Set)
      ==>
      begin
         clear ch[5];
        ch[5].msg:=msgs[pat1Set.content[i]];
        ch[5].sender:=Intruder;
        ch[5].receiver:=roleB[j].B;
        ch[5].empty:=false;
        emit[pat1Set.content[i]] := true;
        put "intruder emit msg into ch[5].\n";
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[7].
ruleset i: msgLen do
  ruleset j: roleBNums do
    rule "intruderEmitMsgIntoCh[7]"
      roleB[j].st = B5 & ch[7].empty=true & i <= pat1Set.length & pat1Set.content[i] != 0 & Spy_known[pat1Set.content[i]] & !emit[pat1Set.content[i]] ---& matchPat(msgs[pat1Set.content[i]], sPat1Set)
      ==>
      begin
         clear ch[7];
        ch[7].msg:=msgs[pat1Set.content[i]];
        ch[7].sender:=Intruder;
        ch[7].receiver:=roleB[j].B;
        ch[7].empty:=false;
        emit[pat1Set.content[i]] := true;
        put "intruder emit msg into ch[7].\n";
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[9].
ruleset i: msgLen do
  ruleset j: roleBNums do
    rule "intruderEmitMsgIntoCh[9]"
      roleB[j].st = B7 & ch[9].empty=true & i <= pat2Set.length & pat2Set.content[i] != 0 & Spy_known[pat2Set.content[i]] & !emit[pat2Set.content[i]] ---& matchPat(msgs[pat2Set.content[i]], sPat2Set)
      ==>
      begin
         clear ch[9];
        ch[9].msg:=msgs[pat2Set.content[i]];
        ch[9].sender:=Intruder;
        ch[9].receiver:=roleB[j].B;
        ch[9].empty:=false;
        emit[pat2Set.content[i]] := true;
        put "intruder emit msg into ch[9].\n";
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[11].
ruleset i: msgLen do
  ruleset j: roleBNums do
    rule "intruderEmitMsgIntoCh[11]"
      roleB[j].st = B9 & ch[11].empty=true & i <= pat11Set.length & pat11Set.content[i] != 0 & Spy_known[pat11Set.content[i]] & !emit[pat11Set.content[i]] ---& matchPat(msgs[pat11Set.content[i]], sPat11Set)
      ==>
      begin
         clear ch[11];
        ch[11].msg:=msgs[pat11Set.content[i]];
        ch[11].sender:=Intruder;
        ch[11].receiver:=roleB[j].B;
        ch[11].empty:=false;
        emit[pat11Set.content[i]] := true;
        put "intruder emit msg into ch[11].\n";
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[13].
ruleset i: msgLen do
  ruleset j: roleBNums do
    rule "intruderEmitMsgIntoCh[13]"
      roleB[j].st = B11 & ch[13].empty=true & i <= pat10Set.length & pat10Set.content[i] != 0 & Spy_known[pat10Set.content[i]] & !emit[pat10Set.content[i]] ---& matchPat(msgs[pat10Set.content[i]], sPat10Set)
      ==>
      begin
         clear ch[13];
        ch[13].msg:=msgs[pat10Set.content[i]];
        ch[13].sender:=Intruder;
        ch[13].receiver:=roleB[j].B;
        ch[13].empty:=false;
        emit[pat10Set.content[i]] := true;
        put "intruder emit msg into ch[13].\n";
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[15].
ruleset i: msgLen do
  ruleset j: roleBNums do
    rule "intruderEmitMsgIntoCh[15]"
      roleB[j].st = B13 & ch[15].empty=true & i <= pat1Set.length & pat1Set.content[i] != 0 & Spy_known[pat1Set.content[i]] & !emit[pat1Set.content[i]] ---& matchPat(msgs[pat1Set.content[i]], sPat1Set)
      ==>
      begin
         clear ch[15];
        ch[15].msg:=msgs[pat1Set.content[i]];
        ch[15].sender:=Intruder;
        ch[15].receiver:=roleB[j].B;
        ch[15].empty:=false;
        emit[pat1Set.content[i]] := true;
        put "intruder emit msg into ch[15].\n";
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[17].
ruleset i: msgLen do
  ruleset j: roleBNums do
    rule "intruderEmitMsgIntoCh[17]"
      roleB[j].st = B15 & ch[17].empty=true & i <= pat1Set.length & pat1Set.content[i] != 0 & Spy_known[pat1Set.content[i]] & !emit[pat1Set.content[i]] ---& matchPat(msgs[pat1Set.content[i]], sPat1Set)
      ==>
      begin
         clear ch[17];
        ch[17].msg:=msgs[pat1Set.content[i]];
        ch[17].sender:=Intruder;
        ch[17].receiver:=roleB[j].B;
        ch[17].empty:=false;
        emit[pat1Set.content[i]] := true;
        put "intruder emit msg into ch[17].\n";
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[2].
ruleset i: msgLen do
  ruleset j: roleCNums do
    rule "intruderEmitMsgIntoCh[2]"
      roleC[j].st = C1 & ch[2].empty=true & i <= pat14Set.length & pat14Set.content[i] != 0 & Spy_known[pat14Set.content[i]] & !emit[pat14Set.content[i]] ---& matchPat(msgs[pat14Set.content[i]], sPat14Set)
      ==>
      begin
         clear ch[2];
        ch[2].msg:=msgs[pat14Set.content[i]];
        ch[2].sender:=Intruder;
        ch[2].receiver:=roleC[j].C;
        ch[2].empty:=false;
        emit[pat14Set.content[i]] := true;
        put "intruder emit msg into ch[2].\n";
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[4].
ruleset i: msgLen do
  ruleset j: roleCNums do
    rule "intruderEmitMsgIntoCh[4]"
      roleC[j].st = C3 & ch[4].empty=true & i <= pat1Set.length & pat1Set.content[i] != 0 & Spy_known[pat1Set.content[i]] & !emit[pat1Set.content[i]] ---& matchPat(msgs[pat1Set.content[i]], sPat1Set)
      ==>
      begin
         clear ch[4];
        ch[4].msg:=msgs[pat1Set.content[i]];
        ch[4].sender:=Intruder;
        ch[4].receiver:=roleC[j].C;
        ch[4].empty:=false;
        emit[pat1Set.content[i]] := true;
        put "intruder emit msg into ch[4].\n";
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[8].
ruleset i: msgLen do
  ruleset j: roleCNums do
    rule "intruderEmitMsgIntoCh[8]"
      roleC[j].st = C5 & ch[8].empty=true & i <= pat16Set.length & pat16Set.content[i] != 0 & Spy_known[pat16Set.content[i]] & !emit[pat16Set.content[i]] ---& matchPat(msgs[pat16Set.content[i]], sPat16Set)
      ==>
      begin
         clear ch[8];
        ch[8].msg:=msgs[pat16Set.content[i]];
        ch[8].sender:=Intruder;
        ch[8].receiver:=roleC[j].C;
        ch[8].empty:=false;
        emit[pat16Set.content[i]] := true;
        put "intruder emit msg into ch[8].\n";
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[12].
ruleset i: msgLen do
  ruleset j: roleCNums do
    rule "intruderEmitMsgIntoCh[12]"
      roleC[j].st = C7 & ch[12].empty=true & i <= pat24Set.length & pat24Set.content[i] != 0 & Spy_known[pat24Set.content[i]] & !emit[pat24Set.content[i]] ---& matchPat(msgs[pat24Set.content[i]], sPat24Set)
      ==>
      begin
         clear ch[12];
        ch[12].msg:=msgs[pat24Set.content[i]];
        ch[12].sender:=Intruder;
        ch[12].receiver:=roleC[j].C;
        ch[12].empty:=false;
        emit[pat24Set.content[i]] := true;
        put "intruder emit msg into ch[12].\n";
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[16].
ruleset i: msgLen do
  ruleset j: roleCNums do
    rule "intruderEmitMsgIntoCh[16]"
      roleC[j].st = C9 & ch[16].empty=true & i <= pat1Set.length & pat1Set.content[i] != 0 & Spy_known[pat1Set.content[i]] & !emit[pat1Set.content[i]] ---& matchPat(msgs[pat1Set.content[i]], sPat1Set)
      ==>
      begin
         clear ch[16];
        ch[16].msg:=msgs[pat1Set.content[i]];
        ch[16].sender:=Intruder;
        ch[16].receiver:=roleC[j].C;
        ch[16].empty:=false;
        emit[pat1Set.content[i]] := true;
        put "intruder emit msg into ch[16].\n";
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[3].
ruleset i: msgLen do
  ruleset j: roleDNums do
    rule "intruderEmitMsgIntoCh[3]"
      roleD[j].st = D1 & ch[3].empty=true & i <= pat14Set.length & pat14Set.content[i] != 0 & Spy_known[pat14Set.content[i]] & !emit[pat14Set.content[i]] ---& matchPat(msgs[pat14Set.content[i]], sPat14Set)
      ==>
      begin
         clear ch[3];
        ch[3].msg:=msgs[pat14Set.content[i]];
        ch[3].sender:=Intruder;
        ch[3].receiver:=roleD[j].D;
        ch[3].empty:=false;
        emit[pat14Set.content[i]] := true;
        put "intruder emit msg into ch[3].\n";
      end;
  endruleset;
endruleset;
--- enconcat and deconcat rules for pat: concat(supi.ue)

ruleset i:msgLen do 
  rule "deconcat 2" --pat2
    i<=pat2Set.length & pat2Set.content[i] != 0 & Spy_known[pat2Set.content[i]]   &
    !(Spy_known[msgs[pat2Set.content[i]].concatPart[1]]&Spy_known[msgs[pat2Set.content[i]].concatPart[2]])
    ==>
    var msgPat1,msgPat2:indexType;
        flagPat1,flagPat2:boolean;
    begin
      put "rule deconcat2\n";
      if (!Spy_known[msgs[pat2Set.content[i]].concatPart[1]]) then
        Spy_known[msgs[pat2Set.content[i]].concatPart[1]]:=true;
        msgPat1 := msgs[pat2Set.content[i]].concatPart[1];
        isPat1(msgs[msgPat1],flagPat1);
        if (flagPat1) then
          if(!exist(pat1Set,msgPat1)) then
             pat1Set.length:=pat1Set.length+1;
             pat1Set.content[pat1Set.length] := msgPat1;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat2Set.content[i]].concatPart[2]]) then
        Spy_known[msgs[pat2Set.content[i]].concatPart[2]]:=true;
        msgPat2 := msgs[pat2Set.content[i]].concatPart[2];
        isPat1(msgs[msgPat2],flagPat2);
        if (flagPat2) then
          if(!exist(pat1Set,msgPat2)) then
             pat1Set.length:=pat1Set.length+1;
             pat1Set.content[pat1Set.length] := msgPat2;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i1: msgLen do
  ruleset i2: msgLen do 
    rule "enconcat 2"	---pat2
      i1<=pat1Set.length & Spy_known[pat1Set.content[i1]] &
      i2<=pat1Set.length & Spy_known[pat1Set.content[i2]] &
      matchPat(construct2By11(pat1Set.content[i1],pat1Set.content[i2]), sPat2Set)&
      !Spy_known[constructIndex2By11(pat1Set.content[i1],pat1Set.content[i2])] 
      ==>
      var concatMsgNo:indexType;
      concatMsg:Message;
      begin
        put "rule enconcat2\n";
        concatMsgNo := constructIndex2By11(pat1Set.content[i1],pat1Set.content[i2]);
        if concatMsgNo = msg_end + 1 then 
          msg_end :=msg_end + 1;
          concatMsg:= construct2By11(pat1Set.content[i1],pat1Set.content[i2]);
          msgs[concatMsgNo] := concatMsg;
        endif;
        Spy_known[concatMsgNo]:=true;
        if (!exist(pat2Set,concatMsgNo)) then
          pat2Set.length:=pat2Set.length+1;
          pat2Set.content[pat2Set.length]:=concatMsgNo;
        endif;
      end;
endruleset;
endruleset;

--- encrypt and decrypt rules of pat: aenc{supi.ue}pk(D), for intruder
ruleset i:msgLen do 
  rule "adecrypt 4"	---pat4
    i<=pat4Set.length & pat4Set.content[i] != 0 & Spy_known[pat4Set.content[i]] &
    !Spy_known[msgs[pat4Set.content[i]].aencMsg]&
    Spy_known[inverseKeyIndex(msgs[msgs[pat4Set.content[i]].aencKey])]  ==>
    var key_inv:Message;
	      msgPat2:indexType;
	      flag_pat2:boolean;
    begin
      put "rule adecrypt4\n";
      key_inv := inverseKey(msgs[msgs[pat4Set.content[i]].aencKey]);
      if (key_inv.k.ag = Intruder) then
        Spy_known[msgs[pat4Set.content[i]].aencMsg]:=true;
        msgPat2:=msgs[pat4Set.content[i]].aencMsg;
        isPat2(msgs[msgPat2],flag_pat2);
        if (flag_pat2) then
          if (!exist(pat2Set,msgPat2)) then
            pat2Set.length:=pat2Set.length+1;
            pat2Set.content[pat2Set.length]:=msgPat2;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i:msgLen do 
  ruleset j:msgLen do 
    rule "aencrypt 4"	---pat4
      i<=pat2Set.length & pat2Set.content[i] != 0 & Spy_known[pat2Set.content[i]] &
      j<=pat3Set.length & pat3Set.content[j] != 0 & Spy_known[pat3Set.content[j]] &
      matchPat(construct4By23(pat2Set.content[i],pat3Set.content[j]), sPat4Set) &
      !Spy_known[constructIndex4By23(pat2Set.content[i],pat3Set.content[j])] 
    ==>
      var encMsgNo:indexType;
      encMsg:Message;
      begin
        put "rule aencrypt4\n";
        if (msgs[pat3Set.content[j]].k.encType=PK) then
          encMsgNo := constructIndex4By23(pat2Set.content[i],pat3Set.content[j]);
          if encMsgNo = msg_end + 1 then 
             msg_end :=msg_end + 1;
             encMsg := construct4By23(pat2Set.content[i],pat3Set.content[j]);
             msgs[encMsgNo] := encMsg;
          endif;
          if (!exist(pat4Set,encMsgNo)) then
            pat4Set.length := pat4Set.length+1;
            pat4Set.content[pat4Set.length]:=encMsgNo;
          endif;
          Spy_known[encMsgNo] := true;
        endif;
      end;
  endruleset;
endruleset;

--- encrypt and decrypt rules of pat: aenc{prekey}pk(C), for intruder
ruleset i:msgLen do 
  rule "adecrypt 5"	---pat5
    i<=pat5Set.length & pat5Set.content[i] != 0 & Spy_known[pat5Set.content[i]] &
    !Spy_known[msgs[pat5Set.content[i]].aencMsg]&
    Spy_known[inverseKeyIndex(msgs[msgs[pat5Set.content[i]].aencKey])]  ==>
    var key_inv:Message;
	      msgPat1:indexType;
	      flag_pat1:boolean;
    begin
      put "rule adecrypt5\n";
      key_inv := inverseKey(msgs[msgs[pat5Set.content[i]].aencKey]);
      if (key_inv.k.ag = Intruder) then
        Spy_known[msgs[pat5Set.content[i]].aencMsg]:=true;
        msgPat1:=msgs[pat5Set.content[i]].aencMsg;
        isPat1(msgs[msgPat1],flag_pat1);
        if (flag_pat1) then
          if (!exist(pat1Set,msgPat1)) then
            pat1Set.length:=pat1Set.length+1;
            pat1Set.content[pat1Set.length]:=msgPat1;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i:msgLen do 
  ruleset j:msgLen do 
    rule "aencrypt 5"	---pat5
      i<=pat1Set.length & pat1Set.content[i] != 0 & Spy_known[pat1Set.content[i]] &
      j<=pat3Set.length & pat3Set.content[j] != 0 & Spy_known[pat3Set.content[j]] &
      matchPat(construct5By13(pat1Set.content[i],pat3Set.content[j]), sPat5Set) &
      !Spy_known[constructIndex5By13(pat1Set.content[i],pat3Set.content[j])] 
    ==>
      var encMsgNo:indexType;
      encMsg:Message;
      begin
        put "rule aencrypt5\n";
        if (msgs[pat3Set.content[j]].k.encType=PK) then
          encMsgNo := constructIndex5By13(pat1Set.content[i],pat3Set.content[j]);
          if encMsgNo = msg_end + 1 then 
             msg_end :=msg_end + 1;
             encMsg := construct5By13(pat1Set.content[i],pat3Set.content[j]);
             msgs[encMsgNo] := encMsg;
          endif;
          if (!exist(pat5Set,encMsgNo)) then
            pat5Set.length := pat5Set.length+1;
            pat5Set.content[pat5Set.length]:=encMsgNo;
          endif;
          Spy_known[encMsgNo] := true;
        endif;
      end;
  endruleset;
endruleset;

--- enconcat and deconcat rules for pat: concat(start.ue1.ausf.certC)

ruleset i:msgLen do 
  rule "deconcat 6" --pat6
    i<=pat6Set.length & pat6Set.content[i] != 0 & Spy_known[pat6Set.content[i]]   &
    !(Spy_known[msgs[pat6Set.content[i]].concatPart[1]]&Spy_known[msgs[pat6Set.content[i]].concatPart[2]]&Spy_known[msgs[pat6Set.content[i]].concatPart[3]]&Spy_known[msgs[pat6Set.content[i]].concatPart[4]])
    ==>
    var msgPat1,msgPat2,msgPat3,msgPat4:indexType;
        flagPat1,flagPat2,flagPat3,flagPat4:boolean;
    begin
      put "rule deconcat6\n";
      if (!Spy_known[msgs[pat6Set.content[i]].concatPart[1]]) then
        Spy_known[msgs[pat6Set.content[i]].concatPart[1]]:=true;
        msgPat1 := msgs[pat6Set.content[i]].concatPart[1];
        isPat1(msgs[msgPat1],flagPat1);
        if (flagPat1) then
          if(!exist(pat1Set,msgPat1)) then
             pat1Set.length:=pat1Set.length+1;
             pat1Set.content[pat1Set.length] := msgPat1;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat6Set.content[i]].concatPart[2]]) then
        Spy_known[msgs[pat6Set.content[i]].concatPart[2]]:=true;
        msgPat2 := msgs[pat6Set.content[i]].concatPart[2];
        isPat1(msgs[msgPat2],flagPat2);
        if (flagPat2) then
          if(!exist(pat1Set,msgPat2)) then
             pat1Set.length:=pat1Set.length+1;
             pat1Set.content[pat1Set.length] := msgPat2;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat6Set.content[i]].concatPart[3]]) then
        Spy_known[msgs[pat6Set.content[i]].concatPart[3]]:=true;
        msgPat3 := msgs[pat6Set.content[i]].concatPart[3];
        isPat1(msgs[msgPat3],flagPat3);
        if (flagPat3) then
          if(!exist(pat1Set,msgPat3)) then
             pat1Set.length:=pat1Set.length+1;
             pat1Set.content[pat1Set.length] := msgPat3;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat6Set.content[i]].concatPart[4]]) then
        Spy_known[msgs[pat6Set.content[i]].concatPart[4]]:=true;
        msgPat4 := msgs[pat6Set.content[i]].concatPart[4];
        isPat1(msgs[msgPat4],flagPat4);
        if (flagPat4) then
          if(!exist(pat1Set,msgPat4)) then
             pat1Set.length:=pat1Set.length+1;
             pat1Set.content[pat1Set.length] := msgPat4;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i1: msgLen do
  ruleset i2: msgLen do
  ruleset i3: msgLen do
  ruleset i4: msgLen do 
    rule "enconcat 6"	---pat6
      i1<=pat1Set.length & Spy_known[pat1Set.content[i1]] &
      i2<=pat1Set.length & Spy_known[pat1Set.content[i2]] &
      i3<=pat1Set.length & Spy_known[pat1Set.content[i3]] &
      i4<=pat1Set.length & Spy_known[pat1Set.content[i4]] &
      matchPat(construct6By1111(pat1Set.content[i1],pat1Set.content[i2],pat1Set.content[i3],pat1Set.content[i4]), sPat6Set)&
      !Spy_known[constructIndex6By1111(pat1Set.content[i1],pat1Set.content[i2],pat1Set.content[i3],pat1Set.content[i4])] 
      ==>
      var concatMsgNo:indexType;
      concatMsg:Message;
      begin
        put "rule enconcat6\n";
        concatMsgNo := constructIndex6By1111(pat1Set.content[i1],pat1Set.content[i2],pat1Set.content[i3],pat1Set.content[i4]);
        if concatMsgNo = msg_end + 1 then 
          msg_end :=msg_end + 1;
          concatMsg:= construct6By1111(pat1Set.content[i1],pat1Set.content[i2],pat1Set.content[i3],pat1Set.content[i4]);
          msgs[concatMsgNo] := concatMsg;
        endif;
        Spy_known[concatMsgNo]:=true;
        if (!exist(pat6Set,concatMsgNo)) then
          pat6Set.length:=pat6Set.length+1;
          pat6Set.content[pat6Set.length]:=concatMsgNo;
        endif;
      end;
endruleset;
endruleset;
endruleset;
endruleset;

--- Sign and verify rules of pat: sign{start.ue1.ausf.certC}sk(A), for intruder
ruleset i:msgLen do 
  ruleset j:msgLen do 
    rule "constructSign 7"	---pat7
      i<=pat6Set.length & pat6Set.content[i] != 0 & Spy_known[pat6Set.content[i]] &
      j<=pat3Set.length & pat3Set.content[j] != 0 & Spy_known[pat3Set.content[j]] &
      matchPat(construct7By63(pat6Set.content[i],pat3Set.content[j]), sPat7Set) &
      !Spy_known[constructIndex7By63(pat6Set.content[i],pat3Set.content[j])] 
    ==>
      var signMsgNo:indexType;
      signMsg:Message;
      begin
        put "rule constructSign7\n";
        if (msgs[pat3Set.content[j]].k.encType=SK) then
          signMsgNo := constructIndex7By63(pat6Set.content[i],pat3Set.content[j]);
          if signMsgNo = msg_end + 1 then 
             msg_end :=msg_end + 1;
             signMsg := construct7By63(pat6Set.content[i],pat3Set.content[j]);
             msgs[signMsgNo] := signMsg;
          endif;
          if (!exist(pat7Set,signMsgNo)) then
            pat7Set.length := pat7Set.length+1;
            pat7Set.content[pat7Set.length]:=signMsgNo;
          endif;
          Spy_known[signMsgNo] := true;
        endif;
      end;
  endruleset;
endruleset;

--- enconcat and deconcat rules for pat: concat(ue1.ausf.prekey)

ruleset i:msgLen do 
  rule "deconcat 8" --pat8
    i<=pat8Set.length & pat8Set.content[i] != 0 & Spy_known[pat8Set.content[i]]   &
    !(Spy_known[msgs[pat8Set.content[i]].concatPart[1]]&Spy_known[msgs[pat8Set.content[i]].concatPart[2]]&Spy_known[msgs[pat8Set.content[i]].concatPart[3]])
    ==>
    var msgPat1,msgPat2,msgPat3:indexType;
        flagPat1,flagPat2,flagPat3:boolean;
    begin
      put "rule deconcat8\n";
      if (!Spy_known[msgs[pat8Set.content[i]].concatPart[1]]) then
        Spy_known[msgs[pat8Set.content[i]].concatPart[1]]:=true;
        msgPat1 := msgs[pat8Set.content[i]].concatPart[1];
        isPat1(msgs[msgPat1],flagPat1);
        if (flagPat1) then
          if(!exist(pat1Set,msgPat1)) then
             pat1Set.length:=pat1Set.length+1;
             pat1Set.content[pat1Set.length] := msgPat1;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat8Set.content[i]].concatPart[2]]) then
        Spy_known[msgs[pat8Set.content[i]].concatPart[2]]:=true;
        msgPat2 := msgs[pat8Set.content[i]].concatPart[2];
        isPat1(msgs[msgPat2],flagPat2);
        if (flagPat2) then
          if(!exist(pat1Set,msgPat2)) then
             pat1Set.length:=pat1Set.length+1;
             pat1Set.content[pat1Set.length] := msgPat2;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat8Set.content[i]].concatPart[3]]) then
        Spy_known[msgs[pat8Set.content[i]].concatPart[3]]:=true;
        msgPat3 := msgs[pat8Set.content[i]].concatPart[3];
        isPat1(msgs[msgPat3],flagPat3);
        if (flagPat3) then
          if(!exist(pat1Set,msgPat3)) then
             pat1Set.length:=pat1Set.length+1;
             pat1Set.content[pat1Set.length] := msgPat3;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i1: msgLen do
  ruleset i2: msgLen do
  ruleset i3: msgLen do 
    rule "enconcat 8"	---pat8
      i1<=pat1Set.length & Spy_known[pat1Set.content[i1]] &
      i2<=pat1Set.length & Spy_known[pat1Set.content[i2]] &
      i3<=pat1Set.length & Spy_known[pat1Set.content[i3]] &
      matchPat(construct8By111(pat1Set.content[i1],pat1Set.content[i2],pat1Set.content[i3]), sPat8Set)&
      !Spy_known[constructIndex8By111(pat1Set.content[i1],pat1Set.content[i2],pat1Set.content[i3])] 
      ==>
      var concatMsgNo:indexType;
      concatMsg:Message;
      begin
        put "rule enconcat8\n";
        concatMsgNo := constructIndex8By111(pat1Set.content[i1],pat1Set.content[i2],pat1Set.content[i3]);
        if concatMsgNo = msg_end + 1 then 
          msg_end :=msg_end + 1;
          concatMsg:= construct8By111(pat1Set.content[i1],pat1Set.content[i2],pat1Set.content[i3]);
          msgs[concatMsgNo] := concatMsg;
        endif;
        Spy_known[concatMsgNo]:=true;
        if (!exist(pat8Set,concatMsgNo)) then
          pat8Set.length:=pat8Set.length+1;
          pat8Set.content[pat8Set.length]:=concatMsgNo;
        endif;
      end;
endruleset;
endruleset;
endruleset;

--- hash and dehash rules of pat: hash{ue1.ausf.prekey}, for intruder
ruleset i:msgLen do 
  ruleset j:msgLen do 
    rule "constructHash 9"  --pat9
      i<=pat8Set.length & pat8Set.content[i] != 0 & Spy_known[pat8Set.content[i]] &
      matchPat(construct9By8(pat8Set.content[i]), sPat9Set) &
      !Spy_known[constructIndex9By8(pat8Set.content[i])]
      ==>
      var hashMsgNo:indexType;
      hashMsg:Message;
      begin
        put "rule constructHash 9\n";
        hashMsgNo := constructIndex9By8(pat8Set.content[i]);
        if hashMsgNo = msg_end + 1 then
          msg_end := msg_end + 1;
          hashMsg := construct9By8(pat8Set.content[i]);
          msgs[hashMsgNo] := hashMsg;
        endif;
        Spy_known[hashMsgNo]:=true;
        if (!exist(pat9Set,hashMsgNo)) then
          pat9Set.length:=pat9Set.length+1;
          pat9Set.content[pat9Set.length]:=hashMsgNo;
        endif;
      end;
  endruleset;
endruleset;

--- encrypt and decrypt rules of pat senc(start.ue1.ausf.certC,hash(ue1.ausf.prekey))
ruleset i:msgLen do
  rule "sdecrypt 10" --pat10
    i<=pat10Set.length & pat10Set.content[i] != 0
    & Spy_known[pat10Set.content[i]] & !Spy_known[msgs[pat10Set.content[i]].sencMsg]
    ==>
    var key_inv:Message;
	      msgPat6,keyNo:indexType;
	      flag_pat6:boolean;
    begin
      put "rule sdecrypt10\n";
      key_inv := inverseKey(msgs[msgs[pat10Set.content[i]].sencKey]);
      get_msgNo(key_inv,keyNo);
      if (key_inv.k.encType = MsgK & Spy_known[keyNo]) then
        Spy_known[msgs[pat10Set.content[i]].sencMsg]:=true;
        msgPat6:=msgs[pat10Set.content[i]].sencMsg;
        isPat6(msgs[msgPat6],flag_pat6);
        if (flag_pat6) then
          if (!exist(pat6Set,msgPat6)) then
            pat6Set.length:=pat6Set.length+1;
            pat6Set.content[pat6Set.length]:=msgPat6;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i:msgLen do 
  ruleset j:msgLen do 
    rule "sencrypt 10"  --pat10
      i<=pat6Set.length & pat6Set.content[i] != 0 & Spy_known[pat6Set.content[i]] &
      j<=pat9Set.length & pat9Set.content[j] != 0 & Spy_known[pat9Set.content[j]] &
      matchPat(construct10By69(pat6Set.content[i],pat9Set.content[j]), sPat10Set) &
      !Spy_known[constructIndex10By69(pat6Set.content[i],pat9Set.content[j])] 
       ==>
      var encMsgNo:indexType;
      encMsg:Message;
      begin
        put "rule sencrypt10\n";
        if (msgs[pat9Set.content[j]].k.encType=MsgK) then
          encMsgNo := constructIndex10By69(pat6Set.content[i],pat9Set.content[j]);
          if encMsgNo = msg_end + 1 then 
             msg_end :=msg_end + 1;
             encMsg:= construct10By69(pat6Set.content[i],pat9Set.content[j]);
             msgs[encMsgNo] := encMsg;
          endif;
          if (!exist(pat10Set,encMsgNo)) then
            pat10Set.length := pat10Set.length+1;
            pat10Set.content[pat10Set.length]:=encMsgNo;
          endif;
          Spy_known[encMsgNo] := true;
        endif;
      end;
  endruleset;
endruleset;

--- enconcat and deconcat rules for pat: concat(aenc{prekey}pk(C).certA.sign(start.ue1.ausf.certC,sk(A)).senc{start.ue1.ausf.certC}hash(ue1.ausf.prekey))

ruleset i:msgLen do 
  rule "deconcat 11" --pat11
    i<=pat11Set.length & pat11Set.content[i] != 0 & Spy_known[pat11Set.content[i]]   &
    !(Spy_known[msgs[pat11Set.content[i]].concatPart[1]]&Spy_known[msgs[pat11Set.content[i]].concatPart[2]]&Spy_known[msgs[pat11Set.content[i]].concatPart[3]]&Spy_known[msgs[pat11Set.content[i]].concatPart[4]])
    ==>
    var msgPat1,msgPat2,msgPat3,msgPat4:indexType;
        flagPat1,flagPat2,flagPat3,flagPat4:boolean;
    begin
      put "rule deconcat11\n";
      if (!Spy_known[msgs[pat11Set.content[i]].concatPart[1]]) then
        Spy_known[msgs[pat11Set.content[i]].concatPart[1]]:=true;
        msgPat1 := msgs[pat11Set.content[i]].concatPart[1];
        isPat5(msgs[msgPat1],flagPat1);
        if (flagPat1) then
          if(!exist(pat5Set,msgPat1)) then
             pat5Set.length:=pat5Set.length+1;
             pat5Set.content[pat5Set.length] := msgPat1;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat11Set.content[i]].concatPart[2]]) then
        Spy_known[msgs[pat11Set.content[i]].concatPart[2]]:=true;
        msgPat2 := msgs[pat11Set.content[i]].concatPart[2];
        isPat1(msgs[msgPat2],flagPat2);
        if (flagPat2) then
          if(!exist(pat1Set,msgPat2)) then
             pat1Set.length:=pat1Set.length+1;
             pat1Set.content[pat1Set.length] := msgPat2;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat11Set.content[i]].concatPart[3]]) then
        Spy_known[msgs[pat11Set.content[i]].concatPart[3]]:=true;
        msgPat3 := msgs[pat11Set.content[i]].concatPart[3];
        isPat7(msgs[msgPat3],flagPat3);
        if (flagPat3) then
          if(!exist(pat7Set,msgPat3)) then
             pat7Set.length:=pat7Set.length+1;
             pat7Set.content[pat7Set.length] := msgPat3;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat11Set.content[i]].concatPart[4]]) then
        Spy_known[msgs[pat11Set.content[i]].concatPart[4]]:=true;
        msgPat4 := msgs[pat11Set.content[i]].concatPart[4];
        isPat10(msgs[msgPat4],flagPat4);
        if (flagPat4) then
          if(!exist(pat10Set,msgPat4)) then
             pat10Set.length:=pat10Set.length+1;
             pat10Set.content[pat10Set.length] := msgPat4;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i1: msgLen do
  ruleset i2: msgLen do
  ruleset i3: msgLen do
  ruleset i4: msgLen do 
    rule "enconcat 11"	---pat11
      i1<=pat5Set.length & Spy_known[pat5Set.content[i1]] &
      i2<=pat1Set.length & Spy_known[pat1Set.content[i2]] &
      i3<=pat7Set.length & Spy_known[pat7Set.content[i3]] &
      i4<=pat10Set.length & Spy_known[pat10Set.content[i4]] &
      matchPat(construct11By51710(pat5Set.content[i1],pat1Set.content[i2],pat7Set.content[i3],pat10Set.content[i4]), sPat11Set)&
      !Spy_known[constructIndex11By51710(pat5Set.content[i1],pat1Set.content[i2],pat7Set.content[i3],pat10Set.content[i4])] 
      ==>
      var concatMsgNo:indexType;
      concatMsg:Message;
      begin
        put "rule enconcat11\n";
        concatMsgNo := constructIndex11By51710(pat5Set.content[i1],pat1Set.content[i2],pat7Set.content[i3],pat10Set.content[i4]);
        if concatMsgNo = msg_end + 1 then 
          msg_end :=msg_end + 1;
          concatMsg:= construct11By51710(pat5Set.content[i1],pat1Set.content[i2],pat7Set.content[i3],pat10Set.content[i4]);
          msgs[concatMsgNo] := concatMsg;
        endif;
        Spy_known[concatMsgNo]:=true;
        if (!exist(pat11Set,concatMsgNo)) then
          pat11Set.length:=pat11Set.length+1;
          pat11Set.content[pat11Set.length]:=concatMsgNo;
        endif;
      end;
endruleset;
endruleset;
endruleset;
endruleset;

--- enconcat and deconcat rules for pat: concat(x1.seafn)

ruleset i:msgLen do 
  rule "deconcat 14" --pat14
    i<=pat14Set.length & pat14Set.content[i] != 0 & Spy_known[pat14Set.content[i]]   &
    !(Spy_known[msgs[pat14Set.content[i]].concatPart[1]]&Spy_known[msgs[pat14Set.content[i]].concatPart[2]])
    ==>
    var msgPat1,msgPat2:indexType;
        flagPat1,flagPat2:boolean;
    begin
      put "rule deconcat14\n";
      if (!Spy_known[msgs[pat14Set.content[i]].concatPart[1]]) then
        Spy_known[msgs[pat14Set.content[i]].concatPart[1]]:=true;
        msgPat1 := msgs[pat14Set.content[i]].concatPart[1];
        isPat13(msgs[msgPat1],flagPat1);
        if (flagPat1) then
          if(!exist(pat13Set,msgPat1)) then
             pat13Set.length:=pat13Set.length+1;
             pat13Set.content[pat13Set.length] := msgPat1;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat14Set.content[i]].concatPart[2]]) then
        Spy_known[msgs[pat14Set.content[i]].concatPart[2]]:=true;
        msgPat2 := msgs[pat14Set.content[i]].concatPart[2];
        isPat1(msgs[msgPat2],flagPat2);
        if (flagPat2) then
          if(!exist(pat1Set,msgPat2)) then
             pat1Set.length:=pat1Set.length+1;
             pat1Set.content[pat1Set.length] := msgPat2;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i1: msgLen do
  ruleset i2: msgLen do 
    rule "enconcat 14"	---pat14
      i1<=pat13Set.length & Spy_known[pat13Set.content[i1]] &
      i2<=pat1Set.length & Spy_known[pat1Set.content[i2]] &
      matchPat(construct14By131(pat13Set.content[i1],pat1Set.content[i2]), sPat14Set)&
      !Spy_known[constructIndex14By131(pat13Set.content[i1],pat1Set.content[i2])] 
      ==>
      var concatMsgNo:indexType;
      concatMsg:Message;
      begin
        put "rule enconcat14\n";
        concatMsgNo := constructIndex14By131(pat13Set.content[i1],pat1Set.content[i2]);
        if concatMsgNo = msg_end + 1 then 
          msg_end :=msg_end + 1;
          concatMsg:= construct14By131(pat13Set.content[i1],pat1Set.content[i2]);
          msgs[concatMsgNo] := concatMsg;
        endif;
        Spy_known[concatMsgNo]:=true;
        if (!exist(pat14Set,concatMsgNo)) then
          pat14Set.length:=pat14Set.length+1;
          pat14Set.content[pat14Set.length]:=concatMsgNo;
        endif;
      end;
endruleset;
endruleset;

--- enconcat and deconcat rules for pat: concat(x4.x5)

ruleset i:msgLen do 
  rule "deconcat 19" --pat19
    i<=pat19Set.length & pat19Set.content[i] != 0 & Spy_known[pat19Set.content[i]]   &
    !(Spy_known[msgs[pat19Set.content[i]].concatPart[1]]&Spy_known[msgs[pat19Set.content[i]].concatPart[2]])
    ==>
    var msgPat1,msgPat2:indexType;
        flagPat1,flagPat2:boolean;
    begin
      put "rule deconcat19\n";
      if (!Spy_known[msgs[pat19Set.content[i]].concatPart[1]]) then
        Spy_known[msgs[pat19Set.content[i]].concatPart[1]]:=true;
        msgPat1 := msgs[pat19Set.content[i]].concatPart[1];
        isPat17(msgs[msgPat1],flagPat1);
        if (flagPat1) then
          if(!exist(pat17Set,msgPat1)) then
             pat17Set.length:=pat17Set.length+1;
             pat17Set.content[pat17Set.length] := msgPat1;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat19Set.content[i]].concatPart[2]]) then
        Spy_known[msgs[pat19Set.content[i]].concatPart[2]]:=true;
        msgPat2 := msgs[pat19Set.content[i]].concatPart[2];
        isPat18(msgs[msgPat2],flagPat2);
        if (flagPat2) then
          if(!exist(pat18Set,msgPat2)) then
             pat18Set.length:=pat18Set.length+1;
             pat18Set.content[pat18Set.length] := msgPat2;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i1: msgLen do
  ruleset i2: msgLen do 
    rule "enconcat 19"	---pat19
      i1<=pat17Set.length & Spy_known[pat17Set.content[i1]] &
      i2<=pat18Set.length & Spy_known[pat18Set.content[i2]] &
      matchPat(construct19By1718(pat17Set.content[i1],pat18Set.content[i2]), sPat19Set)&
      !Spy_known[constructIndex19By1718(pat17Set.content[i1],pat18Set.content[i2])] 
      ==>
      var concatMsgNo:indexType;
      concatMsg:Message;
      begin
        put "rule enconcat19\n";
        concatMsgNo := constructIndex19By1718(pat17Set.content[i1],pat18Set.content[i2]);
        if concatMsgNo = msg_end + 1 then 
          msg_end :=msg_end + 1;
          concatMsg:= construct19By1718(pat17Set.content[i1],pat18Set.content[i2]);
          msgs[concatMsgNo] := concatMsg;
        endif;
        Spy_known[concatMsgNo]:=true;
        if (!exist(pat19Set,concatMsgNo)) then
          pat19Set.length:=pat19Set.length+1;
          pat19Set.content[pat19Set.length]:=concatMsgNo;
        endif;
      end;
endruleset;
endruleset;

--- enconcat and deconcat rules for pat: concat(x6.x7.x8.x9)

ruleset i:msgLen do 
  rule "deconcat 24" --pat24
    i<=pat24Set.length & pat24Set.content[i] != 0 & Spy_known[pat24Set.content[i]]   &
    !(Spy_known[msgs[pat24Set.content[i]].concatPart[1]]&Spy_known[msgs[pat24Set.content[i]].concatPart[2]]&Spy_known[msgs[pat24Set.content[i]].concatPart[3]]&Spy_known[msgs[pat24Set.content[i]].concatPart[4]])
    ==>
    var msgPat1,msgPat2,msgPat3,msgPat4:indexType;
        flagPat1,flagPat2,flagPat3,flagPat4:boolean;
    begin
      put "rule deconcat24\n";
      if (!Spy_known[msgs[pat24Set.content[i]].concatPart[1]]) then
        Spy_known[msgs[pat24Set.content[i]].concatPart[1]]:=true;
        msgPat1 := msgs[pat24Set.content[i]].concatPart[1];
        isPat20(msgs[msgPat1],flagPat1);
        if (flagPat1) then
          if(!exist(pat20Set,msgPat1)) then
             pat20Set.length:=pat20Set.length+1;
             pat20Set.content[pat20Set.length] := msgPat1;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat24Set.content[i]].concatPart[2]]) then
        Spy_known[msgs[pat24Set.content[i]].concatPart[2]]:=true;
        msgPat2 := msgs[pat24Set.content[i]].concatPart[2];
        isPat21(msgs[msgPat2],flagPat2);
        if (flagPat2) then
          if(!exist(pat21Set,msgPat2)) then
             pat21Set.length:=pat21Set.length+1;
             pat21Set.content[pat21Set.length] := msgPat2;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat24Set.content[i]].concatPart[3]]) then
        Spy_known[msgs[pat24Set.content[i]].concatPart[3]]:=true;
        msgPat3 := msgs[pat24Set.content[i]].concatPart[3];
        isPat22(msgs[msgPat3],flagPat3);
        if (flagPat3) then
          if(!exist(pat22Set,msgPat3)) then
             pat22Set.length:=pat22Set.length+1;
             pat22Set.content[pat22Set.length] := msgPat3;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat24Set.content[i]].concatPart[4]]) then
        Spy_known[msgs[pat24Set.content[i]].concatPart[4]]:=true;
        msgPat4 := msgs[pat24Set.content[i]].concatPart[4];
        isPat23(msgs[msgPat4],flagPat4);
        if (flagPat4) then
          if(!exist(pat23Set,msgPat4)) then
             pat23Set.length:=pat23Set.length+1;
             pat23Set.content[pat23Set.length] := msgPat4;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i1: msgLen do
  ruleset i2: msgLen do
  ruleset i3: msgLen do
  ruleset i4: msgLen do 
    rule "enconcat 24"	---pat24
      i1<=pat20Set.length & Spy_known[pat20Set.content[i1]] &
      i2<=pat21Set.length & Spy_known[pat21Set.content[i2]] &
      i3<=pat22Set.length & Spy_known[pat22Set.content[i3]] &
      i4<=pat23Set.length & Spy_known[pat23Set.content[i4]] &
      matchPat(construct24By20212223(pat20Set.content[i1],pat21Set.content[i2],pat22Set.content[i3],pat23Set.content[i4]), sPat24Set)&
      !Spy_known[constructIndex24By20212223(pat20Set.content[i1],pat21Set.content[i2],pat22Set.content[i3],pat23Set.content[i4])] 
      ==>
      var concatMsgNo:indexType;
      concatMsg:Message;
      begin
        put "rule enconcat24\n";
        concatMsgNo := constructIndex24By20212223(pat20Set.content[i1],pat21Set.content[i2],pat22Set.content[i3],pat23Set.content[i4]);
        if concatMsgNo = msg_end + 1 then 
          msg_end :=msg_end + 1;
          concatMsg:= construct24By20212223(pat20Set.content[i1],pat21Set.content[i2],pat22Set.content[i3],pat23Set.content[i4]);
          msgs[concatMsgNo] := concatMsg;
        endif;
        Spy_known[concatMsgNo]:=true;
        if (!exist(pat24Set,concatMsgNo)) then
          pat24Set.length:=pat24Set.length+1;
          pat24Set.content[pat24Set.length]:=concatMsgNo;
        endif;
      end;
endruleset;
endruleset;
endruleset;
endruleset;

startstate
  roleA[1].A := UE;
  roleA[1].B := SEAF;
  roleA[1].C := AUSF;
  roleA[1].D := UDM;
  roleA[1].supi := supi;
  roleA[1].ue := ue;
  roleA[1].ue1 := ue1;
  roleA[1].prekey := prekey;
  roleA[1].certA := certA;
  roleA[1].eapm := eapm;
  roleA[1].st := A1;
  roleA[1].commit := false;
  roleA[1].seafn := anyNonce;
  roleA[1].ausf := anyNonce;
  roleA[1].sucm := anyNonce;
  roleA[1].certC := anyNonce;
  roleA[1].start := anyNonce;
  roleA[1].x10.msgType := tmp;
  roleA[1].x10.tmpPart := 0;
  roleA[1].x1.msgType := tmp;
  roleA[1].x1.tmpPart := 0;
  roleA[1].x2.msgType := tmp;
  roleA[1].x2.tmpPart := 0;
  roleA[1].x3.msgType := tmp;
  roleA[1].x3.tmpPart := 0;
  roleA[1].x4.msgType := tmp;
  roleA[1].x4.tmpPart := 0;
  roleA[1].x5.msgType := tmp;
  roleA[1].x5.tmpPart := 0;
  roleA[1].x6.msgType := tmp;
  roleA[1].x6.tmpPart := 0;
  roleA[1].x7.msgType := tmp;
  roleA[1].x7.tmpPart := 0;
  roleA[1].x8.msgType := tmp;
  roleA[1].x8.tmpPart := 0;
  roleA[1].x9.msgType := tmp;
  roleA[1].x9.tmpPart := 0;

  roleB[1].A := UE;
  roleB[1].B := SEAF;
  roleB[1].C := AUSF;
  roleB[1].seafn := seafn;
  roleB[1].st := B1;
  roleB[1].commit := false;
  roleB[1].supi := anyNonce;
  roleB[1].ue := anyNonce;
  roleB[1].ue1 := anyNonce;
  roleB[1].prekey := anyNonce;
  roleB[1].certA := anyNonce;
  roleB[1].eapm := anyNonce;
  roleB[1].ausf := anyNonce;
  roleB[1].sucm := anyNonce;
  roleB[1].certC := anyNonce;
  roleB[1].prekey := anyNonce;
  roleB[1].start := anyNonce;
  roleB[1].D := anyAgent;
  roleB[1].x10.msgType := tmp;
  roleB[1].x10.tmpPart := 0;
  roleB[1].x1.msgType := tmp;
  roleB[1].x1.tmpPart := 0;
  roleB[1].x2.msgType := tmp;
  roleB[1].x2.tmpPart := 0;
  roleB[1].x3.msgType := tmp;
  roleB[1].x3.tmpPart := 0;
  roleB[1].x4.msgType := tmp;
  roleB[1].x4.tmpPart := 0;
  roleB[1].x5.msgType := tmp;
  roleB[1].x5.tmpPart := 0;
  roleB[1].x6.msgType := tmp;
  roleB[1].x6.tmpPart := 0;
  roleB[1].x7.msgType := tmp;
  roleB[1].x7.tmpPart := 0;
  roleB[1].x8.msgType := tmp;
  roleB[1].x8.tmpPart := 0;
  roleB[1].x9.msgType := tmp;
  roleB[1].x9.tmpPart := 0;

  roleC[1].A := UE;
  roleC[1].B := SEAF;
  roleC[1].C := AUSF;
  roleC[1].D := UDM;
  roleC[1].ausf := ausf;
  roleC[1].sucm := sucm;
  roleC[1].certC := certC;
  roleC[1].prekey := prekey;
  roleC[1].st := C1;
  roleC[1].commit := false;
  roleC[1].supi := anyNonce;
  roleC[1].ue := anyNonce;
  roleC[1].ue1 := anyNonce;
  roleC[1].certA := anyNonce;
  roleC[1].eapm := anyNonce;
  roleC[1].seafn := anyNonce;
  roleC[1].start := anyNonce;
  roleC[1].x10.msgType := tmp;
  roleC[1].x10.tmpPart := 0;
  roleC[1].x1.msgType := tmp;
  roleC[1].x1.tmpPart := 0;
  roleC[1].x2.msgType := tmp;
  roleC[1].x2.tmpPart := 0;
  roleC[1].x3.msgType := tmp;
  roleC[1].x3.tmpPart := 0;
  roleC[1].x4.msgType := tmp;
  roleC[1].x4.tmpPart := 0;
  roleC[1].x5.msgType := tmp;
  roleC[1].x5.tmpPart := 0;
  roleC[1].x6.msgType := tmp;
  roleC[1].x6.tmpPart := 0;
  roleC[1].x7.msgType := tmp;
  roleC[1].x7.tmpPart := 0;
  roleC[1].x8.msgType := tmp;
  roleC[1].x8.tmpPart := 0;
  roleC[1].x9.msgType := tmp;
  roleC[1].x9.tmpPart := 0;

  roleD[1].A := UE;
  roleD[1].B := SEAF;
  roleD[1].C := AUSF;
  roleD[1].D := UDM;
  roleD[1].start := start;
  roleD[1].st := D1;
  roleD[1].commit := false;
  roleD[1].supi := anyNonce;
  roleD[1].ue := anyNonce;
  roleD[1].ue1 := anyNonce;
  roleD[1].prekey := anyNonce;
  roleD[1].certA := anyNonce;
  roleD[1].eapm := anyNonce;
  roleD[1].seafn := anyNonce;
  roleD[1].ausf := anyNonce;
  roleD[1].sucm := anyNonce;
  roleD[1].certC := anyNonce;
  roleD[1].prekey := anyNonce;
  roleD[1].x10.msgType := tmp;
  roleD[1].x10.tmpPart := 0;
  roleD[1].x1.msgType := tmp;
  roleD[1].x1.tmpPart := 0;
  roleD[1].x2.msgType := tmp;
  roleD[1].x2.tmpPart := 0;
  roleD[1].x3.msgType := tmp;
  roleD[1].x3.tmpPart := 0;
  roleD[1].x4.msgType := tmp;
  roleD[1].x4.tmpPart := 0;
  roleD[1].x5.msgType := tmp;
  roleD[1].x5.tmpPart := 0;
  roleD[1].x6.msgType := tmp;
  roleD[1].x6.tmpPart := 0;
  roleD[1].x7.msgType := tmp;
  roleD[1].x7.tmpPart := 0;
  roleD[1].x8.msgType := tmp;
  roleD[1].x8.tmpPart := 0;
  roleD[1].x9.msgType := tmp;
  roleD[1].x9.tmpPart := 0;


---intruder.B := Bob;
  for i:chanNums do
    ch[i].empty := true;
  endfor;

  for i: indexType do
    emit[i]:=false;
  endfor;

  for i:indexType do
    msgs[i].msgType := null;
    msgs[i].length := 0;
  endfor;

  msg_end := 0;
  for i:indexType do
    pat1Set.content[i] := 0;
    sPat1Set.content[i] := 0;
    pat2Set.content[i] := 0;
    sPat2Set.content[i] := 0;
    pat3Set.content[i] := 0;
    sPat3Set.content[i] := 0;
    pat4Set.content[i] := 0;
    sPat4Set.content[i] := 0;
    pat5Set.content[i] := 0;
    sPat5Set.content[i] := 0;
    pat6Set.content[i] := 0;
    sPat6Set.content[i] := 0;
    pat7Set.content[i] := 0;
    sPat7Set.content[i] := 0;
    pat8Set.content[i] := 0;
    sPat8Set.content[i] := 0;
    pat9Set.content[i] := 0;
    sPat9Set.content[i] := 0;
    pat10Set.content[i] := 0;
    sPat10Set.content[i] := 0;
    pat11Set.content[i] := 0;
    sPat11Set.content[i] := 0;
    pat12Set.content[i] := 0;
    sPat12Set.content[i] := 0;
    pat13Set.content[i] := 0;
    sPat13Set.content[i] := 0;
    pat14Set.content[i] := 0;
    sPat14Set.content[i] := 0;
    pat15Set.content[i] := 0;
    sPat15Set.content[i] := 0;
    pat16Set.content[i] := 0;
    sPat16Set.content[i] := 0;
    pat17Set.content[i] := 0;
    sPat17Set.content[i] := 0;
    pat18Set.content[i] := 0;
    sPat18Set.content[i] := 0;
    pat19Set.content[i] := 0;
    sPat19Set.content[i] := 0;
    pat20Set.content[i] := 0;
    sPat20Set.content[i] := 0;
    pat21Set.content[i] := 0;
    sPat21Set.content[i] := 0;
    pat22Set.content[i] := 0;
    sPat22Set.content[i] := 0;
    pat23Set.content[i] := 0;
    sPat23Set.content[i] := 0;
    pat24Set.content[i] := 0;
    sPat24Set.content[i] := 0;
    pat1Set.length := 0;
    sPat1Set.length := 0;
    pat2Set.length := 0;
    sPat2Set.length := 0;
    pat3Set.length := 0;
    sPat3Set.length := 0;
    pat4Set.length := 0;
    sPat4Set.length := 0;
    pat5Set.length := 0;
    sPat5Set.length := 0;
    pat6Set.length := 0;
    sPat6Set.length := 0;
    pat7Set.length := 0;
    sPat7Set.length := 0;
    pat8Set.length := 0;
    sPat8Set.length := 0;
    pat9Set.length := 0;
    sPat9Set.length := 0;
    pat10Set.length := 0;
    sPat10Set.length := 0;
    pat11Set.length := 0;
    sPat11Set.length := 0;
    pat12Set.length := 0;
    sPat12Set.length := 0;
    pat13Set.length := 0;
    sPat13Set.length := 0;
    pat14Set.length := 0;
    sPat14Set.length := 0;
    pat15Set.length := 0;
    sPat15Set.length := 0;
    pat16Set.length := 0;
    sPat16Set.length := 0;
    pat17Set.length := 0;
    sPat17Set.length := 0;
    pat18Set.length := 0;
    sPat18Set.length := 0;
    pat19Set.length := 0;
    sPat19Set.length := 0;
    pat20Set.length := 0;
    sPat20Set.length := 0;
    pat21Set.length := 0;
    sPat21Set.length := 0;
    pat22Set.length := 0;
    sPat22Set.length := 0;
    pat23Set.length := 0;
    sPat23Set.length := 0;
    pat24Set.length := 0;
    sPat24Set.length := 0;
  endfor;
  for i:indexType do 
    Spy_known[i] := false;
  endfor;
  for i:indexType do
    A_known[i] := false;
  endfor;
  for i:indexType do
    B_known[i] := false;
  endfor;
  for i:indexType do
    C_known[i] := false;
  endfor;
  for i:indexType do
    D_known[i] := false;
  endfor;

  for i:indexType do 
    Spy_known[i] := false;
  endfor;
  msg_end:=msg_end+1;
  msgs[msg_end].msgType := key;
  msgs[msg_end].k.ag:=Intruder;
  msgs[msg_end].k.encType:=SK;
  msgs[msg_end].length := 1;
  pat3Set.length := pat3Set.length + 1; 
  pat3Set.content[pat3Set.length] :=msg_end;
  Spy_known[msg_end] := true;
    for i : roleANums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := key;
    msgs[msg_end].k.ag := roleA[i].A;
    msgs[msg_end].k.encType:=PK;
    msgs[msg_end].length := 1;
    pat3Set.length := pat3Set.length + 1;
    pat3Set.content[pat3Set.length] :=msg_end;
    Spy_known[msg_end] := true;
    A_known[msg_end] := true;
  endfor;
  for i : roleANums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := key;
    msgs[msg_end].k.ag := roleA[i].A;
    msgs[msg_end].k.encType:=SK;
    msgs[msg_end].length := 1;
    pat3Set.length := pat3Set.length + 1;
    pat3Set.content[pat3Set.length] :=msg_end;
    A_known[msg_end] := true;
  endfor;
  for i : roleBNums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := key;
    msgs[msg_end].k.ag := roleB[i].B;
    msgs[msg_end].k.encType:=PK;
    msgs[msg_end].length := 1;
    pat3Set.length := pat3Set.length + 1;
    pat3Set.content[pat3Set.length] :=msg_end;
    Spy_known[msg_end] := true;
    B_known[msg_end] := true;
  endfor;
  for i : roleBNums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := key;
    msgs[msg_end].k.ag := roleB[i].B;
    msgs[msg_end].k.encType:=SK;
    msgs[msg_end].length := 1;
    pat3Set.length := pat3Set.length + 1;
    pat3Set.content[pat3Set.length] :=msg_end;
    B_known[msg_end] := true;
  endfor;
  for i : roleCNums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := key;
    msgs[msg_end].k.ag := roleC[i].C;
    msgs[msg_end].k.encType:=PK;
    msgs[msg_end].length := 1;
    pat3Set.length := pat3Set.length + 1;
    pat3Set.content[pat3Set.length] :=msg_end;
    Spy_known[msg_end] := true;
    C_known[msg_end] := true;
  endfor;
  for i : roleCNums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := key;
    msgs[msg_end].k.ag := roleC[i].C;
    msgs[msg_end].k.encType:=SK;
    msgs[msg_end].length := 1;
    pat3Set.length := pat3Set.length + 1;
    pat3Set.content[pat3Set.length] :=msg_end;
    C_known[msg_end] := true;
  endfor;
  for i : roleDNums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := key;
    msgs[msg_end].k.ag := roleD[i].D;
    msgs[msg_end].k.encType:=PK;
    msgs[msg_end].length := 1;
    pat3Set.length := pat3Set.length + 1;
    pat3Set.content[pat3Set.length] :=msg_end;
    Spy_known[msg_end] := true;
    D_known[msg_end] := true;
  endfor;
  for i : roleDNums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := key;
    msgs[msg_end].k.ag := roleD[i].D;
    msgs[msg_end].k.encType:=SK;
    msgs[msg_end].length := 1;
    pat3Set.length := pat3Set.length + 1;
    pat3Set.content[pat3Set.length] :=msg_end;
    D_known[msg_end] := true;
  endfor;
  for i : roleBNums do
    constructSpat4(roleB[i].supi,roleB[i].ue,roleB[i].D, gnum);
  endfor;
  for i : roleBNums do
    constructSpat1(roleB[i].ue1, gnum);
  endfor;
  for i : roleBNums do
    constructSpat11(roleB[i].prekey,roleB[i].C,roleB[i].certA,roleB[i].start,roleB[i].ue1,roleB[i].ausf,roleB[i].certC,roleB[i].A, gnum);
  endfor;
  for i : roleBNums do
    constructSpat1(roleB[i].eapm, gnum);
  endfor;
  for i : roleCNums do
    constructSpat14(roleC[i].x1,roleC[i].seafn, gnum);
  endfor;
  for i : roleANums do
    constructSpat15(roleA[i].x2, gnum);
  endfor;
  for i : roleCNums do
    constructSpat16(roleC[i].x3, gnum);
  endfor;
  for i : roleANums do
    constructSpat19(roleA[i].x4,roleA[i].x5, gnum);
  endfor;
  for i : roleCNums do
    constructSpat24(roleC[i].x6,roleC[i].x7,roleC[i].x8,roleC[i].x9, gnum);
  endfor;
  for i : roleANums do
    constructSpat12(roleA[i].x10, gnum);
  endfor;
  for i : roleCNums do
    constructSpat1(roleC[i].eapm, gnum);
  endfor;
  for i : roleANums do
    constructSpat1(roleA[i].sucm, gnum);
  endfor;
  for i : roleDNums do
    constructSpat14(roleD[i].x1,roleD[i].seafn, gnum);
  endfor;
  for i : roleBNums do
    constructSpat1(roleB[i].start, gnum);
  endfor;
  for i : roleBNums do
    constructSpat2(roleB[i].ausf,roleB[i].certC, gnum);
  endfor;
  for i : roleBNums do
    constructSpat10(roleB[i].start,roleB[i].ue1,roleB[i].ausf,roleB[i].certC,roleB[i].prekey, gnum);
  endfor;
  for i : roleBNums do
    constructSpat1(roleB[i].sucm, gnum);
  endfor;
  for i : roleCNums do
    constructSpat1(roleC[i].start, gnum);
  endfor;

end;

invariant "secrecy1" 
forall i:indexType do
    (msgs[i].msgType=nonce & msgs[i].noncePart=prekey)
     ->
     Spy_known[i] = false
end;

invariant "secrecy3" 
forall i:indexType do
    (msgs[i].msgType=nonce & msgs[i].noncePart=supi)
     ->
     Spy_known[i] = false
end;

invariant "weakC"
  forall i: roleANums do
    roleA[i].commit = true 
    ->
    (exists j: roleCNums do
      ---roleC[j].commit = true &
      roleC[i].start = roleA[j].start
    endexists)
  endforall;
