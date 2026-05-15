#include <stdio.h>
void main ()
{
    int a=0, i;
    int arreglo [100];
    for (i=0; i<100; i++)
    {
        arreglo[i] = a;
        a = a + 2; 
    }
    for (i=0; i<100; i++)
    {
        printf("%d\n", arreglo[i]);
    }
}
