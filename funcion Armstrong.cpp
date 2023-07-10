#include<stdio.h>
#include<stdlib.h>

int Armstrong(int dig)
{
       int auxiliar=0;
       int suma=0;
       int cont=1;
       int primer=0;
       int numero=0;
       
       auxiliar=dig;
       
       while(dig!=0)
       {
                primer=dig%10;
                dig=dig/10;
                numero=primer;
                
                while(cont<3)
                {
                      numero=primer*numero;    
                      cont++;       
                }
                 suma=suma+numero;            
       }
       return suma; 
                         
}



int main()
{
    int num;
    int funcion;
    int aux;
    
    aux=num;
    
    printf("Digite un numero: ");
    scanf("%d",&num);
    
    
    funcion=Armstrong(num);
    
    if(funcion==aux)
        printf("Es Armstrong\n");
    else
        printf("No es Armstrong\n");
    
system("pause");
}
