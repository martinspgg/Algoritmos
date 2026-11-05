// Exercício 9: Aritmética de Inteiros e Análise do Operador de Resto
// Lê dois inteiros com scanf() e mostra soma, subtração, multiplicação, divisão inteira e resto.

#include <stdio.h> // Biblioteca padrão de entrada e saída (printf e scanf)

int main() { // Função principal: onde o programa começa a executar
    int a = 0; // Primeiro número digitado pelo usuário
    int b = 0; // Segundo número digitado pelo usuário

    printf("Digite o primeiro número inteiro positivo: "); // Pede o primeiro número
    scanf("%d", &a); // Lê um inteiro e guarda em a (o & passa o endereço da variável)

    printf("Digite o segundo número inteiro positivo: "); // Pede o segundo número
    scanf("%d", &b); // Lê um inteiro e guarda em b

    printf("\nResultados:\n"); // Linha em branco e título dos resultados
    printf("Soma: %d + %d = %d\n", a, b, a + b); // Soma dos dois números
    printf("Subtração: %d - %d = %d\n", a, b, a - b); // Subtração (primeiro menos segundo)
    printf("Multiplicação: %d x %d = %d\n", a, b, a * b); // Multiplicação dos dois números

    if (b != 0) { // Só divide se b não for zero (divisão por zero causa erro)
        printf("Divisão inteira: %d / %d = %d\n", a, b, a / b); // Entre inteiros, o / descarta a parte decimal (ex.: 7 / 2 = 3)
        printf("Resto da divisão: %d %% %d = %d\n", a, b, a % b); // O % devolve o resto (ex.: 7 % 2 = 1); %% dentro do printf imprime o símbolo %
    } else { // Caso b seja zero
        printf("Não é possível dividir por zero.\n"); // Avisa o usuário em vez de travar o programa
    } // Fim do if/else

    return 0; // Indica que o programa terminou sem erros
} // Fim da função main
