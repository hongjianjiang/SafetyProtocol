# SafetyProtocol
Protocol described in A&amp;B language transforms into another theory prover

终端：
$ corebuild getModelString.byte -use-menhir 
$ ./getModelString.byte NSPK.txt
$ cd outputs
$ g++ -o result.o result.cpp -I /Users/sword/Downloads/cmurphi5.4.9.1/include/ -ggdb
$ ./result.o