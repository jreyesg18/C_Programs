/* Escribir la función ContarDigitos(x), que retorna la cantidad de dígitos de un 
número entero x.*/

#include<stdio.h>
#include<stdlib.h>

int ContarDigitos(int dig)
{
    int aux=0;
    int cont=0;
    
    while(dig!=0)
    {
         dig=dig/10;
         cont++;        
    }
                 
    return cont;
}


int main()
{
    int num;
    int funcion=0;
    
    printf("Digite un numero: ");
    scanf("%d",&num);
    
    funcion=ContarDigitos(num);
    
    printf("cantidad de digitos: %d\n",funcion);
    
system("pause");
}
