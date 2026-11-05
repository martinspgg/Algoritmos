/*
Exercício 37: Produtório Fatorial de Inteiros Positivos
O programa deve capturar um número inteiro não negativo n e calcular o seu respectivo valor fatorial (n!). O algoritmo deve inicializar uma variável acumuladora de produto em 1 e iterar com for desde o valor n até 1 de forma decrescente, multiplicando sucessivamente os fatores intermediários e exibindo o resultado numérico final.
*/

#include <stdio.h>

int main() {
    int n, i;                        // n = número digitado, i = contador do laço
    unsigned long long fat = 1;      // acumulador do produto (começa em 1)

    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &n);                 // lê o valor de n

    // Vai de n até 1, multiplicando cada valor no acumulador
    for (i = n; i >= 1; i--) {
        fat = fat * i;
    }

    // Se n for 0, o laço não executa e fat continua 1 (0! = 1)
    printf("%d! = %llu\n", n, fat);

    return 0;
}
