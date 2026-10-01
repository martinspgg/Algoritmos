#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool lContinua = true;
    int numEscolhido;
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
        scanf("%d", &numEscolhido);

        if (numEscolhido == 1)
        {
            printf("Digite o primeiro número: ");
            scanf("%f", &n1);
            printf("Digite o segundo número: ");
            scanf("%f", &n2);
            resultado = n1 + n2;
            printf("======================== RESUTADO ========================\n");
            printf("%.1f", resultado);
        }
        else if (numEscolhido == 2)
        {
            printf("Digite o primeiro número: ");
            scanf("%f", &n1);
            printf("Digite o segundo número: ");
            scanf("%f", &n2);
            resultado = n1 - n2;
            printf("======================== RESUTADO ========================\n");
            printf("%.1f", resultado);
        }
        else if (numEscolhido == 3)
        {
            printf("Digite o primeiro número: ");
            scanf("%f", &n1);
            printf("Digite o segundo número: ");
            scanf("%f", &n2);
            resultado = n1 * n2;
            printf("======================== RESUTADO ========================\n");
            printf("%.1f", resultado);
        }
        else if (numEscolhido == 4)
        {
            printf("Digite o primeiro número: ");
            scanf("%f", &n1);
            printf("Digite o segundo número: ");
            scanf("%f", &n2);
            resultado = n1 / n2;
            printf("======================== RESUTADO ========================\n");
            printf("%.1f", resultado);
        }
        else if (numEscolhido == 5)
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