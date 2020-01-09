#include <stdio.h>
//#include <conio.h>

#define costo1 80
#define costo2 120
#define costo3 50

int main()
{
    int num_roscas, dia, costo;
    printf("Este programa calcula el costo de roscas de reyes\n");
    printf("¿Cuantas roscas vas a comprar?\n");
    scanf("%d", &num_roscas);
    if(num_roscas <= 0 )
    {
        printf("Error, el numero debe ser mayor a cero\n");
    }
    else
    {
        printf("¿Que dia es?\n{1} -- Antes del 06/01\n{2} -- El 06/01\n{3} -- Despues del 6\n");
        scanf("%d", &dia);
    }
    if( (dia !=1 ) && (dia !=2 ) && (dia !=3 ) )
    {
        printf("Error, el dia debe ser 1,2 o 3\n");
    }
    else
    {
        if(dia == 1)
        {
            costo = num_roscas*costo1;
        }
        else
        {
            if(dia == 2)
            {
                costo = num_roscas*costo2;
            }    
            else
            {
                costo = num_roscas*costo3;
            }
        }
    printf("El costo es $%d\n",costo);
    }
//getch();
}