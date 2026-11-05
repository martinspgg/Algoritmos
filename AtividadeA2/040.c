/*
Exercício 40: Síntese de Progressões Aritméticas Lineares
O programa deve ler o valor do termo inicial a₁, a razão de progressão r e o total de termos desejado N (todos inteiros). Através de um laço for que itera pelo índice i variando de 0 até N - 1, o programa deve calcular cada termo sucessivo pela fórmula clássica do termo geral aₙ = a₁ + (i × r), exibindo a sequência matemática formatada em uma linha contínua separada por vírgulas.
*/

#include <stdio.h>

int main() {
    int a1, r, n;                    // termo inicial, razão e quantidade de termos
    int i;                           // índice do laço

    printf("Digite o termo inicial: ");
    scanf("%d", &a1);
    printf("Digite a razao: ");
    scanf("%d", &r);
    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    // i vai de 0 até n-1; cada termo = a1 + i * r
    for (i = 0; i < n; i++) {
        if (i > 0) {
            printf(", ");            // vírgula só entre os termos (não antes do primeiro)
        }
        printf("%d", a1 + i * r);
    }
    printf("\n");

    return 0;
}
