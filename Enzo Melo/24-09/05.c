#include <stdio.h>
#include <stdbool.h>

int main() {
    int numEscolhido;
    int numTabuada;
    int i;
    int numMult;
    bool lContinua = true;


    while (lContinua == true) {
        printf("Qual tabuada você desejar buscar?: ");
        scanf("%d", &numTabuada);

        if(numTabuada == 0) {
            printf("Tabuada inválida. Digite uma tabuada válida!");
        } else {
            for(i = 0; i <= 10; i++) {
                numMult = i * numTabuada;
                printf("%d * %d = %d\n", numTabuada, i, numMult);
            }

            printf("Deseja escolher outra tabuada? (1-Sim / 0-Não): ");
            scanf("%d", &numEscolhido);

            if (numEscolhido == 0) {
                lContinua = false;
            } else if (numEscolhido == 1){
                lContinua = true;
            } else {
                printf("Escolha inválida! Escolha uma opção válida.");
            }
        }
    }


    return 0;
}