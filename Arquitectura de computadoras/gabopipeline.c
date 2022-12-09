#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

typedef struct nodo
{
    char *nombre;
    char dato[6];
} nodo;

int contador = 0;
nodo *resultados;

nodo *addArray(nodo, nodo *, int *);
char *addChar(char, char *);

void sistema(nodo, nodo *, int *);

int x, y;

int main()
{
    nodo new;

    printf("Digita los 6 digitos del dato \n");

    for (x = 5; x >= 0; x--)
    {
        scanf("%c", &new.dato[x]);
    }

    new.nombre = calloc(1, sizeof(char));
    new.nombre[0] = ' ';

    sistema(new, resultados, &contador);

    printf("desde el main: \n");

    // for (y = 0; y < contador; y++)
    // {
    //     printf("%c :", resultados[y].nombre[0]);
    //     for (x = 5; x >= 0; x--)
    //     {
    //         printf("%c", resultados[y].dato[x]);
    //     }

    //     printf("\n");
    // }

    // printf(" * %d * ", contador);
    return 0;
}

/**
 * Funcion para añadir un nodo al array de resultados
 * @author bonnesbaby14
 * @param newNodo el nuevo nodo
 * @param resultado el array de reusltados 
 * @return El nuevo array de resultados
 * 
 **/

nodo *addArray(nodo newNodo, nodo *resultados, int *contador)
{

    int x = 0;
    nodo *output = calloc(*contador, sizeof(nodo));

    for (x = 0; x < *contador - 1; x++)
    {
        output[x] = resultados[x];
    }

    output[*contador - 1] = newNodo;

    return output;
}

/**
 * Funcion para añadir un char al array de char
 * @author bonnesbaby14
 * @param nuevo el nuevo char 
 * @param data el array de char 
 * @return El nuevo array de char
 * 
 **/
char *addChar(char nuevo, char *data)
{
    int contador = strlen(data);
    // printf("en la funcion de addchar\n");
    // printf("%d---- \n ",contador);

    char *output = calloc(contador + 1, sizeof(char));
    int x;
    for (x = 0; x < contador; x++)
    {
        output[x] = data[x];
    }
    output[contador] = nuevo;
    return output;
}

/**
 * Funcion para ek procedimiento
 * @author bonnesbaby14
 * @param nuevo el nuevo nodo a analizar 
 * @param resultados  el array de resultados
 * @param contador  el contador del array 
 * @return El nuevo aaray de resultados
 * 
 **/
void sistema(nodo nuevo, nodo *resultados, int *contador)
{
    int g;
    // printf("se entro una vez con el dato:\n");
    // printf("%s: ",nuevo.nombre);
    // for (g = 5; g >= 0; g--)
    // {
    //     printf("%c", nuevo.dato[g]);
    // }
    // printf("\n");
    char auxDato[6];

    nodo new;

    int x = 0, y = 0, z = 0;
    char flat = 'f';

    // Escanea todo el dato de entrada buscando cero
    for (x = 0; x < 6; x++)
    {
        new.nombre = nuevo.nombre;
        // printf("se analiza el primer for \n");
        if (nuevo.dato[x] == '0')
        {
            y = x;
            // se crea el array con el recorrido
            for (z = 0; z < (6 - x + 1); z++)
            {
                auxDato[z] = nuevo.dato[y + 1];
                y++;
            }
            for (z = 5; z > (5 - (x + 1)); z--)
            {
                auxDato[z] = '0';
            }

            // for (z = 5; z >= 0; z--)
            // {
            //     printf("%c", auxDato[z]);
            // }
            // printf("\n");

            // se aplica la compuerta or en los arreglos
            for (y = 0; y < 6; y++)
            {
                if (auxDato[y] == '1' || nuevo.dato[y] == '1')
                {
                    new.dato[y] = '1';
                }
                else
                {
                    new.dato[y] = '0';
                }
            }

            new.nombre = addChar((x + 1) + '0', new.nombre);

            // printf("Se genero un nuevo nodo\n");
            printf("%s :", new.nombre);
            for (g = 5; g >= 0; g--)
            {
                printf("%c", new.dato[g]);
            }
            printf("\n");

            (*contador)++;
            resultados = addArray(new, resultados, contador);

            // revisa que el dato sea igual al del origen
            flat = 't';
            // printf("\n comparando los datos: ");
            // for (y = 0; y < 6; y++)
            // {
            //     printf("%c", nuevo.dato[y]);
            // }
            // printf("==");
            // for (y = 0; y < 6; y++)
            // {
            //     printf("%c", new.dato[y]);
            // }
            // printf("\n");
            // getchar();

            for (y = 0; y < 6; y++)
            {
                if (nuevo.dato[y] != new.dato[y])
                {
                    flat = 'f';
                    break;
                }
            }

            if (flat == 'f')
            {
                // el resultado no es igual al orgien
                // comprobar los demas ceros
                for (y = 0; y < 6; y++)
                {
                    if (new.dato[y] == '0')
                    {

                        sistema(new, resultados, contador);
                    }
                }
            }

            // printf("Desde funcion sistema\n");

            // for (x = 0; x < 6; x++)
            // {
            //     printf("%c", output[0].dato[x]);
            // }
            // printf("%c", output[0].nombre[0]);
            // printf("\n");
        }
    }

    // return output;
    // printf("--Salio de una funcion-- \n");
    usleep(100000);
}
