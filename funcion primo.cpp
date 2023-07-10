/* Escribir la función EsPrimo(num), que permite determinar si un número es (1) o no 
(0) primo. 
Si num=13 retorna 1 
Si num=25 retorna 0
*/

#include<stdio.h>
#include<stdlib.h>

int EsPrimo(int dig)
{
    int i=1;
    int cont=0;
    
    while(i<=dig)
    {
             if(dig%i==0)
             {
                  cont++;        
             }
             i++;  
    }
    if(cont==2)
       return 1;
    else
       return 0;  
}


int main()
{
    int funcion=0;
    int dig=0;
    int num;
    
    printf("digite un num: ");
    scanf("%d",&num);
    
    funcion=EsPrimo(num);
    
    if(funcion==1)
        printf("Es primo");
    else
        printf("No es primo");
    
system("pause");
}
