#include <stdio.h>

int main()
{
    int n,factorial,contador;

    printf("Este programa calcula el factorial de un entero no negativo\n");
    do
    {
        printf("Introduce un entero, n>=0: ");
        scanf("%d",&n);
    } while (n<0);
    for(contador=1,factorial=1;contador<=n;contador+=1)
    {
        factorial *=contador;
    }
    printf("El factorial de %d es %d \n",n,factorial);
}