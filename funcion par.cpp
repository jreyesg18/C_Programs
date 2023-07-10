/*Escribir la función EsPar(num), que permite determinar si un número es (1) o no (0) 
par.*/

#include<stdio.h>
#include<stdlib.h>

int EsPar(int dig)
{
    int aux=0;
    aux=dig%2;
    
    return aux;
}


int main()
{
    int funcion=0;
    int num;
    
    printf("digite un numero: ");
    scanf("%d",&num);
    
    funcion=EsPar(num);
    
    if(funcion==0)
        printf("Es par");
    else
        printf("No es par");
    
system("pause");
}
