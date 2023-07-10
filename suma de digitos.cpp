/*
Sumar los dígitos de un número 
*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num=0;
    int aux=0;
    int suma=0;
    printf("Digite un numero: ");
    scanf("%d",&num);
    
    while(num!=0)
    {
          aux=num%10;
          num=num/10;
          suma=suma+aux;       
    }
    printf("suma= %d",suma);
system("pause");
}
