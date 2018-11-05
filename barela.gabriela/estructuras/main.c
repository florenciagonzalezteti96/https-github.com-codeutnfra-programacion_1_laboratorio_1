#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

typedef struct
{
    int codigo;
    float precio;
    int capacidad;
    char marca [20];
}ePendrive;
void mostrarPendrive(ePendrive* pen);


int main()
{

    ePendrive pendrive;


    if((cargarPendrive(&pemdrive)) ==1)
    {

    }
    return 0;
}
