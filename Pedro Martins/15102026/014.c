/*
Exercício 14: Leitura Heterogênea e Controle de Resíduos no Buffer de Entrada
O programa deve ler consecutivamente o primeiro nome de um cidadão (cadeia de caracteres limitada a 49 posições com %49s), a sua idade cronológica (inteiro), o peso em quilogramas (ponto flutuante) e a inicial de identificação do gênero ('M' ou 'F'). A implementação deve aplicar o especificador de vetor de caracteres sem o operador & e forçar o descarte de resíduos de quebra de linha pendentes no buffer de entrada ao incluir um espaço antes da máscara de leitura do caractere (" %c"), apresentando ao final os dados capturados.
*/ 
// Inclui funcoes de leitura e escrita no terminal.
#include <stdio.h>

int main()
{
    // Vetor para ate 49 caracteres do nome e o terminador \0.
    char cNome[50];
    // Idade em anos inteiros.
    int nIdade = 0;
    // Peso em quilogramas, com casas decimais.
    float nPeso = 0.0;
    // Armazena um unico caractere informado pelo usuario.
    char cGenero = ' ';

    printf("\nDigite seu primeiro nome: ");
    // Le ate 49 caracteres; vetor ja representa o endereco inicial, sem &.
    scanf("%49s", cNome);

    printf("Digite sua idade: ");
    // %d le inteiro; & informa onde guardar o valor.
    scanf("%d", &nIdade);

    printf("Digite seu peso (kg): ");
    // %f le numero do tipo float.
    scanf("%f", &nPeso);

    printf("Digite seu genero (M/F): ");
    // Espaco antes de %c ignora quebras de linha e outros espacos pendentes.
    scanf(" %c", &cGenero);

    // Mostra os campos capturados, usando o especificador adequado.
    printf("\n================ RESULTADOS ================");
    printf("\nNome: %s", cNome);
    printf("\nIdade: %d anos", nIdade);
    printf("\nPeso: %.2f kg", nPeso);
    printf("\nGenero: %c", cGenero);
    printf("\n============================================\n");

    // Indica termino com sucesso.
    return 0;
}
