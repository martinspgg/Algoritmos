/*
Exercício 48: Terminal Comercial Integrador de Ponto de Venda
O programa deve simular uma caixa registradora comercial processando pares de dados com código de item (inteiro) e preço unitário (ponto flutuante) até que o código sentinela 0 seja fornecido. Concluída a leitura dos itens, o sistema deve exibir o total bruto consolidado e ler a opção de quitação do cliente: se a opção for dinheiro em espécie (código 1), aplica-se um desconto de 5% sobre a compra e solicita-se o valor entregue para calcular o troco devido; se for cartão (código 2), cobra-se o valor nominal sem bonificações, imprimindo ao término o extrato fiscal da transação.
*/

#include <stdio.h>

int main() {
    int codigo;                      // código do item (0 encerra a compra)
    int opcao;                       // forma de pagamento
    float preco;                     // preço do item
    float total = 0;                 // total da compra
    float pago, troco;               // valor entregue e troco (pagamento em dinheiro)

    // Leitura dos itens até digitar o código 0
    printf("Codigo do item (0 para finalizar): ");
    scanf("%d", &codigo);

    while (codigo != 0) {
        printf("Preco unitario: ");
        scanf("%f", &preco);
        total = total + preco;

        printf("Codigo do item (0 para finalizar): ");
        scanf("%d", &codigo);
    }

    printf("Total bruto: %.2f\n", total);

    printf("Forma de pagamento (1 - Dinheiro, 2 - Cartao): ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        // Dinheiro: desconto de 5% (paga 95% do valor)
        total = total * 0.95;
        printf("Total com 5%% de desconto: %.2f\n", total);

        printf("Valor entregue: ");
        scanf("%f", &pago);
        troco = pago - total;

        printf("\n===== EXTRATO =====\n");
        printf("Total: %.2f\n", total);
        printf("Pago: %.2f\n", pago);
        printf("Troco: %.2f\n", troco);
    } else if (opcao == 2) {
        // Cartão: valor cheio, sem desconto
        printf("\n===== EXTRATO =====\n");
        printf("Total: %.2f\n", total);
        printf("Pagamento no cartao.\n");
    } else {
        printf("Opcao de pagamento invalida!\n");
    }

    return 0;
}
