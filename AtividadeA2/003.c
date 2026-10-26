// Exercício 3: Mapeamento de Coordenadas Geográficas de Monitoramento
// Armazena as coordenadas de um posto de medição e exibe tudo em uma única linha com barras verticais.

#include <stdio.h> // Biblioteca padrão de entrada e saída (necessária para printf)

int main() { // Função principal: onde o programa começa a executar
    float latitude = -23.5505; // Latitude em precisão simples (float)
    float longitude = -46.6333; // Longitude em precisão simples (float)
    char quadrante = 'S'; // Sigla do quadrante (um único caractere)
    int codigoEstacao = 1024; // Código numérico da estação (inteiro)

    printf("Lat: %.4f | Long: %.4f | Quadrante: %c | Estação: %d\n", latitude, longitude, quadrante, codigoEstacao); // Uma linha só: %.4f = 4 casas decimais, | separa os campos

    return 0; // Indica que o programa terminou sem erros
} // Fim da função main
