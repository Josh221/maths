#include <stdio.h>
// #include <conio.h>

int main()
{
    int opcion01;

    do
    {
        printf("Resolver sistema:\n{ 1 } -- 2x2\n{ 2 } -- 3x3\nIntroduce:");
        scanf("%d",&opcion01);

    if(opcion01 == 1)
    {
        float a,b,k1,c,d,k2,det,x,y;

        printf("Considera la expresión:\nAx+By=k1\nCx+Dy=k2\n");

        printf("Introduce el valor A:");
        scanf("%f",&a);

        printf("Introduce el valor B:");
        scanf("%f",&b);

        printf("Introduce el valor k1:");
        scanf("%f",&k1);

        printf("Introduce el valor C:");
        scanf("%f",&c);

        printf("Introduce el valor D:");
        scanf("%f",&d);

        printf("Introduce el valor k2:");
        scanf("%f",&k2);

        printf("Sistema a resolver:\n%0.2f x + %0.2f y = %0.2f \n%0.2f x + %0.2f y = %0.2f\n",a,b,k1,c,d,k2);

        det = a*d - b*c;

        if(det!=0)
        {
            x = (k1*d - k2*b)/(det);
            y = (a*k2 - c*k1)/(det);
            printf("x = %0.2f and y = %0.2f \n",x,y);
        }
        else
        {
            printf("No es posible aplicar la regla de Cramer det = %0.2f \n",det);
        }

    }
    else if (opcion01 == 2)
    {
        float a,b,c,k1,d,e,f,k2,g,h,i,k3,det,x,y,z;

        printf("Considera la expresión:\nAx+By+Cz=k1\nDx+Ey+Fz=k2\nGx+Hy+Iz=k3\n");

        printf("Introduce el valor A:");
        scanf("%f",&a);

        printf("Introduce el valor B:");
        scanf("%f",&b);

        printf("Introduce el valor C:");
        scanf("%f",&c);

        printf("Introduce el valor k1:");
        scanf("%f",&k1);

        printf("Introduce el valor D:");
        scanf("%f",&d);

        printf("Introduce el valor E:");
        scanf("%f",&e);

        printf("Introduce el valor F:");
        scanf("%f",&f);

        printf("Introduce el valor k2:");
        scanf("%f",&k2);

        printf("Introduce el valor G:");
        scanf("%f",&g);

        printf("Introduce el valor H:");
        scanf("%f",&h);

        printf("Introduce el valor I:");
        scanf("%f",&i);

        printf("Introduce el valor k3:");
        scanf("%f",&k3);

        printf("Sistema a resolver:\n%0.2f x + %0.2f y + %0.2f z = %0.2f\n%0.2f x + %0.2f y + %0.2f z = %0.2f\n%0.2f x + %0.2f y + %0.2f z = %0.2f \n",a,b,c,k1,d,e,f,k2,g,h,i,k3);

        det = a*(e*i - f*h)-b*(d*i - f*g)+c*(d*h - e*g);

        if(det!=0)
        {
            x = (k1*(e*i - f*h)-b*(k2*i - f*k3)+c*(k2*h - e*k3))/(det);
            y = (a*(k2*i - f*k3)-k1*(d*i - f*g)+c*(d*k3 - k2*g))/(det);
            z = (a*(e*k3 - k2*h)-b*(d*k3 - k2*g)+k1*(d*h - e*g))/(det);
            printf("x = %0.2f , y = %0.2f and z = %0.2f \n",x,y,z);
        }
        else
        {
            printf("No es posible aplicar la regla de Cramer det = %0.2f \n",det);
        }
    }

    } while(opcion01 != 1 || opcion01 != 2);
//getch();
}
