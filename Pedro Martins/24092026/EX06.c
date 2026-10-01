// 6 Contador de vogais e consoantes. Leia uma palavra com scanf("%49s", ...), percorra o vetor de char caractere por caractere com for (usando o índice até encontrar \0), e conte quantas vogais e quantas consoantes ela contém.

#include <stdio.h>
#include <string.h>

int main() {

    char palavra[50];
    int vogais = 0, consoantes = 0, i;
    int tamanho;

    printf("Digite uma palavra: ");
    scanf("%49s", palavra);

    tamanho = strlen(palavra);

    for (i = 0; i < tamanho; i++) {

        if (palavra[i] == 'a' || palavra[i] == 'e' ||
            palavra[i] == 'i' || palavra[i] == 'o' ||
            palavra[i] == 'u') {

            vogais++;

        } else {

            consoantes++;
        }
    }

    printf("\nVogais: %d\n", vogais);
    printf("Consoantes: %d\n", consoantes);

    return 0;
}