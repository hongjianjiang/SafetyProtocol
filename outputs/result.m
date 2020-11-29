const
  roleANum:1;
  roleBNum:1;
  totalFact:60;
  msgLength:5;
  chanNum:4;
type
  indexType:0..totalFact;
  roleANums:1..roleANum;
  roleBNums:1..roleBNum;
  msgLen:0..msgLength;
  chanNums:1..chanNum;

  AgentType : enum{anyAgent,Alice, Intruder, Bob}; ---Intruder 
  NonceType : enum{anyNonce, x, Na, y ,xi, Nai, yi};
  ConstType : enum{anyNumber, g, p};
  MsgType : enum {null,agent,nonce,key,aenc,senc,concat,hash,tmp,mod,e,number};
  

  EncryptType : enum{PK,SK,Symk,MsgK};
  KeyType: record 
    encType: EncryptType; 
    ag: AgentType; 
    ag1:AgentType;
    ag2:AgentType;
    m:indexType;
  end;

  AStatus: enum{A1,A2,A3,A4};
  BStatus: enum{B1,B2,B3,B4};

  Message: record
    msgType : MsgType;
    ag : AgentType;
    noncePart : NonceType;
    constPart : ConstType;
    tmpPart : indexType;
    k : KeyType;
    modMsg1 : indexType;
    modMsg2 : indexType;
    expMsg1 : indexType;
    expMsg2 : indexType;
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
   x : NonceType;
   Na : NonceType;
   y : NonceType;
   A : AgentType;
   B : AgentType;
   m2 : Message;
   m1 : Message;
   m3 : Message;
   g : ConstType;
   p : ConstType;
   locx : NonceType;
   locNa : NonceType;
   locy : NonceType;
   locA : AgentType;
   locB : AgentType;
   locm2 : Message;
   locm1 : Message;
   locm3 : Message;
   locg : ConstType;
   locp : ConstType;
   st: AStatus;
   commit : boolean;
  end;
  RoleB : record
   x : NonceType;
   Na : NonceType;
   y : NonceType;
   A : AgentType;
   B : AgentType;
   m2 : Message;
   m1 : Message;
   m3 : Message;
   g : ConstType;
   p : ConstType;
   locx : NonceType;
   locNa : NonceType;
   locy : NonceType;
   locA : AgentType;
   locB : AgentType;
   locm2 : Message;
   locm1 : Message;
   locm3 : Message;
   locg : ConstType;
   locp : ConstType;
   st: BStatus;
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
        put ",";
        printMsg(msgs[msg.aencKey]);
        put "}";
      elsif msg.msgType=senc then
        put "senc{";
        printMsg(msgs[msg.sencMsg]);
        put ",";
        printMsg(msgs[msg.sencKey]);
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
---pat1: g 
procedure lookAddPat1(g:ConstType; Var msg:Message; Var num : indexType);
 Var index : indexType;
 begin
    index:=0;
    for i: indexType do
     if (msgs[i].msgType = number) then
       if (msgs[i].constPart = g) then
         index:=i;
       endif;
     endif;
    endfor;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := number;
      msgs[index].constPart:=g; 
      msgs[index].length := 1;
    endif;
    num:=index;
    msg:=msgs[index];
   end;

