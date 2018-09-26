#include <stdio.h>
#include <stdlib.h>

int main()
{
int numeros;
    int contador=0;
    int numerosNegativos=0;
    int numerosPositivos=0;
    int i;

    for(i=0; i<5; i++)
        {
            printf("ingrese un numero :  \n");
            scanf("%d",&numeros);

            //contador=contador+numeros;

            if(numeros>0)
            {
                //numerosPositivos=contador;
                numerosPositivos++; //(me los suma y los cuenta)

            }
            else
            {
                //numerosNegativos=contador;
                numerosNegativos++;
            }
        }
            printf("la cantidad de numeros positivos son : %i\n",numerosPositivos);
            printf("la cantidad de numeros negativos son : %i\n",numerosNegativos);
    return 0;
}
