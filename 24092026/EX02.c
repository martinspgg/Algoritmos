// 2.Maior, menor e média de N números. Peça ao usuário quantos números ele quer digitar (N), leia-os um a um em um for, e ao final mostre o maior valor, o menor valor e a média de todos, sem usar vetor (apenas variáveis acumuladoras).

#include <stdio.h>

int main()
{
    int maior = 0;
    int menor = 0;
    int nTEscolha = 0;
    int i;
    int y;
    int nDigitado;
    float nSomaNum = 0;
    float media = 0;

    printf("Quantos números você deseja digitar? ");
    scanf("%d", &nTEscolha);

    for (i = 1; i <= nTEscolha; i++)
    {
        printf("Digite o %dº número: ", i);
        scanf("%d", &nDigitado);

        if (i == 1)
        {
            maior = nDigitado;
            menor = nDigitado;
        }
        else
        {
            if (nDigitado > maior)
            {
                maior = nDigitado;
            }
            if (nDigitado < menor)
            {
                menor = nDigitado;
            }
        }

        nSomaNum = nSomaNum + nDigitado;
        media = nSomaNum / nTEscolha;
    }

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Média: %.1f\n", media);

    return 0;
}