#include <stdio.h> // Biblioteca para utilizar printf e scanf

int main(void) {
    float nota; // Variável que armazena a nota da avaliação

    // Solicita ao usuário que digite uma nota
    printf("Digite a nota da avaliacao (de 0 a 10): ");
    scanf("%f", &nota); // Lê a nota digitada

    // Verifica se a nota está abaixo de 0 OU acima de 10
    if (nota < 0 || nota > 10) {
        printf("Nota invalida.\n"); // Exibe se a nota for inválida
    } else {
        printf("Nota valida.\n"); // Exibe se a nota estiver entre 0 e 10
    }

    return 0; // Finaliza o programa
}