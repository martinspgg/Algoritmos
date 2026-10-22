/*
Exercício 13: Geometria Euclidiana de Superfícies Planas Quadriláteras
O programa deve capturar do teclado as dimensões de um terreno retangular, representadas pela extensão da base e pela altura vertical (valores de ponto flutuante). A rotina deve calcular a área superficial total dada pelo produto das dimensões e o comprimento do perímetro perimétrico dado pela soma de todos os lados (2 × (Base + Altura)), exibindo os resultados acompanhados das respectivas unidades métricas.
*/

#include <stdio.h>

int main()
{
    float nBase = 0.0;
    float nAltura = 0.0;
    float nArea = 0.0;
    float nPerimetro = 0.0;

    printf("\nDigite a base do terreno (m): ");
    scanf("%f", &nBase);

    printf("Digite a altura do terreno (m): ");
    scanf("%f", &nAltura);

    nArea = nBase * nAltura;
    nPerimetro = 2.0 * (nBase + nAltura);

    printf("\n================ RESULTADOS ================");
    printf("\nArea total do terreno: %.2f m2", nArea);
    printf("\nPerimetro do terreno: %.2f m", nPerimetro);
    printf("\n============================================\n");

    return 0;
}
