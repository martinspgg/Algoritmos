#include <stdio.h>

int main() {
    
    float valor_A, valor_B,soma;
    
    printf("Digite o valor A: ");
    scanf("%f" , &valor_A);
    printf("Digite o valor B: ");
    scanf("%f" , &valor_B);
    soma = valor_A + valor_B;
    printf("A soma de %.2f + %.2f = %.2f\n" , valor_A, valor_B, soma);

    return 0;

}