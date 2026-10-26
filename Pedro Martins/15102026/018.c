/*
Exercício 18: Determinação de Paridade Numérica e Congruência Aritmética
O programa deve solicitar a inserção de um número inteiro qualquer e verificar sua natureza quanto à paridade. O algoritmo deve isolar o resto da divisão por dois através da operação numero % 2 e compará-lo com zero com o operador relacional de igualdade ==, direcionando o fluxo para a impressão de que o valor é par no ramo verdadeiro ou ímpar no ramo falso.
*/


// Funcoes padrao de leitura e escrita.
#include <stdio.h>

int main()
{
    // Valor inteiro que sera classificado em par ou impar.
    int nNumero = 0;

    // Solicita o numero e o armazena na variavel.
    printf("\nDigite um numero inteiro: ");
    scanf("%d", &nNumero);

    printf("\n================ RESULTADOS ================");

    // % calcula o resto da divisao por 2; resto zero indica numero par.
    if (nNumero % 2 == 0) {
        printf("\nO numero %d e PAR.", nNumero);
    }
    // Caso o resto nao seja zero, o numero e impar.
    else {
        printf("\nO numero %d e IMPAR.", nNumero);
    }

    printf("\n============================================\n");

    // Termina normalmente.
    return 0;
}
