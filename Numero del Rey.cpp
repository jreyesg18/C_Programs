/*
4. En cierto reinado existe un rey el cual no confía la clave de su tesoro a ningún 
súbdito. Por lo cual a diseñado un sistema que le permita recordar siempre su clave.  
La clave es anotada en dos valores numéricos mayores que 999, donde en cada valor 
los dígitos siempre se encuentran ordenados de menor a mayor (pueden existir 
dígitos repetidos).  
El rey para formar la clave utiliza el siguiente procedimiento:  
¾ Mezcla ambos valores de tal forma que el nuevo valor queda ordenado de 
menor a mayor.  
¾ Una vez mezclado dichos valores descarta los dos primeros y los dos últimos 
dígitos.  
¾ Cuando a descartado los dígitos considera el valor resultante al revés.  
Por ejemplo  
Valores  :            13356          136789  
Valores unidos :             11333566789  
Eliminando los dos primeros y los dos últimos:  3335667  
Clave del rey  :   7665333
*/



#include<stdio.h>
#include<stdlib.h>

void numeroRey(int Uno,int Dos)
{
     int auxiliar=0;
     int cont=0;
     int i=0;
     int multi=1;
     int sumaUno=0;
     int divisor=0;
     int sumaDos=0;
     int divisordos=0;
     
     Dos=Dos/10;
     Dos=Dos/10;
     auxiliar=Dos;
     
     while(Dos!=0)
     {
           divisordos=Dos%10;       
           sumaDos=sumaDos*10+divisordos;   
           Dos=Dos/10;       
     }
     
     while(Uno>100)
     {
            divisor=Uno%10;
            sumaUno=sumaUno*10 + divisor;       
            Uno=Uno/10;
     }
            
     while(auxiliar!=0)
     {
            auxiliar=auxiliar/10;
            cont++;
     }
     
     while(i<cont)
     {
            multi=multi*10;      
            i++;
     }
                   
     sumaDos=sumaDos*multi;
     sumaDos=sumaUno+sumaDos;
     
     printf("%d",sumaDos);
}


int main()
{
    int numUno;
    int numDos;
    
    printf("Introduzca un primer numero: ");
    scanf("%d",&numUno);
    
    if(numUno>999)
    {
           printf("Introduzca un segundo numero: ");
           scanf("%d",&numDos);
           
           if(numDos>999)
           {
               numeroRey(numUno,numDos);
               
           }
           else
               printf("El digito ingresado no es valido");    
           
    }
    else
           printf("El digito ingresado no es valido");
    
    
system("pause");
}
