// Contagem de aprovados e reprovados. Leia as notas de 10 alunos usando for, calcule a média de cada um e, ao final, informe quantos foram aprovados, quantos ficaram de exame e quantos foram reprovados (três contadores).

#include <stdio.h>

int main() {
    int qtdApro = 0;
    int qtdRecup = 0;
    int qtdRepro = 0;
    int i;
    int y;
    float n1, n2, media;

    for(i = 1; i <= 10; i++) {
        for(y = 1; y < 2; y++) {
            printf("Digite a 1º nota do %dº aluno: ", i);
            scanf("%f", &n1);
            printf("Digite a 2º nota do %dº aluno: ", i);
            scanf("%f", &n2);

            media = (n1 + n2) / 2;
            if(media >= 6) {
                qtdApro += 1;
            } else if (media >= 4) {
                qtdRecup += 1;
            }
            else {
                qtdRepro += 1;
            }
        }
    }

    printf("Quantidade de aprovados: %d\n", qtdApro);
    printf("Quantidade de recuperação: %d\n", qtdRecup);
    printf("Quantidade de reprovados: %d\n", qtdRepro);

    return 0;
}