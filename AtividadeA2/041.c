/*
Exercício 41: Acumulador Aritmético Controlado por Sentinela Nulo
O programa deve capturar números inteiros de forma indeterminada a partir do teclado até que o 
usuário digite o número zero, que funciona como valor sentinela para encerrar a execução. O laço 
while (numero != 0) deve somar os valores válidos e incrementar uma variável contadora a cada 
iteração; ao término, o terminal exibe o total de números computados e o somatório acumulado, 
desconsiderando a sentinela nas estatísticas.
*/

#include <stdio.h>

int main() {
    int numero;                      // número digitado
    int soma = 0;                    // acumulador da soma
    int cont = 0;                    // contador de números digitados

    // Primeira leitura fora do laço, para o while já ter um valor para testar
    printf("Digite um numero (0 para sair): ");
    scanf("%d", &numero);

    // Enquanto não for o sentinela (0), continua somando e contando
    while (numero != 0) {
        soma = soma + numero;
        cont++;

        // Nova leitura no final do laço
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &numero);
    }

    // O zero final não entra na soma nem na contagem
    printf("Numeros digitados: %d\n", cont);
    printf("Soma total: %d\n", soma);

    return 0;
}
