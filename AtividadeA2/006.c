// Exercício 6: Extrato de Transação Bancária Sintética
// Imprime um comprovante de transferência usando quebras de linha duplas (\n\n) para espaçar.

#include <stdio.h> // Biblioteca padrão de entrada e saída (necessária para printf)

int main() { // Função principal: onde o programa começa a executar
    int agencia = 1234; // Número da agência remetente (inteiro)
    int contaDestino = 567890; // Código da conta de destino (inteiro)
    float valor = 1500.75; // Valor liquidado da transferência (float)
    char canal = 'T'; // Inicial do canal de atendimento ('T' de terminal de autoatendimento)

    printf("===== COMPROVANTE DE TRANSFERÊNCIA =====\n\n"); // Título seguido de \n\n (deixa uma linha em branco)
    printf("Agência remetente: %d\n\n", agencia); // Imprime a agência e pula uma linha em branco
    printf("Conta de destino: %d\n\n", contaDestino); // Imprime a conta e pula uma linha em branco
    printf("Valor: R$ %.2f\n\n", valor); // Imprime o valor com 2 casas decimais e pula uma linha em branco
    printf("Canal de atendimento: %c\n\n", canal); // Imprime a inicial do canal e pula uma linha em branco
    printf("========================================\n"); // Linha final que fecha o comprovante

    return 0; // Indica que o programa terminou sem erros
} // Fim da função main
