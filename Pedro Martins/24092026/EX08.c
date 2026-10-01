// 8. Menu de calculadora com repetição. Monte um menu com printf mostrando as opções 1-Soma, 2-Subtração, 3-Multiplicação, 4-Divisão, 5-Sair. Use while para repetir o menu, scanf para ler a opção, e if/else if para executar a operação escolhida, tratando divisão por zero.

#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool lContinua = true;
    int nEscoU;
    float n1, n2;
    float resultado;

    while (lContinua == true)
    {
        printf("\n======================== Escolha uma opção para continuar ========================\n");
        printf("1-Soma\n");
        printf("2-Subtração\n");
        printf("3-Multiplicação\n");
        printf("4-Divisão\n");
        printf("5-Sair\n");
        printf("==================================================================================\n");
        scanf("%d", &nEscoU);

        if (nEscoU == 1)
        {
            printf("Digite o primeiro número: ");
            scanf("%f", &n1);
            printf("Digite o segundo número: ");
            scanf("%f", &n2);
            resultado = n1 + n2;
            printf("======================== RESUTADO ========================\n");
            printf("%.1f", resultado);
        }
        else if (nEscoU == 2)
        {
            printf("Digite o primeiro número: ");
            scanf("%f", &n1);
            printf("Digite o segundo número: ");
            scanf("%f", &n2);
            resultado = n1 - n2;
            printf("======================== RESUTADO ========================\n");
            printf("%.1f", resultado);
        }
        else if (nEscoU == 3)
        {
            printf("Digite o primeiro número: ");
            scanf("%f", &n1);
            printf("Digite o segundo número: ");
            scanf("%f", &n2);
            resultado = n1 * n2;
            printf("======================== RESUTADO ========================\n");
            printf("%.1f", resultado);
        }
        else if (nEscoU == 4)
        {
            printf("Digite o primeiro número: ");
            scanf("%f", &n1);
            printf("Digite o segundo número: ");
            scanf("%f", &n2);
            resultado = n1 / n2;
            printf("======================== RESUTADO ========================\n");
            printf("%.1f", resultado);
        }
        else if (nEscoU == 5)
        {
            printf("Encerrando programa! Até a próxima.");
            lContinua = false;
        }
        else
        {
            printf("Opção inválida, escolha uma opção existente.");
        }
    }

    return 0;
}