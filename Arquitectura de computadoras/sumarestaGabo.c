#include <stdio.h>

#include <stdlib.h>

#include<stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* regla del programa, CMS 0   cms en x del arreglo*/

/*
printf("\n");

for(x=0;x<strlen(binario1D);x++){
	
printf("%c",binario1D[x]);
}


printf("\n");
*/

char * DtoB(float, int);
char * EtoB(int);

char * operacionF(char * , char * , char);

float BtoFloat(char * , char * );

char * binario1E, * binario1D, * binario2E, * binario2D, * binarioAux1, * binarioAux2, * operando1, * operando2, * resultadoB, * resultadoBE, * resultadoBD;
int x, y, z, i, aux, entero1, entero2, exponente1, exponente2;
float entrada1, entrada2, resultado, decimal1, decimal2;
char operacion, signo1 = ' ', signo2 = ' ';
bool mayor;

/*
mayor:
false el mayor es el primero
true el mayor es el segundo
*/

/*
a = - x - y 
b = - x + y 
c = + x - y
d = + x + y
*/

int main(int argc, char * argv[]) {

  while (1) {

    //introducir los numeros

    printf("\nDigita el primer numero 1 \n");
    scanf("%f", & entrada1);

    printf("\nDigita el segundo numero 2 \n");
    scanf("%f", & entrada2);

    //saber que numero es mayor    

    if (fabs(entrada1) > fabs(entrada2)) {
      mayor = false;
    } else {
      mayor = true;
    }

    //obtener signos de cada numeros
    if (entrada1 < 0) {

      signo1 = '-';
      if (entrada2 < 0) {
        operacion = 'a';
        signo2 = '-';
      } else {
        operacion = 'b';
        signo2 = '+';
      }

    } else {
      signo1 = '+';
      if (entrada2 < 0) {
        signo2 = '-';
        operacion = 'c';
      } else {
        operacion = 'd';
        signo2 = '+';
      }
    }

    //searar en entero y decimal       

    entero1 = abs(entrada1 / 1);
    decimal1 = fabs(fabs(entrada1) - entero1);

    entero2 = abs(entrada2 / 1);
    decimal2 = fabs(fabs(entrada2) - entero2);

    //convertir numeros en binario
    binario1E = EtoB(entero1);
    binario1D = DtoB(decimal1, 16);

    binario2E = EtoB(entero2);
    binario2D = DtoB(decimal2, 16);

    //obtener el exaponeente

    exponente1 = strlen(binario1E) - 1;
    exponente2 = strlen(binario2E) - 1;

    /*
	printf("Entero 1 : %d \n", entero1);
       
	   printf("Decimal 2 : %f \n", decimal1);
       
    printf("Entero 2 : %d \n", entero2);

 

    printf("Decimal 2 : %f \n", decimal2);
    */
    /*
        printf("%d \n", strlen(binario1E));
        printf("%d \n", strlen(binario2E));

        printf("%d \n", strlen(binario1D));
        printf("%d \n", strlen(binario2D));

    */

    //mostrar numero 1 en binario normmal
    printf("\nNumero 1 en binario: ");

    for (x = strlen(binario1E) - 1; x > -1; x--) {
      printf("%c", binario1E[x]);
    }
    printf(".");

    for (x = strlen(binario1D) - 1; x > -1; x--) {

      printf("%c", binario1D[x]);
    }

    //mostrar numero 2 en binario normal

    printf("\nNumero 2 en binario: ");

    for (x = strlen(binario2E) - 1; x > -1; x--) {
      printf("%c", binario2E[x]);
    }
    printf(".");

    for (x = strlen(binario2D) - 1; x > -1; x--) {
      printf("%c", binario2D[x]);
    }

    printf("\n");

    //convertir a exponencial
    binarioAux1 = calloc(strlen(binario1E) + strlen(binario1D), sizeof(char));
    binarioAux2 = calloc(strlen(binario2E) + strlen(binario2D), sizeof(char));

    y = 0;
    for (x = strlen(binario1E) - 1; x > -1; x--) {
      binarioAux1[y] = binario1E[x];
      y++;
    }

    for (x = strlen(binario1D) - 1; x > -1; x--) {
      binarioAux1[y] = binario1D[x];
      y++;
    }

    y = 0;
    for (x = strlen(binario2E) - 1; x > -1; x--) {
      binarioAux2[y] = binario2E[x];
      y++;
    }

    for (x = strlen(binario2D) - 1; x > -1; x--) {
      binarioAux2[y] = binario2D[x];
      y++;
    }

    if (strlen(binarioAux1) >= strlen(binarioAux2)) {
      if ((strlen(binarioAux2) + abs(exponente1 - exponente2)) <= strlen(binarioAux1)) {
        z = strlen(binarioAux1);
      } else {

        z = strlen(binarioAux1) + abs(exponente1 - exponente2);
      }
    } else {
      if ((strlen(binarioAux1) + abs(exponente1 - exponente2)) <= strlen(binarioAux2)) {
        z = strlen(binarioAux2);
      } else {

        z = strlen(binarioAux2) + abs(exponente1 - exponente2);
      }

    }

    operando1 = calloc(z, sizeof(char));
    operando2 = calloc(z, sizeof(char));

    //convertir estandar para hacer la operacion
    if (exponente1 < exponente2) {

      x = 0;
      for (; x < abs(exponente1 - exponente2); x++) {
        operando1[x] = '0';
      }

      y = 0;
      for (; y < strlen(binarioAux1); y++) {
        operando1[x] = binarioAux1[y];
        x++;
      }

      x = 0;
      y = 0;
      for (; x < strlen(binarioAux2); x++) {
        operando2[x] = binarioAux2[y];
        y++;
      }

      for (; x < z; x++) {
        operando2[x] = '0';
      }

    } else {

      x = 0;
      y = 0;
      for (; x < strlen(binarioAux1); x++) {
        operando1[x] = binarioAux1[y];
        y++;

      }

      for (; x < strlen(operando1); x++) {
        operando1[x] = '0';

      }
      if (x < z) {
        //    printf("completando \n ");
        for (; x < z; x++) {
          operando1[x] = '0';

        }
      }
      x = 0;
      for (; x < abs(exponente1 - exponente2); x++) {
        operando2[x] = '0';

      }
      y = 0;
      for (; x < strlen(binarioAux2); x++) {
        operando2[x] = binarioAux2[y];
        y++;

      }
      if (x < z) {
        //  printf("completando \n ");
        for (; x < z; x++) {
          operando2[x] = '0';

        }
      }

    }

    //mostrar en exponencial  
    printf("\nOperacion: \n");

    printf("\n");
    for (x = 0; x < strlen(operando1); x++) {
      if (x == 1) {
        printf(".");
      }
      printf("%c", operando1[x]);

    }
    printf(" x2^%d \n", exponente1);
    for (x = 0; x < strlen(operando2); x++) {
      if (x == 1) {
        printf(".");
      }
      printf("%c", operando2[x]);

    }
    printf(" x2^%d \n", exponente2);

    //se realiza operacion
    
    if(!mayor){
    	resultadoB = operacionF(operando1, operando2, operacion);

	}else{
		resultadoB = operacionF(operando2, operando1, operacion);

	}
    //resultado completo en exponencial
    printf("\nEl resultado es: \n");

    for (x = 0; x < strlen(resultadoB); x++) {
      printf("%c", resultadoB[x]);
    }
    printf("\n");

    //se separa el binario en decimal y entero
    if (strlen(operando1) < strlen(resultadoB)) {
      z = 1;
    } else {
      z = 0;
    }

    if (exponente1 >= exponente2) {

      resultadoBE = calloc(exponente1 + 1, sizeof(char));
      x = 0;
      for (; x < exponente1 + 1 + z; x++) {
        resultadoBE[x] = resultadoB[x];
      }
      resultadoBD = calloc(strlen(resultadoB) - (exponente1 + 1), sizeof(char));
      for (y = 0; y < strlen(resultadoB); y++) {
        resultadoBD[y] = resultadoB[x];
        x++;

      }

    } else {

      resultadoBE = calloc(exponente2 + 1, sizeof(char));
      x = 0;
      for (; x < exponente2 + 1 + z; x++) {
        resultadoBE[x] = resultadoB[x];
      }
      resultadoBD = calloc(strlen(resultadoB) - (exponente2 + 1), sizeof(char));
      for (y = 0; y < strlen(resultadoB); y++) {
        resultadoBD[y] = resultadoB[x];
        x++;

      }

    }

    //resultado en vinario entero deimcal
    printf("\nEl resultado dividido es: \n");

    for (x = 0; x < strlen(resultadoBE); x++) {
      printf("%c", resultadoBE[x]);
    }
    printf(".");

    for (x = 0; x < strlen(resultadoBD); x++) {
      printf("%c", resultadoBD[x]);
    }

    printf("\n");

    //convertir a decimal el binario
    resultado = BtoFloat(resultadoBE, resultadoBD);

    //imprimir el resultado
    if (operacion == 'a') {
      printf("\nDecimal: ");
      printf("-%f", resultado);
      printf("\n");
    } else if (operacion == 'd') {
      printf("\nDecimal: ");
      printf("+%f", resultado);
      printf("\n");
    } else if (operacion == 'b') {

      if (mayor) {
        printf("\nDecimal: ");
        printf("+%f", resultado);
        printf("\n");
      } else {
        printf("\nDecimal: ");
        printf("-%f", resultado);
        printf("\n");

      }

    } else if (operacion == 'c') {

      if (mayor) {
      	
        printf("\nDecimal: ");
        printf("-%f", resultado);
        printf("\n");
      } else {
      
        printf("\nDecimal: ");
        printf("+%f", resultado);
        printf("\n");

      }

    }

    //fin del programa
    free(binario1E);
    free(binario1D); 
	free(binario2E);
	free(binario2D);
	free(binarioAux1);
	free(binarioAux2);
	free(operando1);
	free(operando2);
	
	free(resultadoB);
	free(resultadoBE);
	free(resultadoBD);

x=0; y=0; z=0; i=0; aux=0; entero1=0; entero2=0; exponente1=0; exponente2=0;
entrada1=0.0; entrada2=0.0; resultado=0.0; decimal1=0.0; decimal2=0.0;
char operacion=' ', signo1 = ' ', signo2 = ' ';

  }

  return 0;
}

