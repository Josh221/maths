#include <stdio.h>
//#include <conio.h>

int main()
{
    int suma, contador, numero_par;

    printf("Este programa suma 5 numeros pares\n");
    contador = 1;
    suma = 0;
    do
    {
        do
        {
            printf("Introduce un numero par: ");
            scanf("%d",&numero_par);
        } while (numero_par%2!=0);

    suma += numero_par;
    contador += 1;

    } while (contador<=5);
    printf("La suma es igual a: %d \n",suma);
    //getch();
}