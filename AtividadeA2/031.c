#include <stdio.h> // Biblioteca para utilizar printf e scanf

int main(void) {
    // Variáveis para armazenar o valor de cada venda e a soma total
    float venda, total = 0.0f;
    int i; // Variável de controle do laço de repetição

    // Repete o processo para registrar as 5 vendas
    for (i = 1; i <= 5; i++) {
        // Solicita o valor de cada venda
        printf("Informe o valor da venda %d: R$ ", i);
        scanf("%f", &venda); // Lê o valor informado

        total += venda; // Adiciona o valor da venda ao total
    }

    // Exibe a soma dos valores das cinco vendas
    printf("\nTotal recebido nas cinco vendas: R$ %.2f\n", total);

    return 0; // Finaliza o programa
}