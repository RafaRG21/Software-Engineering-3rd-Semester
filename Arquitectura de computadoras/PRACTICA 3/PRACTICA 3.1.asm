.DATA E000H
DB 'R'
DB 'A'
DB 'F'
DB 'A'
DB 'E'
DB 'L'


.ORG 100H
MVI D, E0H	; Punteros de dirección del nombre (1000H)
MVI E, 00H
MVI C, 07H	; Letras + 1 para salir del ciclo.

CICLO:
DCR C
JZ SALIR
LDAX D	; Se mueve al Acumulador lo que apunta D
MOV B,A	; Se mueve a B el contenido del Acumulador
PUSH B	; Se hace push de B pero incluye a C también (Se pone en memoria de pila)
INR E		; Se incrementa E para que apunte a la siguiente letra
JMP CICLO

SALIR:
HLT
