#include <stdio.h>
int main ()
{
  int a, b, c, d, f;
  printf("Ingresa el valor de a: "); 
  scanf("%d", &a);
  printf("Ingresa el valor de b: ");
  scanf("%d", &b);
  c = a + b;
  d = a - b;
  f = a * b;
  printf("la suma de a y b es igual a %d\n", c)
  printf("la resta de a y b es igual a %d\n", d)
  printf("la multiplicacion de a y b es igual a %d\n", f)
  return 0;
}
