#include <stdio.h>
void main ()
{
    int i, N, xd, buscador=0;
    printf("Ingresa el valor que vamos a buscar en el arreglo\n");
    scanf("%d", &xd);
    printf("Ingresa el tamaño del arreglo\n");
    scanf("%d", &N);
    int arreglo[N]; 
    for (i=0; i<N; i++)
    {
        printf("Ingrese el valor de la posicion %d\n", i+1);
        scanf("%d", &arreglo[i]);
        if ( arreglo[i]==xd )
        {
            buscador = buscador + 1;
        }
    }
    printf("El numero de veces que esta el numero %d es la cantidad de %d veces", xd, buscador);
}
