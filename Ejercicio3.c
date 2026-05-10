#include <stdio.h>
#define goku 11.96
void main ()
{
  float Dolar, Pesos; 
  printf("Ingrese la cantidad de dólares que quiere cambiar: ");
  scanf("%f", &Dolar);
  Pesos = Dolar * goku;
  printf("El cambio de moneda es igual a %f pesos\n", Pesos);
}
