/*
Mostrar los divisores de un número cualquiera 
*/

#include<stdio.h>
#include<stdlib.h>

void Mostrardiv(int dig)
{
    int aux;
    int cont=1;
    
    while(cont<=dig)
    {
         if(dig%cont==0)
         printf("%d ",cont);
         cont++;
    }
         
}

int main()
{
    int num;
    
    printf("Introduzca un primer numero: ");
    scanf("%d",&num);
    
    Mostrardiv(num);
    
system("pause");
}
