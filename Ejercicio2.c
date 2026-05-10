#include <stdio.h>
#define PI 3.1415926535
int main ()
{
  double RADIO, CIRCUNFERENCIA;
  dobule AREA = 0;
  printf("Ingresa el valor del radio: ");
  scanf("%lf", &RADIO);
  AREA = PI * RADIO * RADIO;
  CIRCUNFERENCIA = RADIO * 2 * PI;
  printf("El area del circulo es %lf unidades cuadradas\n", AREA);
  printf("La circunferencia es igual a %lf unidades\n", CIRCUNFERENCIA);
  return 0;
}
