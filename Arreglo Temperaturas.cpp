/*
Llevar el registro de las  temperaturas durante M d�as. Por cada d�a se ingresa la 
temperatura m�xima y m�nima. Se pide 
a) Promedio de las temperaturas m�ximas 
b) Indicar cu�l es la temperatura m�s baja 
c) Determinar el n�mero de d�a en que hubo mayor diferencia entre la m�xima 
y la m�nima. 
*/

#include<stdio.h>
#include<stdlib.h>

void temperatura(int dig)
{
    int i=0;
    int B[100];
    int max=0;
    int min=0;
    int cont=1;
    int diaI=0;//dia inicial con mas calor
    int diaF=0;//dia final con mas frio
    int sumaMax=0;//sumatorai de las temperatura max
    int promedio=0;
    int diferencia=0;
    
    dig=dig*2;
    
    while(i<dig)
    {
            printf("introduzca temperatura maxima: ");
            scanf("%d",&B[i]);
            sumaMax=sumaMax+B[i];//suma la temperatura max
            i++;
            
            if(B[i]>max)
            {
                    max=B[i];    //asigna la temperatura mayor al max de la cantida de dias
                    diaI=cont;   //digita el dia que hubo la max 
            }
                    
            printf("introduzca temperatura minima: ");
            scanf("%d",&B[i]);  
            i++;
            
            if(B[i]<min)
            {
                    min=B[i];    //Asiga T� min de los dias
                    diaF=cont;   //Digita el dia q ubo la min
            }
            cont++;          
    }
    dig=dig/2;
    promedio=sumaMax/dig;
    
    printf("T max Promedio: %d\n",promedio);
    printf("T mas baja: %d\n",min);
    
    diferencia=diaI-diaF;// la diferencia de dias entre el dia q ubo mas temperatira y la menortemperatura
    
    if(diferencia<0)
    {
                  promedio=promedio*-1;
                  printf("Diferencia de dias: %d\n",diferencia);
    }
    if(diferencia==0)
                  printf("Diferencia de dias: la max y min estan en el mismo dia\n");
    if(diferencia>0)
                  printf("Diferencia de dias: %d\n",diferencia);
    
}


int main()
{
    int funcion;
    int A[100];
    int num;
    
    printf("Digite cantidad de dias: ");
    scanf("%d",&num);
    
    temperatura(num);
    
    
system("pause");
}
