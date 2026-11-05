#include <stdio.h>  // biblioteca que permite usar printf e scanf

int main(void) {
    // Guarda o número da opção que o usuário escolher
    int opcao;

    // Mostra o cardápio da máquina para o usuário
    printf("=== Maquina de Bebidas ===\n");
    printf("1 - Agua (R$ 3,00)\n");
    printf("2 - Suco (R$ 5,00)\n");
    printf("3 - Cafe (R$ 4,00)\n");

    // Pede a escolha e guarda na variável opcao
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    // O switch compara o valor de opcao com cada case, um por vez
    switch (opcao) {
        case 1:
            // Se o usuário digitou 1, mostra a água e o preço
            printf("Bebida: Agua - R$ 3,00\n");
            break;  // o break evita que o código "escorregue" para o próximo case

        case 2:
            // Se digitou 2, mostra o suco e o preço
            printf("Bebida: Suco - R$ 5,00\n");
            break;

        case 3:
            // Se digitou 3, mostra o café e o preço
            printf("Bebida: Cafe - R$ 4,00\n");
            break;

        default:
            // Qualquer outro número cai aqui, então avisamos que não existe
            printf("Opção inválida\n");
            break;
    }

    // Como não há laço, o programa processa só uma escolha e termina aqui
    return 0;
}