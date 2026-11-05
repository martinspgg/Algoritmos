#include <stdio.h>

int main(void) {
    float nota;

    printf("Digite a nota da avaliacao (de 0 a 10): ");
    scanf("%f", &nota);

    if (nota < 0 || nota > 10) {
        printf("Nota invalida.\n");
    } else {
        printf("Nota valida.\n");
    }

    return 0;
}
