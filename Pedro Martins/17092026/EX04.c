#include <stdio.h>

/*
1.	Crie um programa que mostre seu nome, idade e altura.
2.	Leia dois números inteiros e mostre soma, subtração e multiplicação.
3.	Leia duas notas e calcule a média.
4.	Leia uma idade e informe se a pessoa é maior ou menor de idade.
5.	Leia média e frequência e informe se o aluno está aprovado.
6.	Leia um número e mostre sua tabuada de 1 a 10 usando for.
7.	Mostre os números de 1 a 20 usando while.
8.	Leia números repetidamente até que o usuário digite 0.
9.	Leia 5 notas usando for e informe quantas são maiores ou iguais a 6.
*/

int main(){
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade < 18) {
        printf("Usuário menor de idade");
    } else {
        printf("Usuário maior de idade");
    }

    return 0;
}