#include <stdio.h>
#include <string.h>

#define mda 100

int main()
{
    int longitud,i,numero_as;
    char cad[mda];

    printf("Este programa cuenta el numero de a's en una cadena\n");

    printf("Introduce la cadena: ");
    fgets(cad, 100, stdin);

    longitud = strlen(cad);

    for (i = 0; i <= longitud; i++)
    {
        if ((cad[i] == 'a' )|| (cad[i] == 'A'))
        {
            //numero_as = 0;
            numero_as++;
        }
    }
    printf("La cadena es %s \n",cad);
    printf("La cadena tiene %d a's \n",numero_as);
}