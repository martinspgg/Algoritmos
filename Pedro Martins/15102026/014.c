/*
Exercício 14: Leitura Heterogênea e Controle de Resíduos no Buffer de Entrada
O programa deve ler consecutivamente o primeiro nome de um cidadão (cadeia de caracteres limitada a 49 posições com %49s), a sua idade cronológica (inteiro), o peso em quilogramas (ponto flutuante) e a inicial de identificação do gênero ('M' ou 'F'). A implementação deve aplicar o especificador de vetor de caracteres sem o operador & e forçar o descarte de resíduos de quebra de linha pendentes no buffer de entrada ao incluir um espaço antes da máscara de leitura do caractere (" %c"), apresentando ao final os dados capturados.
*/ 
#include <stdio.h>

int main()
{
    char cNome[50];
    int nIdade = 0;
    float nPeso = 0.0;
    char cGenero = ' ';

    printf("\nDigite seu primeiro nome: ");
    scanf("%49s", cNome);

    printf("Digite sua idade: ");
    scanf("%d", &nIdade);

    printf("Digite seu peso (kg): ");
    scanf("%f", &nPeso);

    printf("Digite seu genero (M/F): ");
    scanf(" %c", &cGenero);

    printf("\n================ RESULTADOS ================");
    printf("\nNome: %s", cNome);
    printf("\nIdade: %d anos", nIdade);
    printf("\nPeso: %.2f kg", nPeso);
    printf("\nGenero: %c", cGenero);
    printf("\n============================================\n");

    return 0;
}
