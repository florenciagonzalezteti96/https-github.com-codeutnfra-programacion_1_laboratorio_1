#include <stdio.h>
#include <stdlib.h>
#include "persona.h"

#define CANT 3

int main()
{
    char persona [CANT][31],peraux[31];
    char seguir='s';
    int opcion=0;
    EPersona personas[CANT];

    init(personas, CANT);

    do{
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Modificar persona\n");
        printf("4- Imprimir lista ordenada por apellido y nombre\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingrese el nombre y apellido de la persona: ");
                fflush(stdin);


                alta(personas, CANT);
                break;
            case 2:
                printf("Documento: ");
                scanf("%d", auxDoc);

                for(i=0; i<CANT; i++)
                {
                    if(auxLegajo==legajo[i])
                    {
                        isEmpty[i]=1;
                        flag=1;
                    }
                    if(flag==0)
                    {
                        printf("Dato no encontrado");
                    }
                }
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }while(seguir == 's');

    return 0;
}
