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
  pat25Set: msgSet;
  sPat25Set: msgSet;
  pat26Set: msgSet;
  sPat26Set: msgSet;
  pat27Set: msgSet;
  sPat27Set: msgSet;
  pat28Set: msgSet;
  sPat28Set: msgSet;
  pat29Set: msgSet;
  sPat29Set: msgSet;
  pat30Set: msgSet;
  sPat30Set: msgSet;
  pat31Set: msgSet;
  sPat31Set: msgSet;
  pat32Set: msgSet;
  sPat32Set: msgSet;
  pat33Set: msgSet;
  sPat33Set: msgSet;
  pat34Set: msgSet;
  sPat34Set: msgSet;
  pat35Set: msgSet;
  sPat35Set: msgSet;
  pat36Set: msgSet;
  sPat36Set: msgSet;

  A_known : Array[indexType] of boolean;
  B_known : Array[indexType] of boolean;
  C_known : Array[indexType] of boolean;
  D_known : Array[indexType] of boolean;
  Spy_known: Array[indexType] of boolean;
  IntruEmit1 : boolean;
  IntruEmit2 : boolean;
  IntruEmit3 : boolean;
  IntruEmit4 : boolean;
  IntruEmit5 : boolean;
  IntruEmit6 : boolean;
  IntruEmit7 : boolean;
  IntruEmit8 : boolean;
  IntruEmit9 : boolean;
  IntruEmit10 : boolean;
  IntruEmit11 : boolean;
  IntruEmit12 : boolean;
  IntruEmit13 : boolean;
  IntruEmit14 : boolean;
  IntruEmit15 : boolean;
  IntruEmit16 : boolean;
  IntruEmit17 : boolean;
  IntruEmit18 : boolean;
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
function judge(msg:Message;ag:AgentType;msg1:Message) :boolean;
  begin
    if msg.msgType = aenc & msg1.msgType != tmp then 
      return msgs[msg.aencKey].k.ag = ag;
    elsif msg.msgType = aenc & msg1.msgType = tmp then 
      return true;
    elsif msg.msgType = senc then 
      if msgs[msg.sencKey].k.m =0 then 
        return (msgs[msg.sencKey].k.ag1 = ag |msgs[msg.sencKey].k.ag2 = ag) 
      endif;
    endif;
    return true;
  end;

--- Sorry, construct_function of this pattern has not been written!

--- Sorry, construct_function of this pattern has not been written!

function construct3By12(msgNo1,msgNo2:indexType):Message;
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

function constructIndex3By12(msgNo1,msgNo2:indexType):indexType;
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

function construct5By34(msgNo31, msgNo42:indexType):Message;
  var index: indexType;
      msg : Message;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = aenc) then
       if (msgs[i].aencMsg = msgNo31 & msgs[i].aencKey = msgNo42) then
         index := i;
         msg := msgs[index];
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg.msgType := aenc;
     msg.aencMsg := msgNo31;
     msg.aencKey := msgNo42;
     msg.length := 1;
   endif;
   return msg;
  end;

function constructIndex5By34(msgNo31, msgNo42:indexType):indexType;
  var index: indexType;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = aenc) then
       if (msgs[i].aencMsg = msgNo31 & msgs[i].aencKey = msgNo42) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     index := msg_end + 1;
   endif;
   return index;
  end;

--- Sorry, construct_function of this pattern has not been written!

--- Sorry, construct_function of this pattern has not been written!

--- Sorry, construct_function of this pattern has not been written!

--- Sorry, construct_function of this pattern has not been written!

function construct10By89(msgNo1,msgNo2:indexType):Message;
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

function constructIndex10By89(msgNo1,msgNo2:indexType):indexType;
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

function construct12By114(msgNo111, msgNo42:indexType):Message;
  var index: indexType;
      msg : Message;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = aenc) then
       if (msgs[i].aencMsg = msgNo111 & msgs[i].aencKey = msgNo42) then
         index := i;
         msg := msgs[index];
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg.msgType := aenc;
     msg.aencMsg := msgNo111;
     msg.aencKey := msgNo42;
     msg.length := 1;
   endif;
   return msg;
  end;

function constructIndex12By114(msgNo111, msgNo42:indexType):indexType;
  var index: indexType;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = aenc) then
       if (msgs[i].aencMsg = msgNo111 & msgs[i].aencKey = msgNo42) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     index := msg_end + 1;
   endif;
   return index;
  end;

--- Sorry, construct_function of this pattern has not been written!

function construct14By6789(msgNo1,msgNo2,msgNo3,msgNo4:indexType):Message;
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

function constructIndex14By6789(msgNo1,msgNo2,msgNo3,msgNo4:indexType):indexType;
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

function construct15By144(msgNo141, msgNo42:indexType):Message;
  var index: indexType;
      msg : Message;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = sign) then
       if (msgs[i].signMsg = msgNo141 & msgs[i].signKey = msgNo42) then
         index := i;
         msg := msgs[index];
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg.msgType := sign;
     msg.signMsg := msgNo141;
     msg.signKey := msgNo42;
     msg.length := 1;
   endif;
   return msg;
  end;

function constructIndex15By144(msgNo141, msgNo42:indexType):indexType;
  var index: indexType;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = sign) then
       if (msgs[i].signMsg = msgNo141 & msgs[i].signKey = msgNo42) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     index := msg_end + 1;
   endif;
   return index;
  end;

function construct16By7811(msgNo1,msgNo2,msgNo3:indexType):Message;
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

function constructIndex16By7811(msgNo1,msgNo2,msgNo3:indexType):indexType;
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

function construct17By16(msgNo161:indexType):Message;
  var index: indexType;
      msg : Message;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = hash) then
       if (msgs[i].hashMsg = msgNo161) then
         index := i;
         msg := msgs[index];
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg.msgType := hash;
     msg.hashMsg := msgNo161;
     msg.length := 1;
   endif;
   return msg;
  end;

function constructIndex17By16(msgNo161:indexType):indexType;
  var index: indexType;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = hash) then
       if (msgs[i].hashMsg = msgNo161) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     index := msg_end + 1;
   endif;
   return index;
  end;

function construct18By1417(msgNo141, msgNo172:indexType):Message;
  var index: indexType;
      msg : Message;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = senc) then
       if (msgs[i].sencMsg = msgNo141 & msgs[i].sencKey = msgNo172) then
         index := i;
         msg := msgs[index];
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg.msgType := senc;
     msg.sencMsg := msgNo141;
     msg.sencKey := msgNo172;
     msg.length := 1;
   endif;
   return msg;
  end;
function constructIndex18By1417(msgNo141, msgNo172:indexType):indexType;
  var index: indexType;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = senc) then
       if (msgs[i].sencMsg = msgNo141 & msgs[i].sencKey = msgNo172) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
      index:= msg_end + 1;
   endif;
   return index;
  end;
function construct19By12131518(msgNo1,msgNo2,msgNo3,msgNo4:indexType):Message;
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

function constructIndex19By12131518(msgNo1,msgNo2,msgNo3,msgNo4:indexType):indexType;
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

--- Sorry, construct_function of this pattern has not been written!

--- Sorry, construct_function of this pattern has not been written!

--- Sorry, construct_function of this pattern has not been written!

function construct25By2324(msgNo1,msgNo2:indexType):Message;
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

function constructIndex25By2324(msgNo1,msgNo2:indexType):indexType;
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

function construct30By2829(msgNo1,msgNo2:indexType):Message;
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

function constructIndex30By2829(msgNo1,msgNo2:indexType):indexType;
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

function construct35By31323334(msgNo1,msgNo2,msgNo3,msgNo4:indexType):Message;
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

function constructIndex35By31323334(msgNo1,msgNo2,msgNo3,msgNo4:indexType):indexType;
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

function construct36By6711(msgNo1,msgNo2,msgNo3:indexType):Message;
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

function constructIndex36By6711(msgNo1,msgNo2,msgNo3:indexType):indexType;
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
    if (msg.msgType = nonce & msg.noncePart = supi) then
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

