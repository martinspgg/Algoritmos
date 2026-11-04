#include <stdio.h>  // biblioteca que permite usar printf e scanf

int main(void) {
    // Nota final do participante (de 0 a 10, pode ter casa decimal)
    double nota;

    // Frequência em porcentagem (de 0 a 100)
    double frequencia;

    // Pede a nota e guarda na variável nota
    printf("Digite a nota final: ");
    scanf("%lf", &nota);

    // Pede a frequência e guarda na variável frequencia
    printf("Digite a frequencia (em %%): ");
    scanf("%lf", &frequencia);

    // O && só deixa passar se as DUAS condições forem verdadeiras ao mesmo tempo:
    // nota de pelo menos 6,0 E frequência de pelo menos 75
    if (nota >= 6.0 && frequencia >= 75.0) {
        // Cumpriu os dois requisitos, então o certificado é liberado
        printf("Certificado liberado\n");
    } else {
        // Se falhou em qualquer um dos dois (ou nos dois), não libera
        printf("Certificado não liberado\n");
    }

    // Avisa ao sistema que o programa terminou sem erros
    return 0;
}