// Exercício 7: Identificação Técnica de Componente Eletroeletrônico
// Armazena atributos de um circuito integrado e exibe uma ficha técnica rotulada.

#include <stdio.h> // Biblioteca padrão de entrada e saída (necessária para printf)

int main() { // Função principal: onde o programa começa a executar
    char nome[50] = "LM317"; // Nome comercial do circuito (texto)
    float tensao = 37.0; // Tensão nominal em volts (número real)
    int lote = 20260115; // Lote de fabricação (inteiro)
    char classe = 'A'; // Classe de eficiência energética (uma única letra)

    printf("======= FICHA TÉCNICA =======\n"); // Cabeçalho da ficha
    printf("Componente......: %s\n", nome); // Rótulo + nome do componente (%s para texto)
    printf("Tensão nominal..: %.1f V\n", tensao); // %.1f mostra a tensão com 1 casa decimal
    printf("Lote............: %d\n", lote); // %d mostra o lote (inteiro)
    printf("Classe energética: %c\n", classe); // %c mostra a letra da classe
    printf("=============================\n"); // Rodapé da ficha

    return 0; // Indica que o programa terminou sem erros
} // Fim da função main
