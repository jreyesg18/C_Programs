/*
 Determinar si un número entero positivo es prim
*/

#include<stdio.h>
#include<stdlib.h>

void NumEntPr(int dig)
{
    int cont=0;
    int i=1;
    
    while(i<=dig)
    {
         if(dig%i==0)
         cont++;
         i++;       
    } 
     if(cont==2)
     printf("Es primo");
     else
     printf("No es primo");
}     


int main()
{
    int num;
    
    printf("digite un numero: ");
    scanf("%d",&num);
    
    NumEntPr(num);
    
system("pause");
}
