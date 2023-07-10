#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[100];
    int i,n,b;
    
    printf("Introduzca la cantidad de valores\n N= ");
    scanf("%d",&n);
    
    for (i=0;i<n;i++)
    { 
       printf("ingrese un valor para A[%d]: ",i);
       scanf("%d",&b);
       a[i]=b;
    }
    for (i=0;i<n;i++)
    { 
    printf("A[%d] = %d\n",i,a[i]);
    }
    
system("pause");
}
