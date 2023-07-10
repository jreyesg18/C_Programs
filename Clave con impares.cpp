/*
Escriba una programa que recibe un numero NUM (entero positivo) y muestre una 
clave numérica, la cual esta compuesta de sólo los dígitos impares en el mismo orden 
en que aparecen; si el numero NUM no posee dígitos impares debe mostrar un cero.  
Ejemplo:   
        Entrada:         NUM = 2546710               Salida: 571
*/

#include<stdio.h>
#include<stdlib.h>

int ClaveNumerica(int dig)
{
     int auxiliar=0;
     int divisor=1;
     int suma=0;
     
     while(dig!=0)
     {
            auxiliar=dig%10;
            if(auxiliar%2==1)
                suma=auxiliar+suma*10;
            dig=dig/10;      
     }
     
     while(suma!=0)
     {
            dig=dig*10;       
            auxiliar=suma%10;
            dig=dig+auxiliar;
            suma=suma/10;      
     }  
     return dig;
}
     

int main()
{
    int funcion;
    int num;
    
    printf("Digite un numero: ");
    scanf("%d",&num);
    
    funcion=ClaveNumerica(num);
    
    printf("el numero en clave es: %d",funcion);
    
system("pause");
}
