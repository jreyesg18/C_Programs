/*Escribir la función EsDivisor(x,y), que determina si el número x es divisor de y, o no.*/

#include<stdio.h>
#include<stdlib.h>

int EsDivisor(int x, int y)
{   
    if(y%x==0)
        return 1;
    else
        return 0;   
}


int main()
{
    int num1=0;
    int num2=0;
    int funcion;
    
    printf("digite 1er num: ");
    scanf("%d",&num1);
    printf("digite 2do num: ");
    scanf("%d",&num2);
    
    funcion=EsDivisor(num1,num2);
    
    if(funcion==1)
        printf("Es dividor");
    else
        printf("No es divisor");
    
system("pause");
}
