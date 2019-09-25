#include "controlador.h"
#include "cliente.h"
int altaCliente(int *cantidad,Cliente *listado[])
{
    //pedir
    //pedir todos los datos

    listado[*cantidad]=cliente_new_2(22,"jose");
    *cantidad=*cantidad+1;

}
int listarClientes(int cantidad,Cliente *listado[])
{
    int i;
    int edad;
    char nombre[50];
     printf("\n edad \t nombre");
    for(i=0;i<cantidad;i++)
    {
        cliente_getEdad((*(listado+i)), &edad);
        cliente_getNombre((*(listado+i)), &nombre);
        printf("\n %d  ",edad);
        printf("\t %s ",nombre);
        /*
        printf("\n %d  ",(*(listado+i))->edad);
        printf("\t %s ",(*(listado+i))->nombre);
        */
    }

}
