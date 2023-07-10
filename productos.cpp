#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//llenarProducto(P), que permite ingresar los datos del producto P

typedef struct Producto{
        char nombre[30];
        float precio;
        int cantidad;
};
typedef Producto Bodega[30];


void llenarproducto(producto *n)
{
     printf("ingrese nombre: ");
     scanf("%[^\n]",(*n).nombre);
     fflush(stdin);
     
     printf("ingrese el precio del producto: ");
     scanf("%f",&(n*).precio);
     
     printf("ingrese la cantidad de productos: ");
     scanf("%d",&(n*).precio);
}

void labodega(Bodega A[], int a)
{
     int i;
     producto b;
     for(i=1;i<a;i++)
     {
                llenarproducto(&b);      
     }
     
}
     

int main()
{
    Bodega A[30];
    int c;
    printf("ingrese la cantidad de prductos q digitara: ");
    scanf("%d",&c)
    labodega(&A[],c);
    
system("pause");    
}