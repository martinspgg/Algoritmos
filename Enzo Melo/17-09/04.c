#include <stdio.h>

int main() {

    float idade;

    printf("Digite sua idade: ");
    scanf("%f", &idade);

    if (idade >= 18) {
        printf("Você é maior de idade!\n");
    } else {
        printf("Você ainda é de menor!\n");
    }

    return 0;
}
