#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int numero;
    double importe;
    char Tipo;
}eFactura;

eFactura* crear(int numero,double precio);
eFactura* crearDinamico(int numero,double precio);
int main()
{
    eFactura PrimerFactura={1,23.2,'A'};
    eFactura *pFactura;
    pFactura =&PrimerFactura;
    int x;
    char retorno;
    //el campo  es de una estructura
    //error //int x=pFactura.numero;
     printf("\n\t Mostrar un dato de un puntero a estructura\n");

    x= (*pFactura).numero;
    printf("\n numero '.' %d",x);
     x= (pFactura->numero);
    printf("\n numero '->'%d",x);

    // error printf("\n Nro:%d $=%f  tipo:%c",pFactura.numero,pFactura.importe,pFactura.Tipo);

    printf("\n\t Mostrar todos los datos de un puntero a estructura\n");
    printf("\n Nro:%d $=%f  tipo:%c",(*pFactura).numero,(*pFactura).importe,(*pFactura).Tipo);
    printf("\n Nro:%d $=%f  tipo:%c",pFactura->numero,pFactura->importe,pFactura->Tipo);


    // con arrays
    eFactura facturas[2]={{2,44.2,'B'},{3,65.2,'C'}};
    eFactura *pFactura2;
    pFactura2=facturas;
    int i=0;
    printf("\n\t Dentro de un array, mostramos los datos\n");
    for(;i<2;i++)
    {
        //error printf("\n Nro:%d $=%f  tipo:%c", pFactura2+i->numero, pFactura2+i->importe, pFactura2+i->Tipo);
        //error printf("\n Nro:%d $=%f  tipo:%c", *(pFactura2+i)->numero,*(pFactura2+i)->importe, *(pFactura2+i)->Tipo);
        //error  printf("\n Nro:%d $=%f  tipo:%c", *(pFactura2+i).numero,*(pFactura2+i).importe, *(pFactura2+i).Tipo);
        printf("\n '(*(pFactura2+i)).' Nro:%d $=%f  tipo:%c", (*(pFactura2+i)).numero,(*(pFactura2+i)).importe, (*(pFactura2+i)).Tipo);
        printf("\n '(pFactura2+i)->' Nro:%d $=%f  tipo:%c", (pFactura2+i)->numero,(pFactura2+i)->importe,(pFactura2+i)->Tipo);
    }

    printf("\n Presione un tecla para continuar");
    retorno=getchar();

    printf("\n\t Errores de referencia perdida");
    printf("\n\t los siguientes ejemplos son la forma INCORRECTA de asignar memoria\n\t y de como se PIERDE la referencia\n");
    eFactura *pFactura3;
    eFactura *pFactura4;
    eFactura *pFactura5;
    eFactura *pFactura6;
    pFactura3=crear(333,333);
    printf("\n pFactura3= Nro:%d $=%f pFactura4=crearDinamico(444,444); tipo:%c",pFactura3->numero,pFactura3->importe,pFactura3->Tipo);
    printf("\n\t ahi va bien");

    printf("\n \n Listado de direcciones de memoria ");
    printf("\n pFactura3 #stack:%d",pFactura3);
    printf("\n pFactura4 #stack:%d",pFactura4);
    printf("\n pFactura5 #stack:%d",pFactura5);
    printf("\n pFactura6 #stack:%d",pFactura6);
    printf("\n ");

    pFactura4=crear(444,444);
    printf("\n pFactura3= Nro:%d $=%f  tipo:%c",pFactura3->numero,pFactura3->importe,pFactura3->Tipo);
    printf("\n pFactura3= Nro:%d $=%f  tipo:%c",pFactura3->numero,pFactura3->importe,pFactura3->Tipo);
    printf("\n pFactura4= Nro:%d $=%f  tipo:%c",pFactura4->numero,pFactura4->importe,pFactura4->Tipo);

    pFactura5=crear(555,555);
    pFactura6=crear(666,666);
    printf("\n pFactura5= Nro:%d $=%f  tipo:%c",pFactura5->numero,pFactura5->importe,pFactura5->Tipo);
    printf("\n pFactura6= Nro:%d $=%f  tipo:%c",pFactura6->numero,pFactura6->importe,pFactura6->Tipo);

    printf("\n \n Listado de direcciones de memoria ");
    printf("\n pFactura3 #stack:%d",pFactura3);
    printf("\n pFactura4 #stack:%d",pFactura4);
    printf("\n pFactura5 #stack:%d",pFactura5);
    printf("\n pFactura6 #stack:%d",pFactura6);

    printf("\n Presione un tecla para continuar");
    retorno=getchar();

    printf("\n\t utilizacion de memoria dinamica");
    printf("\n\t los siguientes ejemplos son la forma CORRECTA de asignar memoria\n\t y de como se MANTIENE la referencia\n");

    int* pEdad;
    pEdad=(int*) malloc(sizeof(int));
    if(pEdad!=NULL)
    {
        *pEdad=33;
        printf("\nla edad ingresada es : %d \n",*pEdad);
    }

    pFactura3=crearDinamico(333,333);
    pFactura4=crearDinamico(444,444);
    pFactura5=crearDinamico(555,555);
    pFactura6=crearDinamico(666,666);


    printf("\n pFactura3= Nro:%d $=%f  tipo:%c",pFactura3->numero,pFactura3->importe,pFactura3->Tipo);
    printf("\n pFactura4= Nro:%d $=%f  tipo:%c",pFactura4->numero,pFactura4->importe,pFactura4->Tipo);
    printf("\n pFactura5= Nro:%d $=%f  tipo:%c",pFactura5->numero,pFactura5->importe,pFactura5->Tipo);
    printf("\n pFactura6= Nro:%d $=%f  tipo:%c",pFactura6->numero,pFactura6->importe,pFactura6->Tipo);
    printf("\n ");
    printf("\n \n Listado de direcciones de memoria ");
    printf("\n pFactura3 #stack:%d",pFactura3);
    printf("\n pFactura4 #stack:%d",pFactura4);
    printf("\n pFactura5 #stack:%d",pFactura5);
    printf("\n pFactura6 #stack:%d",pFactura6);

    printf("\n Presione un tecla para continuar");
    retorno=getchar();
    printf("\n\t utilizacion de memoria dinamica MALLOC");

    int* pListadoEdad;
    pListadoEdad=(int*) malloc(sizeof(int)*5);
    int* datoEntero=(int*) malloc(sizeof(int));
    *datoEntero=666;
    if(pListadoEdad!=NULL)
    {
        *pListadoEdad=33;
        printf("\nla edad ingresada es : %d \n",*pListadoEdad);
    }

    for(i=0;i<5;i++)
    {
        *(pListadoEdad+i)=i*11;
    }
      for(i=0;i<10;i++)
    {
         printf("\nla edad ingresada es : %d \n",*(pListadoEdad+i));
    }

    printf("\n Presione un tecla para continuar");
    retorno=getchar();


    printf("\n\t utilizacion de memoria dinamica REALLOC");

    pListadoEdad= realloc(pListadoEdad,sizeof(int)*10);

    for(i=0;i<10;i++)
    {
         printf("\nla edad ingresada es : %d \n",*(pListadoEdad+i));
    }
    return 0;
}
/*
se crea una referencia local en el stack que sera limpiada o eliminada
con cualquier utilizacion del stack
*/
eFactura* crear(int numero,double precio)
{
    eFactura PrimerFactura={numero,precio,'A'};
    eFactura *pFactura;
    pFactura =&PrimerFactura;
    return pFactura;
}
eFactura* crearDinamico(int numero,double precio)
{
    // void *malloc(size_t size);
    eFactura *pFactura;
    pFactura=(eFactura*)malloc(sizeof(eFactura));
    pFactura->importe=precio;
    pFactura->numero=numero;
    return pFactura;
}
