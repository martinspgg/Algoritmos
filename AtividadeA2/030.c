#include <stdio.h>

int main(void) {
    float preco, valor;
    int quantidade;

    printf("Digite o preco de uma copia: R$ ");
    scanf("%f", &preco);

    printf("\nTabela de precos:\n");
    for (quantidade = 1; quantidade <= 10; quantidade++) {
        valor = preco * quantidade;
        printf("%d copia(s): R$ %.2f\n", quantidade, valor);
    }

    return 0;
}
