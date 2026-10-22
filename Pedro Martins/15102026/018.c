/*
Exercício 18: Determinação de Paridade Numérica e Congruência Aritmética
O programa deve solicitar a inserção de um número inteiro qualquer e verificar sua natureza quanto à paridade. O algoritmo deve isolar o resto da divisão por dois através da operação numero % 2 e compará-lo com zero com o operador relacional de igualdade ==, direcionando o fluxo para a impressão de que o valor é par no ramo verdadeiro ou ímpar no ramo falso.
*/


#include <stdio.h>

int main()
{
    int nNumero = 0;

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &nNumero);

    printf("\n================ RESULTADOS ================");

    if (nNumero % 2 == 0) {
        printf("\nO numero %d e PAR.", nNumero);
    }
    else {
        printf("\nO numero %d e IMPAR.", nNumero);
    }

    printf("\n============================================\n");

    return 0;
}
