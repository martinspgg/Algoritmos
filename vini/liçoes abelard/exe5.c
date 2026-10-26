#include <stdio.h>

int main() {

    int media, frequencia;

        printf("digite sua média:");
        scanf("%s", &media);
        printf("digite sua frequencia de 0 a 100: ");
        scanf("%s", &frequencia);

        if(media>=6, frequencia>=60)
        {
            printf("APROVADO\n");
        }
        else
        {
            printf("REPROVADO\n");

        }

    return 0;
}