//funcioneees

//binario a decimal 
float BtoFloat(char * entero, char * decimal) {
  float resultado = 0.0;
  int x, y = 0;
  for (x = strlen(entero) - 1; x > -1; x--) {
    if (entero[x] == '1') {
      resultado += pow(2, y);
    }
    y++;
  }

  for (x = 0; x < strlen(decimal); x++) {

    if (decimal[x] == '1') {
      resultado += (1 / pow(2, x + 1));
    }

  }

  return resultado;
}

//operacion
char * operacionF(char * operando1, char * operando2, char tipo) {

  char * resultado = calloc(strlen(operando1), sizeof(char));
  char * resultadoF;
  int x, y;
  bool carry = false;
  /*
  a = - x - y 
  b = - x + y 
  c = + x - y
  d = + x + y
  */

  if (tipo == 'a' || tipo == 'd') {
    //suma y resultado negativo

    for (x = strlen(operando1) - 1; x > -1; x--) {

      if (operando1[x] == '1' && operando2[x] == '1') {

        if (carry) {
          carry = false;

          resultado[x] = '1';
          carry = true;

        } else {

          resultado[x] = '0';
          carry = true;

        }

      } else if (operando1[x] == '1' && operando2[x] == '0') {

        if (carry) {
          carry = false;

          resultado[x] = '0';
          carry = true;

        } else {

          resultado[x] = '1';

        }

      } else if (operando1[x] == '0' && operando2[x] == '0') {

        if (carry) {
          carry = false;

          resultado[x] = '1';

        } else {

          resultado[x] = '0';

        }

      } else if (operando1[x] == '0' && operando2[x] == '1') {

        if (carry) {
          carry = false;

          resultado[x] = '0';
          carry = true;

        } else {

          resultado[x] = '1';

        }

      }

    }
    if (carry) {

      resultadoF = calloc(strlen(resultado) + 2, sizeof(char));
      resultadoF[0] = '1';
      y = 0;
      for (x = 0; x < strlen(resultado); x++) {
        resultadoF[x + 1] = resultado[x];
        y++;
      }
      return resultadoF;
    } else {
      return resultado;
    }

  } else if (tipo == 'b' || tipo == 'c') {
    //
    for (x = strlen(operando1) - 1; x > -1; x--) {

      if (operando1[x] == '1' && operando2[x] == '1') {

        if (carry) {
          carry = false;

          resultado[x] = '1';
          carry = true;

        } else {

          resultado[x] = '0';

        }

      } else if (operando1[x] == '1' && operando2[x] == '0') {

        if (carry) {
          carry = false;

          resultado[x] = '0';

        } else {

          resultado[x] = '1';

        }

      } else if (operando1[x] == '0' && operando2[x] == '0') {

        if (carry) {
          carry = false;

          resultado[x] = '1';

          carry = true;

        } else {

          resultado[x] = '0';

        }

      } else if (operando1[x] == '0' && operando2[x] == '1') {

        if (carry) {
          carry = false;

          resultado[x] = '0';
          carry = true;

        } else {

          resultado[x] = '1';

          carry = true;

        }

      }

    }
    if (carry) {

      resultadoF = calloc(strlen(resultado) + 2, sizeof(char));
      resultadoF[0] = '1';
      y = 0;
      for (x = 0; x < strlen(resultado); x++) {
        resultadoF[x + 1] = resultado[x];
        y++;
      }
      return resultadoF;
    } else {
      return resultado;
    }

  }

}

//convertir un entero a binario
char * EtoB(int entero) {
  int contador = 0, aux = 0, size;
  char * auxC = NULL, * binario = NULL;

  if (entero == 0) {
    binario = (char * ) calloc(1, sizeof(char));
    binario[0] = '0';
    return binario;
  } else {
    free(binario);

    aux = entero;
    while (aux != 0) {
      contador++;
      aux /= 2;

    }

    binario = calloc(contador, sizeof(char));

    contador = 0;

    while (entero != 0) {

      aux = entero % 2;
      binario[contador] = aux + '0';
      entero /= 2;
      contador++;
    }

    return binario;

  }
}

//convertir un numero decimal a binario
char * DtoB(float decimal, int size) {

  int contador, aux, x;
  char * binario;
  binario = calloc(size, sizeof(char));;

  for (x = size; x > 0; x--) {

    aux = decimal * 2;
    if (aux == 1) {
      binario[x - 1] = '1';

    } else {
      binario[x - 1] = '0';
    }
    decimal = decimal * 2 - aux;

  }

  return binario;

}
