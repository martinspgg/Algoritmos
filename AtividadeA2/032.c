#include <stdio.h>

int main(void) {
    int idade, maiores = 0, menores = 0;
    int i;

    for (i = 1; i <= 12; i++) {
        printf("Digite a idade do inscrito %d: ", i);
        scanf("%d", &idade);

        if (idade >= 18) {
            maiores++;
        } else {
            menores++;
        }
    }

    printf("\nPessoas com 18 anos ou mais: %d\n", maiores);
    printf("Pessoas com menos de 18 anos: %d\n", menores);

    return 0;
}
