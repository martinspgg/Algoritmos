#include <stdio.h>

int main(void) {
    int totalPaginas, pagina = 1;

    printf("Digite a quantidade total de paginas: ");
    scanf("%d", &totalPaginas);

    while (pagina <= totalPaginas) {
        printf("Imprimindo pagina %d\n", pagina);
        pagina++;
    }

    printf("Impressao concluida.\n");

    return 0;
}
