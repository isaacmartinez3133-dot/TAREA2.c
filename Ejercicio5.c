#include <stdio.h>
int main()
{
    double CompraTotal, TotalAPagar;
    printf("Ingrese el monto total de la compra: \n");
    scanf("%lf", &CompraTotal);
    if (CompraTotal >= 2500)
    {
        TotalAPagar= CompraTotal - (CompraTotal/100)*8;
        printf("El total de su compra es de %lf pesos\n", TotalAPagar);
    }
    else 
    {
        printf("El total a pagar de su compra es de %lf pesos\n", CompraTotal);
    }
    printf("Gracias por su compra, vuelta pronto\n");
    return 0;
}
