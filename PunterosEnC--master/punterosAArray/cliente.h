#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

typedef struct
{
    char nombre[50];
    char apellido[50];
    char cuit[14];
    int idCliente;
    int edad;
}Cliente;


#endif // CLIENTE_H_INCLUDED
Cliente* cliente_new();
Cliente* cliente_new_2(int edad,char nombre[50]);
static int cliente_setId(Cliente* this);
void cliente_delete(Cliente* this);
int cliente_setNombre(Cliente* this,char nombre[50]);
int cliente_getNombre(Cliente* this,char nombre[50]);
int cliente_setEdad(Cliente* this,int edad);
int cliente_getEdad(Cliente* this,int* edad);
static int cliente_setId(Cliente* this);

