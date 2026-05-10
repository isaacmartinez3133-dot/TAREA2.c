#include <stdio.h>

int main() {
    int DiasDeEstancia; 
    float KmRecorridos;
    double CostoDeBoleto;
    printf("Bienvenido\n");
    printf("Cuanto durará su estancia: \n");
    scanf("%d", &DiasDeEstancia);
    printf("Cuantos kilometros recorrera en el viaje de ida: \n");
    scanf("%f", &KmRecorridos);
    if (DiasDeEstancia > 7)
    {
        if (KmRecorridos > 800)
        {
            CostoDeBoleto = KmRecorridos * 0.23 - KmRecorridos * 0.23 / 100 * 30;
        }
    }
    else
    {
        CostoDeBoleto = KmRecorridos * 0.23;
    }
    printf("El costo se su boleto sera de %lf pesos\n", CostoDeBoleto);
    printf("Vuelva pronto\n");
    return 0;
}
