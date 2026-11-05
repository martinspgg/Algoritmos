#include <stdio.h>  // biblioteca que permite usar printf e scanf

int main(void) {
    // Indicador do clube: 1 = participa do clube, 0 = não participa
    int participa_clube;

    // Indicador do cupom: 1 = cupom válido, 0 = sem cupom válido
    int cupom_valido;

    // Pergunta se o cliente participa do clube
    printf("O cliente participa do clube? (1 = sim, 0 = nao): ");
    scanf("%d", &participa_clube);

    // Pergunta se o cliente apresentou um cupom válido
    printf("O cliente tem cupom valido? (1 = sim, 0 = nao): ");
    scanf("%d", &cupom_valido);

    // O || basta que UMA das condições seja verdadeira para entrar no if.
    // Se as duas forem verdadeiras, também entra, então esse caso já está coberto
    if (participa_clube == 1 || cupom_valido == 1) {
        // Atendeu a pelo menos uma condição: entrega gratuita
        printf("Frete: R$ 0,00\n");
    } else {
        // Não atendeu a nenhuma das duas: paga o frete normal
        printf("Frete: R$ 12,00\n");
    }

    // Avisa ao sistema que o programa terminou sem erros
    return 0;
}