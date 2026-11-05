// Exercício 5: Conversão Literal de Delimitadores e Caracteres Especiais
// Mostra três símbolos guardados em variáveis char e a diferença entre %c e caracteres de escape.

#include <stdio.h> // Biblioteca padrão de entrada e saída (necessária para printf)

int main() { // Função principal: onde o programa começa a executar
    char abreChave = '{'; // Variável char que guarda a chave de abertura
    char asterisco = '*'; // Variável char que guarda o asterisco
    char pontoVirgula = ';'; // Variável char que guarda o ponto e vírgula

    printf("A chave de abertura vale '%c'\n", abreChave); // %c é substituído pelo valor da variável; as aspas simples são texto comum
    printf("O asterisco vale '%c'\n", asterisco); // Mesma ideia para o asterisco
    printf("O ponto e vírgula vale '%c'\n", pontoVirgula); // Mesma ideia para o ponto e vírgula
    printf("Com escape: \'%c\' e a quebra de linha se escreve \\n\n", asterisco); // \' imprime uma aspa simples, \\ imprime uma barra invertida e o \n final realmente quebra a linha

    return 0; // Indica que o programa terminou sem erros
} // Fim da função main
