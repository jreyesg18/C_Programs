/*
Escribir la funci�n RaizDigital(num), que permite retorna la funci�n digital de num. 
La ra�z digital de un n�mero se obtiene  sumando los d�gitos de un n�mero, si la 
suma tiene m�s de dos d�gitos se vuelve a repetir el procedimiento, hasta que tenga 
un solo d�gito. 
Si num=12 suma= 1+2 = 3 entonces raizDigital = 3 
Si num=89 suma= 8+9 = 17 entonces suma= 1+7 = 8   raizDigital = 8 
*/

#include<stdio.h>
#include<stdlib.h>

int RaizDigital(int dig)
{
    int aux;
    int suma=0;
    
    while(dig>10)
    {
            while(dig!=0)
            {
                 aux=dig%10;
                 suma=aux+suma;
                 dig=dig/10;  
            }
            if(suma>9)
            dig=suma;             //Problema de copilacion 89
    }
    return suma;
}


int main()
{
    int num;
    int funcion;
    
    printf("Digite un numero: ");
    scanf("%d",&num);
    
    funcion=RaizDigital(num);
    
    printf("La Raiz dig: %d\n",funcion);
    
system("pause");
}
