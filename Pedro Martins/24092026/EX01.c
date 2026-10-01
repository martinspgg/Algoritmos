// 1. Média ponderada com validação. Leia três notas e seus respectivos pesos (2, 3 e 5). Calcule a média ponderada e exiba a situação (Aprovado se média ≥ 6, Exame se entre 4 e 6, Reprovado se menor). Se algum peso for digitado como 0, exiba uma mensagem de erro antes de calcular.

#include <stdio.h>

int main()
{
    float n1, n2, n3;
    int p1, p2, p3;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite o peso da nota ( 1-3 ): ");
    scanf("%d", &p1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite o peso da nota ( 1-3 ): ");
    scanf("%d", &p2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    printf("Digite o peso da nota ( 1-3 ): ");
    scanf("%d", &p3);

    if (p1 == 0 || p2 == 0 || p3 == 0)
    {
        printf("O peso da nota não pode ser igual a 0!");
    }
    else
    {
        media = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / 3;

        if (media >= 6){
            printf("Aprovado!");
        }
        else if (media >= 4 && media < 6){
            printf("Recuperação!");
        }
        else{
            printf("Reprovado!");
        }
    }


    return 0;
}