---pat1: g 
procedure isPat1(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag1 := false;
    if (msg.msgType = number) then
    flag1 := true;
    endif;
    flag := flag1;
  end;

---spat1: g 
procedure constructSpat1(g:ConstType; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = number) then
        if (msgs[i].constPart = g) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := number;
      msgs[index].constPart := g;
      msgs[index].length := 1;
    endif;
    sPat1Set.length := sPat1Set.length + 1;
    sPat1Set.content[sPat1Set.length] := index;
    num := index;
  end;

---pat2: g.p 
procedure lookAddPat2(g:ConstType; p:ConstType; Var msg:Message; Var num : indexType);
  Var msg1,msg2: Message;
     index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat1(g, msg1, i1);
   lookAddPat1(p, msg2, i2);
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

---pat2: g.p 
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
---spat2: g.p 
procedure constructSpat2(g:ConstType; p:ConstType; Var num: indexType);
  Var i,index, i1, i2:indexType;
  begin
    index:=0;
    constructSpat1(g, i1);
    constructSpat1(p, i2);
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

---pat3: x 
procedure lookAddPat3(x:NonceType; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
      index:=0;
      for i: indexType do
        if(msgs[i].msgType=nonce) then
          if(msgs[i].noncePart=x) then
            index:=i;
          endif;
        endif;
      endfor;
      if(index=0) then
        msg_end := msg_end + 1 ;
        index := msg_end;
        msgs[index].msgType := nonce;
        msgs[index].noncePart:=x; 
        msgs[index].length := 1;
      endif;
      num:=index;
      msg:=msgs[index];
  end;

---pat3: x 
procedure isPat3(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag1 := false;
    if (msg.msgType = nonce) then
      flag1 := true;
    endif;
    flag := flag1;
  end;

---spat3: x 
procedure constructSpat3(x:NonceType; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = nonce) then
        if (msgs[i].noncePart = x) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := nonce;
      msgs[index].noncePart := x;
      msgs[index].length := 1;
    endif;
    sPat3Set.length := sPat3Set.length + 1;
    sPat3Set.content[sPat3Set.length] := index;
    num := index;
  end;

---pat4: exp(g,x) 
procedure lookAddPat4(g:ConstType; x:NonceType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat1(g,msg1,i1);
   lookAddPat3(x,msg2,i2);
   for i : indexType do
     if (msgs[i].msgType = e) then
       if (msgs[i].expMsg1 = i1 & msgs[i].expMsg2 = i2) then
          index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := e;
     msgs[index].expMsg1 := i1; 
     msgs[index].expMsg2 := i2; 
     msgs[index].length := 1;
   endif;
   num:=index;
   msg:=msgs[index];
  end;

---pat4: exp(g,x) 
procedure isPat4(msg:Message; Var flag:boolean);
  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1:=false;
    flagPart2:=false;
    if msg.msgType = e then
      isPat1(msgs[msg.expMsg1],flagPart1);
      isPat3(msgs[msg.expMsg2],flagPart2);
      if flagPart1 & flagPart2 then
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;

---spat4: exp(g,x) 
procedure constructSpat4(g:ConstType; x:NonceType; Var num: indexType);
  Var i,index,i1,i2:indexType;
  begin
    index:=0;
    constructSpat1(g, i1);
    constructSpat3(x, i2);
    i := 1;
    while(i <= msg_end) do
      if (msgs[i].msgType = e) then
        if (msgs[i].expMsg1 = i1 & msgs[i].expMsg2 = i2) then
           index:=i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := e;
      msgs[index].expMsg1 := i1; 
      msgs[index].expMsg2 := i2; 
      msgs[index].length := 1;
    endif;
    sPat4Set.length := sPat4Set.length + 1;
    sPat4Set.content[sPat4Set.length] := index;
    num := index;
  end;

---pat5: mod(exp(g,x),p) 
procedure lookAddPat5(g:ConstType; x:NonceType; p:ConstType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat4(g, x,msg1,i1);
   lookAddPat1(p,msg2,i2);
   for i : indexType do
     if (msgs[i].msgType = mod) then
       if (msgs[i].modMsg1 = i1 & msgs[i].modMsg2 = i2) then
          index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := mod;
     msgs[index].modMsg1 := i1; 
     msgs[index].modMsg2 := i2; 
     msgs[index].length := 1;
   endif;
   num:=index;
   msg:=msgs[index];
  end;

---pat5: mod(exp(g,x),p) 
procedure isPat5(msg:Message; Var flag:boolean);
  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1:=false;
    flagPart2:=false;
    if msg.msgType = mod then
      isPat4(msgs[msg.modMsg1],flagPart1);
      isPat1(msgs[msg.modMsg2],flagPart2);
      if flagPart1 & flagPart2 then
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;

---spat5: mod(exp(g,x),p) 
procedure constructSpat5(g:ConstType; x:NonceType; p:ConstType; Var num: indexType);
  Var i,index,i1,i2:indexType;
  begin
    index:=0;
    constructSpat4(g, x, i1);
    constructSpat1(p, i2);
    i := 1;
    while(i <= msg_end) do
      if (msgs[i].msgType = mod) then
        if (msgs[i].modMsg1 = i1 & msgs[i].modMsg2 = i2) then
           index:=i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := mod;
      msgs[index].modMsg1 := i1; 
      msgs[index].modMsg2 := i2; 
      msgs[index].length := 1;
    endif;
    sPat5Set.length := sPat5Set.length + 1;
    sPat5Set.content[sPat5Set.length] := index;
    num := index;
  end;

---pat6: m2 
procedure lookAddPat6(m2:Message; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
    index:=0;
    for i: indexType do
      if(msgs[i].msgType=tmp) then
        if(msgs[i].tmpPart=m2.tmpPart) then
          index:=i;
        endif;
      endif;
    endfor;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := tmp;
      msgs[index].tmpPart:=m2.tmpPart; 
      msgs[index].length := 1;
    endif;
    num:=index;
    msg:=msgs[index];
  end;

---pat6: m2 
procedure isPat6(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag := true;
  end;

---spat6: m2 
procedure constructSpat6(m2:Message; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = tmp) then
        if (msgs[i].tmpPart = m2.tmpPart) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := tmp;
      msgs[index].tmpPart := m2.tmpPart;
      msgs[index].length := 1;
    endif;
    sPat6Set.length := sPat6Set.length + 1;
    sPat6Set.content[sPat6Set.length] := index;
    num := index;
  end;

---pat7: exp(m2,x) 
procedure lookAddPat7(m2:Message; x:NonceType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat6(m2,msg1,i1);
   lookAddPat3(x,msg2,i2);
   for i : indexType do
     if (msgs[i].msgType = e) then
       if (msgs[i].expMsg1 = i1 & msgs[i].expMsg2 = i2) then
          index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := e;
     msgs[index].expMsg1 := i1; 
     msgs[index].expMsg2 := i2; 
     msgs[index].length := 1;
   endif;
   num:=index;
   msg:=msgs[index];
  end;

---pat7: exp(m2,x) 
procedure isPat7(msg:Message; Var flag:boolean);
  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1:=false;
    flagPart2:=false;
    if msg.msgType = e then
      isPat6(msgs[msg.expMsg1],flagPart1);
      isPat3(msgs[msg.expMsg2],flagPart2);
      if flagPart1 & flagPart2 then
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;

---spat7: exp(m2,x) 
procedure constructSpat7(m2:Message; x:NonceType; Var num: indexType);
  Var i,index,i1,i2:indexType;
  begin
    index:=0;
    constructSpat6(m2, i1);
    constructSpat3(x, i2);
    i := 1;
    while(i <= msg_end) do
      if (msgs[i].msgType = e) then
        if (msgs[i].expMsg1 = i1 & msgs[i].expMsg2 = i2) then
           index:=i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := e;
      msgs[index].expMsg1 := i1; 
      msgs[index].expMsg2 := i2; 
      msgs[index].length := 1;
    endif;
    sPat7Set.length := sPat7Set.length + 1;
    sPat7Set.content[sPat7Set.length] := index;
    num := index;
  end;

---pat8: mod(exp(m2,x),p) 
procedure lookAddPat8(m2:Message; x:NonceType; p:ConstType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat7(m2, x,msg1,i1);
   lookAddPat1(p,msg2,i2);
   for i : indexType do
     if (msgs[i].msgType = mod) then
       if (msgs[i].modMsg1 = i1 & msgs[i].modMsg2 = i2) then
          index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := mod;
     msgs[index].modMsg1 := i1; 
     msgs[index].modMsg2 := i2; 
     msgs[index].length := 1;
   endif;
   num:=index;
   msg:=msgs[index];
  end;

---pat8: mod(exp(m2,x),p) 
procedure isPat8(msg:Message; Var flag:boolean);
  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1:=false;
    flagPart2:=false;
    if msg.msgType = mod then
      isPat7(msgs[msg.modMsg1],flagPart1);
      isPat1(msgs[msg.modMsg2],flagPart2);
      if flagPart1 & flagPart2 then
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;

---spat8: mod(exp(m2,x),p) 
procedure constructSpat8(m2:Message; x:NonceType; p:ConstType; Var num: indexType);
  Var i,index,i1,i2:indexType;
  begin
    index:=0;
    constructSpat7(m2, x, i1);
    constructSpat1(p, i2);
    i := 1;
    while(i <= msg_end) do
      if (msgs[i].msgType = mod) then
        if (msgs[i].modMsg1 = i1 & msgs[i].modMsg2 = i2) then
           index:=i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := mod;
      msgs[index].modMsg1 := i1; 
      msgs[index].modMsg2 := i2; 
      msgs[index].length := 1;
    endif;
    sPat8Set.length := sPat8Set.length + 1;
    sPat8Set.content[sPat8Set.length] := index;
    num := index;
  end;

---pat9: aenc{Na}mod(exp(m2,x),p) 
procedure lookAddPat9(Na:NonceType; m2:Message; x:NonceType; p:ConstType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat3(Na,msg1,i1);
   lookAddPat8(m2, x, p,msg2,i2);
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
     msgs[i2].k.encType := MsgK;
     msgs[i2].k.m := i2;
     msgs[index].length := 1;
   endif;
   num:=index;
   msg:=msgs[index];
  end;

---pat9: aenc{Na}mod(exp(m2,x),p) 
procedure isPat9(msg:Message; Var flag:boolean);
  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1 := false;
    flagPart2 := false;
    if (msg.msgType = aenc) then
      isPat3(msgs[msg.aencMsg],flagPart1);
      isPat8(msgs[msg.aencKey],flagPart2);
      if (flagPart1 & flagPart2) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;

---spat9: aenc{Na}mod(exp(m2,x),p) 
procedure constructSpat9(Na:NonceType; m2:Message; x:NonceType; p:ConstType; Var num: indexType);
  Var i,index,i1,i2:indexType;
  begin
    index:=0;
    constructSpat3(Na, i1);
    constructSpat8(m2, x, p, i2);
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
    sPat9Set.length := sPat9Set.length + 1;
    sPat9Set.content[sPat9Set.length] := index;
    num := index;
  end;

---pat10: m1 
procedure lookAddPat10(m1:Message; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
    index:=0;
    for i: indexType do
      if(msgs[i].msgType=tmp) then
        if(msgs[i].tmpPart=m1.tmpPart) then
          index:=i;
        endif;
      endif;
    endfor;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := tmp;
      msgs[index].tmpPart:=m1.tmpPart; 
      msgs[index].length := 1;
    endif;
    num:=index;
    msg:=msgs[index];
  end;

---pat10: m1 
procedure isPat10(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag := true;
  end;

---spat10: m1 
procedure constructSpat10(m1:Message; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = tmp) then
        if (msgs[i].tmpPart = m1.tmpPart) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := tmp;
      msgs[index].tmpPart := m1.tmpPart;
      msgs[index].length := 1;
    endif;
    sPat10Set.length := sPat10Set.length + 1;
    sPat10Set.content[sPat10Set.length] := index;
    num := index;
  end;

---pat11: m3 
procedure lookAddPat11(m3:Message; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
    index:=0;
    for i: indexType do
      if(msgs[i].msgType=tmp) then
        if(msgs[i].tmpPart=m3.tmpPart) then
          index:=i;
        endif;
      endif;
    endfor;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := tmp;
      msgs[index].tmpPart:=m3.tmpPart; 
      msgs[index].length := 1;
    endif;
    num:=index;
    msg:=msgs[index];
  end;

---pat11: m3 
procedure isPat11(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag := true;
  end;

---spat11: m3 
procedure constructSpat11(m3:Message; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = tmp) then
        if (msgs[i].tmpPart = m3.tmpPart) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := tmp;
      msgs[index].tmpPart := m3.tmpPart;
      msgs[index].length := 1;
    endif;
    sPat11Set.length := sPat11Set.length + 1;
    sPat11Set.content[sPat11Set.length] := index;
    num := index;
  end;

---pat12: aenc{Na}m3 
procedure lookAddPat12(Na:NonceType; m3:Message; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat3(Na,msg1,i1);
   lookAddPat11(m3,msg2,i2);
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
     msgs[i2].k.encType := MsgK;
     msgs[i2].k.m := i2;
     msgs[index].length := 1;
   endif;
   num:=index;
   msg:=msgs[index];
  end;

---pat12: aenc{Na}m3 
procedure isPat12(msg:Message; Var flag:boolean);
  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1 := false;
    flagPart2 := false;
    if (msg.msgType = aenc) then
      isPat3(msgs[msg.aencMsg],flagPart1);
      isPat11(msgs[msg.aencKey],flagPart2);
      if (flagPart1 & flagPart2) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;

---spat12: aenc{Na}m3 
procedure constructSpat12(Na:NonceType; m3:Message; Var num: indexType);
  Var i,index,i1,i2:indexType;
  begin
    index:=0;
    constructSpat3(Na, i1);
    constructSpat11(m3, i2);
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

procedure cons1(g:ConstType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat1(g,msg,num);
  end;
procedure destruct1(msg:Message; Var g:ConstType);
  begin
    g:=msg.constPart;
  end;
procedure cons2(g:ConstType; p:ConstType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat2(g, p,msg,num);
  end;
procedure destruct2(msg:Message; Var g:ConstType; Var p:ConstType);
  Var msgNum1,msgNum2: Message;
      k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    g := msgNum1.constPart;
    msgNum2 := msgs[msg.concatPart[2]];
    p := msgNum2.constPart
  end;
procedure cons3(x:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat3(x,msg,num);
  end;
procedure destruct3(msg:Message; Var x:NonceType);
  begin
    x:=msg.noncePart;
  end;
procedure cons4(g:ConstType; x:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat4(g, x,msg,num);
  end;
procedure destruct4(msg:Message; Var g:ConstType; Var x:NonceType);
  begin
    g:=msgs[msg.expMsg1].constPart;
  end;
procedure cons5(g:ConstType; x:NonceType; p:ConstType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat5(g, x, p,msg,num);
  end;
procedure destruct5(msg:Message; Var g:ConstType; Var x:NonceType; Var p:ConstType);
  var mi1,mi2:indexType;
      modMsg1,modMsg2:Message;
    begin
    clear modMsg1;
    clear modMsg2;
    mi1:=msg.modMsg1;
    mi2:=msg.modMsg2;
    modMsg1:=msgs[mi1];
    modMsg2:=msgs[mi2];
    destruct4(modMsg1,g, x);
    destruct1(modMsg2,p);
  end;
procedure cons6(m2:Message; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat6(m2,msg,num);
  end;
procedure destruct6(msg:Message; Var m2:Message);
  var msgNo:indexType;
  begin
    get_msgNo(msg,msgNo);
    m2.msgType := tmp;
    m2.tmpPart := msgNo;
  end;
procedure cons7(m2:Message; x:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat7(m2, x,msg,num);
  end;
procedure destruct7(msg:Message; Var m2:Message; Var x:NonceType);
  begin
    m2.msgType:=tmp;
    m2.tmpPart:=msg.expMsg1;
  end;
procedure cons8(m2:Message; x:NonceType; p:ConstType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat8(m2, x, p,msg,num);
  end;
procedure destruct8(msg:Message; Var m2:Message; Var x:NonceType; Var p:ConstType);
  var mi1,mi2:indexType;
      modMsg1,modMsg2:Message;
    begin
    clear modMsg1;
    clear modMsg2;
    mi1:=msg.modMsg1;
    mi2:=msg.modMsg2;
    modMsg1:=msgs[mi1];
    modMsg2:=msgs[mi2];
    destruct7(modMsg1,m2, x);
    destruct1(modMsg2,p);
  end;
procedure cons9(Na:NonceType; m2:Message; x:NonceType; p:ConstType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat9(Na, m2, x, p,msg,num);
  end;
procedure destruct9(msg:Message; Var Na:NonceType; Var m2:Message; Var x:NonceType; Var p:ConstType);
  var k1:KeyType;
  var msgKey:Message;
      msg1:Message;
   begin
      clear msg1;
      msgKey := msgs[msg.aencKey];
      destruct8(msgKey, m2, x, p);
      msg1:=msgs[msg.aencMsg];
      Na:=msg1.noncePart;
   end;
procedure cons10(m1:Message; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat10(m1,msg,num);
  end;
procedure destruct10(msg:Message; Var m1:Message);
  var msgNo:indexType;
  begin
    get_msgNo(msg,msgNo);
    m1.msgType := tmp;
    m1.tmpPart := msgNo;
  end;
procedure cons11(m3:Message; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat11(m3,msg,num);
  end;
procedure destruct11(msg:Message; Var m3:Message);
  var msgNo:indexType;
  begin
    get_msgNo(msg,msgNo);
    m3.msgType := tmp;
    m3.tmpPart := msgNo;
  end;
procedure cons12(Na:NonceType; m3:Message; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat12(Na, m3,msg,num);
  end;
procedure destruct12(msg:Message; Var Na:NonceType; Var m3:Message);
  var k1:KeyType;
  var msgKey:Message;
      msg1:Message;
   begin
      clear msg1;
      msgKey := msgs[msg.aencKey];
      destruct11(msgKey, m3);
      msg1:=msgs[msg.aencMsg];
      Na:=msg1.noncePart;
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
        key_inv.k.encType := MsgK;
        key_inv.k.m := msgK.k.m;
        if (msgK.msgType = mod) then 
          key_inv.modMsg1 := msgK.modMsg2;
          key_inv.modMsg2 := msgK.modMsg1;
        elsif (msgK.msgType = e) then 
          key_inv.expMsg1 := msgK.expMsg2;
          key_inv.expMsg2 := msgK.expMsg1;
        endif;
      endif;
    endif;
    return key_inv;
  end;
--- Sorry, construct_function of this pattern has not been written!

function construct2By11(msgNo1,msgNo2:indexType):indexType;
  var index : indexType;
      ---msg : Message;
  begin
   index := 0;
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 2) then
       if (msgs[i].concatPart[1] = msgNo1 & msgs[i].concatPart[2] = msgNo2) then
         index := i;       endif;     endif;
   endfor;
   if (index = 0) then 
     msg_end := msg_end + 1;
     index := msg_end;
     msgs[index].msgType := concat;
     msgs[index].concatPart[1] := msgNo1;
     msgs[index].concatPart[2] := msgNo2;
     msgs[index].length := 2;
   endif;
   return index;
  end;

--- Sorry, construct_function of this pattern has not been written!

function construct4By13(msgNo1, msgNo3:indexType):indexType;
  var index : indexType;
      ---msg : Message;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = e) then
       if (msgs[i].expMsg1 = msgNo1 & msgs[i].expMsg2 = msgNo3) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg_end := msg_end + 1;
     index := msg_end;
     msgs[index].msgType := e;
     msgs[index].expMsg1 := msgNo1;
     msgs[index].expMsg2 := msgNo3;
     msgs[index].length := 1;
   endif;
   return index;
  end;
function construct5By41(msgNo4, msgNo1:indexType):indexType;
  var index : indexType;
      ---msg : Message;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = mod) then
       if (msgs[i].modMsg1 = msgNo4 & msgs[i].modMsg2 = msgNo1) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg_end := msg_end + 1;
     index := msg_end;
     msgs[index].msgType := mod;
     msgs[index].modMsg1 := msgNo4;
     msgs[index].modMsg2 := msgNo1;
     msgs[index].length := 1;
   endif;
   return index;
  end;
--- Sorry, construct_function of this pattern has not been written!

function construct7By63(msgNo6, msgNo3:indexType):indexType;
  var index : indexType;
      ---msg : Message;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = e) then
       if (msgs[i].expMsg1 = msgNo6 & msgs[i].expMsg2 = msgNo3) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg_end := msg_end + 1;
     index := msg_end;
     msgs[index].msgType := e;
     msgs[index].expMsg1 := msgNo6;
     msgs[index].expMsg2 := msgNo3;
     msgs[index].length := 1;
   endif;
   return index;
  end;
function construct8By71(msgNo7, msgNo1:indexType):indexType;
  var index : indexType;
      ---msg : Message;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = mod) then
       if (msgs[i].modMsg1 = msgNo7 & msgs[i].modMsg2 = msgNo1) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg_end := msg_end + 1;
     index := msg_end;
     msgs[index].msgType := mod;
     msgs[index].modMsg1 := msgNo7;
     msgs[index].modMsg2 := msgNo1;
     msgs[index].length := 1;
   endif;
   return index;
  end;
function construct9By38(msgNo3, msgNo8:indexType):indexType;
  var index: indexType;
      ---msg : Message;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = aenc) then
       if (msgs[i].aencMsg = msgNo3 & msgs[i].aencKey = msgNo8) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg_end := msg_end + 1;
     index := msg_end;
     msgs[index].msgType := aenc;
     msgs[index].aencMsg := msgNo3;
     msgs[index].aencKey := msgNo8;
     msgs[index].length := 1;
   endif;
   return index;
  end;

--- Sorry, construct_function of this pattern has not been written!

--- Sorry, construct_function of this pattern has not been written!

function construct12By311(msgNo3, msgNo11:indexType):indexType;
  var index: indexType;
      ---msg : Message;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = aenc) then
       if (msgs[i].aencMsg = msgNo3 & msgs[i].aencKey = msgNo11) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg_end := msg_end + 1;
     index := msg_end;
     msgs[index].msgType := aenc;
     msgs[index].aencMsg := msgNo3;
     msgs[index].aencKey := msgNo11;
     msgs[index].length := 1;
   endif;
   return index;
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
function matchAgent(Var locAg: AgentType; Var Ag: AgentType):boolean;  ---if ag equals to locAg which was derived from recieving msg, or anyAgent, then true
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

function matchTmp(Var locm:Message;Var m:Message):boolean; ---if m equals to locm which was derived from recieving msg, or tmp, then true
  var flag : boolean;
  var index :indexType;
  begin 
    flag := false;
    get_msgNo(m,index);
    if (m.msgType = tmp) then 
      if (m.tmpPart =0 ) then 
        flag := true;
        m.tmpPart :=locm.tmpPart;
      endif;
    elsif (locm.msgType = m.msgType & locm.tmpPart = m.tmpPart) then 
      flag := true;
    elsif (index = m.tmpPart) then  
      flag := true;
    else 
      flag := false;
    endif;
     return flag;
  end;

function matchNonce(Var locNa: NonceType; Var Na: NonceType):boolean;  ---if Na equals to locNa which was derived from recieving msg, or anyNonce, then true
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

function matchNumber(Var locNm: ConstType; Var Nm: ConstType):boolean;  ---if Nm equals to locNm which was derived from recieving msg, or anyNumber, then true
  var flag : boolean;
  begin
    flag := false;
    if (Nm = anyNumber) then
      flag := true;
      Nm := locNm;
    elsif (locNm = Nm) then
      flag:=true;
    else
      flag := false;
    endif;
    return flag;
  end;

function match(var m1,m2:Message):boolean;
  var concatFlag: boolean;
      i: indexType;
  begin 
    if m1.msgType = tmp then  
      return matchTmp(m1,m2) ;
    elsif m1.msgType = agent & m2.msgType = agent then
	    return matchAgent(m2.ag, m1.ag); ---ag and noncePart should be initiallized as anyAgent or anyNonce (m1.ag != anyAgent & m2.ag != anyAgent &)
    elsif m1.msgType = nonce & m2.msgType = nonce then
	    return matchNonce(m2.noncePart, m1.noncePart); --- m1.noncePart != anyNonce & m2.noncePart != anyNonce &
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
  end;

function matchPat(var m1:Message; sPatnSet: msgSet):boolean;
  var flag:boolean;
      i : indexType;
  begin
    flag := false;
    i := 1;
    while (i<sPatnSet.length+1) do
      if(match(msgs[sPatnSet.content[i]],m1)) then
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
   cons2(roleA[i].g,roleA[i].p,msg,msgNo);
   ch[1].empty := false;
   ch[1].msg := msg;
   ch[1].sender := roleA[i].A;
   ch[1].receiver := Intruder;
   roleA[i].st := A2;
   put "roleA[i] in st1\n";
end;
rule " roleA2 "
roleA[i].st = A2 & ch[2].empty = true & !roleA[i].commit 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons5(roleA[i].g,roleA[i].x,roleA[i].p,msg,msgNo);
   ch[2].empty := false;
   ch[2].msg := msg;
   ch[2].sender := roleA[i].A;
   ch[2].receiver := Intruder;
   roleA[i].st := A3;
   put "roleA[i] in st2\n";
end;
rule " roleA3 "
roleA[i].st = A3 & ch[3].empty = false & !roleA[i].commit
==>
var flag_pat6:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[3].msg;
   isPat6(msg, flag_pat6);
   if(flag_pat6) then
     destruct6(msg,roleA[i].locm2);
     if (matchTmp(roleA[i].locm2, roleA[i].m2)) then
       ch[3].empty:=true;
       clear ch[3].msg;
       roleA[i].st := A4;
     endif;
   endif;
   put "roleA[i] in st3\n";
end;
rule " roleA4 "
roleA[i].st = A4 & ch[4].empty = true & !roleA[i].commit 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons9(roleA[i].Na,roleA[i].m2,roleA[i].x,roleA[i].p,msg,msgNo);
   ch[4].empty := false;
   ch[4].msg := msg;
   ch[4].sender := roleA[i].A;
   ch[4].receiver := Intruder;
   roleA[i].st := A1;
   put "roleA[i] in st4\n";
   roleA[i].commit := true;
end;
endruleset;

ruleset i:roleBNums do
rule " roleB1 "
roleB[i].st = B1 & ch[1].empty = false & !roleB[i].commit
==>
var flag_pat2:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[1].msg;
   isPat2(msg, flag_pat2);
   if(flag_pat2) then
     destruct2(msg,roleB[i].locg,roleB[i].locp);
     if (matchNumber(roleB[i].locg, roleB[i].g) & matchNumber(roleB[i].locp, roleB[i].p)) then
       ch[1].empty:=true;
       clear ch[1].msg;
       roleB[i].st := B2;
     endif;
   endif;
   put "roleB[i] in st1\n";
end;
rule " roleB2 "
roleB[i].st = B2 & ch[2].empty = false & !roleB[i].commit
==>
var flag_pat10:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[2].msg;
   isPat10(msg, flag_pat10);
   if(flag_pat10) then
     destruct10(msg,roleB[i].locm1);
     if (matchTmp(roleB[i].locm1, roleB[i].m1)) then
       ch[2].empty:=true;
       clear ch[2].msg;
       roleB[i].st := B3;
     endif;
   endif;
   put "roleB[i] in st2\n";
end;
rule " roleB3 "
roleB[i].st = B3 & ch[3].empty = true & !roleB[i].commit 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons5(roleB[i].g,roleB[i].y,roleB[i].p,msg,msgNo);
   ch[3].empty := false;
   ch[3].msg := msg;
   ch[3].sender := roleB[i].B;
   ch[3].receiver := Intruder;
   roleB[i].st := B4;
   put "roleB[i] in st3\n";
end;
rule " roleB4 "
roleB[i].st = B4 & ch[4].empty = false & !roleB[i].commit
==>
var flag_pat12:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[4].msg;
   isPat12(msg, flag_pat12);
   if(flag_pat12) then
     destruct12(msg,roleB[i].locNa,roleB[i].locm3);
     if (matchNonce(roleB[i].locNa, roleB[i].Na) & matchTmp(roleB[i].locm3, roleB[i].m3)) then
       ch[4].empty:=true;
       clear ch[4].msg;
       roleB[i].st := B1;
     endif;
   endif;
   put "roleB[i] in st4\n";
   roleB[i].commit := true;
end;
endruleset;


---rule of intruder to get msg from ch[1] 
rule "intruderGetMsgFromCh[1]" 
  ch[1].empty = false & ch[1].sender != Intruder ==>
  var flag_pat2:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[1].msg;
    get_msgNo(msg, msgNo);
    isPat2(msg,flag_pat2);
    if (flag_pat2) then
      if(!exist(pat2Set,msgNo)) then
        pat2Set.length:=pat2Set.length+1;
        pat2Set.content[pat2Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
      put "intruder get msg from ch[1].\n";
      ch[1].empty := true;
      clear ch[1].msg;
    endif;
  end;

---rule of intruder to get msg from ch[2] 
rule "intruderGetMsgFromCh[2]" 
  ch[2].empty = false & ch[2].sender != Intruder ==>
  var flag_pat5:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[2].msg;
    get_msgNo(msg, msgNo);
    isPat5(msg,flag_pat5);
    if (flag_pat5) then
      if(!exist(pat5Set,msgNo)) then
        pat5Set.length:=pat5Set.length+1;
        pat5Set.content[pat5Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
      put "intruder get msg from ch[2].\n";
      ch[2].empty := true;
      clear ch[2].msg;
    endif;
  end;

---rule of intruder to get msg from ch[4] 
rule "intruderGetMsgFromCh[4]" 
  ch[4].empty = false & ch[4].sender != Intruder ==>
  var flag_pat9:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[4].msg;
    get_msgNo(msg, msgNo);
    isPat9(msg,flag_pat9);
    if (flag_pat9) then
      if(!exist(pat9Set,msgNo)) then
        pat9Set.length:=pat9Set.length+1;
        pat9Set.content[pat9Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
      put "intruder get msg from ch[4].\n";
      ch[4].empty := true;
      clear ch[4].msg;
    endif;
  end;

---rule of intruder to get msg from ch[3] 
rule "intruderGetMsgFromCh[3]" 
  ch[3].empty = false & ch[3].sender != Intruder ==>
  var flag_pat5:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[3].msg;
    get_msgNo(msg, msgNo);
    isPat5(msg,flag_pat5);
    if (flag_pat5) then
      if(!exist(pat5Set,msgNo)) then
        pat5Set.length:=pat5Set.length+1;
        pat5Set.content[pat5Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
      put "intruder get msg from ch[3].\n";
      ch[3].empty := true;
      clear ch[3].msg;
    endif;
  end;

---rule of intruder to emit msg into ch[1].
ruleset i: msgLen do
  ruleset j: roleBNums do
    rule "intruderEmitMsgIntoCh[1]"
      ch[1].empty=true & i <= pat2Set.length & pat2Set.content[i] != 0 & Spy_known[pat2Set.content[i]] ---& matchPat(msgs[pat2Set.content[i]], sPat2Set)
      ==>
      begin
        if (!emit[pat2Set.content[i]]) then  
          clear ch[1];
          ch[1].msg:=msgs[pat2Set.content[i]];
          ch[1].sender:=Intruder;
          ch[1].receiver:=roleB[j].B;
          ch[1].empty:=false;
          emit[pat2Set.content[i]] := true;
          put "intruder emit msg into ch[1].\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[2].
ruleset i: msgLen do
  ruleset j: roleBNums do
    rule "intruderEmitMsgIntoCh[2]"
      ch[2].empty=true & i <= pat5Set.length & pat5Set.content[i] != 0 & Spy_known[pat5Set.content[i]] ---& matchPat(msgs[pat5Set.content[i]], sPat5Set)
      ==>
      begin
        if (!emit[pat5Set.content[i]]) then  
          clear ch[2];
          ch[2].msg:=msgs[pat5Set.content[i]];
          ch[2].sender:=Intruder;
          ch[2].receiver:=roleB[j].B;
          ch[2].empty:=false;
          emit[pat5Set.content[i]] := true;
          put "intruder emit msg into ch[2].\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[4].
ruleset i: msgLen do
  ruleset j: roleBNums do
    rule "intruderEmitMsgIntoCh[4]"
      ch[4].empty=true & i <= pat9Set.length & pat9Set.content[i] != 0 & Spy_known[pat9Set.content[i]] ---& matchPat(msgs[pat9Set.content[i]], sPat9Set)
      ==>
      begin
        if (!emit[pat9Set.content[i]]) then  
          clear ch[4];
          ch[4].msg:=msgs[pat9Set.content[i]];
          ch[4].sender:=Intruder;
          ch[4].receiver:=roleB[j].B;
          ch[4].empty:=false;
          emit[pat9Set.content[i]] := true;
          put "intruder emit msg into ch[4].\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[3].
ruleset i: msgLen do
  ruleset j: roleANums do
    rule "intruderEmitMsgIntoCh[3]"
      ch[3].empty=true & i <= pat5Set.length & pat5Set.content[i] != 0 & Spy_known[pat5Set.content[i]] ---& matchPat(msgs[pat5Set.content[i]], sPat5Set)
      ==>
      begin
        if (!emit[pat5Set.content[i]]) then  
          clear ch[3];
          ch[3].msg:=msgs[pat5Set.content[i]];
          ch[3].sender:=Intruder;
          ch[3].receiver:=roleA[j].A;
          ch[3].empty:=false;
          emit[pat5Set.content[i]] := true;
          put "intruder emit msg into ch[3].\n";
        endif;
      end;
  endruleset;
endruleset;
--- enconcat and deconcat rules for pat: concat(g.p)

ruleset i:msgLen do 
  rule "deconcat 2" --pat2
    i<=pat2Set.length & pat2Set.content[i] != 0 & Spy_known[pat2Set.content[i]] &
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
      matchPat(msgs[construct2By11(pat1Set.content[i1],pat1Set.content[i2])], sPat2Set)&
      !Spy_known[construct2By11(pat1Set.content[i1],pat1Set.content[i2])]
      ==>
      var concatMsgNo:indexType;
      begin
        put "rule enconcat2\n";
        concatMsgNo := construct2By11(pat1Set.content[i1],pat1Set.content[i2]);
        Spy_known[concatMsgNo]:=true;
        if (!exist(pat2Set,concatMsgNo)) then
          pat2Set.length:=pat2Set.length+1;
          pat2Set.content[pat2Set.length]:=concatMsgNo;
        endif;
      end;
endruleset;
endruleset;

--- construct exp and destruct exp rules of pat exp(g,x)
ruleset i:msgLen do
  rule "destructExp 4" --pat4
    i<=pat4Set.length & pat4Set.content[i] != 0
    & Spy_known[pat4Set.content[i]] &  Spy_known[msgs[pat4Set.content[i]].expMsg1] & !Spy_known[msgs[pat4Set.content[i]].expMsg2]
    ==>
    var msgPat1,msgPat3:indexType;
	      flag_pat1,flag_pat3:boolean;
    begin
      put "rule edecrypt4\n";
      if (!Spy_known[msgs[pat4Set.content[i]].expMsg2]) then
        Spy_known[msgs[pat4Set.content[i]].expMsg2]:=true;
        msgPat3:=msgs[pat4Set.content[i]].expMsg2;
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
    rule "constructExp 4"  --pat4
      i<=pat1Set.length & pat1Set.content[i] != 0 & Spy_known[pat1Set.content[i]] &
      j<=pat3Set.length & pat3Set.content[j] != 0 & Spy_known[pat3Set.content[j]] &
      matchPat(msgs[construct4By13(pat1Set.content[i],pat3Set.content[j])], sPat4Set) &
      !Spy_known[construct4By13(pat1Set.content[i],pat3Set.content[j])] 
       ==>
      var construtExpNo:indexType;
      begin
        put "rule constructExp 4\n";
        construtExpNo := construct4By13(pat1Set.content[i],pat3Set.content[j]);
        Spy_known[construtExpNo]:=true;
        if (!exist(pat4Set,construtExpNo)) then
          pat4Set.length:=pat4Set.length+1;
          pat4Set.content[pat4Set.length]:=construtExpNo;
        endif;
      end;
  endruleset;
endruleset;

--- construct mod and destruct mod rules of pat mod(exp(g,x),p)
ruleset i:msgLen do
  rule "destructMod 5" --pat5
    i<=pat5Set.length & pat5Set.content[i] != 0
    & Spy_known[pat5Set.content[i]] & (!Spy_known[msgs[pat5Set.content[i]].modMsg1] | !Spy_known[msgs[pat5Set.content[i]].modMsg2])
    ==>
    var msgPat4,msgPat1:indexType;
	      flag_pat4,flag_pat1:boolean;
    begin
      put "rule mdecrypt5\n";
      if (!Spy_known[msgs[pat5Set.content[i]].modMsg1]) then
        Spy_known[msgs[pat5Set.content[i]].modMsg1]:=true;
        msgPat4:=msgs[pat5Set.content[i]].modMsg1;
        isPat4(msgs[msgPat4],flag_pat4);
        if (flag_pat4) then
          if (!exist(pat4Set,msgPat4)) then
            pat4Set.length:=pat4Set.length+1;
            pat4Set.content[pat4Set.length]:=msgPat4;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat5Set.content[i]].modMsg2]) then
        Spy_known[msgs[pat5Set.content[i]].modMsg2]:=true;
        msgPat1:=msgs[pat5Set.content[i]].modMsg2;
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
    rule "constructMod 5"  --pat5
      i<=pat4Set.length & pat4Set.content[i] != 0 & Spy_known[pat4Set.content[i]] &
      j<=pat1Set.length & pat1Set.content[j] != 0 & Spy_known[pat1Set.content[j]] &
      matchPat(msgs[construct5By41(pat4Set.content[i],pat1Set.content[j])], sPat5Set) &
      !Spy_known[construct5By41(pat4Set.content[i],pat1Set.content[j])] 
       ==>
      var construtModNo:indexType;
      begin
        put "rule constructMod 5\n";
        construtModNo := construct5By41(pat4Set.content[i],pat1Set.content[j]);
        Spy_known[construtModNo]:=true;
        if (!exist(pat5Set,construtModNo)) then
          pat5Set.length:=pat5Set.length+1;
          pat5Set.content[pat5Set.length]:=construtModNo;
        endif;
      end;
  endruleset;
endruleset;

--- construct exp and destruct exp rules of pat exp(m2,x)
ruleset i:msgLen do
  rule "destructExp 7" --pat7
    i<=pat7Set.length & pat7Set.content[i] != 0
    & Spy_known[pat7Set.content[i]] &  Spy_known[msgs[pat7Set.content[i]].expMsg1] & !Spy_known[msgs[pat7Set.content[i]].expMsg2]
    ==>
    var msgPat6,msgPat3:indexType;
	      flag_pat6,flag_pat3:boolean;
    begin
      put "rule edecrypt7\n";
      if (!Spy_known[msgs[pat7Set.content[i]].expMsg2]) then
        Spy_known[msgs[pat7Set.content[i]].expMsg2]:=true;
        msgPat3:=msgs[pat7Set.content[i]].expMsg2;
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
    rule "constructExp 7"  --pat7
      i<=pat6Set.length & pat6Set.content[i] != 0 & Spy_known[pat6Set.content[i]] &
      j<=pat3Set.length & pat3Set.content[j] != 0 & Spy_known[pat3Set.content[j]] &
      matchPat(msgs[construct7By63(pat6Set.content[i],pat3Set.content[j])], sPat7Set) &
      !Spy_known[construct7By63(pat6Set.content[i],pat3Set.content[j])] 
       ==>
      var construtExpNo:indexType;
      begin
        put "rule constructExp 7\n";
        construtExpNo := construct7By63(pat6Set.content[i],pat3Set.content[j]);
        Spy_known[construtExpNo]:=true;
        if (!exist(pat7Set,construtExpNo)) then
          pat7Set.length:=pat7Set.length+1;
          pat7Set.content[pat7Set.length]:=construtExpNo;
        endif;
      end;
  endruleset;
endruleset;

--- construct mod and destruct mod rules of pat mod(exp(m2,x),p)
ruleset i:msgLen do
  rule "destructMod 8" --pat8
    i<=pat8Set.length & pat8Set.content[i] != 0
    & Spy_known[pat8Set.content[i]] & (!Spy_known[msgs[pat8Set.content[i]].modMsg1] | !Spy_known[msgs[pat8Set.content[i]].modMsg2])
    ==>
    var msgPat7,msgPat1:indexType;
	      flag_pat7,flag_pat1:boolean;
    begin
      put "rule mdecrypt8\n";
      if (!Spy_known[msgs[pat8Set.content[i]].modMsg1]) then
        Spy_known[msgs[pat8Set.content[i]].modMsg1]:=true;
        msgPat7:=msgs[pat8Set.content[i]].modMsg1;
        isPat7(msgs[msgPat7],flag_pat7);
        if (flag_pat7) then
          if (!exist(pat7Set,msgPat7)) then
            pat7Set.length:=pat7Set.length+1;
            pat7Set.content[pat7Set.length]:=msgPat7;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat8Set.content[i]].modMsg2]) then
        Spy_known[msgs[pat8Set.content[i]].modMsg2]:=true;
        msgPat1:=msgs[pat8Set.content[i]].modMsg2;
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
    rule "constructMod 8"  --pat8
      i<=pat7Set.length & pat7Set.content[i] != 0 & Spy_known[pat7Set.content[i]] &
      j<=pat1Set.length & pat1Set.content[j] != 0 & Spy_known[pat1Set.content[j]] &
      matchPat(msgs[construct8By71(pat7Set.content[i],pat1Set.content[j])], sPat8Set) &
      !Spy_known[construct8By71(pat7Set.content[i],pat1Set.content[j])] 
       ==>
      var construtModNo:indexType;
      begin
        put "rule constructMod 8\n";
        construtModNo := construct8By71(pat7Set.content[i],pat1Set.content[j]);
        Spy_known[construtModNo]:=true;
        if (!exist(pat8Set,construtModNo)) then
          pat8Set.length:=pat8Set.length+1;
          pat8Set.content[pat8Set.length]:=construtModNo;
        endif;
      end;
  endruleset;
endruleset;

--- encrypt and decrypt rules of pat: aenc{Na}mod(exp(m2,x),p), for intruder
ruleset i:msgLen do 
  rule "adecrypt 9"	---pat9
    i<=pat9Set.length & pat9Set.content[i] != 0 & Spy_known[pat9Set.content[i]] &
    !Spy_known[msgs[pat9Set.content[i]].aencMsg]
    ==>
    var key_inv:Message;
	      msgPat3,keyNo:indexType;
	      flag_pat3:boolean;
    begin
      put "rule adecrypt9\n";
      key_inv := inverseKey(msgs[msgs[pat9Set.content[i]].aencKey]);
      get_msgNo(key_inv,keyNo);
      if (Spy_known[keyNo]) then
        Spy_known[msgs[pat9Set.content[i]].aencMsg]:=true;
        msgPat3:=msgs[pat9Set.content[i]].aencMsg;
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
    rule "aencrypt 9"	---pat9
      i<=pat3Set.length & pat3Set.content[i] != 0 & Spy_known[pat3Set.content[i]] &
      j<=pat8Set.length & pat8Set.content[j] != 0 & Spy_known[pat8Set.content[j]] &
      matchPat(msgs[construct9By38(pat3Set.content[i],pat8Set.content[j])], sPat9Set) &
      !Spy_known[construct9By38(pat3Set.content[i],pat8Set.content[j])] 
       ==>
      var encMsgNo:indexType;
      begin
        put "rule aencrypt9\n";
        if (msgs[pat8Set.content[j]].k.encType=PK) then
          encMsgNo := construct9By38(pat3Set.content[i],pat8Set.content[j]);
          if (!exist(pat9Set,encMsgNo)) then
            pat9Set.length := pat9Set.length+1;
            pat9Set.content[pat9Set.length]:=encMsgNo;
          endif;
          if (!Spy_known[encMsgNo]) then
            Spy_known[encMsgNo] := true;
          endif;
        endif;
      end;
  endruleset;
endruleset;

--- encrypt and decrypt rules of pat: aenc{Na}m3, for intruder
ruleset i:msgLen do 
  rule "adecrypt 12"	---pat12
    i<=pat12Set.length & pat12Set.content[i] != 0 & Spy_known[pat12Set.content[i]] &
    !Spy_known[msgs[pat12Set.content[i]].aencMsg]
    ==>
    var key_inv:Message;
	      msgPat3,keyNo:indexType;
	      flag_pat3:boolean;
    begin
      put "rule adecrypt12\n";
      key_inv := inverseKey(msgs[msgs[pat12Set.content[i]].aencKey]);
      get_msgNo(key_inv,keyNo);
      if (Spy_known[keyNo]) then
        Spy_known[msgs[pat12Set.content[i]].aencMsg]:=true;
        msgPat3:=msgs[pat12Set.content[i]].aencMsg;
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
    rule "aencrypt 12"	---pat12
      i<=pat3Set.length & pat3Set.content[i] != 0 & Spy_known[pat3Set.content[i]] &
      j<=pat11Set.length & pat11Set.content[j] != 0 & Spy_known[pat11Set.content[j]] &
      matchPat(msgs[construct12By311(pat3Set.content[i],pat11Set.content[j])], sPat12Set) &
      !Spy_known[construct12By311(pat3Set.content[i],pat11Set.content[j])] 
       ==>
      var encMsgNo:indexType;
      begin
        put "rule aencrypt12\n";
        if (msgs[pat11Set.content[j]].k.encType=PK) then
          encMsgNo := construct12By311(pat3Set.content[i],pat11Set.content[j]);
          if (!exist(pat12Set,encMsgNo)) then
            pat12Set.length := pat12Set.length+1;
            pat12Set.content[pat12Set.length]:=encMsgNo;
          endif;
          if (!Spy_known[encMsgNo]) then
            Spy_known[encMsgNo] := true;
          endif;
        endif;
      end;
  endruleset;
endruleset;

startstate
  roleA[1].A := Alice;
  roleA[1].B := Intruder;
  roleA[1].g := g;
  roleA[1].p := p;
  roleA[1].x := x;
  roleA[1].Na := Na;
  roleA[1].st := A1;
  roleA[1].commit := false;
  roleA[1].y := anyNonce;
  roleA[1].m2.msgType := tmp;
  roleA[1].m2.tmpPart := 0;
  roleA[1].m1.msgType := tmp;
  roleA[1].m1.tmpPart := 0;
  roleA[1].m3.msgType := tmp;
  roleA[1].m3.tmpPart := 0;
  roleB[1].B := Bob;
  roleB[1].A := Intruder;
  roleB[1].g := g;
  roleB[1].p := p;
  roleB[1].y := y;
  roleB[1].st := B1;
  roleB[1].commit := false;
  roleB[1].x := anyNonce;
  roleB[1].Na := anyNonce;
  roleB[1].m2.msgType := tmp;
  roleB[1].m2.tmpPart := 0;
  roleB[1].m1.msgType := tmp;
  roleB[1].m1.tmpPart := 0;
  roleB[1].m3.msgType := tmp;
  roleB[1].m3.tmpPart := 0;
  ---intruder.B := Bob;
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
  endfor;
  for i:indexType do 
    Spy_known[i] := false;
  endfor;
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

  msg_end:=msg_end+1;
  msgs[msg_end].msgType := nonce;
  msgs[msg_end].noncePart :=xi;
  msgs[msg_end].length := 1;
  pat3Set.length := pat3Set.length + 1; 
  pat3Set.content[pat3Set.length] :=msg_end;
  Spy_known[msg_end] := true;
  
  msg_end:=msg_end+1;
  msgs[msg_end].msgType := nonce;
  msgs[msg_end].noncePart :=Nai;
  msgs[msg_end].length := 1;
  pat3Set.length := pat3Set.length + 1; 
  pat3Set.content[pat3Set.length] :=msg_end;
  Spy_known[msg_end] := true;
  
  msg_end:=msg_end+1;
  msgs[msg_end].msgType := nonce;
  msgs[msg_end].noncePart :=yi;
  msgs[msg_end].length := 1;
  pat3Set.length := pat3Set.length + 1; 
  pat3Set.content[pat3Set.length] :=msg_end;
  Spy_known[msg_end] := true;
    for i : roleBNums do
    constructSpat2(roleB[i].g,roleB[i].p, gnum);
  endfor;
  for i : roleBNums do
    constructSpat5(roleB[i].g,roleB[i].x,roleB[i].p, gnum);
  endfor;
  for i : roleBNums do
    constructSpat9(roleB[i].Na,roleB[i].m2,roleB[i].x,roleB[i].p, gnum);
  endfor;
  for i : roleANums do
    constructSpat5(roleA[i].g,roleA[i].y,roleA[i].p, gnum);
  endfor;

end;

invariant "secrecy1" 
forall i:indexType do
    (msgs[i].msgType=nonce & msgs[i].noncePart=Na)
     ->
     Spy_known[i] = false
end;
