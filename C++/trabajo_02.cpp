#include <stdio.h>
// #include <conio.h>

main()
{
    int num;
    printf("Este programa decide si un numero entero es par o impar\n");
    printf("Introduce el numero entero\n");
    scanf("%d",&num);
    if(num %2==0)
    {
        printf("El numero es par");
    }
    else
    {
        printf("El numero es impar");
    }
    //getch();
}
