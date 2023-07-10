/*
 Contar cuántos dígitos impares tiene un número cualquier
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num=0;
    int aux=0;
    int i=0;
    printf("digite un numero: ");
    scanf("%d",&num);  
    
    while(num!=0)
    {
          aux=num%10;
          num=num/10;
          if(aux%2==1)
          i++;         
    }
    printf("num impares = %d",i);   
    
system("pause");
}
