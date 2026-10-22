// F = (C × 9.0 / 5.0) + 32.0    e     K = C + 273.15

#include <stdio.h>

int main() {
    float nCelcius = 0.0;
    float nConF    = 0.0;
    float nConK    = 0.0;

    printf("\n\nDigite a temperatura em Graus Celcius: ");
    scanf("%f", &nCelcius);

    nConF = (nCelcius * 9.0 / 5.0) + 32.0;
    nConK = nCelcius + 273.15;

    printf("\nConversão de Celcius para Fahrenheit: %.2f\n", nConF);
    printf("Conversão de Celcius para Kelvin: %.2f\n", nConK);

    return 0;
}