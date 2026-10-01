// 7. Verificador de número primo. Leia um número inteiro positivo e, usando for e o operador %, verifique se ele é primo (não é divisível por nenhum número entre 2 e ele mesmo, exceto por 1 e por ele próprio).

#include <stdio.h>

int main() {

    int numero;
    int i;
    int primo = 1;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (i = 2; i < numero; i++) {

        if (numero % i == 0) {
            primo = 0;
        }
    }

    if (primo == 1) {
        printf("O numero e primo.\n");
    } else {
        printf("O numero nao e primo.\n");
    }

    return 0;
}