/*
Exercício 38: Mapeamento de Múltiplos Concomitantes e Divisibilidade Composta
O programa deve iterar de forma fixa sobre todos os inteiros contidos no intervalo de 1 a 100 utilizando um laço for. A cada ciclo, uma condição composta com o operador lógico && deve verificar se o número corrente é simultaneamente divisível por 3 e por 5; caso positivo, o número deve ser impresso e somado a um acumulador geral, exibindo ao término do laço o total acumulado.
*/

#include <stdio.h>

int main() {
    int i;                           // contador do laço (de 1 a 100)
    int soma = 0;                    // acumulador da soma dos múltiplos

    for (i = 1; i <= 100; i++) {
        // O resto da divisão (%) igual a 0 significa que é divisível
        // && exige que as DUAS condições sejam verdadeiras
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d\n", i);       // imprime o número encontrado
            soma = soma + i;         // soma ao acumulador
        }
    }

    printf("Total acumulado: %d\n", soma);

    return 0;
}
