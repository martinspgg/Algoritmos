#include <stdio.h>

int main () {

    int i;
    float nota1, nota2, media;

    for (i = 1; i <= 5; i++) {

        printf("\nAluno %d\n", i);

        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2.0f;

        printf("Media: %.2f\n", media);

        if (media >= 6.0f) {
            printf("Situacao: APROVADO\n");
        } else {
            printf("Situacao: REPROVADO\n");
        }
    }

    return 0;
}
