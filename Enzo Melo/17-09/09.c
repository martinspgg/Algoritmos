#include <stdio.h>

int main() {

    int i;
    float nota1, nota2, nota3, nota4, nota5, media;

    for (i = 1; i <= 2; i++) {

        printf("\nAluno %d\n", i);

        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        
        printf("Digite a terceira nota: ");
        scanf("%f", &nota3);

        printf("Digite a quarta nota: ");
        scanf("%f", &nota4);

        printf("Digite a quinta nota: ");
        scanf("%f", &nota5);

        media = (nota1 + nota2 + nota3 + nota4 + nota5) / 5.0f;

        printf("Media: %.2f\n", media);

        if (media >= 6.0f) {
            printf("Situacao: APROVADO\n");
        } else {
            printf("Situacao: REPROVADO\n");
        }
    }

    return 0;
}
