#include <stdio.h> // Biblioteca para utilizar printf e scanf

int main(void) {
    float preco, valor; // Variáveis que armazenam o preço e o valor total
    int quantidade; // Variável que armazena a quantidade de cópias

    // Solicita o preço de uma cópia ao usuário
    printf("Digite o preco de uma copia: R$ ");
    scanf("%f", &preco); // Lê o preço digitado

    // Exibe o título da tabela de preços
    printf("\nTabela de precos:\n");

    // Repete o cálculo para quantidades de 1 até 10 cópias
    for (quantidade = 1; quantidade <= 10; quantidade++) {
        valor = preco * quantidade; // Calcula o valor total das cópias

        // Exibe a quantidade de cópias e o valor correspondente
        printf("%d copia(s): R$ %.2f\n", quantidade, valor);
    }

    return 0; // Finaliza o programa
}