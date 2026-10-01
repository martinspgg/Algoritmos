#include <stdio.h>

int main() {

    int numEscolha, numDigitado, maior, menor, i, numSoma = 0;
    float media;

    printf("Quantos numeros deseja digitar? ");
    scanf("%d", &numEscolha);

    for (i = 1; i <= numEscolha; i++) {

        printf("\nDigite o %d numero: ", i);
        scanf("%d", &numDigitado);

        if (i == 1) {

            maior = numDigitado;
            menor = numDigitado;

        } else {

            if (numDigitado > maior) {
                maior = numDigitado;
            }

            if (numDigitado < menor) {
                menor = numDigitado;
            }
        }

        numSoma = numSoma + numDigitado;
    }

    media = (float) numSoma / numEscolha;

    printf("\nMaior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Media: %.2f\n", media);

    return 0;
}
