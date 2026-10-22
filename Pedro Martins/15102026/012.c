// Fornece printf e scanf para interacao pelo terminal.
#include <stdio.h>

int main()
{
    // Distancia total percorrida em quilometros.
    float nDist = 0.0;
    // Total de combustivel consumido em litros.
    float nConsumo = 0.0;
    // Eficiencia media do veiculo em km por litro.
    float nRendimen = 0.0;
    // Custo de combustivel por quilometro rodado.
    float nCusto = 0.0;
    // Preco fixo de um litro de combustivel (R$); const impede alteracao.
    const float nPrecoL = 6.34;

    // Recebe os dados necessarios para calcular consumo e custo.
    printf("\nDigite a distância total percorrida: ");
    scanf("%f", &nDist);

    printf("Digite o volume total de combustível consumido (Litros): ");
    scanf("%f", &nConsumo);

    // Impede valores nulos/negativos e evita divisao por zero.
    // O operador || significa OU: basta uma condicao ser verdadeira.
    if (nDist <= 0 || nConsumo <= 0)
    {
        printf("\nErro: a distância e o consumo devem ser maiores que zero.\n");
        // Termina antecipadamente indicando entrada invalida.
        return 1;
    }

    // Rendimento = distancia (km) / combustivel (L).
    nRendimen = nDist / nConsumo;
    // Custo por km = preco por litro / rendimento (km/L).
    nCusto = nPrecoL / nRendimen;
    // Apresenta os indicadores calculados.
    printf("\n================ RESULTADOS ================\n");
    printf("O rendimento operacional é: %.2f Km/L\n", nRendimen);

    printf("O custo médio por Km rodado é: R$%.2f", nCusto);

    // Execucao concluida sem erro.
    return 0;
}