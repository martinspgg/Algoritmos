#include <stdio.h>

int main() {
    
    int i, alunoAprov = 0, alunoRecup = 0, alunoRepro = 0;
    float nota1, nota2, media;

    for (i = 1; i <= 2; i++) {

        printf("\nAluno %d\n", i);

        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2.0f;

        if (media >= 6) {
            alunoAprov = alunoAprov + 1;
        } else if (media >=4) {
            alunoRecup = alunoRecup + 1;
        }else if (media <4) {
            alunoRepro = alunoRepro + 1;
    }
}
    printf("\nAlunos APROVADOS: %d\n", alunoAprov);
    printf("Alunos RECUPERAÇÃo: %d\n", alunoRecup);
    printf("Alunos REPROVADO: %d\n", alunoRepro);
    return 0;
}