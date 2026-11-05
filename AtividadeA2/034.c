#include <stdio.h> // Biblioteca para utilizar printf e scanf

int main(void) {
    // Variáveis para armazenar o estoque e identificar o produto
    int estoque, produto;
    int reposicao = 0; // Contador de produtos que precisam de reposição

    // Repete o processo para os 10 produtos
    for (produto = 1; produto <= 10; produto++) {

        // Solicita a quantidade em estoque de cada produto
        printf("Digite a quantidade em estoque do produto %d: ", produto);
        scanf("%d", &estoque); // Lê a quantidade informada

        // Verifica se o estoque é menor ou igual a 5
        if (estoque <= 5) {
            // Informa que o produto precisa de reposição
            printf("Produto %d: Reposicao necessaria\n", produto);

            reposicao++; // Aumenta o contador de produtos para reposição
        }
    }

    // Exibe a quantidade total de produtos que precisam de reposição
    printf("\nQuantidade de produtos que precisam de reposicao: %d\n",
           reposicao);

    return 0; // Finaliza o programa
}