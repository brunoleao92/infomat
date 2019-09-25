#include <stdio.h>
#include <stdlib.h>
void Intercambiar(int num1, int num2);
void IntercambiarConPunteros(int *num1, int *num2);
void PonerEnCero(int *num1);

int main()
{
    int edadUno;
    int edadDos;
    edadUno=22;
    edadDos=99;
    PonerEnCero(&edadDos);
   // Intercambiar(edadUno,edadDos);
   IntercambiarConPunteros(&edadUno,&edadDos);
    printf("\nEdad 1:%d",edadUno);
    printf("\nEdad 2:%d",edadDos);
    return 0;
}
void PonerEnCero(int *num1)
{
    *num1=0;
}
void Intercambiar(int num1, int num2)
{
    int aux;
    aux= num1;
    num1=num2;
    num2=aux;
}
void IntercambiarConPunteros(int *num1, int *num2)
{
    int aux;
    aux= *num1;
    *num1=*num2;
    *num2=aux;
}








