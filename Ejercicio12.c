#include <stdio.h>
void main ()
{
    int N, cont, res=1;
    printf("Ingresa un número entero mayor o igual a 0\n");
    scanf("%d",&N);
    if (N>=0)
    {
        for ( cont=1; cont<=N; cont++)
        {
         res = res * cont;    
            
        }
    }
printf("El resultado del factorial de %d es %d", N, res);
}
