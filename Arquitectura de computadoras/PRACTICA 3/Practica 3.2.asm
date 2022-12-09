.DATA 1120H
DB 2FH
.ORG 1130H
MVI B, 11H
MVI C, 20H ; DIRECCION que se va a sumar
MVI H, 11H
MVI L, 00H ; Direccion a donde se va a mandar el resultado
LDAX B ; se manda la direccion a A
MVI B, FFH ; numero a sumar
ADD B ; se suma a A
MOV E, A ; ; se mueve a E
JC CARRY ; se verifica si no hay un desbordamiento
MOVDIREC: 
MOV M, A ; se mueve a direccion lo de A
mov A, D ; SE VA A D lo de A
INR L  ; se incrementa l para ir a la siguiente direccion
MOV M, A ; se envia el dato a la direccion siguiente
HLT   ; se detiene

CARRY: ; se incrementa D para compensar el desbordamiento
INR D
JMP MOVDIREC
