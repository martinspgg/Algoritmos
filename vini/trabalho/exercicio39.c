/*
Exercício 39: Rastreio de Extremos Térmicos em Registros Meteorológicos
O programa deve simular a coleta diária de temperaturas ao longo de uma semana completa, realizando sete iterações contadas com um laço for. Na primeira repetição, a leitura inicializa simultaneamente as variáveis que guardam a temperatura máxima e a mínima; nas repetições seguintes, comparações condicionais ajustam os valores extremos com base nas novas leituras, apresentando ao final os extremos térmicos apurados no período.
*/

#include <stdio.h>

int main() {
    int i;                           // contador dos dias (1 a 7)
    float temp;                      // temperatura lida no dia
    float maior, menor;              // guardam a maior e a menor temperatura

    for (i = 1; i <= 7; i++) {
        printf("Temperatura do dia %d: ", i);
        scanf("%f", &temp);

        if (i == 1) {
            // No primeiro dia, a temperatura é ao mesmo tempo a maior e a menor
            maior = temp;
            menor = temp;
        } else {
            // Nos outros dias, compara com os extremos já guardados
            if (temp > maior) {
                maior = temp;
            }
            if (temp < menor) {
                menor = temp;
            }
        }
    }

    printf("Temperatura maxima: %.1f\n", maior);
    printf("Temperatura minima: %.1f\n", menor);

    return 0;
}
