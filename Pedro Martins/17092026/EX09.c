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

int main()
{
    int n1;
    int qtdMaiores = 0;
    int i;

    for (i = 1; i < 6; i++)
    {
        printf("Digite a %dº nota: ", i);
        scanf("%d", &n1);

        if(n1 >= 6){
            qtdMaiores++;
        }
    }

    printf("Quantidade de maiores ou iguais: %d", qtdMaiores);

    return 0;
}