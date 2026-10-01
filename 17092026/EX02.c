#include <stdio.h>

/*
1.	Crie um programa que mostre seu nome, idade e altura.
2.	Leia dois nÃºmeros inteiros e mostre soma, subtraÃ§Ã£o e multiplicaÃ§Ã£o.
3.	Leia duas notas e calcule a mÃ©dia.
4.	Leia uma idade e informe se a pessoa Ã© maior ou menor de idade.
5.	Leia mÃ©dia e frequÃªncia e informe se o aluno estÃ¡ aprovado.
6.	Leia um nÃºmero e mostre sua tabuada de 1 a 10 usando for.
7.	Mostre os nÃºmeros de 1 a 20 usando while.
8.	Leia nÃºmeros repetidamente atÃ© que o usuÃ¡rio digite 0.
9.	Leia 5 notas usando for e informe quantas sÃ£o maiores ou iguais a 6.
*/

int main() {
    int n1 = 10;
    int n2 = 8;
    int soma = n1 + n2;
    int sub = n1 - n2;
    int mult = n1 * n2;

    printf("NÃºmeros: %d e %d\n", n1, n2);
    printf("A soma dos dois nÃºmeros Ã©: %d\n", soma);
    printf("A subtraÃ§Ã£o entre os dois nÃºmeros Ã©: %d\n ", sub);
    printf("A multiplicaÃ§Ã£o entre os dois nÃºmeros Ã© %d\n: ", mult);

    return 0;
}

int main() {
    leNumeros();
    return 0;
}

