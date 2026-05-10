#include <stdio.h>

int main()
{
    double res, a;
    int cont;

    printf("Ingrese un numero:\n");
    scanf("%lf", &a);
    for(cont = 1; cont <= 10; cont++)
        {
            res = a * cont;
            printf("%lf x %d = %lf\n", a, cont, res);
        }

    return 0;
}
