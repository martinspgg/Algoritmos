/*
Exercício 44: Decomposição Logarítmica por Bisseções Inteiras Sucessivas
O programa deve solicitar a digitação de um número inteiro positivo expressivo (X > 1). Empregando o laço while (n > 1), o programa deve repetidamente dividir o valor por 2 através de atribuição truncada inteira (n = n / 2), incrementando um contador a cada operação de divisão até atingir a unidade, exibindo ao final a quantidade de bisseções sucessivas necessárias para esgotar o valor original.
*/

#include <stdio.h>

int main() {
    int n;                           // número digitado (será dividido)
    int cont = 0;                    // conta quantas divisões por 2 foram feitas

    printf("Digite um numero inteiro maior que 1: ");
    scanf("%d", &n);

    // Divisão entre inteiros em C descarta a parte decimal (ex: 7 / 2 = 3)
    while (n > 1) {
        n = n / 2;
        cont++;
    }

    printf("Divisoes por 2 ate chegar em 1: %d\n", cont);

    return 0;
}
