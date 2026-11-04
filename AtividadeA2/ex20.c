#include <stdio.h>  // biblioteca que permite usar printf e scanf

int main(void) {
    // Guarda quantas unidades a loja tem em estoque agora
    int estoque;

    // Guarda quantas unidades o cliente quer comprar
    int pedido;

    // Pergunta ao usuário o estoque disponível
    printf("Digite a quantidade em estoque: ");
    scanf("%d", &estoque);

    // Pergunta ao usuário quanto o cliente está pedindo
    printf("Digite a quantidade solicitada: ");
    scanf("%d", &pedido);

    // Só dá pra vender se o estoque cobre o pedido inteiro,
    // ou seja, se o pedido for menor ou igual ao que temos
    if (pedido <= estoque) {
        // Venda aprovada: tiramos do estoque as unidades vendidas
        estoque = estoque - pedido;

        // Mostra a confirmação e quanto sobrou na prateleira
        printf("Venda confirmada\n");
        printf("Estoque restante: %d\n", estoque);
    } else {
        // Não temos unidades suficientes, então avisamos o cliente.
        // Aqui não mexemos na variável estoque, ela continua igual
        printf("Estoque insuficiente\n");
    }

    // Avisa ao sistema que o programa terminou sem erros
    return 0;
}