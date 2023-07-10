#include<stdio.h>
#include<stdlib.h>

void llenar(int x[], int z)
{
     int i=0,n;
     while(i<z)
     {
               printf("Temperatura min: ");
               scanf("%d",&n);
               x[i]=n;
               i++;
               printf("Temperatura max: ");
               scanf("%d",&n);
               x[i]=n;
               i++;   
     }
     
}

void mostrar(int x[],int z)
{
     int i=0;
     while(i<z)
     {
     printf("A[%d] = %d\n",i,x[i]);
     i++;
     printf("A[%d] = %d\n",i,x[i]);
     i++;  
     }
}

int main()
{
    int a[1000];
    
    int i,dias;
    printf("Introduzca la cantidad de dias:");
    scanf("%d",&dias);
    
    dias=dias*2;
    
    llenar(a,dias);
    mostrar(a,dias);


system("pause");    
}
