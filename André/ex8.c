#include <stdio.h>

int main() {

    int numero;

    printf("digite um numero ou 0 para parar: ");
    scanf("%d" , &numero);

    while (numero !=0) {

        printf("voce digitou: %d\n" , numero);

        printf ("digite outro numero ou 0 para parar: ");
        scanf("%d" , &numero);

    }

    printf("programa parado. \n");

    return 0;
}