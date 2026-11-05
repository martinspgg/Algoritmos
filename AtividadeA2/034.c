#include <stdio.h>

int main(void) {
    int estoque, produto;
    int reposicao = 0;

    for (produto = 1; produto <= 10; produto++) {
        printf("Digite a quantidade em estoque do produto %d: ", produto);
        scanf("%d", &estoque);

        if (estoque <= 5) {
            printf("Produto %d: Reposicao necessaria\n", produto);
            reposicao++;
        }
    }

    printf("\nQuantidade de produtos que precisam de reposicao: %d\n",
           reposicao);

    return 0;
}
