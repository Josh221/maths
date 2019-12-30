#include <stdio.h>
#include <math.h>
// #include <conio.h>

int main(){
    float a,b,c,x1,x2;
    printf("Este programa encuentra las raices de una ecuación cuadratica\n");
    printf("Introduce a,b y c \n");
    scanf("%f%f%f", &a, &b, &c);
    if(a==0){
        printf("Error a debe ser debe ser distinto de cero\n");
    }
    else{
        if(b*b-4*a*c<0){
            printf("Sin solución dentro de los Reales\n");
        }
        else{
            x1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
            x2 = (-b - sqrt(b*b - 4*a*c))/(2*a);
            printf("Las raices son %0.2f %0.2f",x1,x2);
        }
    }
//  getch();
}
