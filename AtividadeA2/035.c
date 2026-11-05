#include <stdio.h>

int main(void) {
    float valor, total = 0.0f;
    int quantidade = 0;

    printf("Digite o valor de uma despesa (0 para encerrar): R$ ");
    scanf("%f", &valor);

    while (valor != 0) {
        total += valor;
        quantidade++;

        printf("Digite o valor de outra despesa (0 para encerrar): R$ ");
        scanf("%f", &valor);
    }

    printf("\nTotal das despesas: R$ %.2f\n", total);
    printf("Quantidade de valores registrados: %d\n", quantidade);

    return 0;
}
