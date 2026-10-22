/*
Exercício 15: Ponderação Acadêmica com Pesos Diferenciados
O programa deve requisitar ao usuário três notas parciais obtidas por um estudante no decorrer do período letivo, todas representadas por números reais. O algoritmo deve aplicar a média ponderada adotando os pesos normalizados de 2, 3 e 5 para as respectivas avaliações, efetuando o cálculo pela fórmula Média = ((N1 × 2.0) + (N2 × 3.0) + (N3 × 5.0)) / 10.0 e imprimindo o resultado com precisão de duas casas decimais.
*/


#include <stdio.h>

int main()
{
    float nNota1 = 0.0;
    float nNota2 = 0.0;
    float nNota3 = 0.0;
    float nMedia = 0.0;

    printf("\nDigite a primeira nota: ");
    scanf("%f", &nNota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nNota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nNota3);

    nMedia = ((nNota1 * 2.0) + (nNota2 * 3.0) + (nNota3 * 5.0)) / 10.0;

    printf("\n================ RESULTADOS ================");
    printf("\nNota 1 (Peso 2): %.2f", nNota1);
    printf("\nNota 2 (Peso 3): %.2f", nNota2);
    printf("\nNota 3 (Peso 5): %.2f", nNota3);
    printf("\nMedia ponderada: %.2f", nMedia);
    printf("\n============================================\n");

    return 0;
}
