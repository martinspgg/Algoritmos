#include <stdio.h> // Biblioteca para utilizar printf e scanf

int main(void) {
    // Variáveis para armazenar o valor das despesas e o total acumulado
    float valor, total = 0.0f;
    int quantidade = 0; // Contador de despesas registradas

    // Solicita o primeiro valor de despesa
    printf("Digite o valor de uma despesa (0 para encerrar): R$ ");
    scanf("%f", &valor); // Lê o valor informado

    // Repete enquanto o valor digitado for diferente de zero
    while (valor != 0) {
        total += valor; // Adiciona a despesa ao valor total
        quantidade++; // Aumenta a quantidade de despesas registradas

        // Solicita o valor de outra despesa
        printf("Digite o valor de outra despesa (0 para encerrar): R$ ");
        scanf("%f", &valor); // Lê o próximo valor informado
    }

    // Exibe o total das despesas e a quantidade de valores registrados
    printf("\nTotal das despesas: R$ %.2f\n", total);
    printf("Quantidade de valores registrados: %d\n", quantidade);

    return 0; // Finaliza o programa
}