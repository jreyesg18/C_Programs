/*
Escriba un programa que permita leer dos números enteros positivos y permita 
dividirlos mediante restas sucesivas. Debe mostrar el cociente y el resto de la división 
entera 
*/

#include<stdio.h>
#include<stdlib.h>

void DivisionResta(int digUno, int digDos)
{
     int cont=0;
     
     while(digUno>=digDos)
     {
           digUno=digUno-digDos;
           cont++;
     }
     printf("cociente: %d\n",cont);
     printf("Resto: %d",digUno);
}
     

int main()
{
    int funcion;
    int Uno;
    int Dos;
    
    printf("Digite un numero: ");
    scanf("%d",&Uno);
    
    if(Uno>0)
    {  
        printf("Digite 2do numero: ");
        scanf("%d",&Dos);  
        
        if(Dos>0)
        {
            DivisionResta(Uno,Dos);
        }
        else
            printf("No es positivo y/o es 0\n");
    }
    else
        printf("No es positivo y/o es 0\n");       
    
    
system("pause");
}
