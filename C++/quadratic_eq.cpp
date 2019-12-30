#include <stdio.h>
#include <math.h>
//#include <conio.h>

int main()
{
    float a,b,c,x1,x2,x;

    printf("Considera la expresión ax^2 + bx + c = 0 \n Introduce los valores de a, b y c: \n");

    scanf("%f%f%f",&a,&b,&c);

    printf("La expresión es %0.2f x^2 + %0.2f + %0.2f = 0 \n",a,b,c);

    if(b*b - 4*a*c >= 0)
    {
        if(a != 0)
        {
            x1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
            x2 = (-b - sqrt(b*b - 4*a*c))/(2*a);
            printf("La solucion positiva es x = %0.2f \nLa solucion negativa es x = %0.2f \n",x1,x2);
        }
        else
        {
            if(b != 0)
            {
                if(c == 0)
                {
                    printf("La solución es x = 0 \n");
                }
                else
                {
                    x = -c/b;
                    printf("La solución es x = %0.2f \n", x);
                }
            }
            else
            {
                if(c != 0)
                {
                    printf("La ecuación no tiene solución \n");
                }
                else
                {
                    printf("La ecuación no tiene sentido \n");
                }

            }

        }
    }
    else
    {
        printf("La ecuación no tiene solución dentro de los Reales \n");
    }
    //getch();
}
