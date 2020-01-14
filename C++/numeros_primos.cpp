// Rodriguez Diaz Josue A.

#include <stdio.h>
// #include <conio.h>
int main()
{
	int n,numero,evaluador,contador;

	printf("Este programa decide si un numero es primo\n");

	do{
		printf("Igresa un entero positivo(n > 1): ");
		scanf("%d", &numero);

		if(numero <= 1)
			printf("Error, ingresa n>1\n");
	}while(numero <= 1);

	 n = 2;
	 evaluador = 0;
	 contador = 2;

	while( n < numero )
    {
		while( contador*n < numero)
        {
			contador++;
		}
		if(contador*n == numero)
        {
			evaluador = 1;
			n = numero;
		}
		n++;
		contador = 2;
	}
	if(evaluador == 1)
		printf("%d no es primo\n", numero);
	else
		printf("%d es primo\n", numero);
//getch();
}
