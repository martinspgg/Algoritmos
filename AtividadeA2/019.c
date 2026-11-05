#include <stdio.h>  // biblioteca que me deixa usar printf e scanf

int main(void) {
    // Variável que vai guardar a pontuação digitada pelo participante
    int pontuacao;

    // Aviso na tela para o usuário saber o que precisa digitar
    printf("Digite a pontuacao: ");

    // Lê o número digitado e guarda dentro da variável pontuacao
    scanf("%d", &pontuacao);

    // Primeiro teste: se for menor que 1000, já sabemos que é Bronze
    if (pontuacao < 1000) {
        printf("Bronze\n");

    // Se chegou aqui, a pontuação é pelo menos 1000.
    // Então basta ver se é menor que 1500 para cair na faixa Prata
    } else if (pontuacao < 1500) {
        printf("Prata\n");

    // Aqui a pontuação já é pelo menos 1500.
    // Se for menor que 2000, está na faixa Ouro
    } else if (pontuacao < 2000) {
        printf("Ouro\n");

    // Se não passou em nenhum teste anterior, só pode ser 2000 ou mais: Diamante
    } else {
        printf("Diamante\n");
    }

    // Avisa ao sistema que o programa terminou sem erros
    return 0;
}