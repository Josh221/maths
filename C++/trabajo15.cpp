#include <stdio.h>

int main()
{
    int x[5],i,j,aux;

    printf("Este programa invierte un vector dado\n");
    for(i=0; i<5;i++)
    {
        printf(" -Introduce el valor del vector en la posicion %d: ",i);
        scanf("%d",&x[i]);
    }

    printf("-El vector inicial es %d  \n",x[i]);

    for (i = 0, j=3; i <5/2; i++,j--)
    {
        aux = x[i];
        x[i] = x[j];
        x[j] = aux;
    }

    printf("El vector final es: ");
    for (i=0; i < 5; i++)
    {
        printf("%d ",x[i]);
    }
    
    
}