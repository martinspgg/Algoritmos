/*
Exercício 13: Geometria Euclidiana de Superfícies Planas Quadriláteras
O programa deve capturar do teclado as dimensões de um terreno retangular, representadas pela extensão da base e pela altura vertical (valores de ponto flutuante). A rotina deve calcular a área superficial total dada pelo produto das dimensões e o comprimento do perímetro perimétrico dado pela soma de todos os lados (2 × (Base + Altura)), exibindo os resultados acompanhados das respectivas unidades métricas.
*/

// Biblioteca padrao para entrada e saida de dados.
#include <stdio.h>

int main()
{
    // Medida da base do terreno, em metros.
    float nBase = 0.0;
    // Medida da altura do terreno, em metros.
    float nAltura = 0.0;
    // Area total do retangulo, em metros quadrados.
    float nArea = 0.0;
    // Soma dos quatro lados, em metros.
    float nPerimetro = 0.0;

    // Solicita a dimensao horizontal.
    printf("\nDigite a base do terreno (m): ");
    scanf("%f", &nBase);

    // Solicita a dimensao vertical.
    printf("Digite a altura do terreno (m): ");
    scanf("%f", &nAltura);

    // Area de um retangulo = base multiplicada pela altura.
    nArea = nBase * nAltura;
    // Perimetro = duas bases + duas alturas.
    nPerimetro = 2.0 * (nBase + nAltura);

    // Mostra area em m2 e perimetro em m.
    printf("\n================ RESULTADOS ================");
    printf("\nArea total do terreno: %.2f m2", nArea);
    printf("\nPerimetro do terreno: %.2f m", nPerimetro);
    printf("\n============================================\n");

    // Finaliza normalmente.
    return 0;
}
