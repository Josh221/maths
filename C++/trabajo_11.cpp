#include <stdio.h>
// #include <conio.h>

int main()
{
    int m,n,potencia,contador;

    printf("Este programa calcual la potencia entera n de un real m con n>0\n");
    do
    {
        printf("Introduce m\n");
        scanf("%d",&m);
        printf("Introduce n, n>0\n");
        scanf("%d",&n);
    } while (n<=0);

    contador = 1;
    potencia = 1;

    do
    {
        potencia = potencia*m; 
        contador += 1;
    } while (contador<=n);

    printf("%d elevado a la %d es igual a %d\n",m,n,potencia);
    
}