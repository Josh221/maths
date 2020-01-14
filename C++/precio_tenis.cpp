#include <stdio.h>
//#include <conio.h>
#define precio 185.50

int main()
{
    int numero_tenis;
    float costo;
    printf("Este programa calcula el precio de n numero de tenis\n");
    do
    {
        printf("¿Cuantos pares de tenis se compraran?\n");
        scanf("%d",&numero_tenis);
    } while (numero_tenis < 1);
    if (numero_tenis > 3)
    {
        costo = (precio*numero_tenis*15)/100;
        printf("El precio es de %0.2f\n",costo);
    }
    else
    {
        costo = precio*numero_tenis;
        printf("El precio es de %0.2f\n",costo);
    }
    //getch();
}