#include <stdio.h>

int main(void) {
    float venda, total = 0.0f;
    int i;

    for (i = 1; i <= 5; i++) {
        printf("Informe o valor da venda %d: R$ ", i);
        scanf("%f", &venda);
        total += venda;
    }

    printf("\nTotal recebido nas cinco vendas: R$ %.2f\n", total);

    return 0;
}
