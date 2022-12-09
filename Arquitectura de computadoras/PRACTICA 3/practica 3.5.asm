; Fórmula tiempo 8085: T= 1/f = 1/2mHZ=5us
; TD = (T)(LoopT-States)(N10)  
; TD= Tiempo delay,  T= Periodo del reloj, 
; LoopT-States = Suma de los T-States de cada instrucción, 
; N10 = Valor del delay cargado en el registro decimal

; TD = (.5uS) (87) (x) = 2ms -> x = 2ms / (.5us)(87) = 45D = 2DH

.ORG 0100H

INICIO:
MVI A, 00H ; 7T
MVI B, 2DH ; 7T

LOOP:
CPI 01H ; 7T 
JZ FINAL ; 10T
INR A ; 4T
LOOP1:
DCR B ; 4T 
JNZ LOOP1 ; 10T
JMP LOOP ; 10T

FINAL:
INR C ; 4T
MOV A,C  ; 4T
OUT 00H ; 10T
JMP INICIO ; 10T


HLT 


