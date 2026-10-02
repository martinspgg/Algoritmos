#include <stdio.h>

int main(){
    float valor_a, valor_b, soma;
    printf("Digite o valor de A: ");
    scanf("%f", &valor_a);
    printf("Digite o valor de B: ");
    scanf("%f", &valor_b);
    soma = valor_a + valor_b;
    printf("A soma de A e B é: %f\n", soma);
    return 0;
}