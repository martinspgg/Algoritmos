#include <stdio.h> // Biblioteca para utilizar printf e scanf

int main(void) {
    // Variáveis para armazenar as idades e contar maiores e menores de idade
    int idade, maiores = 0, menores = 0;
    int i; // Variável de controle do laço de repetição

    // Repete a leitura das idades de 12 inscritos
    for (i = 1; i <= 12; i++) {
        // Solicita a idade de cada inscrito
        printf("Digite a idade do inscrito %d: ", i);
        scanf("%d", &idade); // Lê a idade informada

        // Verifica se a pessoa tem 18 anos ou mais
        if (idade >= 18) {
            maiores++; // Aumenta em 1 o contador de maiores de idade
        } else {
            menores++; // Aumenta em 1 o contador de menores de idade
        }
    }

    // Exibe a quantidade de pessoas em cada grupo
    printf("\nPessoas com 18 anos ou mais: %d\n", maiores);
    printf("Pessoas com menos de 18 anos: %d\n", menores);

    return 0; // Finaliza o programa
}