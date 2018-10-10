#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
 typedef struct
 {
     int codigoJuego;
     char descripcion [51];
     float precio;
     int isEmpty;
 }eJuguetes;

 /*
 typedef struct
 {
     int codigoClientes;
     char apellido [51];
     char nombre [51];
     char sexo;
     char domicilio;
     int isEmpty
 } eClientes;
 typedef struct
{
     int codigoAlquiler;
     int codigoCliente;
     int codigoJuegos:

} eAlquileres;
 typedef struct

    {
        int age;
        int mes;
        int dia;
    }eFecha
*/

 void inicializarJueguete( eJuguetes x[], int tam );
 int buscarLibre (eJuguetes x[], int tam);
 void buscarJuguete (eJuguetes x[],int tam, int codigoJuego);
 void mostrarJuguete (eJuguetes jug);
 void mostrarJuguetes (eJuguetes nomina[], int tam);
 void agregarJuguete(eJuguetes juguetes[], int tam);
 void eliminarJuguetes (eJuguetes *juguetes,int tam);
 void modificarJugutes (eJuguetes juguetes[], int tam);

 int menu();


 int main()
 {

     char seguir='s';
     eJuguetes lista[5];

     inicializarJueguete(lista,5);

     do
     {
         switch(menu())
         {
         case 1:
            agregarJuguete(lista, 5);
            system("pause");
            break;
         case 2:
            eliminarJuguetes(lista, 5);
            system("pause");
            break;
         case 3:
             modificarJuguete(lista, 5);
             system("pause");
             break;
         case 4:
            mostrarJuguetes(lista, 5);
            system("pause");
            break;
         case 5:
            seguir = 'n';
            break;
         }
     }

     while(seguir == 's');

     return 0;
 }

 void inicializarJuguete ( eJuguetes x[], int tam)
 {
     int i;

     for(i=0; i<tam; i++)
     {
         x[i].isEmpty=0;
     }
}
int buscarLibre (eJuguetes x[], int tam)
{
    int indice= -1;
    int i;

    for (i=0; i< tam; i++)
    {
        if( x[i].isEmpty == 0)
        {
            indice = i;
            break;
        }
    }

    return indice;
}

int menu()
{
    int opciones;

    system("cls");
    printf("Menu de la jugueteria 'JIRAFA'.\n\n");
    printf("1- Alta\n");
    printf("2- Baja\n");
    printf("3- Modificaciones\n");
    printf("4- Listar\n");
    printf("5- Salir\n");
    printf("Ingrese opcion: \n");
    fflush(stdin);
    scanf("%d",& opciones);

    return opciones;
}

void agregarJuguete (eJuguetes juguetes[], int tam)
{
    eJuguetes nuevoJuguete;
    int indice;
    int esta;
    int codigoJuego;

    indice= buscarLibre(juguetes, tam);

    if(indice == -1)
    {
        printf("No hay lugar\n\n");
    }
    else
    {
        printf(" Ingrese el codigo del juguete: \n");
        scanf("%d",&codigoJuego);

        esta = buscarJuguete(juguetes, tam, codigoJuego);
        if (esta != -1)
        {
            printf("Existe ya un juguete con ese codigo %d\n");
            mostrarJuguete( juguetes[esta] );
        }
        else
        {
            nuevoJuguete.codigoJuego=codigoJuego;

            printf("Ingrese descripcion: \n");
            fflush(stdin);
            gets(nuevoJuguete.descripcion);

            printf("Ingrese el importe: \n");
            fflush(stdin);
            scanf("%f",& nuevoJuguete.precio);

            nuevoJuguete.isEmpty= 1;

            juguetes[indice] =nuevoJuguete;
        }
    }
}

void mostrarJueguete (eJuguetes jug)
{
    printf( "%d %s %c %.2f", jug.codigoJuego, jug.descripcion, jug.precio);
}

void mostrarJuguetes (eJuguetes nomina[], int tam)
{
    int=i;

    for(i=0; i< tam; i++)
    {
        if (nomina[i].isEmpty ==1)
        {
            mostrarJueguete(nomina[i]);
        }
    }
}
void eliminarJuguete (eJuguetes juguetes[], int tam)
{
    int codigoJuego;
    int indice;
    char borrar;

    printf("Ingrese el codigo del juguete: \n");
    scanf("%d",& codigoJuego);

    indice = buscarJuguete(juguetes, tam, codigoJuego);

    if (indice == -1)
    {
        printf("No existe ningun juguete con ese codigo %d\n",codigoJuego);
    }
    else
    {
        mostrarJueguete(juguetes[indice]);

        printf("\nConfirma el borrado? (s/n):");
        fflush(stdin);
        scanf("%c",& borrar);
        if (borrar != 's')
        {
            printf("Borrado cancelado\n\n");
        }
        else
        {
            empleados[indice].isEmpty =0;
            printf("Se ha eliminado el jueguete");
        }
        system("pause");
    }
}
void modificarJuguete (eJuguetes juguetes[], int tam)
{
    int codigoJuego;
    int indice;
    char modificar;
    float nuevoPrecio;

    printf("Ingresar legajo: \n");
    scanf("%d",&codigoJuego);


    indice = buscarJuguete(juguetes, tam, codigoJuego);

    if(indice == -1)
    {
        printf("No existe nungun juguete con ese codigo %d\n",codigoJuego);
    }
    else
    {
        mostrarJueguete(juguetes[indice]);

        printf("\nModificar precio?(s/n) :");
        fflush(stdin);
        scanf("%c",&modificar);

        if (modificar != 's')
        {
            printf("Modificacion cancelada \n");
        }
        else
        {
            printf("Ingrese nuevo sueldo: \n");
            scanf("%f",&nuevoPrecio);

        juguetes[indice].precio= nuevoPrecio;
        printf("Se ha modificado el sueldo con exito\n\n!");
        }
        system("pause");
    }
}
