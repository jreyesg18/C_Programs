/*
Dado un n�mero entero, mostrar cual es su primer d�gito
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num=0;
    int aux=0;
    
    printf("escriba un numero: ");
    scanf("%d",&num);
    
    while(num>10)
    {
             aux=num%10;    
             num=num/10;    
    }
                 
    printf("numero: %d ", num);
    
system("pause");
}
