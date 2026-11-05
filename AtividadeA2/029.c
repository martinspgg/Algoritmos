#include <stdio.h> // Biblioteca para utilizar o printf

int main(void) {
    int senha; // Variável que armazena o número da senha

    // Repete o comando enquanto senha for menor ou igual a 10
    for (senha = 1; senha <= 10; senha++) {
        printf("Senha %d\n", senha); // Exibe o número da senha
    }

    return 0; // Finaliza o programa
}