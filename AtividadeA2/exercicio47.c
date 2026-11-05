/*
Exercício 47: Simulação Iterativa de Convergência Demográfica
O país A possui uma população inicial de 80.000 habitantes crescendo a uma taxa de 3% ao ano, enquanto o país B conta com 100.000 habitantes expandindo-se a uma taxa anual de 1.5%. O programa deve empregar um laço while (popA <= popB) para simular o avanço anual simultâneo das duas populações por meio de juros compostos, contabilizando os ciclos decorridos e exibindo a quantidade de anos necessários para que o país A supere a população do país B, juntamente com as populações finais apuradas.
*/

#include <stdio.h>

int main() {
    double popA = 80000;             // população inicial do país A
    double popB = 100000;            // população inicial do país B
    int anos = 0;                    // contador de anos

    // Cada ano, a população cresce multiplicando por (1 + taxa)
    while (popA <= popB) {
        popA = popA * 1.03;          // crescimento de 3%
        popB = popB * 1.015;         // crescimento de 1,5%
        anos++;
    }

    printf("Anos necessarios: %d\n", anos);
    printf("Populacao final de A: %.0f\n", popA);
    printf("Populacao final de B: %.0f\n", popB);

    return 0;
}
