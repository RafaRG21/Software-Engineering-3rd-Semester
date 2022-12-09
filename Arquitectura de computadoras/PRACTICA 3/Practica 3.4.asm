.DATA 0002H
DB EEH    ; inicialización del multiplicando
DB 4H    ; inicialización del multiplicador

.ORG 100H
MOV H, 00H
MOV L, 00H

MVI B,00H ; Puntero B y C dan la posición 0002H
MVI C,02H

LDAX B     ; Mueve a A el dato que apunta B Y C. (MULTIPLICANDO) 0002H
MOV D,A	; D tiene el MULTIPLICANDO
INR C		; SE INCREMENTA PARA OBTNER EL DATO DEL MULTIPLICADOR 0003H
LDAX B 	; Muevo a A el registro 0003H (MULTIPLICADOR)
MOV E,A	; E tiene el MULTIPLICADOR

; D MULTIPLACANDO, E MULTIPLICADOR, TOTAL = HL (HIGH) Y(LOW)

MULTI:
MOV A,E	;A tiene el multiplicador
CPI 00H	; SI A = 00H finaliza el ciclo
JZ FIN  

MOV A,L	; Parte menos significativa L.
ADD D		; se suma A + D en A (Sumo el multiplicando)
MOV L,A	; Guardo en L la parte menos significativa

DCR E		; se decrementa el multiplicador
JC ACARREO	; Si hay un desborde ya no tiene espacio L
JMP MULTI	;Sino vuelvo a hacer la suma
ACARREO: 
INR H		; se Incrementa cada vez que haya desbordamiento (Parte significativa)
JMP MULTI	; Regreso a la sumatoria hasta que el multiplicador sea 0.

FIN:

; En la posición 0004H se guarda la parte mas significativa (high) y en 0005H la parte menos significativa (low)
MOV A,H  ; SE PONE EN A LA PARTE HIGH
MOV B, L ; EN B LA PARTE LOW

MVI D, 00H
MVI E, 04H ; direccion de memoria a mandar
STAX D ; se manda high 
MOV A,B ; se manda la parte low a A
INR E  ; Se incrementa E para ir a la sguiente direccion de memoria
STAX D ; se manda low a memoria
HLT