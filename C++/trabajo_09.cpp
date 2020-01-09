#include <stdio.h>
//#include <conio.h>

int main()
{
    int factorial,num,contador;
    
    factorial = 1;
    contador = 1;

    printf("Este programa calcula el factorial de un entero positivo\nIntroduce un entero no negativo\n");
    scanf("%d",&num);
    while (num<0)
    {
        printf("El numero debe ser mayor o igual a cero");
        scanf("%d",&num);
    }
    while (contador<=num)
    {
        factorial = factorial*contador;
        contador +=1;
    }
    printf("El factorial de %d es %d \n",num,factorial);
    //getch();
}