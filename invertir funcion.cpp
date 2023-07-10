#include<stdio.h>
#include<stdlib.h>

int invertir(int x)
{
    int aux=0;
    int suma=0;
    
    while(x!=0)
    {
           suma=suma*10;   
           aux=x%10;
           suma=suma+aux;
           x=x/10;
           
    }
    return suma;
}

int main()
{
    int a,b;
    printf("Numero =");
    scanf("%d",&a);
    
    b=invertir(a);
    printf("Invertido= %d\n",b);
     
system("pause");
}
