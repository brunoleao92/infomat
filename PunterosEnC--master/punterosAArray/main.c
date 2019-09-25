#include <stdio.h>
#include <stdlib.h>
#include "cliente.h"
#include "controlador.h"


int main()
{
    Cliente* pArrayClientes[50];
    int qtyArrayClientes=0;
    altaCliente(&qtyArrayClientes,pArrayClientes);
    altaCliente(&qtyArrayClientes,pArrayClientes);
    altaCliente(&qtyArrayClientes,pArrayClientes);
   // printf(" cantidad:%d ",qtyArrayClientes);

    listarClientes(qtyArrayClientes,pArrayClientes);
    return 0;
}

