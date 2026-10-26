#include <stdio.h>

int main() {
    
    char nome[100];
    int idade;
    float altura;
    
    printf("Digite seu nome: ");
    scanf("%s" , &nome);
    printf("Digite sua idade: ");
    scanf("%d" , &idade);
    printf("Digite sua altura: ");
    scanf ("%f" , &altura);



    printf("nome: %s\n" , nome);
    printf("idade %d\n" , idade);
    printf("altura %.2f\n" , altura);
     
    return 0;
}