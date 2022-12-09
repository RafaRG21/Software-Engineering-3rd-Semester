.DATA 0002H
DB 03H ;
DB 05H  ; n
DB 0BH    
DB 10H    
DB 0Eh     ;datos para A
.ORG 100H
MVI B,00H ; Puntero B y C dan la posici�n 0002H
MVI C,02H
; PARTE X^I
LDAX B
MOV D, A ; D RECIBE X
INX B ; SE inCREMENTA BC
LDAX B ; SE VA A A N
MOV E, A ; E RECIBE LA POTENCIA
MOV A, D ; A RECIBE X
MOV H, D ; H RECIBE X
MOV L, D ; L RECIBE X
DCR E ; SE DECREMENTA LA POTENCIA i
EXP: 
DCR D
JZ EXP2
ADD H ; SE VA SUMANDO X HASTA QUE SE CUMPLA X VECES POR EJEMPLO 5*5 ES SUMAR 5 VECES 5
JMP EXP ; SE REPITE CICLO DEL EXPONENTE
EXP2:
MOV D, L ;SE VUELVE A CARGAR D PARA VOLVER A HACER LA SUMATORIA
MOV H,A ; SE CARGA H CON EL DATO QUE LLEVA A PARA HACER AHORA LA SUMATORIA CON ESE NUMERO
Push h
DCR E ; SE DECREMENTA LA POTENCIA
JZ MULT; SE CHECA SI NO HA LLEGADO LA POTENCIA A 0
JMP EXP ;SE REPITE LA SUMATORIA DEL EXPONENTE
MULT:
MVI H, 00H
MVI L, 00H ; PARA GUARDAR AQUI LA MULTIPLICACION A[I]*X^I
INX B ; se obtiene direccion ai
LDAX B ; se obtiene ai
POP D ; se obtiene x^i
MOV E,A ; se mueve a e
MOV A,D  ;se mueve a d
DCR E  ;se disminuye antes de iniciar la sumatoria
MULTAI:
ADD D
JC CARRYMUL ; se confirma si hay carry
DCR E ; se decrementa
JZ FIN ; se confirma si hay llegado a 0
CARRYMUL:
INR H ; se incrementa high
DCR E ; se decrementa E
JZ FIN ; se confirma si ha llegado a 0
JMP MULTAI ; se regresa al ciclo
FIN:
MOV L, A





HLT
