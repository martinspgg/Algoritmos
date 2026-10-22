/*
Exercício 16: Decomposição Cronológica de Segundos em Horas e Minutos
O programa deve ler um valor escalar inteiro representando um intervalo de tempo acumulado medido estritamente em segundos. A lógica de processamento deve decompor esse total acumulado em horas cheias, minutos remanescentes e segundos finais por meio de divisões inteiras sucessivas e operações de módulo com as bases 3600 e 60, imprimindo a formatação temporal analítica no padrão clássico de relógio digital HH:MM:SS.
*/
#include <stdio.h>

int main()
{
    int nTotalSeg = 0;
    int nHoras = 0;
    int nMinutos = 0;
    int nSegundos = 0;

    printf("\nDigite o tempo total em segundos: ");
    scanf("%d", &nTotalSeg);

    if (nTotalSeg < 0) {
        printf("\nErro: o tempo nao pode ser negativo.\n");
        return 1;
    }

    nHoras = nTotalSeg / 3600;
    nMinutos = (nTotalSeg % 3600) / 60;
    nSegundos = nTotalSeg % 60;

    printf("\n================ RESULTADOS ================");
    printf("\nTempo convertido: %02d:%02d:%02d",
           nHoras, nMinutos, nSegundos);
    printf("\n============================================\n");

    return 0;
}
