#include <stdio.h>

int main()
{
    int opcion;
    float base,altura,lado,area;

    printf("Este programa calcula\n{ 1 } -- El area de un triangulo\n{ 2 } -- El area de un cuadrado\nIntroduce una de las opciones\n");
    scanf("%d",&opcion);

    switch (opcion)
    {
    case 1:
    do
    {
        printf("Introduce la base y la altura: ");
        scanf("%f%f", &base,&altura);
    } while (base<=0 || altura<=0);
        area = (base*altura)/2;
        printf("El area del triangulo de base %0.2f y altura %0.2f es igual a %0.2f \n",base,altura,area);
        break;
    case 2:
    do
    {
        printf("Introduce la longitud de los lados del cuadrado\n");
        scanf("%f",&lado);
    } while (lado<=0);
        area = lado*lado;
        printf("El area es del cuadrado de es %0.2f \n",area);
        break;

    default:
        printf("Introduce una opcion valida\n");
    }
}