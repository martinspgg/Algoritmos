/*
Exercício 16: Decomposição Cronológica de Segundos em Horas e Minutos
O programa deve ler um valor escalar inteiro representando um intervalo de tempo acumulado medido estritamente em segundos. A lógica de processamento deve decompor esse total acumulado em horas cheias, minutos remanescentes e segundos finais por meio de divisões inteiras sucessivas e operações de módulo com as bases 3600 e 60, imprimindo a formatação temporal analítica no padrão clássico de relógio digital HH:MM:SS.
*/
// Biblioteca para leitura e impressao de valores.
#include <stdio.h>

int main()
{
    // Tempo total informado em segundos.
    int nTotalSeg = 0;
    // Quantidade de horas completas.
    int nHoras = 0;
    // Minutos restantes apos separar as horas.
    int nMinutos = 0;
    // Segundos restantes apos separar os minutos.
    int nSegundos = 0;

    printf("\nDigite o tempo total em segundos: ");
    // Le um numero inteiro fornecido pelo usuario.
    scanf("%d", &nTotalSeg);

    // Rejeita duracoes negativas antes dos calculos.
    if (nTotalSeg < 0) {
        printf("\nErro: o tempo nao pode ser negativo.\n");
        // Codigo de retorno diferente de zero sinaliza erro.
        return 1;
    }

    // Divisao inteira por 3600: numero de horas completas.
    nHoras = nTotalSeg / 3600;
    // % 3600 descarta as horas; divisao por 60 extrai minutos inteiros.
    nMinutos = (nTotalSeg % 3600) / 60;
    // % 60 retorna os segundos restantes (de 0 a 59).
    nSegundos = nTotalSeg % 60;

    printf("\n================ RESULTADOS ================");
    // %02d exibe pelo menos dois digitos, completando com zero a esquerda.
    printf("\nTempo convertido: %02d:%02d:%02d",
           nHoras, nMinutos, nSegundos);
    printf("\n============================================\n");

    // Conclusao bem-sucedida.
    return 0;
}
