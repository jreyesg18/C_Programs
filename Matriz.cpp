#include<stdio.h>
#include<stdlib.h>

// Matriz identidad

int Identidad(int M[][100],int x,int y)
{
    int i;
    int j;
    int cont1=0;
    int cont0=0;
    int contmax=0;
    
    if(i==j)
    {
         for(i=0;i<x;i++)
         {
                 for(j=0;j<y;j++)
                 {
                      if(i==j&&M[i][j]==1)
                          cont1++;         
                      if(i!=j&&M[i][j]==0)
                          cont0++;
                      contmax++;
                 }           
          }
          if(cont1==i && contmax-cont1==cont0)
                return 1;
          else
                return 0;
     }
     else
         return 0;
}

void llenarM(int A[][100],int x,int y)
{
     int i;
     int j;
     
     for(i=0;i<x;i++)
     {
          for(j=0;j<y;j++)
          {
               printf("A[%d][%d]= ",i,j);
               scanf("%d",&A[i][j]);
               
          }           
     }                 
}

void mostrar(int A[][100],int x,int y)
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

int main()
{
    int M[100][100];
    int funcion=0;
    
    int x=0;
    int y=0;
    
    int LimX=0;
    int LimY=0;
    
    printf("digite lo max para x: ");
    scanf("%d",&x);
    
    printf("digite lo max para y: ");
    scanf("%d",&y);
    
    llenarM(M,x,y);
    funcion=Identidad(M,x,y);
    if(funcion==1)
          mostrar(M,x,y);
    else
        printf("no es identidad");
        
system("pause");   
}
