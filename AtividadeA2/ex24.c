#include <stdio.h>  // biblioteca que permite usar printf e scanf

int main(void) {
    // Indicador do cadastro: 1 = cadastro ativo, 0 = cadastro inativo
    int cadastroAtivo;

    // Indicador da autorização: 1 = apresentou autorização, 0 = não apresentou
    int autorizacao;

    // Pergunta ao usuário se o aluno tem cadastro ativo
    printf("O aluno tem cadastro ativo? (1 = sim, 0 = nao): ");
    scanf("%d", &cadastroAtivo);

    // Pergunta se o aluno apresentou a autorização
    printf("O aluno apresentou autorizacao? (1 = sim, 0 = nao): ");
    scanf("%d", &autorizacao);

    // Aqui comparo cada indicador com 1 e uso o && para exigir as duas coisas:
    // só entra no if se o cadastro está ativo E a autorização foi apresentada
    if (cadastroAtivo == 1 && autorizacao == 1) {
        printf("Retirada permitida\n");
    } else {
        // Qualquer outra combinação (faltou uma condição ou as duas) cai aqui
        printf("Retirada não permitida\n");
    }

    // Avisa ao sistema que o programa terminou sem erros
    return 0;
}