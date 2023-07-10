#include<stdio.h>
#include<stdlib.h>

void llenar(int A[][100],int x, int y)
{
    int i;
    int j;
  
    for(i=0;i<x;i++)
    {
         for(j=0;j<y;j++)
         {
            printf("M[%d][%d]:",i,j);
            scanf("%d",&A[i][j]);
         }  
    }    
}

void mostrar(int A[][100],int x, int y)
{
    int i;
    int j;
  
    for(i=0;i<x;i++)
    {
         for(j=0;j<y;j++)
         {
            printf("%d ",A[i][j]);
         }  
         printf("\n");
    }  
     
}

void ruleta(int A[][100],int x, int y)
{
     
     
}
     

int main()
{
    int M[100][100];
    
    int LimX=0;
    int LimY=0;
    
    printf("digite la magnitud de x: ");
    scanf("%d",&LimX);
    
    printf("digite la magnitud de x: ");
    scanf("%d",&LimY);
    
    if(LimY==LimX)
    {
                  llenar(M,LimX,LimY);
                  mostrar(M,LimX,LimY);
    }
system("pause");    
}
