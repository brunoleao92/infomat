#include "cliente.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
Cliente* cliente_new()
{
    return (Cliente*) malloc(sizeof(Cliente));
}
Cliente* cliente_new_2(int edad,char nombre[50])
{
    Cliente *axuCliente =cliente_new();
    cliente_setEdad(axuCliente,edad);
    cliente_setNombre(axuCliente,nombre);
    //cliente_setLegajo(axuCliente,legajo);

    /*
    (axuCliente)->edad=edad;
    strcpy((axuCliente)->nombre,nombre);
    */
    return axuCliente;
}

void cliente_delete(Cliente* this)
{
    free(this);
}

int cliente_setNombre(Cliente* this,char nombre[50])
{
    int retorno = -1;
    if(this != NULL )
    {
        strcpy(this->nombre,nombre);
        retorno = 0;

    }
    return retorno;
}
int cliente_setEdad(Cliente* this,int edad)
{
    int retorno = -1;
    if(this != NULL )//&& !validarEdad(edad))
    {
        this->edad = edad;
        retorno = 0;

    }
    return retorno;
}

int cliente_getEdad(Cliente* this,int* edad)
{
    int retorno = -1;
    if(this != NULL && edad != NULL)
    {
        *edad = this->edad;
        retorno = 0;
    }
    return retorno;
}

int cliente_getNombre(Cliente* this,char nombre[50])
{
    int retorno = -1;
    if(this != NULL )
    {
        strcpy(nombre,this->nombre);
        retorno = 0;
    }
    return retorno;

}

static int cliente_setId(Cliente* this)
{
    int retorno = -1;
    static int ultimoId = -1;
    if(this != NULL)
    {
        ultimoId++;
        this->idCliente = ultimoId;
        retorno = 0;
    }
    return retorno;
}
