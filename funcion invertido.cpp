/*Escribir la función Invertir(num), que retorna el número invertido de num. 
Si num=123 debe retornar 321 
Si num=1024 debe retornar 4201
*/
#include<stdio.h>
#include<stdlib.h>


int invertir(int dig)
{
    int aux;
    int invertido=0;
    while(dig!=0)
    {
         aux=dig%10;
         invertido=invertido*10+aux;
         dig=dig/10;
    }
               
    return invertido;
}

int main()
{
    int funcion;
    int num;
    printf("Digite un numero: ");
    scanf("%d",&num);
    
    funcion=invertir(num);
    
    printf("invertido: %d",funcion);
system("pause");
}
