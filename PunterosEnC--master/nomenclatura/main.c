#include <stdio.h>
#include <stdlib.h>

int main()
{
   //punteros
   int *punteroNumero;
   int numero;
    int numeroDos;
    numero=66;

    punteroNumero=&numero;
    numeroDos=&numero;// de memoria
    printf("\n a- %d",numeroDos);

    numeroDos=*punteroNumero; // de valor
    printf("\n b-%d",numeroDos);

    printf("\n%d",numero);

    printf("\n%d",&numero);
    printf("\n d-%p",punteroNumero);
    printf("\n c-%p",&punteroNumero);
    printf("\n d- %d",*punteroNumero);
    //*punteroNumero=&numero;
    //*punteroNumero=55;
    return 0;
}
