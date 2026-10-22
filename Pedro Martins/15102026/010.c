// F = (C × 9.0 / 5.0) + 32.0    e     K = C + 273.15

// Biblioteca usada para entrada (scanf) e saida (printf).
#include <stdio.h>

int main() {
    // Temperatura informada em graus Celsius.
    float nCelcius = 0.0;
    // Resultado da conversao para Fahrenheit.
    float nConF    = 0.0;
    // Resultado da conversao para Kelvin.
    float nConK    = 0.0;

    // Solicita a temperatura que sera convertida.
    printf("\n\nDigite a temperatura em Graus Celcius: ");
    // Le um numero decimal e armazena no endereco de nCelcius.
    scanf("%f", &nCelcius);

    // Aplica a formula de Celsius para Fahrenheit.
    nConF = (nCelcius * 9.0 / 5.0) + 32.0;
    // Converte Celsius para Kelvin somando 273,15.
    nConK = nCelcius + 273.15;

    // Exibe os resultados com duas casas decimais.
    printf("\nConversão de Celcius para Fahrenheit: %.2f\n", nConF);
    printf("Conversão de Celcius para Kelvin: %.2f\n", nConK);

    // Indica que o programa terminou normalmente.
    return 0;
}