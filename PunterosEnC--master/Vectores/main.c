#include <stdio.h>
#include <stdlib.h>
void mostrar(int *puntero,int cantidad);

int main()
{
    int numeros[3];
    int *puntero;
    int auxiliar=333;
    puntero=numeros;
    numeros[0]=9;
    numeros[1]=99;
    numeros[888]=999;
    printf("\npuntero :%d",*(puntero-2));
    printf("\npuntero :%d",*(puntero+1));
    printf("\npuntero :%d",*(puntero+2));
    printf("\npuntero :%d",*(puntero+3));
    printf("\npuntero :%d",*(puntero+4));


    mostrar(numeros,3);


    return 0;
}
void mostrar(int *puntero,int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        printf("\nnumero :%d",*(puntero+ i));
    }
}





