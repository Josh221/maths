#include <stdio.h>
//#include <conio.h>

main()
{
    int num1, num2, suma;
    printf("Este programa dice si la suma dos numeros enteros es par o impar\n");
    printf("Introduce los numeros a sumar\n");
    scanf("%d%d",&num1,&num2);
    suma = num1 + num2;
    if(suma %2==0)
    {
        printf("El numero es par");
    }
    else
    {
        printf("El numero es impar");
    }
    //getch();
}
