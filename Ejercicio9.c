#include <stdio.h>

int main()
{
    int res, cont, a;

    printf("Ingrese un numero entero:\n");
    scanf("%d", &a);
    for(cont = 1; cont <= 10; cont++)
        {
            res = a * cont;
            printf("%d x %d = %d\n", a, cont, res);
        }

    return 0;
}
