#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[cant][31] nomaux[31];
    char apellido[cant] [31] apeaux[31];
    int edad[cant] edadaux;
    int legajo[cant] legajoaux;
    int isEmpty[cant]isEmptyaux;

    for (1=0 < cant; i++)
        {
            for(j=i+1; < cant;j++)
                {
                    if(stremp(apellido[i],apellido[j])>0)
                    {
                        strepy(nomaux, nombre[i]);
                        strepy(nombre[i],nombre[j]);
                        strepy(nombre[j],nomaux);
                        strepy(apeaux,apellido[i]);
                        strepy(apellido[i],apellido[j]);
                        strepy(apellido[j],apeaux);

                        edadaux=edad[i];
                        edad[i]=edad[j];
                        edad[j]=edadaux;

                        legajoaux=legajo[i];
                        legajo[i]=legajo[j];
                        legajo[j]=legajoaux;

                        isEmptyaux=isEmpty[i];
                        isEmpty[i]=isEmpty[j];
                        isEmpty[j]=isEmptyaux;

                    }
                    else
                    {
                        if(stremp(apellido[i], apellido[j])==0)
                        {
                            if(strepy(nombre[i],nombre[j])>0)
                        }
                    }
                }
        }
        {
            isEmpty[i]=1;

        }
        do
        {
            menu
            swtich(opcion)
            {
                case:
                break;
            }
            while(opcion!=5)
        }
    printf("Ingrese nombre y apellido: ");
    fgets(nombre, sizeof(nombre),stdin);

    printf("%s",nombre);
    return 0;
}
