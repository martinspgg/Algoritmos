// Exercício 1: Ficha Cadastral Discente
// Declara e inicializa diretamente variáveis de um estudante e exibe os dados com printf().

#include <stdio.h> // Biblioteca padrão de entrada e saída (necessária para printf)

int main() { // Função principal: onde o programa começa a executar
    int matricula = 20260123; // Número de matrícula do estudante (inteiro), já inicializado
    float estatura = 1.75; // Estatura em metros (ponto flutuante), já inicializada
    char inicial = 'E'; // Inicial do primeiro nome (um único caractere, entre aspas simples)
    char curso[50] = "Engenharia Mecânica"; // Nome do curso (vetor de 50 caracteres, entre aspas duplas)

    printf("Ficha Cadastral Discente\n"); // Título da ficha, com quebra de linha (\n)
    printf("Matrícula: %d\n", matricula); // %d imprime o inteiro da variável matricula
    printf("Estatura: %.2f m\n", estatura); // %.2f imprime o float com 2 casas decimais
    printf("Inicial do nome: %c\n", inicial); // %c imprime um único caractere
    printf("Curso: %s\n", curso); // %s imprime a cadeia de caracteres (texto)

    return 0; // Indica que o programa terminou sem erros
} // Fim da função main
