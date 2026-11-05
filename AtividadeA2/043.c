/*
Exercício 43: Auditoria Pedagógica com Duplo Nível de Média
O programa deve ler um valor inteiro N representando a quantidade de discentes em uma classe acadêmica e iterar exatamente esse número de vezes. Em cada repetição, o código captura duas notas para o aluno correspondente, calcula sua média aritmética individual, emite a mensagem de aprovação se a média for maior ou igual a 6.0 ou reprovação caso contrário, e acumula as médias parciais em uma variável global para calcular e exibir a média agregada de toda a classe ao final.
*/

#include <stdio.h>

int main() {
    int n, i;                        // n = quantidade de alunos, i = contador
    float nota1, nota2;              // as duas notas de cada aluno
    float media;                     // média do aluno
    float somaMedias = 0;            // acumulador das médias de todos os alunos

    printf("Quantidade de alunos: ");
    scanf("%d", &n);

    // Repete uma vez para cada aluno
    for (i = 1; i <= n; i++) {
        printf("Digite as duas notas do aluno %d: ", i);
        scanf("%f %f", &nota1, &nota2);

        media = (nota1 + nota2) / 2;         // média aritmética
        somaMedias = somaMedias + media;     // guarda para a média da turma

        if (media >= 6.0) {
            printf("Media %.2f - Aprovado\n", media);
        } else {
            printf("Media %.2f - Reprovado\n", media);
        }
    }

    // Só calcula a média da turma se houver alunos (evita divisão por zero)
    if (n > 0) {
        printf("Media da turma: %.2f\n", somaMedias / n);
    }

    return 0;
}
