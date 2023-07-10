/*
Escribir la función EsPerfecto(num), que permite determinar si un número es o no 
perfecto. Un número es perfecto si al sumar sus divisores excepto el mismo número, 
da como resultado el mismo número. 
Si num=6  sumadivisores= 1+2+3 = 6
*/

#include<stdio.h>
#include<stdlib.h>

int EsPerfecto(int dig)
{
    int aux=0;
    int cont=1;
    
    while(aux<dig)
    {
         if(dig%cont==0)
         {
             aux=aux+cont;   
             cont++; 
         }
         else
             cont++;      
    }
    
    return aux;
    
}

int main()
{
    int num=0;
    int funcion=0;
    
    printf("Digite un numero: ");
    scanf("%d",&num);
    
    funcion=EsPerfecto(num);
    
    if(funcion==num)
        printf("Es perfecto \n");
    else
        printf("No es perfecto\n");
    
system("pause");
}
