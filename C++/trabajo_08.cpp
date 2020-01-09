#include <stdio.h>
//#include <conio.h>

int main()
{
    int suma,num,contador;
    printf("Este programa suma 5 numeros pares y 5 numeros impares\n");
    contador = 0;
    suma = 0;
    while (contador <5)
    {
        printf("Introduce un numero par\n");
        scanf("%d",&num);
        while (num%2!=0)
        {
            printf("Error, el numero debe ser par\n");
            scanf("%d",&num);
        }
        suma = suma + num;
        contador +=1;
    }
    printf("La suma de pares es %d\n",suma);
    
    contador = 0;
    suma = 0;
    while (contador <5)
    {
        printf("Introduce un numero impar\n");
        scanf("%d",&num);
        while (num%2==0)
        {
            printf("Error, el numero debe ser impar\n");
            scanf("%d",&num);
        }
        suma = suma + num;
        contador +=1;
    }
    printf("La suma de impares es %d\n",suma);
//getch();
}