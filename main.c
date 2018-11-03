#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
 typedef struct
{
    int codigoJuego;
    char nombreJuego[51];
    float precio;
    int isEmpty;
}eJuguetes;

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
        /*case 2:
            eliminarJuguetes(lista, 10, tipoj, 5);*/
         case 2:
            eliminarJuguetes(lista, 5);
            system("pause");
            break;
       /* case 3:
            modificarJuguetes(lista, 10, tipoj, 5);*/
         case 3:
             modificarJuguete(lista, 5);
             system("pause");
             break;
         case 4:
            mostrarJuguetes(lista, 5);
            system("pause");
            break;
       /* case 4:
            mostrarJuguetes(lista, 10, tipoj, 5);
            system("pause");
            break;*/
        /*case 5:
            seguir= 'n';
            system("pause");*/
         case 5:
            seguir = 'n';
            break;
        }
        }

     while(seguir == 's');
 void inicializarJuguetes (eJuguetes x[], int tam)
{
       for(int i=0; i < tam; i++)
    {
        x[i].isEmpty = 0;
    }

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
    int indice = -1;
    int i;
     for (int i=0; i< tam; i++)
    for (i=0; i< tam; i++)
    {
        //if( x[].isEmpty==0)
        if( x[i].isEmpty == 0)
        {
            indice=1;
            indice = i;
            break;
        }
    }
    return indice;
}
int buscarJuguetes (eJuguetes x[], int tam, int codigoJuego)
{
    int indice = -1;
     for (int i=0; i< tam; i++)
    {
            if(x[i].codigoJuego == codigoJuego && x[i].isEmpty ==1)
            {
                indice = 1;
                break;
            }
    }
     return indice;
}
 int menu()
{
    int opcion;
    int opciones;
     system("cls");
    printf("MENU\n\n");
    printf("Menu de la jugueteria 'JIRAFA'.\n\n");
    printf("1- Alta\n");
    printf("2- Baja\n");
    printf("3- Modificar\n");
    printf("3- Modificaciones\n");
    printf("4- Listar\n");
    printf("5- Salir\n");
    printf("Ingrese opcion: ");
    fflush(stdin);
    scanf("%d", &opcion);

     return opciones;
}
//void agregarJuguetes(eJuguetes juguetes[], int tam, eTipoj)
void agregarJuguete(eJuguetes juguetes[], int tam)
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
     //if (indice ==-1)
        esta = buscarJuguete(juguetes, tam, codigoJuego);
        if (esta != -1)
        {
            printf("No hay lugar \n\n");
            printf("Existe ya un juguete con ese codigo %d\n");
            mostrarJuguete( juguetes[esta] );
        }
    else
        else
        {
            printf(" Ingrese el codigo del juguete :   ");
            scanf("%d",& codigoJuegos);
             esta = buscarJuguetes(juguetes, tam, codigoJuego);
             if(esta != 1)
            {
                printf("Ya existe un juguete con el codigo %d\n",codigoJuego);
                mostrarJuguetes2( juguetes[esta], tipoj, tamTipo);
            }
            else
            {
                nuevoJuguete.codigoJuego = codigoJuego;
                 printf("Ingrese el nombre del juguete: ");
                fflush(studin);
                gets(nuevoJuguete.nombreJuego);
                 printf("Ingrese precio : \n");
                fflush(studin);
                scanf("%f",&nuevoJuguete.precio);
                 nuevoJuguete.id = elegirJuguete(tipoj, 5);
                nuevoJuguete.isEmpty = 1;
                juguetes[indice] = nuevoJuguete;
            }
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
void mostrarJuguetes1(eJuguetes jug, eTipoj tipoj[], int tamTipo)
{
    char descripcion[51];
    cargarDescripcion( tipoj, tamTipo, jug.id, descripcion);
     printf("%d %s %c %.2f %s\n\n", jug.codigoJuego, jug.nombreJuego, jug.precio, descripcion);
 void mostrarJueguete (eJuguetes jug)
{
    printf( "%d %s %c %.2f", jug.codigoJuego, jug.descripcion, jug.precio);
}
 void mostrarJuguetes2(eJuguetes nomina[], int tam, eTipoj tipoj[], int tamTipo)
void mostrarJuguetes (eJuguetes nomina[], int tam)
{
    for(int i=0; i< tam; i++)
    int=i;
     for(i=0; i< tam; i++)
    {
        if (nomina[i].isEmpty ==1)
        {
            if (nomina[i].isEmpty==1)
            {
                mostrarJuguetes2(nomina[i], tipoj, tamTipo)
            }
            mostrarJueguete(nomina[i]);
        }
    }
}
void eliminarJuguetes()
void eliminarJuguete (eJuguetes juguetes[], int tam)
{
    int codigoJuego;
    int indice;
@@ -213,93 +200,68 @@ void eliminarJuguetes()
    printf("Ingrese el codigo del juguete: \n");
    scanf("%d",& codigoJuego);
     indice= buscarJuguete(juguetes, tam, codigoJuego);
    indice = buscarJuguete(juguetes, tam, codigoJuego);
     if(indice == -1)
    if (indice == -1)
    {
        printf("no existe ningun juguete con el codigo %d\n",codigoJuego);
         printf("No existe ningun juguete con ese codigo %d\n",codigoJuego);
    }
    else
    {
        mostrarJuguetes2(juguetes[indice], tipoj, tamTipo);
        mostrarJueguete(juguetes[indice]);
         printf("\n Confirmar borrado? : \n");
        fflush(studin);
        printf("\nConfirma el borrado? (s/n):");
        fflush(stdin);
        scanf("%c",& borrar);
        if(borrar !='s')
        if (borrar != 's')
        {
            printf("borrado cancelado \n\n");
            printf("Borrado cancelado\n\n");
        }
        else
        {
            juguetes[indice].isEmpty = 0;
            printf("Se elimino exitosamente el juguete");
            empleados[indice].isEmpty =0;
            printf("Se ha eliminado el jueguete");
        }
        system("pause");
    }
}
void modificarJuguetes(eJuguetes juguetes[], int tam, eTipoj tipoj[], int tamTipo)
void modificarJuguete (eJuguetes juguetes[], int tam)
{
    int codigoJuego;
    int indice;
    char modificar;
    float nuevoPrecio;
     printf("Ingrese el codigo del juguete: \n");
    scanf("%d",&codigoJuego):
    printf("Ingresar legajo: \n");
    scanf("%d",&codigoJuego);
     indice = buscarJuguetes(juguetes, tam, codigoJuego);
    indice = buscarJuguete(juguetes, tam, codigoJuego);
     if(indice == -1)
    {
        printf("No existe ningun juguete con ese codigo %d\n",codigoJuego);
        printf("No existe nungun juguete con ese codigo %d\n",codigoJuego);
    }
    else
    {
        mostrarJuguetes2(juguetes[indice], tipoj, tamTipo);
        mostrarJueguete(juguetes[indice]);
         printf("\n Modificar precio? : \n");
        fflush(studin);
        scanf("%c",% modificar);
        printf("\nModificar precio?(s/n) :");
        fflush(stdin);
        scanf("%c",&modificar);
         if(modificar !='s')
        if (modificar != 's')
        {
            printf("Modificacion cancelada \n\n");
            printf("Modificacion cancelada \n");
        }
        else
        {
            printf("ingrese el nuevo precio: \n");
            scanf("%f",& nuevoPrecio);
            printf("Ingrese nuevo sueldo: \n");
            scanf("%f",&nuevoPrecio);
             juguetes[indice].precio = nuevoPrecio;
            printf("Se ha modificado el precio del juguete con exito\n\n");
        juguetes[indice].precio= nuevoPrecio;
        printf("Se ha modificado el sueldo con exito\n\n!");
        }
        system("pause");
    }
}
int elegirTipo(eTipoj tipoj[], int tam)
{
    int id;
    printf("\n Tipo de juguetes\n\n");
    for(int i=0; i< tam; i++)
        {
            printf("%d %s \n", tipoj[i].id, tipoj[i].descripcion);
         }
    printf("\n Seleccione in tipo: ");
    scanf("%d",& id);
     return id;
}
void cargarDescripcion(eTipoj tipoj[], int tamTipo, int idTipo, char cadena[])
{
    for(int i=0; i< tam; i++)
    {
        if(tipoj[i].id== idTipo)
        {
            strcpy(cadena, tipoj[i].descripcion);
            break;
        }
    }
}
