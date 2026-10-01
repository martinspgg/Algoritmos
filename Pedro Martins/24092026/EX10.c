// 10. Validação de faixa com laço de repetição. Peça ao usuário para digitar um número entre 1 e 100. Use while para repetir a pergunta até que um valor válido seja digitado (rejeitando valores fora da faixa com uma mensagem de erro), e ao final exiba quantas tentativas foram necessárias.

#include <stdio.h>
#include <stdbool.h>


int main() {
    int qtdTent = 0;
    int nNumU;
    bool lContinua = true;

    while(lContinua == true) {
        printf("Digite um número de 1 até 100: ");
        scanf("%d", &nNumU);

        if(nNumU > 0 && nNumU <= 100) {
            printf("Número escolhido está dentro da faixa!\n");
            lContinua = true;
            qtdTent += 1;
            printf("Quantidade de tentativas: %d\n", qtdTent);
        } else {
            printf("Número escolhido não está dentro da faixa. Tente novamente!\n");
            qtdTent += 1;
        }
    }
    return 0;
}