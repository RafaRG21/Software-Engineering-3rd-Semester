.DATA 1100H
DB 3BH
DB 5AH
.DATA 1105H
DB 2FH
DB 33H
.ORG 1110H
MVI B, 11H
MVI C, 00H ; direccion de los numeros
MVI D, 11H
MVI E, 05H; direccion del contenido a restar
LDAX D ; se va el conteido de la direccion 1105H a A
MOV H,A ; Se va H el contenido de A
LDAX B ; se va el conteido de la direccion 1100H a A
SUB H ; Se resta lo de la direccion 1105h a 1100H
STAX B ; se va a 1100h el resultado
INR C
INR E ; se incrementa para ir a la siguiente direccion
LDAX D ;se va el conteido de la direccion 1106H a A
Mov H,A ; Se va H el contenido de A
LDAX B ; se va el conteido de la direccion 1101H a A
SUB H ; Se resta lo de la direccion 1106h a 1101H
STAX B ;se va a 1101h el resultado
HLT ; se detiene el programa


