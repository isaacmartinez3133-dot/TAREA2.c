#include <stdio.h>

void main()
{
    int numero, cont;
    for(cont = 1; cont <= 100; cont++)
        {
        printf("Ingrese un numero entero:\n");
        scanf("%d", &numero);
        if (numero == 0)
           {
               printf("El número que ingresaste es nulo\n");
           }
           else 
           {
               if (numero > 0)
               {
                   printf("El número que ingresaste es positivo\n");
               }
               else 
               {
                   printf("El número que ingresaste es negativo\n");
               }
           }
        }
}
