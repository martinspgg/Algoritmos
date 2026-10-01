#include <stdio.h>

int main()
{
    int n, i;
    int primeiro = 0;
    int segundo = 1;
    int proximo;

    printf("Quantos termos deseja ver? ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d ", primeiro);

        proximo = primeiro + segundo;
        primeiro = segundo;
        segundo = proximo;
    }

    printf("\n");

    return 0;
}