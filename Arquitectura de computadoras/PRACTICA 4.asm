.DATA 0002
DB E1H
DB 74H

.ORG 0150

;PUNTERO
MVI D,00H
MVI E,02H

LDAX D

MOV C,A
INR E

LDAX D 
MOV D,A

;C(MULTIPLICANDO) D(MULTIPLICADOR) DATOS ORIGINALE 
;E DATO AUXILIAR

MVI A,00H
MVI B,00H 
MVI E,00H

OPERACION:
MOV A,D

CPI 00H
JZ FIN
MOV A,E

ADD C
;AUXILIAR DE DATA
MOV E,A

DCR D


JC CARRY

JMP OPERACION

CARRY:
;SEGUNDO DATO
INR L
JMP OPERACION


FIN:
MOV A,L
MOV B,E

;PUNTERO

MVI D,00H
MVI E,04H

STAX D
;PUNTERO

MVI D,00H
MVI E,05H

MOV A,B

STAX D

HLT















