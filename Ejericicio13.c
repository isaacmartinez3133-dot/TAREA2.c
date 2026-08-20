#include <stdio.h>
#include <string.h>
void imprimir_oculto(const char *texto_encriptado) {
    for (int i = 0; texto_encriptado[i] != '\0'; i++) {
        putchar(texto_encriptado[i] - 3);
    }
    printf("\n");
}

int main() {
    char nombre[100];

    printf("INTRODUCE TU NOMBRE PREFERIDO EN MAYÚSCULAS: ");
    scanf("%99s", nombre);
    while (getchar() != '\n');

    if (strcmp(nombre, "MAYELA") == 0 || strcmp(nombre, "MAYE") == 0) {
        printf("\n");
        imprimir_oculto("Huhv#ho#dpru#gh#pl#ylgd");
        
        printf("\n picale al enter para seguir ");
        getchar();
        imprimir_oculto("Fdgd#gld#d#wx#odgr#hv#lqfuhlboh1");

        printf("\n otra vez picale");
        getchar();

        imprimir_oculto("Judfldg#sru#kdfhu#pl#pxqgr#pdv#erqlwr1");

        printf("\n una ultima vez");
        getchar();
        imprimir_oculto("Wh#dpr#frq#wrgr#pl#frudcrq1#?6");

    } else 
    {
        printf("no eres a quien espero\n");
    }

    return 0;
}
