/*Escribir la función PrimerDigito(num), que permite retornar el primer dígito. */

#include<stdio.h>
#include<stdlib.h>

int PrimerDigito(int dig)
{
    int aux=0;
    int primer=0;
    
    while(dig!=0)
    {
          primer=dig%10;
          dig=dig/10;     
    }

    return primer;
}

int main()
{
    int num;
    int funcion;
    printf("Digite un numero: ");
    scanf("%d",&num);
    
    funcion=PrimerDigito(num);
                 
    printf("Primer dig: %d\n",funcion);
    
system("pause");
}
