// Tabuada até o usuário decidir parar. Peça um número, mostre a tabuada de 1 a 10 com for e, ao final, pergunte "Deseja ver outra tabuada? (1-Sim / 0-Não)". Use while para repetir todo o processo até o usuário escolher sair.

#include <stdio.h>
#include <stdbool.h>

int main() {
    int nEscU;
    int nTabu;
    int i;
    int nMult;
    bool lContinua = true;


    while (lContinua == true) {
        printf("Qual tabuada você desejar buscar?: ");
        scanf("%d", &nTabu);

        if(nTabu == 0) {
            printf("Tabuada inválida. Digite uma tabuada válida!");
        } else {
            for(i = 0; i <= 10; i++) {
                nMult = i * nTabu;
                printf("%d * %d = %d\n", nTabu, i, nMult);
            }

            printf("Deseja escolher outra tabuada? (1-Sim / 0-Não): ");
            scanf("%d", &nEscU);

            if (nEscU == 0) {
                lContinua = false;
            } else if (nEscU == 1){
                lContinua = true;
            } else {
                printf("Escolha inválida! Escolha uma opção válida.");
            }
        }
    }


    return 0;
}