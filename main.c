#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

typedef struct
{
    int codigoJuego;
    char nombreJuego[51];
    float precio;
    int isEmpty;
}eJuguetes;
typedef struct
{
    int id;
    int tipoj [51];
}eTipoj;

typedef struct
{
    int codigoClientes;
    char apellido [51];
    char nombre [51];
    char sexo;
    char domicilio;
    int isEmpty
}eClientes;
typedef struct
{
    int codigoAlquiler;
    int fecha;
}eAlquileres;

void inicializarJuguetes( eJuguetes x[], int tam);
int buscarLibre( eJuguetes x[], int tam);
int buscarJuguete(eJuguetes x[], int tam, int codigoJuegos);
void mostrarJuguetes1 (eJuguetes jug, eTipoj tipoj[], int tamTipo);
void mostrarJuguetes2 (eJuguetes nomina[], int tam, eTipoj tipoj[], int tamTipo);
void agregarJuguetes (eJuguetes juguetes[], int tam, eTipoj tipoj[], int tamTipo);
void eliminarJuguetes(eJuguetes *juguetes, int tam, eTipoj tipoj[], int tamTipo);;
void modificarJuguetes(eJuguetes juguetes[], int tam, eTipoj tipoj[], int tamTipo);
int elegirJuguete(eTipoj juguetes[], int tam);
void cargarDescripcion(eTipoj tipoj[], int tamTipo, int idTipo, char cadena[]);
int menu();

int main()
{
    char seguir= 's';
    eJuguetes lista[10];
    eTipoj tipoj[]=
    {
        {1, infantiles_Bebe}
        {2, deMesa}
        {3, niños}
        {4, niñas}
        {5, peluches}
    };
    inicializarJuguetes(lista, 10);

    do
    {
        switch(menu())
        {
        case 1:
            agregarJuguetes(lista, 10, tipoj, 5);
            system("pause");
            break;
        case 2:
            eliminarJuguetes(lista, 10, tipoj, 5);
            system("pause");
            break;
        case 3:
            modificarJuguetes(lista, 10, tipoj, 5);
            system("pause");
            break;
        case 4:
            mostrarJuguetes(lista, 10, tipoj, 5);
            system("pause");
            break;
        case 5:
            seguir= 'n';
            system("pause");
            break;
        }
    }

    while( seguir=='s');
    return 0;
}

void inicializarJuguetes (eJuguetes x[], int tam)
{

    for(int i=0; i < tam; i++)
    {
        x[i].isEmpty = 0;
    }
}

int buscarLibre (eJuguetes x[], int tam)
{
    int indice = -1;

    for (int i=0; i< tam; i++)
    {
        if( x[].isEmpty==0)
        {
            indice=1;
            break;
        }
    }
    return indice;
}
int buscarJuguetes (eJuguetes x[], int tam, int codigoJuegos)
{
    int indice = -1;

    for (int i=0; i< tam; i++)
    {
            if(x[i].codigoJuegos == codigoJuegos && x[i].isEmpty ==1)
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
    system("cls");
    printf("MENU\n\n");
    printf("1- Alta\n");
    printf("2- Baja\n");
    printf("3- Modificar\n");
    printf("4- Listar\n");
    printf("5- Salir\n");
    printf("Ingrese opcion :  ");
    fflush(studin);
    scanf("%d",& opcion);
    return opcion;
}
void agregarJuguetes(eJuguetes juguetes[], int tam, eTipoj)
{
    eJuguetes nuevoJuguete;
    int indice;
    int esta;
    int codigoJuegos;

    indice = buscarLibre(juguetes, tam);

    if (indice ==-1)
        {
            printf("No hay lugar \n\n");
        }
    else
        {
            printf(" Ingrese el codigo del juguete :   ");
            scanf("%d",& codigoJuegos);

            esta = buscarJuguetes(juguetes, tam, codigoJuegos);

            if(esta != 1)
            {
                printf("Ya existe un juguete con el codigo %d\n",codigoJuegos);
                mostrarJuguetes2( juguetes[esta], tipoj, tamTipo);
            }
            else
            {
                nuevoJuguete.codigoJuego = codigoJuegos;

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
        }
}
void mostrarJuguetes1(eJuguetes jug, eTipoj tipoj[], int tamTipo)
{
    char descripcion[51];
    cargarDescripcion( tipoj, tamTipo, jug.id, descripcion);

    printf("%d %s %c %.2f %s\n\n", jug.codigoJuego, jug.nombreJuego, jug.precio, descripcion);

}

void mostrarJuguetes2(eJuguetes nomina[], int tam, eTipoj tipoj[], int tamTipo)
{
    for(int i=0; i< tam; i++)
        {
            if (nomina[i].isEmpty==1)
            {
                mostrarJuguetes2(nomina[i], tipoj, tamTipo)
            }
        }
}
void eliminarJuguetes()
{
    int codigoJuego;
    int indice;
    char borrar;

    printf("Ingrese el codigo del juguete: \n");
    scanf("%d",& codigoJuego);

    indice= buscarJuguete(juguetes, tam, codigoJuego);

    if(indice == -1)
    {
        printf("no existe ningun juguete con el codigo %d\n",codigoJuego);

    }
    else
    {
        mostrarJuguetes2(juguetes[indice], tipoj, tamTipo);

        printf("\n Confirmar borrado? : \n");
        fflush(studin);
        scanf("%c",& borrar);
        if(borrar !='s')
        {
            printf("borrado cancelado \n\n");
        }
        else
        {
            juguetes[indice].isEmpty = 0;
            printf("Se elimino exitosamente el juguete");
        }
        system("pause");
    }
}
void modificarJuguetes(eJuguetes juguetes[], int tam, eTipoj tipoj[], int tamTipo)
{
    int codigoJuego;
    int indice;
    char modificar;
    float nuevoPrecio;

    printf("Ingrese el codigo del juguete: \n");
    scanf("%d",&codigoJuego):

    indice = buscarJuguetes(juguetes, tam, codigoJuego);

    if(indice == -1)
    {
        printf("No existe ningun juguete con ese codigo %d\n",codigoJuego);
    }
    else
    {
        mostrarJuguetes2(juguetes[indice], tipoj, tamTipo);

        printf("\n Modificar precio? : \n");
        fflush(studin);
        scanf("%c",% modificar);

        if(modificar !='s')
        {
            printf("Modificacion cancelada \n\n");
        }
        else
        {
            printf("ingrese el nuevo precio: \n");
            scanf("%f",& nuevoPrecio);

            juguetes[indice].precio = nuevoPrecio;
            printf("Se ha modificado el precio del juguete con exito\n\n");
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
