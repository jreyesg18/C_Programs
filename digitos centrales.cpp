/*

Determinar el o los d�gitos  centrales. Si el n�mero tiene cantidad impar de d�gitos 
debe retornar el d�gito central, en caso contrario debe retornar los dos d�gitos 
centrales. 
Ejemplo: 
 Num=123  mostrar 2 
 Num=1234  mostrar 23 

*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a=0;
    int num=0;
    int dig=0;
    int aux=0;
    int aux1=0;
    int i=0;
    
    printf("digite un numero");
    scanf("%d",&num);
    
    dig=num;
    
    while(dig!=0)
    {
                 dig=dig/10;
                 a++;
                 
    }
    
    if(a%2==0)
    {
                a=a/2;
                while(i<a)
                {
                     aux=num%10;
                     num=num/10;
                     i++;
                }
                aux1=num%10;
    
                printf("el N central es: %d%d",aux1,aux);
    }
    else
    {
           a=a/2;
           
           while(i<=a)
           {
                  aux=num%10;
                  num=num/10;
                  i++;
           }
           
           printf("el N central es: %d",aux);
          
    }
    
system("pause");
}
