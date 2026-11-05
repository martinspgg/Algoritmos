/*
Exercício 45: Validador de Entrada e Rejeição de Dados Inválidos
O programa deve simular a captura de uma nota de exame escolar assegurando que a nota informada esteja contida no intervalo fechado de 0.0 a 10.0. O programa deve manter o usuário preso em um laço de repetição while (nota < 0.0f || nota > 10.0f) que exibe uma mensagem de advertência e repete a leitura via scanf() a cada tentativa errônea, prosseguindo para o encerramento regular apenas após o fornecimento de um dado que cumpra os limites exigidos.
*/

#include <stdio.h>

int main() {
    float nota;                      // nota digitada pelo usuário

    printf("Digite a nota (0 a 10): ");
    scanf("%f", &nota);

    // || significa "ou": o laço repete se a nota for menor que 0 OU maior que 10
    while (nota < 0.0f || nota > 10.0f) {
        printf("Nota invalida! Digite novamente (0 a 10): ");
        scanf("%f", &nota);
    }

    // Só chega aqui quando a nota está dentro do intervalo
    printf("Nota aceita: %.1f\n", nota);

    return 0;
}
