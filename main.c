#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct eEmpleado
{
int legajo;
char nombre[25];
char sexo;
float sueldo;
};
//TERMINA EN ; SI EMPIEZON DEFINIENDO LA ESTRUCTURA
typedef struct
{
int legajo;
char nombre[25];
char sexo;
float sueldo;
}eEmpleado;




int main()
{
   // struct empleado eEmpleado;
    eEmpleado unEmpleado;
    eEmpleado otroEmpleado;
    eEmpleado empleado3={2222, "Jose", 'm', 20000};
    eEmpleado empleado4;

    empleado4=empleado3;

    unEmpleado.legajo= 1234;
    strcpy(unEmpleado.nombre,"Juan");
    unEmpleado.sexo='m';
    unEmpleado.sueldo=10000.5;

    otroEmpleado.legajo= 1122;
    strcpy(otroEmpleado.nombre,"Lucia");
    otroEmpleado.sexo='f';
    otroEmpleado.sueldo=15000.75;


        mostrarEmpleado(unEmpleado);
        mostrarEmpleado(otroEmpleado);
        mostrarEmpleado(empleado3);
        mostrarEmpleado(empleado4);


    return 0;
}

void mostrarEmpleado(eEmpleado employee)
{
        printf("%d %s %c %.2f\n\n", employee.legajo, employee.nombre, employee.sexo, employee.sueldo);

}




