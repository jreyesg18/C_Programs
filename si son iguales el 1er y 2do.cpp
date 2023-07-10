/*
 Determinar si el primer y el último dígito de un número son iguales o no.
*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
    int dig1=0;
    int dig2=0;
    
    printf("digite un numero");
    scanf("%d",&num);
    
    dig1=num%10;
    num=num/10;
    
    while(num!=0)
    {
         dig2=num%10;
         num=num/10;         
    }
    
    if(dig1==dig2)
    {
           printf("%d = %d , son iguales\n", dig1,dig2);      
    }
    else
    {
           printf("%d != %d , No son iguales", dig1,dig2);  
    }
system("pause");
}
