// ImpRenda -> 0.05
// Previdenciária -> 0.11

#include <stdio.h>

int main() {
    int     nHoras      = 0;
    float   nVlrContrt  = 0.0;
    float   nVlrBruto   = 0.0;
    float   nImpRenda   = 0.0;
    float   nPrevi      = 0.0;
    float   nLiq        = 0.0;

    printf("\nDigite a quantidade de horas trabalhadas: ");
    scanf("%d", &nHoras);

    printf("Digite o valor por hora contratado: ");
    scanf("%f", &nVlrContrt);

    nVlrBruto = nHoras * nVlrContrt;
    printf("\nO valor bruto a ser recebido é: %.2f\n", nVlrBruto);

    nImpRenda = nVlrBruto * 0.05;
    printf("Valor de desconto de imposto: %.2f\n", nImpRenda);

    nPrevi = nVlrBruto * 0.11;
    printf("Valor de desconto de previdenciária: %.2f\n", nPrevi);

    nLiq = nVlrBruto - nImpRenda - nPrevi;
    printf("Valor a ser recebido: %.2f\n", nLiq);

    return 0;
}