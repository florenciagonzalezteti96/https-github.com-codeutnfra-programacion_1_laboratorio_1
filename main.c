#include <stdio.h>
#include <stdlib.h>

void mostrarArrayChar(char vec[], int tam);
void ordenarCaracteres(char vec[], int tam);
int main()
{
    char letras[] = { 'g', 'f', 'a', 'A', 'e', 'g', 'b', 'Z'} ;

    mostrarArrayChar(letras, 8);
    ordenarCaracteres(letras,8);
    mostrarArrayChar(letras, 8);

    return 0;
}
void mostrarArrayChar(char vec[], int tam)
{
    for(int i=0; i <tam; i++)
    {
       printf("%c", vec[i]);
    }
    printf("\n\n");
}
void ordenarCaracteres(char vec[], int tam)
{



    char aux;

    for(int i=0; i < tam -1; i++)
    {
        for(int j=i +1; j < tam; j++)
        {

            if ( vec[i] > vec[j] )
            {
                aux = vec[i];
                vec [i] = vec [j];
                vec [j] = aux;
            }
        }
    }

}
