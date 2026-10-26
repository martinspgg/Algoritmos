// ImpRenda -> 0.05
// Previdenciária -> 0.11

// Biblioteca para leitura e exibicao de dados.
#include <stdio.h>

int main() {
    // Quantidade de horas trabalhadas (valor inteiro).
    int     nHoras      = 0;
    // Remuneracao contratada por hora.
    float   nVlrContrt  = 0.0;
    // Remuneracao antes dos descontos.
    float   nVlrBruto   = 0.0;
    // Desconto de imposto calculado pela taxa fixa do exercicio (5%).
    float   nImpRenda   = 0.0;
    // Desconto previdenciario calculado pela taxa fixa do exercicio (11%).
    float   nPrevi      = 0.0;
    // Total a receber depois dos descontos.
    float   nLiq        = 0.0;

    // Solicita e le a quantidade de horas.
    printf("\nDigite a quantidade de horas trabalhadas: ");
    scanf("%d", &nHoras);

    // Solicita e le o valor de cada hora trabalhada.
    printf("Digite o valor por hora contratado: ");
    scanf("%f", &nVlrContrt);

    // Calcula o salario bruto: horas multiplicadas pelo valor por hora.
    nVlrBruto = nHoras * nVlrContrt;
    printf("\nO valor bruto a ser recebido é: %.2f\n", nVlrBruto);

    // Aplica 5% sobre o bruto (taxa ilustrativa, nao tabela fiscal real).
    nImpRenda = nVlrBruto * 0.05;
    printf("Valor de desconto de imposto: %.2f\n", nImpRenda);

    // Aplica 11% sobre o bruto (taxa ilustrativa do exercicio).
    nPrevi = nVlrBruto * 0.11;
    printf("Valor de desconto de previdenciária: %.2f\n", nPrevi);

    // Subtrai os dois descontos para obter o valor liquido.
    nLiq = nVlrBruto - nImpRenda - nPrevi;
    printf("Valor a ser recebido: %.2f\n", nLiq);

    // Encerra a execucao com sucesso.
    return 0;
}