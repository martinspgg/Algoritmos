/*
Exercício 42: Menu Interativo de Operações Matemáticas Recorrentes
O programa deve exibir repetidamente na tela um menu textual com opções de cálculo: código 1 
para soma de dois números reais, código 2 para multiplicação e código 0 para encerramento do 
sistema. Estruturado com while (opcao != 0), o programa deve ler a escolha do usuário, executar 
a operação solicitada capturando os operandos pertinentes ou emitir um alerta em caso de opção 
inexistente, repetindo o ciclo até que o comando de saída seja fornecido.
*/

#include <stdio.h>

int main() {
    int opcao = -1;                  // começa com valor diferente de 0 para entrar no laço
    float a, b;                      // operandos (números reais)

    while (opcao != 0) {
        // Exibe o menu a cada repetição
        printf("\n===== MENU =====\n");
        printf("1 - Soma\n");
        printf("2 - Multiplicacao\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite o primeiro numero: ");
            scanf("%f", &a);
            printf("Digite o segundo numero: ");
            scanf("%f", &b);
            printf("Resultado: %.2f\n", a + b);

        } else if (opcao == 2) {
            printf("Digite o primeiro numero: ");
            scanf("%f", &a);
            printf("Digite o segundo numero: ");
            scanf("%f", &b);
            printf("Resultado: %.2f\n", a * b);
            
        } else if (opcao != 0) {
            // Qualquer valor que não seja 0, 1 ou 2 é inválido
            printf("Opcao invalida!\n");
        }
    }

    printf("Programa encerrado.\n");

    return 0;
}
