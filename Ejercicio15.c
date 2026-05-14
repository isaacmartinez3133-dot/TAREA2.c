#include <stdio.h>
void main ()
{
    int i, N, xd, resultado;
    printf("Ingresa el tamaño del arreglo\n");
    scanf("%d", &N);
    int arreglo[N]; 
    for (i=0; i<N; i++)
    {
        printf("Ingrese el valor de la posicion %d\n", i+1);
        scanf("%d", &arreglo[i]);
        if ( arreglo[i]==0 )
        {
            printf("El valor de la posición %d es nulo\n\n", i+1);
        }
        else 
        {
            if(arreglo[i]>0)
            {
                printf("El valor de la posición %d es positivo\n\n", i+1);
            }
            else 
            {
                 printf("El valor de la posición %d es negativo\n\n", i+1);
            }
        }
    }
}
