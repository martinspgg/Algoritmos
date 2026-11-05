// Exercício 8: Máscara Estruturada de Versão e Data de Compilação
// Guarda dia, mês, ano e versão de um software e imprime tudo em uma única mensagem.

#include <stdio.h> // Biblioteca padrão de entrada e saída (necessária para printf)

int main() { // Função principal: onde o programa começa a executar
    int dia = 25; // Dia de lançamento (inteiro)
    int mes = 10; // Mês de lançamento (inteiro)
    int ano = 2026; // Ano de lançamento (inteiro)
    float versao = 2.5; // Índice da versão do sistema (número real)

    printf("Pacote lançado em %d/%d/%d - Versão %.1f\n", dia, mes, ano, versao); // As barras ficam coladas nos números (sem espaços) e %.1f mostra a versão com 1 casa decimal

    return 0; // Indica que o programa terminou sem erros
} // Fim da função main
