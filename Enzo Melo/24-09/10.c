#include <stdio.h>

int main()
{
    int numero;
    int tentativas = 0;

    printf("Digite um numero entre 1 e 100: ");
    scanf("%d", &numero);

    tentativas++;

    while (numero < 1 || numero > 100)
    {
        printf("Valor invalido.\n");

        printf("Digite um numero entre 1 e 100: ");
        scanf("%d", &numero);

        tentativas++;
    }

    printf("Numero valido: %d\n", numero);
    printf("Tentativas: %d\n", tentativas);

    return 0;
}