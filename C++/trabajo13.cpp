#include <stdio.h>

int main()
{
    int n,a,b,c,contador;

    printf("Este programa genera la sucesion de Fibonacci\n");

    do
    {
        printf("Introduce el numero de terminos a generar(n>0): ");
        scanf("%d",&n);
    } while (n<=0);
    
    printf("1 ");

    for(a=0,b=1,contador=2;contador<=n;contador+=1)
    {
        c = a+b;
        printf("%d ",c);
        a = b;
        b = c;
    }
    
}