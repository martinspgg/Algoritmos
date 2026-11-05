#include <stdio.h> // Biblioteca para utilizar printf e scanf

int main(void) {
    // Variável para armazenar a quantidade total de páginas
    // e iniciar a contagem na página 1
    int totalPaginas, pagina = 1;

    // Solicita a quantidade total de páginas que serão impressas
    printf("Digite a quantidade total de paginas: ");
    scanf("%d", &totalPaginas); // Lê a quantidade informada

    // Repete enquanto a página atual for menor ou igual ao total
    while (pagina <= totalPaginas) {
        printf("Imprimindo pagina %d\n", pagina); // Exibe a página atual
        pagina++; // Avança para a próxima página
    }

    // Informa que todas as páginas foram impressas
    printf("Impressao concluida.\n");

    return 0; // Finaliza o programa
}