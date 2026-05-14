#include <stdio.h>
void main ()
{
    int cont;
    int sum=0;
    for ( cont=10; cont<=50; cont++)
    {
        if (cont % 2 == 0)
        sum= cont + sum;
    }
    printf("LA SUMA DE LOS NUMERO PARES DE 10 a 50 es %d", sum);
}
