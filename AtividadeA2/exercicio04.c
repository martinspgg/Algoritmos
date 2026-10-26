// Exercício 4: Painel de Diagnóstico e Desempenho de Servidor
// Declara a carga de um servidor e imprime um sumário usando UMA única instrução printf().

#include <stdio.h> // Biblioteca padrão de entrada e saída (necessária para printf)

int main() { // Função principal: onde o programa começa a executar
    int totalRequisicoes = 15230; // Total de requisições atendidas (inteiro)
    float consumoMemoria = 67.45; // Consumo de memória RAM em percentual (float)
    char estadoOperacional = 'A'; // Estado operacional: 'A' de ativo (caractere literal)
    char protocolo[50] = "TCP"; // Protocolo de transporte (cadeia de caracteres)

    printf("=== Painel de Diagnóstico ===\nRequisições atendidas: %d\nMemória RAM em uso: %.2f%%\nEstado operacional: %c\nProtocolo: %s\n", totalRequisicoes, consumoMemoria, estadoOperacional, protocolo); // Um único printf misturando texto fixo e máscaras (%d, %.2f, %c, %s); %% imprime o símbolo de %

    return 0; // Indica que o programa terminou sem erros
} // Fim da função main
