#include <stdio.h>
int main()
{
    double Sueldo, SueldoMasAumento;
    printf("Ingrese su sueldo total: \n");
    scanf("%lf", &Sueldo);
    if (Sueldo >= 1000)
    {
        SueldoMasAumento= Sueldo + (Sueldo/100)*12;
    }
    else 
    {
        SueldoMasAumento= Sueldo + (Sueldo/100)*15;
    }
    printf("Su sueldo total mas el aumento sera de %lf pesos\n", SueldoMasAumento);
    return 0;
}
