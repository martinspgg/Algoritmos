// 4. Classificação de triângulo. Leia três valores representando os lados de um triângulo. Usando if/else if e operadores lógicos, informe se é equilátero, isósceles, escaleno ou se os valores não formam um triângulo válido (a soma de dois lados deve ser maior que o terceiro).

#include <stdio.h>

int main() {

    float lado1, lado2, lado3;

    printf("Digite o valor do primeiro lado: ");
    scanf("%f", &lado1);

    printf("Digite o valor do segundo lado: ");
    scanf("%f", &lado2);

    printf("Digite o valor do terceiro lado: ");
    scanf("%f", &lado3);

    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1)
    {
        if (lado1 == lado2 && lado2 == lado3)
        {
            printf("Isso é um triangulo Equilátero");
        }
        else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3)
        {
            printf("Isso é um triangulo Isósceles");
        }
        else
        {
            printf("Isso é um triangulo Escaleno");
        }
    }
    else
    {
        printf("Isso não é um triangulo");
    }

    return 0;
}