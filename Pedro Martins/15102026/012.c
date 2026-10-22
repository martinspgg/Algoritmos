#include <stdio.h>

int main()
{
    float nDist = 0.0;
    float nConsumo = 0.0;
    float nRendimen = 0.0;
    float nCusto = 0.0;
    const float nPrecoL = 6.34;

    printf("\nDigite a distância total percorrida: ");
    scanf("%f", &nDist);

    printf("Digite o volume total de combustível consumido (Litros): ");
    scanf("%f", &nConsumo);

    if (nDist <= 0 || nConsumo <= 0)
    {
        printf("\nErro: a distância e o consumo devem ser maiores que zero.\n");
        return 1;
    }

    nRendimen = nDist / nConsumo;
    nCusto = nPrecoL / nRendimen;
    printf("\n================ RESULTADOS ================\n");
    printf("O rendimento operacional é: %.2f Km/L\n", nRendimen);

    printf("O custo médio por Km rodado é: R$%.2f", nCusto);

    return 0;
}