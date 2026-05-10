#include <stdio.h>
#define TasaDeInteres 5
void main ()
{
  double Inversion, MontoFinal;
  printf("Ingrese el monto total de inversión: ");
  scanf("%lf", &Inversion);
  MontoFinal = Inversion + ((Inversion / 100 )*TasaDeInteres);
  printf("Su ganacia mensual total es de %lf pumadolares\n", MontoFinal);
}
