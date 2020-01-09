#include <stdio.h>
//#include <conio.h>

#define costo1 80
#define costo2 120
#define costo3 50

int main()
{
    int num_roscas,dia,costo;
    printf("Este programa calcula el costo de roscas de reyes\n¿Cuantas roscas se compraran?\n");
    scanf("%d",&num_roscas);
    while (num_roscas<=0)
    {
        printf("Error,el numero debe ser mayor a cero\nIntroduce el numero de roscas\n");
        scanf("%d",&num_roscas);
    }
    printf("Introduce la opcion de fecha:\n{1} --- antes del 06/01\n{2} --- el 06/01\n{3} --- posterior al 06/01\n");
    scanf("%d",&dia);
    while ((dia!=1)&&(dia!=2)&&(dia!=3))
    {
        printf("Error, la opcion debe ser 1,2 o 3\nVuelve a introducir las opciones");
        scanf("%d",&dia);
    }
    if (dia==1)
    {
        costo = num_roscas*costo1;
    }
    else
    {
        if (dia==2)
        {
            costo = num_roscas*costo2;
        }
        else
        {
            costo = num_roscas*costo3;
        }
    }
    printf("El costo es $ %d\n",costo);
}