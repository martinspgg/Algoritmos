#include <stdio.h>  // biblioteca que permite usar printf e scanf

int main(void) {
    // Indicador da assinatura: 1 = assinatura ativa, 0 = sem assinatura ativa
    int assinatura_ativa;

    // Pergunta ao usuário se a assinatura está ativa
    printf("A assinatura esta ativa? (1 = sim, 0 = nao): ");
    scanf("%d", &assinatura_ativa);

    // O operador ! inverte o valor: se assinatura_ativa for 0 (falso),
    // o !assinatura_ativa vira verdadeiro e o if é executado
    if (!assinatura_ativa) {
        // Sem assinatura ativa, então o aplicativo mostra anúncios
        printf("Exibir anúncios\n");
    } else {
        // Com assinatura ativa, a reprodução segue sem anúncios
        printf("Reprodução sem anúncios\n");
    }

    // Avisa ao sistema que o programa terminou sem erros
    return 0;
}