#include<stdio.h>
#include<stdlib.h>
int suma(int,int);//prototipo declaracion
int main()
{
    int numUno;
    int numDos;
    int resultado;

    printf("Ingrese el primer numero");
    scanf("%d",&numUno);
    printf("\n Ingrese el segundo numero");
    scanf("%d",&numDos);

    resultado= suma(numUno, numDos);
    system("cls");
    printf("resultado %d,result");
    return 0;

}
int suma(int op1, int op2)
{
    int result;
    resultado=op1+op2;
    return result;
}
