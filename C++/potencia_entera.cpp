#include <stdio.h>
//#include <conio.h>

int main()
{
    int m,n,potencia,contador;

    printf("Este programa calcula las potencias enteras de un entero\nIntroduce m y n enteros:\n");
    scanf("%d%d",&m,&n);
    contador = 1;
    potencia = 1;
    if (m != 0)
    {   
        if (n>0)
        {
            do
            {
                contador += 1;
                potencia = potencia*m;
            } while (contador <= n);
            printf("%d elevado a la %d es igual a %d\n",m,n,potencia);
        }        
        else if (n<0)
        {
            float p;
            p = m;
            while (contador>n)
            {   
                p/=m;
                contador--;
            }
            printf("%d elevado a la %d es igual a %0.4f\n",m,n,p);
        }
        else // n=0
        {
            printf("%d elevado a 0 es igual a 1\n",m);
        }
    }
    else
    {
        if (n>0)
        {
            printf("%d es igual a 0\n",m);
        }
        else
        {
            printf("%d está indefinido (división entre cero)\n",m);
        }
    }
    //getch();
}