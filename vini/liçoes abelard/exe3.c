#include <stdio.h>

int main() {

    float nota_a, nota_b, media;

    printf("Digite a nota da prova A1:");
    scanf("%f", &nota_a);
    printf("Digite a nota da prova A2:");
    scanf("%f", &nota_b);
    media = (nota_a + nota_b) / 2;
    printf("A média das provas é: %.2f\n", media);

    return 0;

}