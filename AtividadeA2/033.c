#include <stdio.h> // Biblioteca para utilizar printf e scanf

int main(void) {
    // Variáveis para armazenar as notas e a média
    float nota1, nota2, media;

    // Variáveis para identificar o participante e contar aprovados e reprovados
    int participante, aprovados = 0, reprovados = 0;

    // Repete o processo para os 5 participantes
    for (participante = 1; participante <= 5; participante++) {

        // Solicita e lê a primeira nota do participante
        printf("Digite a primeira nota do participante %d: ", participante);
        scanf("%f", &nota1);

        // Solicita e lê a segunda nota do participante
        printf("Digite a segunda nota do participante %d: ", participante);
        scanf("%f", &nota2);

        // Calcula a média das duas notas
        media = (nota1 + nota2) / 2.0f;

        // Exibe o número do participante, sua média e situação
        printf("Participante %d - Media: %.2f - Situacao: ",
               participante, media);

        // Verifica se a média é maior ou igual a 6
        if (media >= 6.0f) {
            printf("Aprovado\n"); // Exibe que o participante foi aprovado
            aprovados++; // Aumenta o contador de aprovados
        } else {
            printf("Reprovado\n"); // Exibe que o participante foi reprovado
            reprovados++; // Aumenta o contador de reprovados
        }

        printf("\n"); // Pula uma linha para separar os participantes
    }

    // Exibe o total de participantes aprovados e reprovados
    printf("Total de aprovados: %d\n", aprovados);
    printf("Total de reprovados: %d\n", reprovados);

    return 0; // Finaliza o programa
}