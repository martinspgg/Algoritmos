#include <stdio.h>

int main() {
 
    float peso1, peso2, peso3, nota1, nota2, nota3, media;

        // NOTA 01
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        printf("Digite o peso da primeira nota: ");
        scanf("%f", &peso1);

        // NOTA 02
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        printf("Digite o peso da segunda nota: ");
        scanf("%f", &peso2);
        
        // NOTA 03
        printf("Digite a terceira nota: ");
        scanf("%f", &nota3);

        printf("Digite o peso da terceira nota: ");
        scanf("%f", &nota3);

        // CALCULO DA MEDIA
        if (peso1 == 0 || peso2 == 0 || peso3 == 0) {
            printf("O peso não pode ser igual a 0(zero)");
        } else {
            media = (((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3));
            printf("Media: %.2f\n", media);

            if (media >= 6.0f) {
                printf("Situação: APROVADO\n");
            } else if (media >= 4) {
                printf("Situação: EXAME\n");
            } else if (media < 4) {
                printf("Situacao: REPROVADO\n");
            }
        }
    return 0;
}
