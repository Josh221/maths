#include <stdio.h>

int main()
{
    int i,n;
    printf("Este programa suma dos vectores\n");
    do
    {
        printf("Introduce el tamaño de los vectores(n>=3): ");
        scanf("%d",&n);
    } while (n<3);
    
    int A[n],B[n],C[n];
    for (i = 0; i < n; i++)
    {
        printf("Introduce el valor A[%d]: ",i);
        scanf("%d",&A[i]);
        
        printf("Introduce el valor B[%d]: ",i);
        scanf("%d",&B[i]);
    C[i] = A[i] + B[i];
    }
    printf("La suma es: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ",C[i]);
    }
    
}