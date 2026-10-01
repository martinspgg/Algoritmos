#include <stdio.h>

int main() {

    float media, frequencia;

    printf("Digite a media: ");
    scanf("%f", &media);

    printf("Digite a frequencia: ");
    scanf("%f", &frequencia);

    if (media >= 6.0f && frequencia >= 75.0f) {
        printf("Aluno aprovado!\n");
    } else {
        printf("Aluno reprovado!\n");
    }

    return 0;
}
