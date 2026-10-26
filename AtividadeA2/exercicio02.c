// Exercício 2: Formatação Tabular de Preços e Alinhamento Monetário
// Inicializa o preço de três periféricos e imprime uma lista alinhada com 2 casas decimais.

#include <stdio.h> // Biblioteca padrão de entrada e saída (necessária para printf)

int main() { // Função principal: onde o programa começa a executar
    float precoTeclado = 89.90; // Preço do teclado (em C o decimal usa ponto, não vírgula)
    float precoMouse = 45.50; // Preço do mouse
    float precoMonitor = 850.00; // Preço do monitor

    printf("Lista de Preços\n"); // Título da listagem
    printf("--------------------------\n"); // Linha separadora para deixar a tabela mais bonita
    printf("%-12s R$ %8.2f\n", "Teclado", precoTeclado); // %-12s alinha o texto à esquerda em 12 colunas; %8.2f reserva 8 colunas com 2 decimais
    printf("%-12s R$ %8.2f\n", "Mouse", precoMouse); // Mesma formatação, então os valores ficam alinhados na vertical
    printf("%-12s R$ %8.2f\n", "Monitor", precoMonitor); // Mesma formatação para o terceiro item

    return 0; // Indica que o programa terminou sem erros
} // Fim da função main
