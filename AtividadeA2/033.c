#include <stdio.h>

int main(void) {
    float nota1, nota2, media;
    int participante, aprovados = 0, reprovados = 0;

    for (participante = 1; participante <= 5; participante++) {
        printf("Digite a primeira nota do participante %d: ", participante);
        scanf("%f", &nota1);

        printf("Digite a segunda nota do participante %d: ", participante);
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2.0f;

        printf("Participante %d - Media: %.2f - Situacao: ",
               participante, media);

        if (media >= 6.0f) {
            printf("Aprovado\n");
            aprovados++;
        } else {
            printf("Reprovado\n");
            reprovados++;
        }

        printf("\n");
    }

    printf("Total de aprovados: %d\n", aprovados);
    printf("Total de reprovados: %d\n", reprovados);

    return 0;
}
