#include <stdio.h>

int main() {
    int idade;
    char nome['100'];

    printf("Digite seu nome: ");
    scanf("%s", &nome); 
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18)
    {
      printf("%s voce tem %d anos e é maior de idade.\n", &nome, idade);
    }
    else
    {
        printf("Você não é maior de idade.\n");
    }
    
    return 0;
}