#include <stdio.h>

int main() {
    
    int numero;

    printf("Digite um numero ou zero para parar: ");
    scanf("%d", &numero);

    while(numero != 0) {
    printf("Você digitou: %d\n",numero);
    scanf("%d",&numero);

    }
    printf("Programa encerrado.\n");
    return 0;

}