#include <stdio.h>
//#include <conio.h>

#define precio01 120
#define precio02 90

 int main()
 {
    int num_macetas, dia, costo;
    printf("Este programa calcula el costo de macetas\n");
    printf("¿Cuántas macetas van a comprar?\n");
    scanf("%d", &num_macetas);
    if(num_macetas <= 0)
    {
        printf("Error, el numero de macetas debe ser mayor a cero");
    }
    else
    {
        printf("Introduce el dia 1 o 2\n");
        scanf("%d", &dia);

        if(dia==1 || dia==2)
        {
            if(dia==1)
            {
                costo = num_macetas*precio01;
            }
            else
            {
                costo = num_macetas*precio02;
            }
            printf("Total a pagar $ %d \n", costo);
        }
        else
        {
            printf("Error, el dia debe ser 1 o 2 \n");
        }
    }
//    getch();
 }
