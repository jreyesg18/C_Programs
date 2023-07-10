/*

Escribir un programa en C, que permita manejar conjuntos. Debe implementar un menú 
que permita: 
1) llenar conjunto A con n elementos 
2) llenar conjunto B con m elementos 
3) mostrar el conjunto A 
4) mostrar el conjunto B 
5) Generar y mostrar la unión de conjuntos 
6) Generar y mostrar la intersección de conjuntos 
7) Generar y mostrar la diferencia entre A y B 
8) Generar y mostrar la diferencia entre B y A 
9) Salir

*/


#include<stdio.h>
#include<stdlib.h>

void LlenarA(int A[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
          printf("A[%d]: ",i);
          scanf("%d",&A[i]);          
    } 
     
}

void LlenarB(int B[],int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
          printf("B[%d]: ",i);
          scanf("%d",&B[i]);          
    } 
     
}

void MostrarA(int A[],int n)
{
     int i;
     for(i=0;i<n;i++)
     {
          printf("A[%d]:%d\n",i,A[i]);        
     } 
}

void MostrarB(int B[],int n)
{
     int i;
     for(i=0;i<n;i++)
     {
          printf("B[%d]:%d\n",i,B[i]);        
     } 
}

int main()
{
    int A[100];
    int B[100];
    
    int limA=0;
    int limB=0;
    
    printf("digite el max de casillas para Arreglo A: ");
    scanf("%d",&limA);
    
    printf("digite el max de casillas para Arreglo B: ");
    scanf("%d",&limB);
    
    LlenarA(A,limA);
    LlenarB(B,limB);
    
    MostrarA(A,limA);
    MostrarB(B,limB);
    
system("pause");    
}