---pat2: ue 
procedure lookAddPat2(ue:NonceType; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
      index:=0;
      for i: indexType do
        if(msgs[i].msgType=nonce) then
          if(msgs[i].noncePart=ue) then
            index:=i;
          endif;
        endif;
      endfor;
      if(index=0) then
        msg_end := msg_end + 1 ;
        index := msg_end;
        msgs[index].msgType := nonce;
        msgs[index].noncePart:=ue; 
        msgs[index].length := 1;
      endif;
      num:=index;
      msg:=msgs[index];
  end;

---pat2: ue 
procedure isPat2(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag1 := false;
    if (msg.msgType = nonce & msg.noncePart = ue) then
      flag1 := true;
    endif;
    flag := flag1;
  end;

---spat2: ue 
procedure constructSpat2(ue:NonceType; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = nonce) then
        if (msgs[i].noncePart = ue) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := nonce;
      msgs[index].noncePart := ue;
      msgs[index].length := 1;
    endif;
    sPat2Set.length := sPat2Set.length + 1;
    sPat2Set.content[sPat2Set.length] := index;
    num := index;
  end;

---pat3: supi.ue 
procedure lookAddPat3(supi:NonceType; ue:NonceType; Var msg:Message; Var num : indexType);
  Var msg1,msg2: Message;
     index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat1(supi, msg1, i1);
   lookAddPat2(ue, msg2, i2);
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

---pat3: supi.ue 
procedure isPat3(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     if(msg.msgType = concat) then
        isPat1(msgs[msg.concatPart[1]],flagPart1);
        isPat2(msgs[msg.concatPart[2]],flagPart2);
       if (flagPart1 & flagPart2) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---spat3: supi.ue 
procedure constructSpat3(supi:NonceType; ue:NonceType; Var num: indexType);
  Var i,index, i1, i2:indexType;
  begin
    index:=0;
    constructSpat1(supi, i1);
    constructSpat2(ue, i2);
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
    sPat3Set.length := sPat3Set.length + 1;
    sPat3Set.content[sPat3Set.length] := index;
    num := index;
  end;

---pat4: pk(D) 
procedure lookAddPat4(DPk:AgentType; Var msg:Message; Var num : indexType);
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

---pat4: pk(D) 
procedure isPat4(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag1 := false;
    if (msg.msgType = key & msg.k.encType = PK) then
      flag1 := true;
    endif;
    flag := flag1;
  end;

---spat4: pk(D) 
procedure constructSpat4(DPk:AgentType; Var num: indexType);
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
    sPat4Set.length := sPat4Set.length + 1;
    sPat4Set.content[sPat4Set.length] := index;
    num := index;
  end;

---pat5: aenc{supi.ue}pk(D) 
procedure lookAddPat5(supi:NonceType; ue:NonceType; DPk:AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat3(supi, ue,msg1,i1);
   lookAddPat4(DPk,msg2,i2);
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

---pat5: aenc{supi.ue}pk(D) 
procedure isPat5(msg:Message; Var flag:boolean);
  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1 := false;
    flagPart2 := false;
    if (msg.msgType = aenc) then
      isPat3(msgs[msg.aencMsg],flagPart1);
      isPat4(msgs[msg.aencKey],flagPart2);
      if (flagPart1 & flagPart2) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;

---spat5: aenc{supi.ue}pk(D) 
procedure constructSpat5(supi:NonceType; ue:NonceType; DPk:AgentType; Var num: indexType);
  Var i,index,i1,i2:indexType;
  begin
    index:=0;
    constructSpat3(supi, ue, i1);
    constructSpat4(DPk, i2);
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

---pat6: start 
procedure lookAddPat6(start:NonceType; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
      index:=0;
      for i: indexType do
        if(msgs[i].msgType=nonce) then
          if(msgs[i].noncePart=start) then
            index:=i;
          endif;
        endif;
      endfor;
      if(index=0) then
        msg_end := msg_end + 1 ;
        index := msg_end;
        msgs[index].msgType := nonce;
        msgs[index].noncePart:=start; 
        msgs[index].length := 1;
      endif;
      num:=index;
      msg:=msgs[index];
  end;

---pat6: start 
procedure isPat6(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag1 := false;
    if (msg.msgType = nonce & msg.noncePart = start) then
      flag1 := true;
    endif;
    flag := flag1;
  end;

---spat6: start 
procedure constructSpat6(start:NonceType; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = nonce) then
        if (msgs[i].noncePart = start) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := nonce;
      msgs[index].noncePart := start;
      msgs[index].length := 1;
    endif;
    sPat6Set.length := sPat6Set.length + 1;
    sPat6Set.content[sPat6Set.length] := index;
    num := index;
  end;

---pat7: ue1 
procedure lookAddPat7(ue1:NonceType; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
      index:=0;
      for i: indexType do
        if(msgs[i].msgType=nonce) then
          if(msgs[i].noncePart=ue1) then
            index:=i;
          endif;
        endif;
      endfor;
      if(index=0) then
        msg_end := msg_end + 1 ;
        index := msg_end;
        msgs[index].msgType := nonce;
        msgs[index].noncePart:=ue1; 
        msgs[index].length := 1;
      endif;
      num:=index;
      msg:=msgs[index];
  end;

---pat7: ue1 
procedure isPat7(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag1 := false;
    if (msg.msgType = nonce & msg.noncePart = ue1) then
      flag1 := true;
    endif;
    flag := flag1;
  end;

---spat7: ue1 
procedure constructSpat7(ue1:NonceType; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = nonce) then
        if (msgs[i].noncePart = ue1) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := nonce;
      msgs[index].noncePart := ue1;
      msgs[index].length := 1;
    endif;
    sPat7Set.length := sPat7Set.length + 1;
    sPat7Set.content[sPat7Set.length] := index;
    num := index;
  end;

---pat8: ausf 
procedure lookAddPat8(ausf:NonceType; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
      index:=0;
      for i: indexType do
        if(msgs[i].msgType=nonce) then
          if(msgs[i].noncePart=ausf) then
            index:=i;
          endif;
        endif;
      endfor;
      if(index=0) then
        msg_end := msg_end + 1 ;
        index := msg_end;
        msgs[index].msgType := nonce;
        msgs[index].noncePart:=ausf; 
        msgs[index].length := 1;
      endif;
      num:=index;
      msg:=msgs[index];
  end;

---pat8: ausf 
procedure isPat8(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag1 := false;
    if (msg.msgType = nonce & msg.noncePart = ausf) then
      flag1 := true;
    endif;
    flag := flag1;
  end;

---spat8: ausf 
procedure constructSpat8(ausf:NonceType; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = nonce) then
        if (msgs[i].noncePart = ausf) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := nonce;
      msgs[index].noncePart := ausf;
      msgs[index].length := 1;
    endif;
    sPat8Set.length := sPat8Set.length + 1;
    sPat8Set.content[sPat8Set.length] := index;
    num := index;
  end;

---pat9: certC 
procedure lookAddPat9(certC:NonceType; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
      index:=0;
      for i: indexType do
        if(msgs[i].msgType=nonce) then
          if(msgs[i].noncePart=certC) then
            index:=i;
          endif;
        endif;
      endfor;
      if(index=0) then
        msg_end := msg_end + 1 ;
        index := msg_end;
        msgs[index].msgType := nonce;
        msgs[index].noncePart:=certC; 
        msgs[index].length := 1;
      endif;
      num:=index;
      msg:=msgs[index];
  end;

---pat9: certC 
procedure isPat9(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag1 := false;
    if (msg.msgType = nonce & msg.noncePart = certC) then
      flag1 := true;
    endif;
    flag := flag1;
  end;

---spat9: certC 
procedure constructSpat9(certC:NonceType; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = nonce) then
        if (msgs[i].noncePart = certC) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := nonce;
      msgs[index].noncePart := certC;
      msgs[index].length := 1;
    endif;
    sPat9Set.length := sPat9Set.length + 1;
    sPat9Set.content[sPat9Set.length] := index;
    num := index;
  end;

---pat10: ausf.certC 
procedure lookAddPat10(ausf:NonceType; certC:NonceType; Var msg:Message; Var num : indexType);
  Var msg1,msg2: Message;
     index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat8(ausf, msg1, i1);
   lookAddPat9(certC, msg2, i2);
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

---pat10: ausf.certC 
procedure isPat10(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     if(msg.msgType = concat) then
        isPat8(msgs[msg.concatPart[1]],flagPart1);
        isPat9(msgs[msg.concatPart[2]],flagPart2);
       if (flagPart1 & flagPart2) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---spat10: ausf.certC 
procedure constructSpat10(ausf:NonceType; certC:NonceType; Var num: indexType);
  Var i,index, i1, i2:indexType;
  begin
    index:=0;
    constructSpat8(ausf, i1);
    constructSpat9(certC, i2);
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
    sPat10Set.length := sPat10Set.length + 1;
    sPat10Set.content[sPat10Set.length] := index;
    num := index;
  end;

---pat11: prekey 
procedure lookAddPat11(prekey:NonceType; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
      index:=0;
      for i: indexType do
        if(msgs[i].msgType=nonce) then
          if(msgs[i].noncePart=prekey) then
            index:=i;
          endif;
        endif;
      endfor;
      if(index=0) then
        msg_end := msg_end + 1 ;
        index := msg_end;
        msgs[index].msgType := nonce;
        msgs[index].noncePart:=prekey; 
        msgs[index].length := 1;
      endif;
      num:=index;
      msg:=msgs[index];
  end;

---pat11: prekey 
procedure isPat11(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag1 := false;
    if (msg.msgType = nonce & msg.noncePart = prekey) then
      flag1 := true;
    endif;
    flag := flag1;
  end;

---spat11: prekey 
procedure constructSpat11(prekey:NonceType; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = nonce) then
        if (msgs[i].noncePart = prekey) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := nonce;
      msgs[index].noncePart := prekey;
      msgs[index].length := 1;
    endif;
    sPat11Set.length := sPat11Set.length + 1;
    sPat11Set.content[sPat11Set.length] := index;
    num := index;
  end;

---pat12: aenc{prekey}pk(C) 
procedure lookAddPat12(prekey:NonceType; CPk:AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat11(prekey,msg1,i1);
   lookAddPat4(CPk,msg2,i2);
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

---pat12: aenc{prekey}pk(C) 
procedure isPat12(msg:Message; Var flag:boolean);
  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1 := false;
    flagPart2 := false;
    if (msg.msgType = aenc) then
      isPat11(msgs[msg.aencMsg],flagPart1);
      isPat4(msgs[msg.aencKey],flagPart2);
      if (flagPart1 & flagPart2) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;

---spat12: aenc{prekey}pk(C) 
procedure constructSpat12(prekey:NonceType; CPk:AgentType; Var num: indexType);
  Var i,index,i1,i2:indexType;
  begin
    index:=0;
    constructSpat11(prekey, i1);
    constructSpat4(CPk, i2);
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
    sPat12Set.length := sPat12Set.length + 1;
    sPat12Set.content[sPat12Set.length] := index;
    num := index;
  end;

---pat13: certA 
procedure lookAddPat13(certA:NonceType; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
      index:=0;
      for i: indexType do
        if(msgs[i].msgType=nonce) then
          if(msgs[i].noncePart=certA) then
            index:=i;
          endif;
        endif;
      endfor;
      if(index=0) then
        msg_end := msg_end + 1 ;
        index := msg_end;
        msgs[index].msgType := nonce;
        msgs[index].noncePart:=certA; 
        msgs[index].length := 1;
      endif;
      num:=index;
      msg:=msgs[index];
  end;

---pat13: certA 
procedure isPat13(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag1 := false;
    if (msg.msgType = nonce & msg.noncePart = certA) then
      flag1 := true;
    endif;
    flag := flag1;
  end;

---spat13: certA 
procedure constructSpat13(certA:NonceType; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = nonce) then
        if (msgs[i].noncePart = certA) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := nonce;
      msgs[index].noncePart := certA;
      msgs[index].length := 1;
    endif;
    sPat13Set.length := sPat13Set.length + 1;
    sPat13Set.content[sPat13Set.length] := index;
    num := index;
  end;

---pat14: start.ue1.ausf.certC 
procedure lookAddPat14(start:NonceType; ue1:NonceType; ausf:NonceType; certC:NonceType; Var msg:Message; Var num : indexType);
  Var msg1,msg2,msg3,msg4: Message;
     index,i1,i2,i3,i4:indexType;
  begin
   index:=0;
   lookAddPat6(start, msg1, i1);
   lookAddPat7(ue1, msg2, i2);
   lookAddPat8(ausf, msg3, i3);
   lookAddPat9(certC, msg4, i4);
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

---pat14: start.ue1.ausf.certC 
procedure isPat14(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2,flagPart3,flagPart4: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     flagPart3 := false;
     flagPart4 := false;
     if(msg.msgType = concat) then
        isPat6(msgs[msg.concatPart[1]],flagPart1);
        isPat7(msgs[msg.concatPart[2]],flagPart2);
        isPat8(msgs[msg.concatPart[3]],flagPart3);
        isPat9(msgs[msg.concatPart[4]],flagPart4);
       if (flagPart1 & flagPart2 & flagPart3 & flagPart4) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---spat14: start.ue1.ausf.certC 
procedure constructSpat14(start:NonceType; ue1:NonceType; ausf:NonceType; certC:NonceType; Var num: indexType);
  Var i,index, i1, i2, i3, i4:indexType;
  begin
    index:=0;
    constructSpat6(start, i1);
    constructSpat7(ue1, i2);
    constructSpat8(ausf, i3);
    constructSpat9(certC, i4);
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
    sPat14Set.length := sPat14Set.length + 1;
    sPat14Set.content[sPat14Set.length] := index;
    num := index;
  end;

---pat15: sign(start.ue1.ausf.certC,sk(A)) 
procedure lookAddPat15(start:NonceType; ue1:NonceType; ausf:NonceType; certC:NonceType; ASk:AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat14(start, ue1, ausf, certC,msg1,i1);
   lookAddPat4(ASk,msg2,i2);
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

---pat15: sign(start.ue1.ausf.certC,sk(A)) 
procedure isPat15(msg:Message; Var flag:boolean);
  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1 := false;
    flagPart2 := false;
    if (msg.msgType = sign) then
      isPat14(msgs[msg.signMsg],flagPart1);
      isPat4(msgs[msg.signKey],flagPart2);
      if (flagPart1 & flagPart2) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;

---spat15: sign(start.ue1.ausf.certC,sk(A)) 
procedure constructSpat15(start:NonceType; ue1:NonceType; ausf:NonceType; certC:NonceType; ASk:AgentType; Var num: indexType);
  Var i,index,i1,i2:indexType;
  begin
    index:=0;
    constructSpat14(start, ue1, ausf, certC, i1);
    constructSpat4(ASk, i2);
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
    sPat15Set.length := sPat15Set.length + 1;
    sPat15Set.content[sPat15Set.length] := index;
    num := index;
  end;

---pat16: ue1.ausf.prekey 
procedure lookAddPat16(ue1:NonceType; ausf:NonceType; prekey:NonceType; Var msg:Message; Var num : indexType);
  Var msg1,msg2,msg3: Message;
     index,i1,i2,i3:indexType;
  begin
   index:=0;
   lookAddPat7(ue1, msg1, i1);
   lookAddPat8(ausf, msg2, i2);
   lookAddPat11(prekey, msg3, i3);
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

---pat16: ue1.ausf.prekey 
procedure isPat16(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2,flagPart3: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     flagPart3 := false;
     if(msg.msgType = concat) then
        isPat7(msgs[msg.concatPart[1]],flagPart1);
        isPat8(msgs[msg.concatPart[2]],flagPart2);
        isPat11(msgs[msg.concatPart[3]],flagPart3);
       if (flagPart1 & flagPart2 & flagPart3) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---spat16: ue1.ausf.prekey 
procedure constructSpat16(ue1:NonceType; ausf:NonceType; prekey:NonceType; Var num: indexType);
  Var i,index, i1, i2, i3:indexType;
  begin
    index:=0;
    constructSpat7(ue1, i1);
    constructSpat8(ausf, i2);
    constructSpat11(prekey, i3);
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
    sPat16Set.length := sPat16Set.length + 1;
    sPat16Set.content[sPat16Set.length] := index;
    num := index;
  end;

---pat17: hash(ue1.ausf.prekey) 
procedure lookAddPat17(ue1:NonceType; ausf:NonceType; prekey:NonceType; Var msg:Message; Var num : indexType);
  Var msg1: Message;
      index,i1:indexType;
  begin
   index:=0;
   lookAddPat16(ue1, ausf, prekey,msg1,i1);
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

---pat17: hash(ue1.ausf.prekey) 
procedure isPat17(msg:Message; Var flag:boolean);
  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1 := false;
    if (msg.msgType = hash) then
      isPat16(msgs[msg.hashMsg],flagPart1);
      if (flagPart1) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;

---spat17: hash(ue1.ausf.prekey) 
procedure constructSpat17(ue1:NonceType; ausf:NonceType; prekey:NonceType; Var num: indexType);
  Var i,index,i1:indexType;
  begin
    index:=0;
    constructSpat16(ue1, ausf, prekey, i1);
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
    sPat17Set.length := sPat17Set.length + 1;
    sPat17Set.content[sPat17Set.length] := index;
    num := index;
  end;

---pat18: senc{start.ue1.ausf.certC}hash(ue1.ausf.prekey) 
procedure lookAddPat18(start:NonceType; ue1:NonceType; ausf:NonceType; certC:NonceType; prekey:NonceType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat14(start, ue1, ausf, certC,msg1,i1);
   lookAddPat17(ue1, ausf, prekey,msg2,i2);
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

---pat18: senc{start.ue1.ausf.certC}hash(ue1.ausf.prekey) 
procedure isPat18(msg:Message; Var flag:boolean);
  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1:=false;
    flagPart2:=false;
    if msg.msgType = senc then
      isPat14(msgs[msg.sencMsg],flagPart1);
      isPat17(msgs[msg.sencKey],flagPart2);
      if flagPart1 & flagPart2 then
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;

---spat18: senc{start.ue1.ausf.certC}hash(ue1.ausf.prekey) 
procedure constructSpat18(start:NonceType; ue1:NonceType; ausf:NonceType; certC:NonceType; prekey:NonceType; Var num: indexType);
  Var i,index,i1,i2:indexType;
  begin
    index:=0;
    constructSpat14(start, ue1, ausf, certC, i1);
    constructSpat17(ue1, ausf, prekey, i2);
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
    sPat18Set.length := sPat18Set.length + 1;
    sPat18Set.content[sPat18Set.length] := index;
    num := index;
  end;

---pat19: aenc{prekey}pk(C).certA.sign(start.ue1.ausf.certC,sk(A)).senc{start.ue1.ausf.certC}hash(ue1.ausf.prekey) 
procedure lookAddPat19(prekey:NonceType; CPk:AgentType; certA:NonceType; start:NonceType; ue1:NonceType; ausf:NonceType; certC:NonceType; ASk:AgentType; Var msg:Message; Var num : indexType);
  Var msg1,msg2,msg3,msg4: Message;
     index,i1,i2,i3,i4:indexType;
  begin
   index:=0;
   lookAddPat12(prekey, CPk, msg1, i1);
   lookAddPat13(certA, msg2, i2);
   lookAddPat15(start, ue1, ausf, certC, ASk, msg3, i3);
   lookAddPat18(start, ue1, ausf, certC, prekey, msg4, i4);
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

---pat19: aenc{prekey}pk(C).certA.sign(start.ue1.ausf.certC,sk(A)).senc{start.ue1.ausf.certC}hash(ue1.ausf.prekey) 
procedure isPat19(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2,flagPart3,flagPart4: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     flagPart3 := false;
     flagPart4 := false;
     if(msg.msgType = concat) then
        isPat12(msgs[msg.concatPart[1]],flagPart1);
        isPat13(msgs[msg.concatPart[2]],flagPart2);
        isPat15(msgs[msg.concatPart[3]],flagPart3);
        isPat18(msgs[msg.concatPart[4]],flagPart4);
       if (flagPart1 & flagPart2 & flagPart3 & flagPart4) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---spat19: aenc{prekey}pk(C).certA.sign(start.ue1.ausf.certC,sk(A)).senc{start.ue1.ausf.certC}hash(ue1.ausf.prekey) 
procedure constructSpat19(prekey:NonceType; CPk:AgentType; certA:NonceType; start:NonceType; ue1:NonceType; ausf:NonceType; certC:NonceType; ASk:AgentType; Var num: indexType);
  Var i,index, i1, i2, i3, i4:indexType;
  begin
    index:=0;
    constructSpat12(prekey, CPk, i1);
    constructSpat13(certA, i2);
    constructSpat15(start, ue1, ausf, certC, ASk, i3);
    constructSpat18(start, ue1, ausf, certC, prekey, i4);
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
    sPat19Set.length := sPat19Set.length + 1;
    sPat19Set.content[sPat19Set.length] := index;
    num := index;
  end;

---pat20: x10 
procedure lookAddPat20(x10:Message; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
    get_msgNo(msgs[x10.tmpPart],index); 
    num:=index;
    msg:=msgs[index];
  end;

---pat20: x10 
procedure isPat20(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag := true;
  end;

---spat20: x10 
procedure constructSpat20(x10:Message; Var num: indexType);
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
    sPat20Set.length := sPat20Set.length + 1;
    sPat20Set.content[sPat20Set.length] := index;
    num := index;
  end;

---pat21: eapm 
procedure lookAddPat21(eapm:NonceType; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
      index:=0;
      for i: indexType do
        if(msgs[i].msgType=nonce) then
          if(msgs[i].noncePart=eapm) then
            index:=i;
          endif;
        endif;
      endfor;
      if(index=0) then
        msg_end := msg_end + 1 ;
        index := msg_end;
        msgs[index].msgType := nonce;
        msgs[index].noncePart:=eapm; 
        msgs[index].length := 1;
      endif;
      num:=index;
      msg:=msgs[index];
  end;

---pat21: eapm 
procedure isPat21(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag1 := false;
    if (msg.msgType = nonce & msg.noncePart = eapm) then
      flag1 := true;
    endif;
    flag := flag1;
  end;

---spat21: eapm 
procedure constructSpat21(eapm:NonceType; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = nonce) then
        if (msgs[i].noncePart = eapm) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := nonce;
      msgs[index].noncePart := eapm;
      msgs[index].length := 1;
    endif;
    sPat21Set.length := sPat21Set.length + 1;
    sPat21Set.content[sPat21Set.length] := index;
    num := index;
  end;

---pat22: sucm 
procedure lookAddPat22(sucm:NonceType; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
      index:=0;
      for i: indexType do
        if(msgs[i].msgType=nonce) then
          if(msgs[i].noncePart=sucm) then
            index:=i;
          endif;
        endif;
      endfor;
      if(index=0) then
        msg_end := msg_end + 1 ;
        index := msg_end;
        msgs[index].msgType := nonce;
        msgs[index].noncePart:=sucm; 
        msgs[index].length := 1;
      endif;
      num:=index;
      msg:=msgs[index];
  end;

---pat22: sucm 
procedure isPat22(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag1 := false;
    if (msg.msgType = nonce & msg.noncePart = sucm) then
      flag1 := true;
    endif;
    flag := flag1;
  end;

---spat22: sucm 
procedure constructSpat22(sucm:NonceType; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = nonce) then
        if (msgs[i].noncePart = sucm) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := nonce;
      msgs[index].noncePart := sucm;
      msgs[index].length := 1;
    endif;
    sPat22Set.length := sPat22Set.length + 1;
    sPat22Set.content[sPat22Set.length] := index;
    num := index;
  end;

---pat23: x1 
procedure lookAddPat23(x1:Message; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
    get_msgNo(msgs[x1.tmpPart],index); 
    num:=index;
    msg:=msgs[index];
  end;

---pat23: x1 
procedure isPat23(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag := true;
  end;

---spat23: x1 
procedure constructSpat23(x1:Message; Var num: indexType);
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
    sPat23Set.length := sPat23Set.length + 1;
    sPat23Set.content[sPat23Set.length] := index;
    num := index;
  end;

---pat24: seafn 
procedure lookAddPat24(seafn:NonceType; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
      index:=0;
      for i: indexType do
        if(msgs[i].msgType=nonce) then
          if(msgs[i].noncePart=seafn) then
            index:=i;
          endif;
        endif;
      endfor;
      if(index=0) then
        msg_end := msg_end + 1 ;
        index := msg_end;
        msgs[index].msgType := nonce;
        msgs[index].noncePart:=seafn; 
        msgs[index].length := 1;
      endif;
      num:=index;
      msg:=msgs[index];
  end;

---pat24: seafn 
procedure isPat24(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag1 := false;
    if (msg.msgType = nonce & msg.noncePart = seafn) then
      flag1 := true;
    endif;
    flag := flag1;
  end;

---spat24: seafn 
procedure constructSpat24(seafn:NonceType; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = nonce) then
        if (msgs[i].noncePart = seafn) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := nonce;
      msgs[index].noncePart := seafn;
      msgs[index].length := 1;
    endif;
    sPat24Set.length := sPat24Set.length + 1;
    sPat24Set.content[sPat24Set.length] := index;
    num := index;
  end;

---pat25: x1.seafn 
procedure lookAddPat25(x1:Message; seafn:NonceType; Var msg:Message; Var num : indexType);
  Var msg1,msg2: Message;
     index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat23(x1, msg1, i1);
   lookAddPat24(seafn, msg2, i2);
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

---pat25: x1.seafn 
procedure isPat25(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     if(msg.msgType = concat) then
        isPat23(msgs[msg.concatPart[1]],flagPart1);
        isPat24(msgs[msg.concatPart[2]],flagPart2);
       if (flagPart1 & flagPart2) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---spat25: x1.seafn 
procedure constructSpat25(x1:Message; seafn:NonceType; Var num: indexType);
  Var i,index, i1, i2:indexType;
  begin
    index:=0;
    constructSpat23(x1, i1);
    constructSpat24(seafn, i2);
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
    sPat25Set.length := sPat25Set.length + 1;
    sPat25Set.content[sPat25Set.length] := index;
    num := index;
  end;

---pat26: x2 
procedure lookAddPat26(x2:Message; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
    get_msgNo(msgs[x2.tmpPart],index); 
    num:=index;
    msg:=msgs[index];
  end;

---pat26: x2 
procedure isPat26(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag := true;
  end;

---spat26: x2 
procedure constructSpat26(x2:Message; Var num: indexType);
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
    sPat26Set.length := sPat26Set.length + 1;
    sPat26Set.content[sPat26Set.length] := index;
    num := index;
  end;

---pat27: x3 
procedure lookAddPat27(x3:Message; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
    get_msgNo(msgs[x3.tmpPart],index); 
    num:=index;
    msg:=msgs[index];
  end;

---pat27: x3 
procedure isPat27(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag := true;
  end;

---spat27: x3 
procedure constructSpat27(x3:Message; Var num: indexType);
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
    sPat27Set.length := sPat27Set.length + 1;
    sPat27Set.content[sPat27Set.length] := index;
    num := index;
  end;

---pat28: x4 
procedure lookAddPat28(x4:Message; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
    get_msgNo(msgs[x4.tmpPart],index); 
    num:=index;
    msg:=msgs[index];
  end;

---pat28: x4 
procedure isPat28(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag := true;
  end;

---spat28: x4 
procedure constructSpat28(x4:Message; Var num: indexType);
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
    sPat28Set.length := sPat28Set.length + 1;
    sPat28Set.content[sPat28Set.length] := index;
    num := index;
  end;

---pat29: x5 
procedure lookAddPat29(x5:Message; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
    get_msgNo(msgs[x5.tmpPart],index); 
    num:=index;
    msg:=msgs[index];
  end;

---pat29: x5 
procedure isPat29(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag := true;
  end;

---spat29: x5 
procedure constructSpat29(x5:Message; Var num: indexType);
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
    sPat29Set.length := sPat29Set.length + 1;
    sPat29Set.content[sPat29Set.length] := index;
    num := index;
  end;

---pat30: x4.x5 
procedure lookAddPat30(x4:Message; x5:Message; Var msg:Message; Var num : indexType);
  Var msg1,msg2: Message;
     index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat28(x4, msg1, i1);
   lookAddPat29(x5, msg2, i2);
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

---pat30: x4.x5 
procedure isPat30(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     if(msg.msgType = concat) then
        isPat28(msgs[msg.concatPart[1]],flagPart1);
        isPat29(msgs[msg.concatPart[2]],flagPart2);
       if (flagPart1 & flagPart2) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---spat30: x4.x5 
procedure constructSpat30(x4:Message; x5:Message; Var num: indexType);
  Var i,index, i1, i2:indexType;
  begin
    index:=0;
    constructSpat28(x4, i1);
    constructSpat29(x5, i2);
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
    sPat30Set.length := sPat30Set.length + 1;
    sPat30Set.content[sPat30Set.length] := index;
    num := index;
  end;

---pat31: x6 
procedure lookAddPat31(x6:Message; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
    get_msgNo(msgs[x6.tmpPart],index); 
    num:=index;
    msg:=msgs[index];
  end;

---pat31: x6 
procedure isPat31(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag := true;
  end;

---spat31: x6 
procedure constructSpat31(x6:Message; Var num: indexType);
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
    sPat31Set.length := sPat31Set.length + 1;
    sPat31Set.content[sPat31Set.length] := index;
    num := index;
  end;

---pat32: x7 
procedure lookAddPat32(x7:Message; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
    get_msgNo(msgs[x7.tmpPart],index); 
    num:=index;
    msg:=msgs[index];
  end;

---pat32: x7 
procedure isPat32(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag := true;
  end;

---spat32: x7 
procedure constructSpat32(x7:Message; Var num: indexType);
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
    sPat32Set.length := sPat32Set.length + 1;
    sPat32Set.content[sPat32Set.length] := index;
    num := index;
  end;

---pat33: x8 
procedure lookAddPat33(x8:Message; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
    get_msgNo(msgs[x8.tmpPart],index); 
    num:=index;
    msg:=msgs[index];
  end;

---pat33: x8 
procedure isPat33(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag := true;
  end;

---spat33: x8 
procedure constructSpat33(x8:Message; Var num: indexType);
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
    sPat33Set.length := sPat33Set.length + 1;
    sPat33Set.content[sPat33Set.length] := index;
    num := index;
  end;

---pat34: x9 
procedure lookAddPat34(x9:Message; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
    get_msgNo(msgs[x9.tmpPart],index); 
    num:=index;
    msg:=msgs[index];
  end;

---pat34: x9 
procedure isPat34(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag := true;
  end;

---spat34: x9 
procedure constructSpat34(x9:Message; Var num: indexType);
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
    sPat34Set.length := sPat34Set.length + 1;
    sPat34Set.content[sPat34Set.length] := index;
    num := index;
  end;

---pat35: x6.x7.x8.x9 
procedure lookAddPat35(x6:Message; x7:Message; x8:Message; x9:Message; Var msg:Message; Var num : indexType);
  Var msg1,msg2,msg3,msg4: Message;
     index,i1,i2,i3,i4:indexType;
  begin
   index:=0;
   lookAddPat31(x6, msg1, i1);
   lookAddPat32(x7, msg2, i2);
   lookAddPat33(x8, msg3, i3);
   lookAddPat34(x9, msg4, i4);
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

---pat35: x6.x7.x8.x9 
procedure isPat35(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2,flagPart3,flagPart4: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     flagPart3 := false;
     flagPart4 := false;
     if(msg.msgType = concat) then
        isPat31(msgs[msg.concatPart[1]],flagPart1);
        isPat32(msgs[msg.concatPart[2]],flagPart2);
        isPat33(msgs[msg.concatPart[3]],flagPart3);
        isPat34(msgs[msg.concatPart[4]],flagPart4);
       if (flagPart1 & flagPart2 & flagPart3 & flagPart4) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---spat35: x6.x7.x8.x9 
procedure constructSpat35(x6:Message; x7:Message; x8:Message; x9:Message; Var num: indexType);
  Var i,index, i1, i2, i3, i4:indexType;
  begin
    index:=0;
    constructSpat31(x6, i1);
    constructSpat32(x7, i2);
    constructSpat33(x8, i3);
    constructSpat34(x9, i4);
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
    sPat35Set.length := sPat35Set.length + 1;
    sPat35Set.content[sPat35Set.length] := index;
    num := index;
  end;

---pat36: start.ue1.prekey 
procedure lookAddPat36(start:NonceType; ue1:NonceType; prekey:NonceType; Var msg:Message; Var num : indexType);
  Var msg1,msg2,msg3: Message;
     index,i1,i2,i3:indexType;
  begin
   index:=0;
   lookAddPat6(start, msg1, i1);
   lookAddPat7(ue1, msg2, i2);
   lookAddPat11(prekey, msg3, i3);
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

---pat36: start.ue1.prekey 
procedure isPat36(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2,flagPart3: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     flagPart3 := false;
     if(msg.msgType = concat) then
        isPat6(msgs[msg.concatPart[1]],flagPart1);
        isPat7(msgs[msg.concatPart[2]],flagPart2);
        isPat11(msgs[msg.concatPart[3]],flagPart3);
       if (flagPart1 & flagPart2 & flagPart3) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---spat36: start.ue1.prekey 
procedure constructSpat36(start:NonceType; ue1:NonceType; prekey:NonceType; Var num: indexType);
  Var i,index, i1, i2, i3:indexType;
  begin
    index:=0;
    constructSpat6(start, i1);
    constructSpat7(ue1, i2);
    constructSpat11(prekey, i3);
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
    sPat36Set.length := sPat36Set.length + 1;
    sPat36Set.content[sPat36Set.length] := index;
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
procedure cons2(ue:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat2(ue,msg,num);
  end;
procedure destruct2(msg:Message; Var ue:NonceType);
  begin
    ue:=msg.noncePart;
  end;
procedure cons3(supi:NonceType; ue:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat3(supi, ue,msg,num);
  end;
procedure destruct3(msg:Message; Var supi:NonceType; Var ue:NonceType);
  Var msgNum1,msgNum2: Message;
      k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    supi := msgNum1.noncePart;
    msgNum2 := msgs[msg.concatPart[2]];
    ue := msgNum2.noncePart
  end;
procedure cons4(DPk:AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat4(DPk,msg,num);
  end;
procedure cons5(supi:NonceType; ue:NonceType; DPk:AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat5(supi, ue, DPk,msg,num);
  end;
procedure destruct5(msg:Message; Var supi:NonceType; Var ue:NonceType; Var DPk:AgentType);
  var k1:KeyType;
      aencMsg:Message;
      begin
    clear aencMsg;
    k1:=msgs[msg.aencKey].k;
    DPk := k1.ag;
    aencMsg:=msgs[msg.aencMsg];
    destruct3(aencMsg,supi, ue);
  end;
procedure cons6(start:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat6(start,msg,num);
  end;
procedure destruct6(msg:Message; Var start:NonceType);
  begin
    start:=msg.noncePart;
  end;
procedure cons7(ue1:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat7(ue1,msg,num);
  end;
procedure destruct7(msg:Message; Var ue1:NonceType);
  begin
    ue1:=msg.noncePart;
  end;
procedure cons8(ausf:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat8(ausf,msg,num);
  end;
procedure destruct8(msg:Message; Var ausf:NonceType);
  begin
    ausf:=msg.noncePart;
  end;
procedure cons9(certC:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat9(certC,msg,num);
  end;
procedure destruct9(msg:Message; Var certC:NonceType);
  begin
    certC:=msg.noncePart;
  end;
procedure cons10(ausf:NonceType; certC:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat10(ausf, certC,msg,num);
  end;
procedure destruct10(msg:Message; Var ausf:NonceType; Var certC:NonceType);
  Var msgNum1,msgNum2: Message;
      k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    ausf := msgNum1.noncePart;
    msgNum2 := msgs[msg.concatPart[2]];
    certC := msgNum2.noncePart
  end;
procedure cons11(prekey:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat11(prekey,msg,num);
  end;
procedure destruct11(msg:Message; Var prekey:NonceType);
  begin
    prekey:=msg.noncePart;
  end;
procedure cons12(prekey:NonceType; CPk:AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat12(prekey, CPk,msg,num);
  end;
procedure destruct12(msg:Message; Var prekey:NonceType; Var CPk:AgentType);
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
procedure cons13(certA:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat13(certA,msg,num);
  end;
procedure destruct13(msg:Message; Var certA:NonceType);
  begin
    certA:=msg.noncePart;
  end;
procedure cons14(start:NonceType; ue1:NonceType; ausf:NonceType; certC:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat14(start, ue1, ausf, certC,msg,num);
  end;
procedure destruct14(msg:Message; Var start:NonceType; Var ue1:NonceType; Var ausf:NonceType; Var certC:NonceType);
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
procedure cons15(start:NonceType; ue1:NonceType; ausf:NonceType; certC:NonceType; ASk:AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat15(start, ue1, ausf, certC, ASk,msg,num);
  end;
procedure destruct15(msg:Message; Var start:NonceType; Var ue1:NonceType; Var ausf:NonceType; Var certC:NonceType; Var ASk:AgentType);
  var k1:KeyType;
      signMsg:Message;
      begin
    clear signMsg;
    k1:=msgs[msg.signKey].k;
    ASk := k1.ag;
    signMsg:=msgs[msg.signMsg];
    destruct14(signMsg,start, ue1, ausf, certC);
  end;
procedure cons16(ue1:NonceType; ausf:NonceType; prekey:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat16(ue1, ausf, prekey,msg,num);
  end;
procedure destruct16(msg:Message; Var ue1:NonceType; Var ausf:NonceType; Var prekey:NonceType);
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
procedure cons17(ue1:NonceType; ausf:NonceType; prekey:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat17(ue1, ausf, prekey,msg,num);
  end;
procedure cons18(start:NonceType; ue1:NonceType; ausf:NonceType; certC:NonceType; prekey:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat18(start, ue1, ausf, certC, prekey,msg,num);
  end;
procedure cons19(prekey:NonceType; CPk:AgentType; certA:NonceType; start:NonceType; ue1:NonceType; ausf:NonceType; certC:NonceType; ASk:AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat19(prekey, CPk, certA, start, ue1, ausf, certC, ASk,msg,num);
  end;
procedure destruct19(msg:Message; Var prekey:NonceType; Var CPk:AgentType; Var certA:NonceType; Var start:NonceType; Var ue1:NonceType; Var ausf:NonceType; Var certC:NonceType; Var ASk:AgentType);
  Var msgNum1,msgNum2,msgNum3,msgNum4: Message;
      k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    destruct12(msgNum1,prekey, CPk);
    msgNum2 := msgs[msg.concatPart[2]];
    certA := msgNum2.noncePart;
;

  end;
procedure cons20(x10:Message; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat20(x10,msg,num);
  end;
procedure destruct20(msg:Message; Var x10:Message);
  var msgNo:indexType;
  begin
    get_msgNo(msg,msgNo);
    x10:=msg;
    x10.tmpPart:=msgNo;
  end;
procedure cons21(eapm:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat21(eapm,msg,num);
  end;
procedure destruct21(msg:Message; Var eapm:NonceType);
  begin
    eapm:=msg.noncePart;
  end;
procedure cons22(sucm:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat22(sucm,msg,num);
  end;
procedure destruct22(msg:Message; Var sucm:NonceType);
  begin
    sucm:=msg.noncePart;
  end;
procedure cons23(x1:Message; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat23(x1,msg,num);
  end;
procedure destruct23(msg:Message; Var x1:Message);
  var msgNo:indexType;
  begin
    get_msgNo(msg,msgNo);
    x1:=msg;
    x1.tmpPart:=msgNo;
  end;
procedure cons24(seafn:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat24(seafn,msg,num);
  end;
procedure destruct24(msg:Message; Var seafn:NonceType);
  begin
    seafn:=msg.noncePart;
  end;
procedure cons25(x1:Message; seafn:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat25(x1, seafn,msg,num);
  end;
procedure destruct25(msg:Message; Var x1:Message; Var seafn:NonceType);
  Var msgNum1,msgNum2: Message;
      k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    x1.msgType := tmp;
    x1.tmpPart := msg.concatPart[1];
    msgNum2 := msgs[msg.concatPart[2]];
    seafn := msgNum2.noncePart
  end;
procedure cons26(x2:Message; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat26(x2,msg,num);
  end;
procedure destruct26(msg:Message; Var x2:Message);
  var msgNo:indexType;
  begin
    get_msgNo(msg,msgNo);
    x2:=msg;
    x2.tmpPart:=msgNo;
  end;
procedure cons27(x3:Message; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat27(x3,msg,num);
  end;
procedure destruct27(msg:Message; Var x3:Message);
  var msgNo:indexType;
  begin
    get_msgNo(msg,msgNo);
    x3:=msg;
    x3.tmpPart:=msgNo;
  end;
procedure cons28(x4:Message; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat28(x4,msg,num);
  end;
procedure destruct28(msg:Message; Var x4:Message);
  var msgNo:indexType;
  begin
    get_msgNo(msg,msgNo);
    x4:=msg;
    x4.tmpPart:=msgNo;
  end;
procedure cons29(x5:Message; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat29(x5,msg,num);
  end;
procedure destruct29(msg:Message; Var x5:Message);
  var msgNo:indexType;
  begin
    get_msgNo(msg,msgNo);
    x5:=msg;
    x5.tmpPart:=msgNo;
  end;
procedure cons30(x4:Message; x5:Message; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat30(x4, x5,msg,num);
  end;
procedure destruct30(msg:Message; Var x4:Message; Var x5:Message);
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
procedure cons31(x6:Message; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat31(x6,msg,num);
  end;
procedure destruct31(msg:Message; Var x6:Message);
  var msgNo:indexType;
  begin
    get_msgNo(msg,msgNo);
    x6:=msg;
    x6.tmpPart:=msgNo;
  end;
procedure cons32(x7:Message; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat32(x7,msg,num);
  end;
procedure destruct32(msg:Message; Var x7:Message);
  var msgNo:indexType;
  begin
    get_msgNo(msg,msgNo);
    x7:=msg;
    x7.tmpPart:=msgNo;
  end;
procedure cons33(x8:Message; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat33(x8,msg,num);
  end;
procedure destruct33(msg:Message; Var x8:Message);
  var msgNo:indexType;
  begin
    get_msgNo(msg,msgNo);
    x8:=msg;
    x8.tmpPart:=msgNo;
  end;
procedure cons34(x9:Message; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat34(x9,msg,num);
  end;
procedure destruct34(msg:Message; Var x9:Message);
  var msgNo:indexType;
  begin
    get_msgNo(msg,msgNo);
    x9:=msg;
    x9.tmpPart:=msgNo;
  end;
procedure cons35(x6:Message; x7:Message; x8:Message; x9:Message; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat35(x6, x7, x8, x9,msg,num);
  end;
procedure destruct35(msg:Message; Var x6:Message; Var x7:Message; Var x8:Message; Var x9:Message);
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
procedure cons36(start:NonceType; ue1:NonceType; prekey:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat36(start, ue1, prekey,msg,num);
  end;
procedure destruct36(msg:Message; Var start:NonceType; Var ue1:NonceType; Var prekey:NonceType);
  Var msgNum1,msgNum2,msgNum3: Message;
      k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    start := msgNum1.noncePart;
    msgNum2 := msgs[msg.concatPart[2]];
    ue1 := msgNum2.noncePart;
    msgNum3 := msgs[msg.concatPart[3]];
    prekey := msgNum3.noncePart
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
   cons5(roleA[i].supi,roleA[i].ue,roleA[i].D,msg,msgNo);
   ch[1].empty := false;
   ch[1].msg := msg;
   ch[1].sender := roleA[i].A;
   ch[1].receiver := Intruder;
   roleA[i].st := A2;
   put "roleA[i] in st1\n";
end;
rule " roleA2 "
roleA[i].st = A2 & ch[6].empty = false & !roleA[i].commit & judge(ch[6].msg,roleA[i].A,msgs[0]) 
==>
var flag_pat6:boolean;
    msg:Message;
begin
   clear msg;
   msg := ch[6].msg;
   isPat6(msg, flag_pat6);
   if(flag_pat6) then
     destruct6(msg,roleA[i].locstart);
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
   cons7(roleA[i].ue1,msg,msgNo);
   ch[7].empty := false;
   ch[7].msg := msg;
   ch[7].sender := roleA[i].A;
   ch[7].receiver := Intruder;
   roleA[i].st := A4;
   put "roleA[i] in st3\n";
end;
rule " roleA4 "
roleA[i].st = A4 & ch[10].empty = false & !roleA[i].commit & judge(ch[10].msg,roleA[i].A,msgs[0]) 
==>
var flag_pat10:boolean;
    msg:Message;
begin
   clear msg;
   msg := ch[10].msg;
   isPat10(msg, flag_pat10);
   if(flag_pat10) then
     destruct10(msg,roleA[i].locausf,roleA[i].loccertC);
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
   cons19(roleA[i].prekey,roleA[i].C,roleA[i].certA,roleA[i].start,roleA[i].ue1,roleA[i].ausf,roleA[i].certC,roleA[i].A,msg,msgNo);
   ch[11].empty := false;
   ch[11].msg := msg;
   ch[11].sender := roleA[i].A;
   ch[11].receiver := Intruder;
   roleA[i].st := A6;
   put "roleA[i] in st5\n";
end;
rule " roleA6 "
roleA[i].st = A6 & ch[14].empty = false & !roleA[i].commit & judge(ch[14].msg,roleA[i].A,roleA[i].x10) 
==>
var flag_pat20:boolean;
    msg:Message;
begin
   clear msg;
   msg := ch[14].msg;
   isPat20(msg, flag_pat20);
   if(flag_pat20) then
     destruct20(msg,roleA[i].locx10);
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
   cons21(roleA[i].eapm,msg,msgNo);
   ch[15].empty := false;
   ch[15].msg := msg;
   ch[15].sender := roleA[i].A;
   ch[15].receiver := Intruder;
   roleA[i].st := A8;
   put "roleA[i] in st7\n";
end;
rule " roleA8 "
roleA[i].st = A8 & ch[18].empty = false & !roleA[i].commit & judge(ch[18].msg,roleA[i].A,msgs[0]) 
==>
var flag_pat22:boolean;
    msg:Message;
begin
   clear msg;
   msg := ch[18].msg;
   isPat22(msg, flag_pat22);
   if(flag_pat22) then
     destruct22(msg,roleA[i].locsucm);
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
roleB[i].st = B1 & ch[1].empty = false & !roleB[i].commit & judge(ch[1].msg,roleB[i].B,roleB[i].x1) 
==>
var flag_pat23:boolean;
    msg:Message;
begin
   clear msg;
   msg := ch[1].msg;
   isPat23(msg, flag_pat23);
   if(flag_pat23) then
     destruct23(msg,roleB[i].locx1);
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
   cons25(roleB[i].x1,roleB[i].seafn,msg,msgNo);
   ch[2].empty := false;
   ch[2].msg := msg;
   ch[2].sender := roleB[i].B;
   ch[2].receiver := Intruder;
   roleB[i].st := B3;
   put "roleB[i] in st2\n";
end;
rule " roleB3 "
roleB[i].st = B3 & ch[5].empty = false & !roleB[i].commit & judge(ch[5].msg,roleB[i].B,roleB[i].x2) 
==>
var flag_pat26:boolean;
    msg:Message;
begin
   clear msg;
   msg := ch[5].msg;
   isPat26(msg, flag_pat26);
   if(flag_pat26) then
     destruct26(msg,roleB[i].locx2);
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
   cons26(roleB[i].x2,msg,msgNo);
   ch[6].empty := false;
   ch[6].msg := msg;
   ch[6].sender := roleB[i].B;
   ch[6].receiver := Intruder;
   roleB[i].st := B5;
   put "roleB[i] in st4\n";
end;
rule " roleB5 "
roleB[i].st = B5 & ch[7].empty = false & !roleB[i].commit & judge(ch[7].msg,roleB[i].B,roleB[i].x3) 
==>
var flag_pat27:boolean;
    msg:Message;
begin
   clear msg;
   msg := ch[7].msg;
   isPat27(msg, flag_pat27);
   if(flag_pat27) then
     destruct27(msg,roleB[i].locx3);
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
   cons27(roleB[i].x3,msg,msgNo);
   ch[8].empty := false;
   ch[8].msg := msg;
   ch[8].sender := roleB[i].B;
   ch[8].receiver := Intruder;
   roleB[i].st := B7;
   put "roleB[i] in st6\n";
end;
rule " roleB7 "
roleB[i].st = B7 & ch[9].empty = false & !roleB[i].commit & judge(ch[9].msg,roleB[i].B,msgs[0]) 
==>
var flag_pat30:boolean;
    msg:Message;
begin
   clear msg;
   msg := ch[9].msg;
   isPat30(msg, flag_pat30);
   if(flag_pat30) then
     destruct30(msg,roleB[i].locx4,roleB[i].locx5);
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
   cons30(roleB[i].x4,roleB[i].x5,msg,msgNo);
   ch[10].empty := false;
   ch[10].msg := msg;
   ch[10].sender := roleB[i].B;
   ch[10].receiver := Intruder;
   roleB[i].st := B9;
   put "roleB[i] in st8\n";
end;
rule " roleB9 "
roleB[i].st = B9 & ch[11].empty = false & !roleB[i].commit & judge(ch[11].msg,roleB[i].B,msgs[0]) 
==>
var flag_pat35:boolean;
    msg:Message;
begin
   clear msg;
   msg := ch[11].msg;
   isPat35(msg, flag_pat35);
   if(flag_pat35) then
     destruct35(msg,roleB[i].locx6,roleB[i].locx7,roleB[i].locx8,roleB[i].locx9);
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
   cons35(roleB[i].x6,roleB[i].x7,roleB[i].x8,roleB[i].x9,msg,msgNo);
   ch[12].empty := false;
   ch[12].msg := msg;
   ch[12].sender := roleB[i].B;
   ch[12].receiver := Intruder;
   roleB[i].st := B11;
   put "roleB[i] in st10\n";
end;
rule " roleB11 "
roleB[i].st = B11 & ch[13].empty = false & !roleB[i].commit & judge(ch[13].msg,roleB[i].B,roleB[i].x10) 
==>
var flag_pat20:boolean;
    msg:Message;
begin
   clear msg;
   msg := ch[13].msg;
   isPat20(msg, flag_pat20);
   if(flag_pat20) then
     destruct20(msg,roleB[i].locx10);
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
   cons20(roleB[i].x10,msg,msgNo);
   ch[14].empty := false;
   ch[14].msg := msg;
   ch[14].sender := roleB[i].B;
   ch[14].receiver := Intruder;
   roleB[i].st := B13;
   put "roleB[i] in st12\n";
end;
rule " roleB13 "
roleB[i].st = B13 & ch[15].empty = false & !roleB[i].commit & judge(ch[15].msg,roleB[i].B,msgs[0]) 
==>
var flag_pat21:boolean;
    msg:Message;
begin
   clear msg;
   msg := ch[15].msg;
   isPat21(msg, flag_pat21);
   if(flag_pat21) then
     destruct21(msg,roleB[i].loceapm);
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
   cons21(roleB[i].eapm,msg,msgNo);
   ch[16].empty := false;
   ch[16].msg := msg;
   ch[16].sender := roleB[i].B;
   ch[16].receiver := Intruder;
   roleB[i].st := B15;
   put "roleB[i] in st14\n";
end;
rule " roleB15 "
roleB[i].st = B15 & ch[17].empty = false & !roleB[i].commit & judge(ch[17].msg,roleB[i].B,msgs[0]) 
==>
var flag_pat22:boolean;
    msg:Message;
begin
   clear msg;
   msg := ch[17].msg;
   isPat22(msg, flag_pat22);
   if(flag_pat22) then
     destruct22(msg,roleB[i].locsucm);
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
   cons22(roleB[i].sucm,msg,msgNo);
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
roleC[i].st = C1 & ch[2].empty = false & !roleC[i].commit & judge(ch[2].msg,roleC[i].C,msgs[0]) 
==>
var flag_pat25:boolean;
    msg:Message;
begin
   clear msg;
   msg := ch[2].msg;
   isPat25(msg, flag_pat25);
   if(flag_pat25) then
     destruct25(msg,roleC[i].locx1,roleC[i].locseafn);
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
   cons25(roleC[i].x1,roleC[i].seafn,msg,msgNo);
   ch[3].empty := false;
   ch[3].msg := msg;
   ch[3].sender := roleC[i].C;
   ch[3].receiver := Intruder;
   roleC[i].st := C3;
   put "roleC[i] in st2\n";
end;
rule " roleC3 "
roleC[i].st = C3 & ch[4].empty = false & !roleC[i].commit & judge(ch[4].msg,roleC[i].C,msgs[0]) 
==>
var flag_pat6:boolean;
    msg:Message;
begin
   clear msg;
   msg := ch[4].msg;
   isPat6(msg, flag_pat6);
   if(flag_pat6) then
     destruct6(msg,roleC[i].locstart);
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
   cons6(roleC[i].start,msg,msgNo);
   ch[5].empty := false;
   ch[5].msg := msg;
   ch[5].sender := roleC[i].C;
   ch[5].receiver := Intruder;
   roleC[i].st := C5;
   put "roleC[i] in st4\n";
end;
rule " roleC5 "
roleC[i].st = C5 & ch[8].empty = false & !roleC[i].commit & judge(ch[8].msg,roleC[i].C,msgs[0]) 
==>
var flag_pat7:boolean;
    msg:Message;
begin
   clear msg;
   msg := ch[8].msg;
   isPat7(msg, flag_pat7);
   if(flag_pat7) then
     destruct7(msg,roleC[i].locue1);
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
   cons10(roleC[i].ausf,roleC[i].certC,msg,msgNo);
   ch[9].empty := false;
   ch[9].msg := msg;
   ch[9].sender := roleC[i].C;
   ch[9].receiver := Intruder;
   roleC[i].st := C7;
   put "roleC[i] in st6\n";
end;
rule " roleC7 "
roleC[i].st = C7 & ch[12].empty = false & !roleC[i].commit & judge(ch[12].msg,roleC[i].C,msgs[0]) 
==>
var flag_pat35:boolean;
    msg:Message;
begin
   clear msg;
   msg := ch[12].msg;
   isPat35(msg, flag_pat35);
   if(flag_pat35) then
     destruct35(msg,roleC[i].locx6,roleC[i].locx7,roleC[i].locx8,roleC[i].locx9);
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
   cons18(roleC[i].start,roleC[i].ue1,roleC[i].ausf,roleC[i].certC,roleC[i].prekey,msg,msgNo);
   ch[13].empty := false;
   ch[13].msg := msg;
   ch[13].sender := roleC[i].C;
   ch[13].receiver := Intruder;
   roleC[i].st := C9;
   put "roleC[i] in st8\n";
end;
rule " roleC9 "
roleC[i].st = C9 & ch[16].empty = false & !roleC[i].commit & judge(ch[16].msg,roleC[i].C,msgs[0]) 
==>
var flag_pat21:boolean;
    msg:Message;
begin
   clear msg;
   msg := ch[16].msg;
   isPat21(msg, flag_pat21);
   if(flag_pat21) then
     destruct21(msg,roleC[i].loceapm);
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
   cons22(roleC[i].sucm,msg,msgNo);
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
roleD[i].st = D1 & ch[3].empty = false & !roleD[i].commit & judge(ch[3].msg,roleD[i].D,msgs[0]) 
==>
var flag_pat25:boolean;
    msg:Message;
begin
   clear msg;
   msg := ch[3].msg;
   isPat25(msg, flag_pat25);
   if(flag_pat25) then
     destruct25(msg,roleD[i].locx1,roleD[i].locseafn);
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
   cons6(roleD[i].start,msg,msgNo);
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
  var flag_pat5:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[1].msg;
    printMsg(ch[1].msg);
    get_msgNo(msg, msgNo);
    msg.tmpPart := msgNo;
    isPat5(msg,flag_pat5);
    if (flag_pat5) then
      if(!exist(pat5Set,msgNo)) then
        pat5Set.length:=pat5Set.length+1;
        pat5Set.content[pat5Set.length]:=msgNo;
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
  var flag_pat7:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[7].msg;
    printMsg(ch[7].msg);
    get_msgNo(msg, msgNo);
    msg.tmpPart := msgNo;
    isPat7(msg,flag_pat7);
    if (flag_pat7) then
      if(!exist(pat7Set,msgNo)) then
        pat7Set.length:=pat7Set.length+1;
        pat7Set.content[pat7Set.length]:=msgNo;
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
  var flag_pat19:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[11].msg;
    printMsg(ch[11].msg);
    get_msgNo(msg, msgNo);
    msg.tmpPart := msgNo;
    isPat19(msg,flag_pat19);
    if (flag_pat19) then
      if(!exist(pat19Set,msgNo)) then
        pat19Set.length:=pat19Set.length+1;
        pat19Set.content[pat19Set.length]:=msgNo;
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
  var flag_pat21:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[15].msg;
    printMsg(ch[15].msg);
    get_msgNo(msg, msgNo);
    msg.tmpPart := msgNo;
    isPat21(msg,flag_pat21);
    if (flag_pat21) then
      if(!exist(pat21Set,msgNo)) then
        pat21Set.length:=pat21Set.length+1;
        pat21Set.content[pat21Set.length]:=msgNo;
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
  var flag_pat25:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[2].msg;
    printMsg(ch[2].msg);
    get_msgNo(msg, msgNo);
    msg.tmpPart := msgNo;
    isPat25(msg,flag_pat25);
    if (flag_pat25) then
      if(!exist(pat25Set,msgNo)) then
        pat25Set.length:=pat25Set.length+1;
        pat25Set.content[pat25Set.length]:=msgNo;
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
  var flag_pat26:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[6].msg;
    printMsg(ch[6].msg);
    get_msgNo(msg, msgNo);
    msg.tmpPart := msgNo;
    isPat26(msg,flag_pat26);
    if (flag_pat26) then
      if(!exist(pat26Set,msgNo)) then
        pat26Set.length:=pat26Set.length+1;
        pat26Set.content[pat26Set.length]:=msgNo;
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
  var flag_pat27:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[8].msg;
    printMsg(ch[8].msg);
    get_msgNo(msg, msgNo);
    msg.tmpPart := msgNo;
    isPat27(msg,flag_pat27);
    if (flag_pat27) then
      if(!exist(pat27Set,msgNo)) then
        pat27Set.length:=pat27Set.length+1;
        pat27Set.content[pat27Set.length]:=msgNo;
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
  var flag_pat30:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[10].msg;
    printMsg(ch[10].msg);
    get_msgNo(msg, msgNo);
    msg.tmpPart := msgNo;
    isPat30(msg,flag_pat30);
    if (flag_pat30) then
      if(!exist(pat30Set,msgNo)) then
        pat30Set.length:=pat30Set.length+1;
        pat30Set.content[pat30Set.length]:=msgNo;
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
  var flag_pat35:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[12].msg;
    printMsg(ch[12].msg);
    get_msgNo(msg, msgNo);
    msg.tmpPart := msgNo;
    isPat35(msg,flag_pat35);
    if (flag_pat35) then
      if(!exist(pat35Set,msgNo)) then
        pat35Set.length:=pat35Set.length+1;
        pat35Set.content[pat35Set.length]:=msgNo;
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
  var flag_pat20:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[14].msg;
    printMsg(ch[14].msg);
    get_msgNo(msg, msgNo);
    msg.tmpPart := msgNo;
    isPat20(msg,flag_pat20);
    if (flag_pat20) then
      if(!exist(pat20Set,msgNo)) then
        pat20Set.length:=pat20Set.length+1;
        pat20Set.content[pat20Set.length]:=msgNo;
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
  var flag_pat21:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[16].msg;
    printMsg(ch[16].msg);
    get_msgNo(msg, msgNo);
    msg.tmpPart := msgNo;
    isPat21(msg,flag_pat21);
    if (flag_pat21) then
      if(!exist(pat21Set,msgNo)) then
        pat21Set.length:=pat21Set.length+1;
        pat21Set.content[pat21Set.length]:=msgNo;
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
  var flag_pat22:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[18].msg;
    printMsg(ch[18].msg);
    get_msgNo(msg, msgNo);
    msg.tmpPart := msgNo;
    isPat22(msg,flag_pat22);
    if (flag_pat22) then
      if(!exist(pat22Set,msgNo)) then
        pat22Set.length:=pat22Set.length+1;
        pat22Set.content[pat22Set.length]:=msgNo;
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
  var flag_pat25:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[3].msg;
    printMsg(ch[3].msg);
    get_msgNo(msg, msgNo);
    msg.tmpPart := msgNo;
    isPat25(msg,flag_pat25);
    if (flag_pat25) then
      if(!exist(pat25Set,msgNo)) then
        pat25Set.length:=pat25Set.length+1;
        pat25Set.content[pat25Set.length]:=msgNo;
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
  var flag_pat6:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[5].msg;
    printMsg(ch[5].msg);
    get_msgNo(msg, msgNo);
    msg.tmpPart := msgNo;
    isPat6(msg,flag_pat6);
    if (flag_pat6) then
      if(!exist(pat6Set,msgNo)) then
        pat6Set.length:=pat6Set.length+1;
        pat6Set.content[pat6Set.length]:=msgNo;
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
  var flag_pat10:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[9].msg;
    printMsg(ch[9].msg);
    get_msgNo(msg, msgNo);
    msg.tmpPart := msgNo;
    isPat10(msg,flag_pat10);
    if (flag_pat10) then
      if(!exist(pat10Set,msgNo)) then
        pat10Set.length:=pat10Set.length+1;
        pat10Set.content[pat10Set.length]:=msgNo;
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
  var flag_pat18:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[13].msg;
    printMsg(ch[13].msg);
    get_msgNo(msg, msgNo);
    msg.tmpPart := msgNo;
    isPat18(msg,flag_pat18);
    if (flag_pat18) then
      if(!exist(pat18Set,msgNo)) then
        pat18Set.length:=pat18Set.length+1;
        pat18Set.content[pat18Set.length]:=msgNo;
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
  var flag_pat22:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[17].msg;
    printMsg(ch[17].msg);
    get_msgNo(msg, msgNo);
    msg.tmpPart := msgNo;
    isPat22(msg,flag_pat22);
    if (flag_pat22) then
      if(!exist(pat22Set,msgNo)) then
        pat22Set.length:=pat22Set.length+1;
        pat22Set.content[pat22Set.length]:=msgNo;
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
  var flag_pat6:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[4].msg;
    printMsg(ch[4].msg);
    get_msgNo(msg, msgNo);
    msg.tmpPart := msgNo;
    isPat6(msg,flag_pat6);
    if (flag_pat6) then
      if(!exist(pat6Set,msgNo)) then
        pat6Set.length:=pat6Set.length+1;
        pat6Set.content[pat6Set.length]:=msgNo;
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
      IntruEmit5 = true & roleA[j].st = A2 & ch[6].empty=true & i <= pat26Set.length & pat26Set.content[i] != 0 & Spy_known[pat26Set.content[i]] & !emit[pat26Set.content[i]] ---& matchPat(msgs[pat26Set.content[i]], sPat26Set)
      ==>
      begin
         clear ch[6];
        ch[6].msg:=msgs[pat26Set.content[i]];
        ch[6].sender:=Intruder;
        ch[6].receiver:=roleA[j].A;
        ch[6].empty:=false;
        emit[pat26Set.content[i]] := true;
        IntruEmit6 := true;
        printMsg(ch[6].msg);
        put "---";
        put "intruder emit msg into ch[6].\n";
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[10].
ruleset i: msgLen do
  ruleset j: roleANums do
    rule "intruderEmitMsgIntoCh[10]"
      IntruEmit9 = true & roleA[j].st = A4 & ch[10].empty=true & i <= pat30Set.length & pat30Set.content[i] != 0 & Spy_known[pat30Set.content[i]] & !emit[pat30Set.content[i]] ---& matchPat(msgs[pat30Set.content[i]], sPat30Set)
      ==>
      begin
         clear ch[10];
        ch[10].msg:=msgs[pat30Set.content[i]];
        ch[10].sender:=Intruder;
        ch[10].receiver:=roleA[j].A;
        ch[10].empty:=false;
        emit[pat30Set.content[i]] := true;
        IntruEmit10 := true;
        printMsg(ch[10].msg);
        put "---";
        put "intruder emit msg into ch[10].\n";
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[14].
ruleset i: msgLen do
  ruleset j: roleANums do
    rule "intruderEmitMsgIntoCh[14]"
      IntruEmit13 = true & roleA[j].st = A6 & ch[14].empty=true & i <= pat20Set.length & pat20Set.content[i] != 0 & Spy_known[pat20Set.content[i]] & !emit[pat20Set.content[i]] ---& matchPat(msgs[pat20Set.content[i]], sPat20Set)
      ==>
      begin
         clear ch[14];
        ch[14].msg:=msgs[pat20Set.content[i]];
        ch[14].sender:=Intruder;
        ch[14].receiver:=roleA[j].A;
        ch[14].empty:=false;
        emit[pat20Set.content[i]] := true;
        IntruEmit14 := true;
        printMsg(ch[14].msg);
        put "---";
        put "intruder emit msg into ch[14].\n";
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[18].
ruleset i: msgLen do
  ruleset j: roleANums do
    rule "intruderEmitMsgIntoCh[18]"
      IntruEmit17 = true & roleA[j].st = A8 & ch[18].empty=true & i <= pat22Set.length & pat22Set.content[i] != 0 & Spy_known[pat22Set.content[i]] & !emit[pat22Set.content[i]] ---& matchPat(msgs[pat22Set.content[i]], sPat22Set)
      ==>
      begin
         clear ch[18];
        ch[18].msg:=msgs[pat22Set.content[i]];
        ch[18].sender:=Intruder;
        ch[18].receiver:=roleA[j].A;
        ch[18].empty:=false;
        emit[pat22Set.content[i]] := true;
        IntruEmit18 := true;
        printMsg(ch[18].msg);
        put "---";
        put "intruder emit msg into ch[18].\n";
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[1].
ruleset i: msgLen do
  ruleset j: roleBNums do
    rule "intruderEmitMsgIntoCh[1]"
       roleB[j].st = B1 & ch[1].empty=true & i <= pat5Set.length & pat5Set.content[i] != 0 & Spy_known[pat5Set.content[i]] & !emit[pat5Set.content[i]] ---& matchPat(msgs[pat5Set.content[i]], sPat5Set)
      ==>
      begin
         clear ch[1];
        ch[1].msg:=msgs[pat5Set.content[i]];
        ch[1].sender:=Intruder;
        ch[1].receiver:=roleB[j].B;
        ch[1].empty:=false;
        emit[pat5Set.content[i]] := true;
        IntruEmit1 := true;
        printMsg(ch[1].msg);
        put "---";
        put "intruder emit msg into ch[1].\n";
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[5].
ruleset i: msgLen do
  ruleset j: roleBNums do
    rule "intruderEmitMsgIntoCh[5]"
      IntruEmit4 = true & roleB[j].st = B3 & ch[5].empty=true & i <= pat6Set.length & pat6Set.content[i] != 0 & Spy_known[pat6Set.content[i]] & !emit[pat6Set.content[i]] ---& matchPat(msgs[pat6Set.content[i]], sPat6Set)
      ==>
      begin
         clear ch[5];
        ch[5].msg:=msgs[pat6Set.content[i]];
        ch[5].sender:=Intruder;
        ch[5].receiver:=roleB[j].B;
        ch[5].empty:=false;
        emit[pat6Set.content[i]] := true;
        IntruEmit5 := true;
        printMsg(ch[5].msg);
        put "---";
        put "intruder emit msg into ch[5].\n";
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[7].
ruleset i: msgLen do
  ruleset j: roleBNums do
    rule "intruderEmitMsgIntoCh[7]"
      IntruEmit6 = true & roleB[j].st = B5 & ch[7].empty=true & i <= pat7Set.length & pat7Set.content[i] != 0 & Spy_known[pat7Set.content[i]] & !emit[pat7Set.content[i]] ---& matchPat(msgs[pat7Set.content[i]], sPat7Set)
      ==>
      begin
         clear ch[7];
        ch[7].msg:=msgs[pat7Set.content[i]];
        ch[7].sender:=Intruder;
        ch[7].receiver:=roleB[j].B;
        ch[7].empty:=false;
        emit[pat7Set.content[i]] := true;
        IntruEmit7 := true;
        printMsg(ch[7].msg);
        put "---";
        put "intruder emit msg into ch[7].\n";
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[9].
ruleset i: msgLen do
  ruleset j: roleBNums do
    rule "intruderEmitMsgIntoCh[9]"
      IntruEmit8 = true & roleB[j].st = B7 & ch[9].empty=true & i <= pat10Set.length & pat10Set.content[i] != 0 & Spy_known[pat10Set.content[i]] & !emit[pat10Set.content[i]] ---& matchPat(msgs[pat10Set.content[i]], sPat10Set)
      ==>
      begin
         clear ch[9];
        ch[9].msg:=msgs[pat10Set.content[i]];
        ch[9].sender:=Intruder;
        ch[9].receiver:=roleB[j].B;
        ch[9].empty:=false;
        emit[pat10Set.content[i]] := true;
        IntruEmit9 := true;
        printMsg(ch[9].msg);
        put "---";
        put "intruder emit msg into ch[9].\n";
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[11].
ruleset i: msgLen do
  ruleset j: roleBNums do
    rule "intruderEmitMsgIntoCh[11]"
      IntruEmit10 = true & roleB[j].st = B9 & ch[11].empty=true & i <= pat19Set.length & pat19Set.content[i] != 0 & Spy_known[pat19Set.content[i]] & !emit[pat19Set.content[i]] ---& matchPat(msgs[pat19Set.content[i]], sPat19Set)
      ==>
      begin
         clear ch[11];
        ch[11].msg:=msgs[pat19Set.content[i]];
        ch[11].sender:=Intruder;
        ch[11].receiver:=roleB[j].B;
        ch[11].empty:=false;
        emit[pat19Set.content[i]] := true;
        IntruEmit11 := true;
        printMsg(ch[11].msg);
        put "---";
        put "intruder emit msg into ch[11].\n";
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[13].
ruleset i: msgLen do
  ruleset j: roleBNums do
    rule "intruderEmitMsgIntoCh[13]"
      IntruEmit12 = true & roleB[j].st = B11 & ch[13].empty=true & i <= pat18Set.length & pat18Set.content[i] != 0 & Spy_known[pat18Set.content[i]] & !emit[pat18Set.content[i]] ---& matchPat(msgs[pat18Set.content[i]], sPat18Set)
      ==>
      begin
         clear ch[13];
        ch[13].msg:=msgs[pat18Set.content[i]];
        ch[13].sender:=Intruder;
        ch[13].receiver:=roleB[j].B;
        ch[13].empty:=false;
        emit[pat18Set.content[i]] := true;
        IntruEmit13 := true;
        printMsg(ch[13].msg);
        put "---";
        put "intruder emit msg into ch[13].\n";
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[15].
ruleset i: msgLen do
  ruleset j: roleBNums do
    rule "intruderEmitMsgIntoCh[15]"
      IntruEmit14 = true & roleB[j].st = B13 & ch[15].empty=true & i <= pat21Set.length & pat21Set.content[i] != 0 & Spy_known[pat21Set.content[i]] & !emit[pat21Set.content[i]] ---& matchPat(msgs[pat21Set.content[i]], sPat21Set)
      ==>
      begin
         clear ch[15];
        ch[15].msg:=msgs[pat21Set.content[i]];
        ch[15].sender:=Intruder;
        ch[15].receiver:=roleB[j].B;
        ch[15].empty:=false;
        emit[pat21Set.content[i]] := true;
        IntruEmit15 := true;
        printMsg(ch[15].msg);
        put "---";
        put "intruder emit msg into ch[15].\n";
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[17].
ruleset i: msgLen do
  ruleset j: roleBNums do
    rule "intruderEmitMsgIntoCh[17]"
      IntruEmit16 = true & roleB[j].st = B15 & ch[17].empty=true & i <= pat22Set.length & pat22Set.content[i] != 0 & Spy_known[pat22Set.content[i]] & !emit[pat22Set.content[i]] ---& matchPat(msgs[pat22Set.content[i]], sPat22Set)
      ==>
      begin
         clear ch[17];
        ch[17].msg:=msgs[pat22Set.content[i]];
        ch[17].sender:=Intruder;
        ch[17].receiver:=roleB[j].B;
        ch[17].empty:=false;
        emit[pat22Set.content[i]] := true;
        IntruEmit17 := true;
        printMsg(ch[17].msg);
        put "---";
        put "intruder emit msg into ch[17].\n";
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[2].
ruleset i: msgLen do
  ruleset j: roleCNums do
    rule "intruderEmitMsgIntoCh[2]"
      IntruEmit1 = true & roleC[j].st = C1 & ch[2].empty=true & i <= pat25Set.length & pat25Set.content[i] != 0 & Spy_known[pat25Set.content[i]] & !emit[pat25Set.content[i]] ---& matchPat(msgs[pat25Set.content[i]], sPat25Set)
      ==>
      begin
         clear ch[2];
        ch[2].msg:=msgs[pat25Set.content[i]];
        ch[2].sender:=Intruder;
        ch[2].receiver:=roleC[j].C;
        ch[2].empty:=false;
        emit[pat25Set.content[i]] := true;
        IntruEmit2 := true;
        printMsg(ch[2].msg);
        put "---";
        put "intruder emit msg into ch[2].\n";
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[4].
ruleset i: msgLen do
  ruleset j: roleCNums do
    rule "intruderEmitMsgIntoCh[4]"
      IntruEmit3 = true & roleC[j].st = C3 & ch[4].empty=true & i <= pat6Set.length & pat6Set.content[i] != 0 & Spy_known[pat6Set.content[i]] & !emit[pat6Set.content[i]] ---& matchPat(msgs[pat6Set.content[i]], sPat6Set)
      ==>
      begin
         clear ch[4];
        ch[4].msg:=msgs[pat6Set.content[i]];
        ch[4].sender:=Intruder;
        ch[4].receiver:=roleC[j].C;
        ch[4].empty:=false;
        emit[pat6Set.content[i]] := true;
        IntruEmit4 := true;
        printMsg(ch[4].msg);
        put "---";
        put "intruder emit msg into ch[4].\n";
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[8].
ruleset i: msgLen do
  ruleset j: roleCNums do
    rule "intruderEmitMsgIntoCh[8]"
      IntruEmit7 = true & roleC[j].st = C5 & ch[8].empty=true & i <= pat27Set.length & pat27Set.content[i] != 0 & Spy_known[pat27Set.content[i]] & !emit[pat27Set.content[i]] ---& matchPat(msgs[pat27Set.content[i]], sPat27Set)
      ==>
      begin
         clear ch[8];
        ch[8].msg:=msgs[pat27Set.content[i]];
        ch[8].sender:=Intruder;
        ch[8].receiver:=roleC[j].C;
        ch[8].empty:=false;
        emit[pat27Set.content[i]] := true;
        IntruEmit8 := true;
        printMsg(ch[8].msg);
        put "---";
        put "intruder emit msg into ch[8].\n";
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[12].
ruleset i: msgLen do
  ruleset j: roleCNums do
    rule "intruderEmitMsgIntoCh[12]"
      IntruEmit11 = true & roleC[j].st = C7 & ch[12].empty=true & i <= pat35Set.length & pat35Set.content[i] != 0 & Spy_known[pat35Set.content[i]] & !emit[pat35Set.content[i]] ---& matchPat(msgs[pat35Set.content[i]], sPat35Set)
      ==>
      begin
         clear ch[12];
        ch[12].msg:=msgs[pat35Set.content[i]];
        ch[12].sender:=Intruder;
        ch[12].receiver:=roleC[j].C;
        ch[12].empty:=false;
        emit[pat35Set.content[i]] := true;
        IntruEmit12 := true;
        printMsg(ch[12].msg);
        put "---";
        put "intruder emit msg into ch[12].\n";
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[16].
ruleset i: msgLen do
  ruleset j: roleCNums do
    rule "intruderEmitMsgIntoCh[16]"
      IntruEmit15 = true & roleC[j].st = C9 & ch[16].empty=true & i <= pat21Set.length & pat21Set.content[i] != 0 & Spy_known[pat21Set.content[i]] & !emit[pat21Set.content[i]] ---& matchPat(msgs[pat21Set.content[i]], sPat21Set)
      ==>
      begin
         clear ch[16];
        ch[16].msg:=msgs[pat21Set.content[i]];
        ch[16].sender:=Intruder;
        ch[16].receiver:=roleC[j].C;
        ch[16].empty:=false;
        emit[pat21Set.content[i]] := true;
        IntruEmit16 := true;
        printMsg(ch[16].msg);
        put "---";
        put "intruder emit msg into ch[16].\n";
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[3].
ruleset i: msgLen do
  ruleset j: roleDNums do
    rule "intruderEmitMsgIntoCh[3]"
      IntruEmit2 = true & roleD[j].st = D1 & ch[3].empty=true & i <= pat25Set.length & pat25Set.content[i] != 0 & Spy_known[pat25Set.content[i]] & !emit[pat25Set.content[i]] ---& matchPat(msgs[pat25Set.content[i]], sPat25Set)
      ==>
      begin
         clear ch[3];
        ch[3].msg:=msgs[pat25Set.content[i]];
        ch[3].sender:=Intruder;
        ch[3].receiver:=roleD[j].D;
        ch[3].empty:=false;
        emit[pat25Set.content[i]] := true;
        IntruEmit3 := true;
        printMsg(ch[3].msg);
        put "---";
        put "intruder emit msg into ch[3].\n";
      end;
  endruleset;
endruleset;
--- enconcat and deconcat rules for pat: concat(supi.ue)

ruleset i:msgLen do 
  rule "deconcat 3" --pat3
    i<=pat3Set.length & pat3Set.content[i] != 0 & Spy_known[pat3Set.content[i]]   &
    !(Spy_known[msgs[pat3Set.content[i]].concatPart[1]]&Spy_known[msgs[pat3Set.content[i]].concatPart[2]])
    ==>
    var msgPat1,msgPat2:indexType;
        flagPat1,flagPat2:boolean;
    begin
      put "rule deconcat3\n";
      if (!Spy_known[msgs[pat3Set.content[i]].concatPart[1]]) then
        Spy_known[msgs[pat3Set.content[i]].concatPart[1]]:=true;
        msgPat1 := msgs[pat3Set.content[i]].concatPart[1];
        isPat1(msgs[msgPat1],flagPat1);
        if (flagPat1) then
          if(!exist(pat1Set,msgPat1)) then
             pat1Set.length:=pat1Set.length+1;
             pat1Set.content[pat1Set.length] := msgPat1;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat3Set.content[i]].concatPart[2]]) then
        Spy_known[msgs[pat3Set.content[i]].concatPart[2]]:=true;
        msgPat2 := msgs[pat3Set.content[i]].concatPart[2];
        isPat2(msgs[msgPat2],flagPat2);
        if (flagPat2) then
          if(!exist(pat2Set,msgPat2)) then
             pat2Set.length:=pat2Set.length+1;
             pat2Set.content[pat2Set.length] := msgPat2;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i1: msgLen do
  ruleset i2: msgLen do 
    rule "enconcat 3"	---pat3
      i1<=pat1Set.length & Spy_known[pat1Set.content[i1]] &
      i2<=pat2Set.length & Spy_known[pat2Set.content[i2]] &
      matchPat(construct3By12(pat1Set.content[i1],pat2Set.content[i2]), sPat3Set)&
      !Spy_known[constructIndex3By12(pat1Set.content[i1],pat2Set.content[i2])] 
      ==>
      var concatMsgNo:indexType;
      concatMsg:Message;
      begin
        put "rule enconcat3\n";
        concatMsgNo := constructIndex3By12(pat1Set.content[i1],pat2Set.content[i2]);
        if concatMsgNo = msg_end + 1 then 
          msg_end :=msg_end + 1;
          concatMsg:= construct3By12(pat1Set.content[i1],pat2Set.content[i2]);
          msgs[concatMsgNo] := concatMsg;
        endif;
        Spy_known[concatMsgNo]:=true;
        if (!exist(pat3Set,concatMsgNo)) then
          pat3Set.length:=pat3Set.length+1;
          pat3Set.content[pat3Set.length]:=concatMsgNo;
        endif;
      end;
endruleset;
endruleset;

--- encrypt and decrypt rules of pat: aenc{supi.ue}pk(D), for intruder
ruleset i:msgLen do 
  rule "adecrypt 5"	---pat5
    i<=pat5Set.length & pat5Set.content[i] != 0 & Spy_known[pat5Set.content[i]] &
    !Spy_known[msgs[pat5Set.content[i]].aencMsg]&
    Spy_known[inverseKeyIndex(msgs[msgs[pat5Set.content[i]].aencKey])]  ==>
    var key_inv:Message;
	      msgPat3:indexType;
	      flag_pat3:boolean;
    begin
      put "rule adecrypt5\n";
      key_inv := inverseKey(msgs[msgs[pat5Set.content[i]].aencKey]);
      if (key_inv.k.ag = Intruder) then
        Spy_known[msgs[pat5Set.content[i]].aencMsg]:=true;
        msgPat3:=msgs[pat5Set.content[i]].aencMsg;
        isPat3(msgs[msgPat3],flag_pat3);
        if (flag_pat3) then
          if (!exist(pat3Set,msgPat3)) then
            pat3Set.length:=pat3Set.length+1;
            pat3Set.content[pat3Set.length]:=msgPat3;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i:msgLen do 
  ruleset j:msgLen do 
    rule "aencrypt 5"	---pat5
      i<=pat3Set.length & pat3Set.content[i] != 0 & Spy_known[pat3Set.content[i]] &
      j<=pat4Set.length & pat4Set.content[j] != 0 & Spy_known[pat4Set.content[j]] &
      matchPat(construct5By34(pat3Set.content[i],pat4Set.content[j]), sPat5Set) &
      !Spy_known[constructIndex5By34(pat3Set.content[i],pat4Set.content[j])] 
    ==>
      var encMsgNo:indexType;
      encMsg:Message;
      begin
        put "rule aencrypt5\n";
        if (msgs[pat4Set.content[j]].k.encType=PK) then
          encMsgNo := constructIndex5By34(pat3Set.content[i],pat4Set.content[j]);
          if encMsgNo = msg_end + 1 then 
             msg_end :=msg_end + 1;
             encMsg := construct5By34(pat3Set.content[i],pat4Set.content[j]);
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

--- enconcat and deconcat rules for pat: concat(ausf.certC)

ruleset i:msgLen do 
  rule "deconcat 10" --pat10
    i<=pat10Set.length & pat10Set.content[i] != 0 & Spy_known[pat10Set.content[i]]   &
    !(Spy_known[msgs[pat10Set.content[i]].concatPart[1]]&Spy_known[msgs[pat10Set.content[i]].concatPart[2]])
    ==>
    var msgPat1,msgPat2:indexType;
        flagPat1,flagPat2:boolean;
    begin
      put "rule deconcat10\n";
      if (!Spy_known[msgs[pat10Set.content[i]].concatPart[1]]) then
        Spy_known[msgs[pat10Set.content[i]].concatPart[1]]:=true;
        msgPat1 := msgs[pat10Set.content[i]].concatPart[1];
        isPat8(msgs[msgPat1],flagPat1);
        if (flagPat1) then
          if(!exist(pat8Set,msgPat1)) then
             pat8Set.length:=pat8Set.length+1;
             pat8Set.content[pat8Set.length] := msgPat1;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat10Set.content[i]].concatPart[2]]) then
        Spy_known[msgs[pat10Set.content[i]].concatPart[2]]:=true;
        msgPat2 := msgs[pat10Set.content[i]].concatPart[2];
        isPat9(msgs[msgPat2],flagPat2);
        if (flagPat2) then
          if(!exist(pat9Set,msgPat2)) then
             pat9Set.length:=pat9Set.length+1;
             pat9Set.content[pat9Set.length] := msgPat2;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i1: msgLen do
  ruleset i2: msgLen do 
    rule "enconcat 10"	---pat10
      i1<=pat8Set.length & Spy_known[pat8Set.content[i1]] &
      i2<=pat9Set.length & Spy_known[pat9Set.content[i2]] &
      matchPat(construct10By89(pat8Set.content[i1],pat9Set.content[i2]), sPat10Set)&
      !Spy_known[constructIndex10By89(pat8Set.content[i1],pat9Set.content[i2])] 
      ==>
      var concatMsgNo:indexType;
      concatMsg:Message;
      begin
        put "rule enconcat10\n";
        concatMsgNo := constructIndex10By89(pat8Set.content[i1],pat9Set.content[i2]);
        if concatMsgNo = msg_end + 1 then 
          msg_end :=msg_end + 1;
          concatMsg:= construct10By89(pat8Set.content[i1],pat9Set.content[i2]);
          msgs[concatMsgNo] := concatMsg;
        endif;
        Spy_known[concatMsgNo]:=true;
        if (!exist(pat10Set,concatMsgNo)) then
          pat10Set.length:=pat10Set.length+1;
          pat10Set.content[pat10Set.length]:=concatMsgNo;
        endif;
      end;
endruleset;
endruleset;

--- encrypt and decrypt rules of pat: aenc{prekey}pk(C), for intruder
ruleset i:msgLen do 
  rule "adecrypt 12"	---pat12
    i<=pat12Set.length & pat12Set.content[i] != 0 & Spy_known[pat12Set.content[i]] &
    !Spy_known[msgs[pat12Set.content[i]].aencMsg]&
    Spy_known[inverseKeyIndex(msgs[msgs[pat12Set.content[i]].aencKey])]  ==>
    var key_inv:Message;
	      msgPat11:indexType;
	      flag_pat11:boolean;
    begin
      put "rule adecrypt12\n";
      key_inv := inverseKey(msgs[msgs[pat12Set.content[i]].aencKey]);
      if (key_inv.k.ag = Intruder) then
        Spy_known[msgs[pat12Set.content[i]].aencMsg]:=true;
        msgPat11:=msgs[pat12Set.content[i]].aencMsg;
        isPat11(msgs[msgPat11],flag_pat11);
        if (flag_pat11) then
          if (!exist(pat11Set,msgPat11)) then
            pat11Set.length:=pat11Set.length+1;
            pat11Set.content[pat11Set.length]:=msgPat11;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i:msgLen do 
  ruleset j:msgLen do 
    rule "aencrypt 12"	---pat12
      i<=pat11Set.length & pat11Set.content[i] != 0 & Spy_known[pat11Set.content[i]] &
      j<=pat4Set.length & pat4Set.content[j] != 0 & Spy_known[pat4Set.content[j]] &
      matchPat(construct12By114(pat11Set.content[i],pat4Set.content[j]), sPat12Set) &
      !Spy_known[constructIndex12By114(pat11Set.content[i],pat4Set.content[j])] 
    ==>
      var encMsgNo:indexType;
      encMsg:Message;
      begin
        put "rule aencrypt12\n";
        if (msgs[pat4Set.content[j]].k.encType=PK) then
          encMsgNo := constructIndex12By114(pat11Set.content[i],pat4Set.content[j]);
          if encMsgNo = msg_end + 1 then 
             msg_end :=msg_end + 1;
             encMsg := construct12By114(pat11Set.content[i],pat4Set.content[j]);
             msgs[encMsgNo] := encMsg;
          endif;
          if (!exist(pat12Set,encMsgNo)) then
            pat12Set.length := pat12Set.length+1;
            pat12Set.content[pat12Set.length]:=encMsgNo;
          endif;
          Spy_known[encMsgNo] := true;
        endif;
      end;
  endruleset;
endruleset;

--- enconcat and deconcat rules for pat: concat(start.ue1.ausf.certC)

ruleset i:msgLen do 
  rule "deconcat 14" --pat14
    i<=pat14Set.length & pat14Set.content[i] != 0 & Spy_known[pat14Set.content[i]]   &
    !(Spy_known[msgs[pat14Set.content[i]].concatPart[1]]&Spy_known[msgs[pat14Set.content[i]].concatPart[2]]&Spy_known[msgs[pat14Set.content[i]].concatPart[3]]&Spy_known[msgs[pat14Set.content[i]].concatPart[4]])
    ==>
    var msgPat1,msgPat2,msgPat3,msgPat4:indexType;
        flagPat1,flagPat2,flagPat3,flagPat4:boolean;
    begin
      put "rule deconcat14\n";
      if (!Spy_known[msgs[pat14Set.content[i]].concatPart[1]]) then
        Spy_known[msgs[pat14Set.content[i]].concatPart[1]]:=true;
        msgPat1 := msgs[pat14Set.content[i]].concatPart[1];
        isPat6(msgs[msgPat1],flagPat1);
        if (flagPat1) then
          if(!exist(pat6Set,msgPat1)) then
             pat6Set.length:=pat6Set.length+1;
             pat6Set.content[pat6Set.length] := msgPat1;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat14Set.content[i]].concatPart[2]]) then
        Spy_known[msgs[pat14Set.content[i]].concatPart[2]]:=true;
        msgPat2 := msgs[pat14Set.content[i]].concatPart[2];
        isPat7(msgs[msgPat2],flagPat2);
        if (flagPat2) then
          if(!exist(pat7Set,msgPat2)) then
             pat7Set.length:=pat7Set.length+1;
             pat7Set.content[pat7Set.length] := msgPat2;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat14Set.content[i]].concatPart[3]]) then
        Spy_known[msgs[pat14Set.content[i]].concatPart[3]]:=true;
        msgPat3 := msgs[pat14Set.content[i]].concatPart[3];
        isPat8(msgs[msgPat3],flagPat3);
        if (flagPat3) then
          if(!exist(pat8Set,msgPat3)) then
             pat8Set.length:=pat8Set.length+1;
             pat8Set.content[pat8Set.length] := msgPat3;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat14Set.content[i]].concatPart[4]]) then
        Spy_known[msgs[pat14Set.content[i]].concatPart[4]]:=true;
        msgPat4 := msgs[pat14Set.content[i]].concatPart[4];
        isPat9(msgs[msgPat4],flagPat4);
        if (flagPat4) then
          if(!exist(pat9Set,msgPat4)) then
             pat9Set.length:=pat9Set.length+1;
             pat9Set.content[pat9Set.length] := msgPat4;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i1: msgLen do
  ruleset i2: msgLen do
  ruleset i3: msgLen do
  ruleset i4: msgLen do 
    rule "enconcat 14"	---pat14
      i1<=pat6Set.length & Spy_known[pat6Set.content[i1]] &
      i2<=pat7Set.length & Spy_known[pat7Set.content[i2]] &
      i3<=pat8Set.length & Spy_known[pat8Set.content[i3]] &
      i4<=pat9Set.length & Spy_known[pat9Set.content[i4]] &
      matchPat(construct14By6789(pat6Set.content[i1],pat7Set.content[i2],pat8Set.content[i3],pat9Set.content[i4]), sPat14Set)&
      !Spy_known[constructIndex14By6789(pat6Set.content[i1],pat7Set.content[i2],pat8Set.content[i3],pat9Set.content[i4])] 
      ==>
      var concatMsgNo:indexType;
      concatMsg:Message;
      begin
        put "rule enconcat14\n";
        concatMsgNo := constructIndex14By6789(pat6Set.content[i1],pat7Set.content[i2],pat8Set.content[i3],pat9Set.content[i4]);
        if concatMsgNo = msg_end + 1 then 
          msg_end :=msg_end + 1;
          concatMsg:= construct14By6789(pat6Set.content[i1],pat7Set.content[i2],pat8Set.content[i3],pat9Set.content[i4]);
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
endruleset;
endruleset;

--- Sign and verify rules of pat: sign{start.ue1.ausf.certC}sk(A), for intruder
ruleset i:msgLen do 
  ruleset j:msgLen do 
    rule "constructSign 15"	---pat15
      i<=pat14Set.length & pat14Set.content[i] != 0 & Spy_known[pat14Set.content[i]] &
      j<=pat4Set.length & pat4Set.content[j] != 0 & Spy_known[pat4Set.content[j]] &
      matchPat(construct15By144(pat14Set.content[i],pat4Set.content[j]), sPat15Set) &
      !Spy_known[constructIndex15By144(pat14Set.content[i],pat4Set.content[j])] 
    ==>
      var signMsgNo:indexType;
      signMsg:Message;
      begin
        put "rule constructSign15\n";
        if (msgs[pat4Set.content[j]].k.encType=SK) then
          signMsgNo := constructIndex15By144(pat14Set.content[i],pat4Set.content[j]);
          if signMsgNo = msg_end + 1 then 
             msg_end :=msg_end + 1;
             signMsg := construct15By144(pat14Set.content[i],pat4Set.content[j]);
             msgs[signMsgNo] := signMsg;
          endif;
          if (!exist(pat15Set,signMsgNo)) then
            pat15Set.length := pat15Set.length+1;
            pat15Set.content[pat15Set.length]:=signMsgNo;
          endif;
          Spy_known[signMsgNo] := true;
        endif;
      end;
  endruleset;
endruleset;

--- enconcat and deconcat rules for pat: concat(ue1.ausf.prekey)

ruleset i:msgLen do 
  rule "deconcat 16" --pat16
    i<=pat16Set.length & pat16Set.content[i] != 0 & Spy_known[pat16Set.content[i]]   &
    !(Spy_known[msgs[pat16Set.content[i]].concatPart[1]]&Spy_known[msgs[pat16Set.content[i]].concatPart[2]]&Spy_known[msgs[pat16Set.content[i]].concatPart[3]])
    ==>
    var msgPat1,msgPat2,msgPat3:indexType;
        flagPat1,flagPat2,flagPat3:boolean;
    begin
      put "rule deconcat16\n";
      if (!Spy_known[msgs[pat16Set.content[i]].concatPart[1]]) then
        Spy_known[msgs[pat16Set.content[i]].concatPart[1]]:=true;
        msgPat1 := msgs[pat16Set.content[i]].concatPart[1];
        isPat7(msgs[msgPat1],flagPat1);
        if (flagPat1) then
          if(!exist(pat7Set,msgPat1)) then
             pat7Set.length:=pat7Set.length+1;
             pat7Set.content[pat7Set.length] := msgPat1;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat16Set.content[i]].concatPart[2]]) then
        Spy_known[msgs[pat16Set.content[i]].concatPart[2]]:=true;
        msgPat2 := msgs[pat16Set.content[i]].concatPart[2];
        isPat8(msgs[msgPat2],flagPat2);
        if (flagPat2) then
          if(!exist(pat8Set,msgPat2)) then
             pat8Set.length:=pat8Set.length+1;
             pat8Set.content[pat8Set.length] := msgPat2;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat16Set.content[i]].concatPart[3]]) then
        Spy_known[msgs[pat16Set.content[i]].concatPart[3]]:=true;
        msgPat3 := msgs[pat16Set.content[i]].concatPart[3];
        isPat11(msgs[msgPat3],flagPat3);
        if (flagPat3) then
          if(!exist(pat11Set,msgPat3)) then
             pat11Set.length:=pat11Set.length+1;
             pat11Set.content[pat11Set.length] := msgPat3;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i1: msgLen do
  ruleset i2: msgLen do
  ruleset i3: msgLen do 
    rule "enconcat 16"	---pat16
      i1<=pat7Set.length & Spy_known[pat7Set.content[i1]] &
      i2<=pat8Set.length & Spy_known[pat8Set.content[i2]] &
      i3<=pat11Set.length & Spy_known[pat11Set.content[i3]] &
      matchPat(construct16By7811(pat7Set.content[i1],pat8Set.content[i2],pat11Set.content[i3]), sPat16Set)&
      !Spy_known[constructIndex16By7811(pat7Set.content[i1],pat8Set.content[i2],pat11Set.content[i3])] 
      ==>
      var concatMsgNo:indexType;
      concatMsg:Message;
      begin
        put "rule enconcat16\n";
        concatMsgNo := constructIndex16By7811(pat7Set.content[i1],pat8Set.content[i2],pat11Set.content[i3]);
        if concatMsgNo = msg_end + 1 then 
          msg_end :=msg_end + 1;
          concatMsg:= construct16By7811(pat7Set.content[i1],pat8Set.content[i2],pat11Set.content[i3]);
          msgs[concatMsgNo] := concatMsg;
        endif;
        Spy_known[concatMsgNo]:=true;
        if (!exist(pat16Set,concatMsgNo)) then
          pat16Set.length:=pat16Set.length+1;
          pat16Set.content[pat16Set.length]:=concatMsgNo;
        endif;
      end;
endruleset;
endruleset;
endruleset;

--- hash and dehash rules of pat: hash{ue1.ausf.prekey}, for intruder
ruleset i:msgLen do 
  ruleset j:msgLen do 
    rule "constructHash 17"  --pat17
      i<=pat16Set.length & pat16Set.content[i] != 0 & Spy_known[pat16Set.content[i]] &
      matchPat(construct17By16(pat16Set.content[i]), sPat17Set) &
      !Spy_known[constructIndex17By16(pat16Set.content[i])]
      ==>
      var hashMsgNo:indexType;
      hashMsg:Message;
      begin
        put "rule constructHash 17\n";
        hashMsgNo := constructIndex17By16(pat16Set.content[i]);
        if hashMsgNo = msg_end + 1 then
          msg_end := msg_end + 1;
          hashMsg := construct17By16(pat16Set.content[i]);
          msgs[hashMsgNo] := hashMsg;
        endif;
        Spy_known[hashMsgNo]:=true;
        if (!exist(pat17Set,hashMsgNo)) then
          pat17Set.length:=pat17Set.length+1;
          pat17Set.content[pat17Set.length]:=hashMsgNo;
        endif;
      end;
  endruleset;
endruleset;

--- encrypt and decrypt rules of pat senc(start.ue1.ausf.certC,hash(ue1.ausf.prekey))
ruleset i:msgLen do
  rule "sdecrypt 18" --pat18
    i<=pat18Set.length & pat18Set.content[i] != 0
    & Spy_known[pat18Set.content[i]] & !Spy_known[msgs[pat18Set.content[i]].sencMsg]
    ==>
    var key_inv:Message;
	      msgPat14,keyNo:indexType;
	      flag_pat14:boolean;
    begin
      put "rule sdecrypt18\n";
      key_inv := inverseKey(msgs[msgs[pat18Set.content[i]].sencKey]);
      get_msgNo(key_inv,keyNo);
      if (key_inv.k.encType = MsgK & Spy_known[keyNo]) then
        Spy_known[msgs[pat18Set.content[i]].sencMsg]:=true;
        msgPat14:=msgs[pat18Set.content[i]].sencMsg;
        isPat14(msgs[msgPat14],flag_pat14);
        if (flag_pat14) then
          if (!exist(pat14Set,msgPat14)) then
            pat14Set.length:=pat14Set.length+1;
            pat14Set.content[pat14Set.length]:=msgPat14;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i:msgLen do 
  ruleset j:msgLen do 
    rule "sencrypt 18"  --pat18
      i<=pat14Set.length & pat14Set.content[i] != 0 & Spy_known[pat14Set.content[i]] &
      j<=pat17Set.length & pat17Set.content[j] != 0 & Spy_known[pat17Set.content[j]] &
      matchPat(construct18By1417(pat14Set.content[i],pat17Set.content[j]), sPat18Set) &
      !Spy_known[constructIndex18By1417(pat14Set.content[i],pat17Set.content[j])] 
       ==>
      var encMsgNo:indexType;
      encMsg:Message;
      begin
        put "rule sencrypt18\n";
        if (msgs[pat17Set.content[j]].k.encType=MsgK) then
          encMsgNo := constructIndex18By1417(pat14Set.content[i],pat17Set.content[j]);
          if encMsgNo = msg_end + 1 then 
             msg_end :=msg_end + 1;
             encMsg:= construct18By1417(pat14Set.content[i],pat17Set.content[j]);
             msgs[encMsgNo] := encMsg;
          endif;
          if (!exist(pat18Set,encMsgNo)) then
            pat18Set.length := pat18Set.length+1;
            pat18Set.content[pat18Set.length]:=encMsgNo;
          endif;
          Spy_known[encMsgNo] := true;
        endif;
      end;
  endruleset;
endruleset;

--- enconcat and deconcat rules for pat: concat(aenc{prekey}pk(C).certA.sign(start.ue1.ausf.certC,sk(A)).senc{start.ue1.ausf.certC}hash(ue1.ausf.prekey))

ruleset i:msgLen do 
  rule "deconcat 19" --pat19
    i<=pat19Set.length & pat19Set.content[i] != 0 & Spy_known[pat19Set.content[i]]   &
    !(Spy_known[msgs[pat19Set.content[i]].concatPart[1]]&Spy_known[msgs[pat19Set.content[i]].concatPart[2]]&Spy_known[msgs[pat19Set.content[i]].concatPart[3]]&Spy_known[msgs[pat19Set.content[i]].concatPart[4]])
    ==>
    var msgPat1,msgPat2,msgPat3,msgPat4:indexType;
        flagPat1,flagPat2,flagPat3,flagPat4:boolean;
    begin
      put "rule deconcat19\n";
      if (!Spy_known[msgs[pat19Set.content[i]].concatPart[1]]) then
        Spy_known[msgs[pat19Set.content[i]].concatPart[1]]:=true;
        msgPat1 := msgs[pat19Set.content[i]].concatPart[1];
        isPat12(msgs[msgPat1],flagPat1);
        if (flagPat1) then
          if(!exist(pat12Set,msgPat1)) then
             pat12Set.length:=pat12Set.length+1;
             pat12Set.content[pat12Set.length] := msgPat1;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat19Set.content[i]].concatPart[2]]) then
        Spy_known[msgs[pat19Set.content[i]].concatPart[2]]:=true;
        msgPat2 := msgs[pat19Set.content[i]].concatPart[2];
        isPat13(msgs[msgPat2],flagPat2);
        if (flagPat2) then
          if(!exist(pat13Set,msgPat2)) then
             pat13Set.length:=pat13Set.length+1;
             pat13Set.content[pat13Set.length] := msgPat2;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat19Set.content[i]].concatPart[3]]) then
        Spy_known[msgs[pat19Set.content[i]].concatPart[3]]:=true;
        msgPat3 := msgs[pat19Set.content[i]].concatPart[3];
        isPat15(msgs[msgPat3],flagPat3);
        if (flagPat3) then
          if(!exist(pat15Set,msgPat3)) then
             pat15Set.length:=pat15Set.length+1;
             pat15Set.content[pat15Set.length] := msgPat3;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat19Set.content[i]].concatPart[4]]) then
        Spy_known[msgs[pat19Set.content[i]].concatPart[4]]:=true;
        msgPat4 := msgs[pat19Set.content[i]].concatPart[4];
        isPat18(msgs[msgPat4],flagPat4);
        if (flagPat4) then
          if(!exist(pat18Set,msgPat4)) then
             pat18Set.length:=pat18Set.length+1;
             pat18Set.content[pat18Set.length] := msgPat4;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i1: msgLen do
  ruleset i2: msgLen do
  ruleset i3: msgLen do
  ruleset i4: msgLen do 
    rule "enconcat 19"	---pat19
      i1<=pat12Set.length & Spy_known[pat12Set.content[i1]] &
      i2<=pat13Set.length & Spy_known[pat13Set.content[i2]] &
      i3<=pat15Set.length & Spy_known[pat15Set.content[i3]] &
      i4<=pat18Set.length & Spy_known[pat18Set.content[i4]] &
      matchPat(construct19By12131518(pat12Set.content[i1],pat13Set.content[i2],pat15Set.content[i3],pat18Set.content[i4]), sPat19Set)&
      !Spy_known[constructIndex19By12131518(pat12Set.content[i1],pat13Set.content[i2],pat15Set.content[i3],pat18Set.content[i4])] 
      ==>
      var concatMsgNo:indexType;
      concatMsg:Message;
      begin
        put "rule enconcat19\n";
        concatMsgNo := constructIndex19By12131518(pat12Set.content[i1],pat13Set.content[i2],pat15Set.content[i3],pat18Set.content[i4]);
        if concatMsgNo = msg_end + 1 then 
          msg_end :=msg_end + 1;
          concatMsg:= construct19By12131518(pat12Set.content[i1],pat13Set.content[i2],pat15Set.content[i3],pat18Set.content[i4]);
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
endruleset;
endruleset;

--- enconcat and deconcat rules for pat: concat(x1.seafn)

ruleset i:msgLen do 
  rule "deconcat 25" --pat25
    i<=pat25Set.length & pat25Set.content[i] != 0 & Spy_known[pat25Set.content[i]]   &
    !(Spy_known[msgs[pat25Set.content[i]].concatPart[1]]&Spy_known[msgs[pat25Set.content[i]].concatPart[2]])
    ==>
    var msgPat1,msgPat2:indexType;
        flagPat1,flagPat2:boolean;
    begin
      put "rule deconcat25\n";
      if (!Spy_known[msgs[pat25Set.content[i]].concatPart[1]]) then
        Spy_known[msgs[pat25Set.content[i]].concatPart[1]]:=true;
        msgPat1 := msgs[pat25Set.content[i]].concatPart[1];
        isPat23(msgs[msgPat1],flagPat1);
        if (flagPat1) then
          if(!exist(pat23Set,msgPat1)) then
             pat23Set.length:=pat23Set.length+1;
             pat23Set.content[pat23Set.length] := msgPat1;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat25Set.content[i]].concatPart[2]]) then
        Spy_known[msgs[pat25Set.content[i]].concatPart[2]]:=true;
        msgPat2 := msgs[pat25Set.content[i]].concatPart[2];
        isPat24(msgs[msgPat2],flagPat2);
        if (flagPat2) then
          if(!exist(pat24Set,msgPat2)) then
             pat24Set.length:=pat24Set.length+1;
             pat24Set.content[pat24Set.length] := msgPat2;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i1: msgLen do
  ruleset i2: msgLen do 
    rule "enconcat 25"	---pat25
      i1<=pat23Set.length & Spy_known[pat23Set.content[i1]] &
      i2<=pat24Set.length & Spy_known[pat24Set.content[i2]] &
      matchPat(construct25By2324(pat23Set.content[i1],pat24Set.content[i2]), sPat25Set)&
      !Spy_known[constructIndex25By2324(pat23Set.content[i1],pat24Set.content[i2])] 
      ==>
      var concatMsgNo:indexType;
      concatMsg:Message;
      begin
        put "rule enconcat25\n";
        concatMsgNo := constructIndex25By2324(pat23Set.content[i1],pat24Set.content[i2]);
        if concatMsgNo = msg_end + 1 then 
          msg_end :=msg_end + 1;
          concatMsg:= construct25By2324(pat23Set.content[i1],pat24Set.content[i2]);
          msgs[concatMsgNo] := concatMsg;
        endif;
        Spy_known[concatMsgNo]:=true;
        if (!exist(pat25Set,concatMsgNo)) then
          pat25Set.length:=pat25Set.length+1;
          pat25Set.content[pat25Set.length]:=concatMsgNo;
        endif;
      end;
endruleset;
endruleset;

--- enconcat and deconcat rules for pat: concat(x4.x5)

ruleset i:msgLen do 
  rule "deconcat 30" --pat30
    i<=pat30Set.length & pat30Set.content[i] != 0 & Spy_known[pat30Set.content[i]]   &
    !(Spy_known[msgs[pat30Set.content[i]].concatPart[1]]&Spy_known[msgs[pat30Set.content[i]].concatPart[2]])
    ==>
    var msgPat1,msgPat2:indexType;
        flagPat1,flagPat2:boolean;
    begin
      put "rule deconcat30\n";
      if (!Spy_known[msgs[pat30Set.content[i]].concatPart[1]]) then
        Spy_known[msgs[pat30Set.content[i]].concatPart[1]]:=true;
        msgPat1 := msgs[pat30Set.content[i]].concatPart[1];
        isPat28(msgs[msgPat1],flagPat1);
        if (flagPat1) then
          if(!exist(pat28Set,msgPat1)) then
             pat28Set.length:=pat28Set.length+1;
             pat28Set.content[pat28Set.length] := msgPat1;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat30Set.content[i]].concatPart[2]]) then
        Spy_known[msgs[pat30Set.content[i]].concatPart[2]]:=true;
        msgPat2 := msgs[pat30Set.content[i]].concatPart[2];
        isPat29(msgs[msgPat2],flagPat2);
        if (flagPat2) then
          if(!exist(pat29Set,msgPat2)) then
             pat29Set.length:=pat29Set.length+1;
             pat29Set.content[pat29Set.length] := msgPat2;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i1: msgLen do
  ruleset i2: msgLen do 
    rule "enconcat 30"	---pat30
      i1<=pat28Set.length & Spy_known[pat28Set.content[i1]] &
      i2<=pat29Set.length & Spy_known[pat29Set.content[i2]] &
      matchPat(construct30By2829(pat28Set.content[i1],pat29Set.content[i2]), sPat30Set)&
      !Spy_known[constructIndex30By2829(pat28Set.content[i1],pat29Set.content[i2])] 
      ==>
      var concatMsgNo:indexType;
      concatMsg:Message;
      begin
        put "rule enconcat30\n";
        concatMsgNo := constructIndex30By2829(pat28Set.content[i1],pat29Set.content[i2]);
        if concatMsgNo = msg_end + 1 then 
          msg_end :=msg_end + 1;
          concatMsg:= construct30By2829(pat28Set.content[i1],pat29Set.content[i2]);
          msgs[concatMsgNo] := concatMsg;
        endif;
        Spy_known[concatMsgNo]:=true;
        if (!exist(pat30Set,concatMsgNo)) then
          pat30Set.length:=pat30Set.length+1;
          pat30Set.content[pat30Set.length]:=concatMsgNo;
        endif;
      end;
endruleset;
endruleset;

--- enconcat and deconcat rules for pat: concat(x6.x7.x8.x9)

ruleset i:msgLen do 
  rule "deconcat 35" --pat35
    i<=pat35Set.length & pat35Set.content[i] != 0 & Spy_known[pat35Set.content[i]]   &
    !(Spy_known[msgs[pat35Set.content[i]].concatPart[1]]&Spy_known[msgs[pat35Set.content[i]].concatPart[2]]&Spy_known[msgs[pat35Set.content[i]].concatPart[3]]&Spy_known[msgs[pat35Set.content[i]].concatPart[4]])
    ==>
    var msgPat1,msgPat2,msgPat3,msgPat4:indexType;
        flagPat1,flagPat2,flagPat3,flagPat4:boolean;
    begin
      put "rule deconcat35\n";
      if (!Spy_known[msgs[pat35Set.content[i]].concatPart[1]]) then
        Spy_known[msgs[pat35Set.content[i]].concatPart[1]]:=true;
        msgPat1 := msgs[pat35Set.content[i]].concatPart[1];
        isPat31(msgs[msgPat1],flagPat1);
        if (flagPat1) then
          if(!exist(pat31Set,msgPat1)) then
             pat31Set.length:=pat31Set.length+1;
             pat31Set.content[pat31Set.length] := msgPat1;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat35Set.content[i]].concatPart[2]]) then
        Spy_known[msgs[pat35Set.content[i]].concatPart[2]]:=true;
        msgPat2 := msgs[pat35Set.content[i]].concatPart[2];
        isPat32(msgs[msgPat2],flagPat2);
        if (flagPat2) then
          if(!exist(pat32Set,msgPat2)) then
             pat32Set.length:=pat32Set.length+1;
             pat32Set.content[pat32Set.length] := msgPat2;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat35Set.content[i]].concatPart[3]]) then
        Spy_known[msgs[pat35Set.content[i]].concatPart[3]]:=true;
        msgPat3 := msgs[pat35Set.content[i]].concatPart[3];
        isPat33(msgs[msgPat3],flagPat3);
        if (flagPat3) then
          if(!exist(pat33Set,msgPat3)) then
             pat33Set.length:=pat33Set.length+1;
             pat33Set.content[pat33Set.length] := msgPat3;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat35Set.content[i]].concatPart[4]]) then
        Spy_known[msgs[pat35Set.content[i]].concatPart[4]]:=true;
        msgPat4 := msgs[pat35Set.content[i]].concatPart[4];
        isPat34(msgs[msgPat4],flagPat4);
        if (flagPat4) then
          if(!exist(pat34Set,msgPat4)) then
             pat34Set.length:=pat34Set.length+1;
             pat34Set.content[pat34Set.length] := msgPat4;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i1: msgLen do
  ruleset i2: msgLen do
  ruleset i3: msgLen do
  ruleset i4: msgLen do 
    rule "enconcat 35"	---pat35
      i1<=pat31Set.length & Spy_known[pat31Set.content[i1]] &
      i2<=pat32Set.length & Spy_known[pat32Set.content[i2]] &
      i3<=pat33Set.length & Spy_known[pat33Set.content[i3]] &
      i4<=pat34Set.length & Spy_known[pat34Set.content[i4]] &
      matchPat(construct35By31323334(pat31Set.content[i1],pat32Set.content[i2],pat33Set.content[i3],pat34Set.content[i4]), sPat35Set)&
      !Spy_known[constructIndex35By31323334(pat31Set.content[i1],pat32Set.content[i2],pat33Set.content[i3],pat34Set.content[i4])] 
      ==>
      var concatMsgNo:indexType;
      concatMsg:Message;
      begin
        put "rule enconcat35\n";
        concatMsgNo := constructIndex35By31323334(pat31Set.content[i1],pat32Set.content[i2],pat33Set.content[i3],pat34Set.content[i4]);
        if concatMsgNo = msg_end + 1 then 
          msg_end :=msg_end + 1;
          concatMsg:= construct35By31323334(pat31Set.content[i1],pat32Set.content[i2],pat33Set.content[i3],pat34Set.content[i4]);
          msgs[concatMsgNo] := concatMsg;
        endif;
        Spy_known[concatMsgNo]:=true;
        if (!exist(pat35Set,concatMsgNo)) then
          pat35Set.length:=pat35Set.length+1;
          pat35Set.content[pat35Set.length]:=concatMsgNo;
        endif;
      end;
endruleset;
endruleset;
endruleset;
endruleset;

--- enconcat and deconcat rules for pat: concat(start.ue1.prekey)

ruleset i:msgLen do 
  rule "deconcat 36" --pat36
    i<=pat36Set.length & pat36Set.content[i] != 0 & Spy_known[pat36Set.content[i]]   &
    !(Spy_known[msgs[pat36Set.content[i]].concatPart[1]]&Spy_known[msgs[pat36Set.content[i]].concatPart[2]]&Spy_known[msgs[pat36Set.content[i]].concatPart[3]])
    ==>
    var msgPat1,msgPat2,msgPat3:indexType;
        flagPat1,flagPat2,flagPat3:boolean;
    begin
      put "rule deconcat36\n";
      if (!Spy_known[msgs[pat36Set.content[i]].concatPart[1]]) then
        Spy_known[msgs[pat36Set.content[i]].concatPart[1]]:=true;
        msgPat1 := msgs[pat36Set.content[i]].concatPart[1];
        isPat6(msgs[msgPat1],flagPat1);
        if (flagPat1) then
          if(!exist(pat6Set,msgPat1)) then
             pat6Set.length:=pat6Set.length+1;
             pat6Set.content[pat6Set.length] := msgPat1;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat36Set.content[i]].concatPart[2]]) then
        Spy_known[msgs[pat36Set.content[i]].concatPart[2]]:=true;
        msgPat2 := msgs[pat36Set.content[i]].concatPart[2];
        isPat7(msgs[msgPat2],flagPat2);
        if (flagPat2) then
          if(!exist(pat7Set,msgPat2)) then
             pat7Set.length:=pat7Set.length+1;
             pat7Set.content[pat7Set.length] := msgPat2;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat36Set.content[i]].concatPart[3]]) then
        Spy_known[msgs[pat36Set.content[i]].concatPart[3]]:=true;
        msgPat3 := msgs[pat36Set.content[i]].concatPart[3];
        isPat11(msgs[msgPat3],flagPat3);
        if (flagPat3) then
          if(!exist(pat11Set,msgPat3)) then
             pat11Set.length:=pat11Set.length+1;
             pat11Set.content[pat11Set.length] := msgPat3;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i1: msgLen do
  ruleset i2: msgLen do
  ruleset i3: msgLen do 
    rule "enconcat 36"	---pat36
      i1<=pat6Set.length & Spy_known[pat6Set.content[i1]] &
      i2<=pat7Set.length & Spy_known[pat7Set.content[i2]] &
      i3<=pat11Set.length & Spy_known[pat11Set.content[i3]] &
      matchPat(construct36By6711(pat6Set.content[i1],pat7Set.content[i2],pat11Set.content[i3]), sPat36Set)&
      !Spy_known[constructIndex36By6711(pat6Set.content[i1],pat7Set.content[i2],pat11Set.content[i3])] 
      ==>
      var concatMsgNo:indexType;
      concatMsg:Message;
      begin
        put "rule enconcat36\n";
        concatMsgNo := constructIndex36By6711(pat6Set.content[i1],pat7Set.content[i2],pat11Set.content[i3]);
        if concatMsgNo = msg_end + 1 then 
          msg_end :=msg_end + 1;
          concatMsg:= construct36By6711(pat6Set.content[i1],pat7Set.content[i2],pat11Set.content[i3]);
          msgs[concatMsgNo] := concatMsg;
        endif;
        Spy_known[concatMsgNo]:=true;
        if (!exist(pat36Set,concatMsgNo)) then
          pat36Set.length:=pat36Set.length+1;
          pat36Set.content[pat36Set.length]:=concatMsgNo;
        endif;
      end;
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
    pat25Set.content[i] := 0;
    sPat25Set.content[i] := 0;
    pat26Set.content[i] := 0;
    sPat26Set.content[i] := 0;
    pat27Set.content[i] := 0;
    sPat27Set.content[i] := 0;
    pat28Set.content[i] := 0;
    sPat28Set.content[i] := 0;
    pat29Set.content[i] := 0;
    sPat29Set.content[i] := 0;
    pat30Set.content[i] := 0;
    sPat30Set.content[i] := 0;
    pat31Set.content[i] := 0;
    sPat31Set.content[i] := 0;
    pat32Set.content[i] := 0;
    sPat32Set.content[i] := 0;
    pat33Set.content[i] := 0;
    sPat33Set.content[i] := 0;
    pat34Set.content[i] := 0;
    sPat34Set.content[i] := 0;
    pat35Set.content[i] := 0;
    sPat35Set.content[i] := 0;
    pat36Set.content[i] := 0;
    sPat36Set.content[i] := 0;
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
    pat25Set.length := 0;
    sPat25Set.length := 0;
    pat26Set.length := 0;
    sPat26Set.length := 0;
    pat27Set.length := 0;
    sPat27Set.length := 0;
    pat28Set.length := 0;
    sPat28Set.length := 0;
    pat29Set.length := 0;
    sPat29Set.length := 0;
    pat30Set.length := 0;
    sPat30Set.length := 0;
    pat31Set.length := 0;
    sPat31Set.length := 0;
    pat32Set.length := 0;
    sPat32Set.length := 0;
    pat33Set.length := 0;
    sPat33Set.length := 0;
    pat34Set.length := 0;
    sPat34Set.length := 0;
    pat35Set.length := 0;
    sPat35Set.length := 0;
    pat36Set.length := 0;
    sPat36Set.length := 0;
    IntruEmit1 := false;
    IntruEmit2 := false;
    IntruEmit3 := false;
    IntruEmit4 := false;
    IntruEmit5 := false;
    IntruEmit6 := false;
    IntruEmit7 := false;
    IntruEmit8 := false;
    IntruEmit9 := false;
    IntruEmit10 := false;
    IntruEmit11 := false;
    IntruEmit12 := false;
    IntruEmit13 := false;
    IntruEmit14 := false;
    IntruEmit15 := false;
    IntruEmit16 := false;
    IntruEmit17 := false;
    IntruEmit18 := false;
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
  pat4Set.length := pat4Set.length + 1; 
  pat4Set.content[pat4Set.length] :=msg_end;
  Spy_known[msg_end] := true;
    for i : roleANums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := key;
    msgs[msg_end].k.ag := roleA[i].A;
    msgs[msg_end].k.encType:=PK;
    msgs[msg_end].length := 1;
    pat4Set.length := pat4Set.length + 1;
    pat4Set.content[pat4Set.length] :=msg_end;
    Spy_known[msg_end] := true;
    A_known[msg_end] := true;
  endfor;
  for i : roleANums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := key;
    msgs[msg_end].k.ag := roleA[i].A;
    msgs[msg_end].k.encType:=SK;
    msgs[msg_end].length := 1;
    pat4Set.length := pat4Set.length + 1;
    pat4Set.content[pat4Set.length] :=msg_end;
    A_known[msg_end] := true;
  endfor;
  for i : roleBNums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := key;
    msgs[msg_end].k.ag := roleB[i].B;
    msgs[msg_end].k.encType:=PK;
    msgs[msg_end].length := 1;
    pat4Set.length := pat4Set.length + 1;
    pat4Set.content[pat4Set.length] :=msg_end;
    Spy_known[msg_end] := true;
    B_known[msg_end] := true;
  endfor;
  for i : roleBNums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := key;
    msgs[msg_end].k.ag := roleB[i].B;
    msgs[msg_end].k.encType:=SK;
    msgs[msg_end].length := 1;
    pat4Set.length := pat4Set.length + 1;
    pat4Set.content[pat4Set.length] :=msg_end;
    B_known[msg_end] := true;
  endfor;
  for i : roleCNums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := key;
    msgs[msg_end].k.ag := roleC[i].C;
    msgs[msg_end].k.encType:=PK;
    msgs[msg_end].length := 1;
    pat4Set.length := pat4Set.length + 1;
    pat4Set.content[pat4Set.length] :=msg_end;
    Spy_known[msg_end] := true;
    C_known[msg_end] := true;
  endfor;
  for i : roleCNums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := key;
    msgs[msg_end].k.ag := roleC[i].C;
    msgs[msg_end].k.encType:=SK;
    msgs[msg_end].length := 1;
    pat4Set.length := pat4Set.length + 1;
    pat4Set.content[pat4Set.length] :=msg_end;
    C_known[msg_end] := true;
  endfor;
  for i : roleDNums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := key;
    msgs[msg_end].k.ag := roleD[i].D;
    msgs[msg_end].k.encType:=PK;
    msgs[msg_end].length := 1;
    pat4Set.length := pat4Set.length + 1;
    pat4Set.content[pat4Set.length] :=msg_end;
    Spy_known[msg_end] := true;
    D_known[msg_end] := true;
  endfor;
  for i : roleDNums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := key;
    msgs[msg_end].k.ag := roleD[i].D;
    msgs[msg_end].k.encType:=SK;
    msgs[msg_end].length := 1;
    pat4Set.length := pat4Set.length + 1;
    pat4Set.content[pat4Set.length] :=msg_end;
    D_known[msg_end] := true;
  endfor;
  for i : roleBNums do
    constructSpat5(roleB[i].supi,roleB[i].ue,roleB[i].D, gnum);
  endfor;
  for i : roleBNums do
    constructSpat7(roleB[i].ue1, gnum);
  endfor;
  for i : roleBNums do
    constructSpat19(roleB[i].prekey,roleB[i].C,roleB[i].certA,roleB[i].start,roleB[i].ue1,roleB[i].ausf,roleB[i].certC,roleB[i].A, gnum);
  endfor;
  for i : roleBNums do
    constructSpat21(roleB[i].eapm, gnum);
  endfor;
  for i : roleCNums do
    constructSpat25(roleC[i].x1,roleC[i].seafn, gnum);
  endfor;
  for i : roleANums do
    constructSpat26(roleA[i].x2, gnum);
  endfor;
  for i : roleCNums do
    constructSpat27(roleC[i].x3, gnum);
  endfor;
  for i : roleANums do
    constructSpat30(roleA[i].x4,roleA[i].x5, gnum);
  endfor;
  for i : roleCNums do
    constructSpat35(roleC[i].x6,roleC[i].x7,roleC[i].x8,roleC[i].x9, gnum);
  endfor;
  for i : roleANums do
    constructSpat20(roleA[i].x10, gnum);
  endfor;
  for i : roleCNums do
    constructSpat21(roleC[i].eapm, gnum);
  endfor;
  for i : roleANums do
    constructSpat22(roleA[i].sucm, gnum);
  endfor;
  for i : roleDNums do
    constructSpat25(roleD[i].x1,roleD[i].seafn, gnum);
  endfor;
  for i : roleBNums do
    constructSpat6(roleB[i].start, gnum);
  endfor;
  for i : roleBNums do
    constructSpat10(roleB[i].ausf,roleB[i].certC, gnum);
  endfor;
  for i : roleBNums do
    constructSpat18(roleB[i].start,roleB[i].ue1,roleB[i].ausf,roleB[i].certC,roleB[i].prekey, gnum);
  endfor;
  for i : roleBNums do
    constructSpat22(roleB[i].sucm, gnum);
  endfor;
  for i : roleCNums do
    constructSpat6(roleC[i].start, gnum);
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
