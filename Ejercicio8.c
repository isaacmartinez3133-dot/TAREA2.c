#include <stdio.h>

int main() {
    int a, b; 
    printf("Dame dos valores enteros de a y b\n");
    printf("a: ");
    scanf("%d", &a);
    printf("b; ");
    scanf("%d", &b);
    if (b==0)
    { 
        printf("No se puede dividir entre cero");
    }
    else 
    { 
        if (a % b == 0)
        {
            printf("El número %d es divisor de %d\n", b, a); 
        }
        else
        {
             printf("El número %d no es divisor de %d\n", b, a);
        }
    }
}
