#include <stdio.h>
void main ()
{
    int i, sum = 0, N;
    printf("Ingresa el tamaño del arreglo\n");
    scanf("%d", &N);
    int arreglo[N]; 
    for (i=0; i<N; i++)
    {
        printf("Ingrese el valor de la posicion %d\n", i+1);
        scanf("%d", &arreglo[i]);
        sum = sum + arreglo[i];
    }
    printf("La suma de los elementos es %d", sum);
}
