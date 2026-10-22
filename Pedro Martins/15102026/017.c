/*
Exercício 17: Verificação de Maioridade Legal e Habilitação de Condutores
O programa deve receber a idade de um indivíduo como um número inteiro via teclado. Utilizando uma estrutura condicional if associada ao ramo alternativo else, o código deve testar a condição Idade >= 18; caso verdadeira, o sistema imprime a confirmação de aptidão para abertura do processo de habilitação veicular; caso contrário, exibe mensagem indicando a restrição legal decorrente de menoridade.
*/


#include <stdio.h>

int main()
{
    int nIdade = 0;

    printf("\nDigite sua idade: ");
    scanf("%d", &nIdade);

    printf("\n================ RESULTADOS ================");

    if (nIdade >= 18) {
        printf("\nVoce esta apto a iniciar o processo de habilitacao.");
    }
    else {
        printf("\nVoce nao esta apto a iniciar o processo de habilitacao.");
        printf("\nMotivo: idade inferior a 18 anos.");
    }

    printf("\n============================================\n");

    return 0;
}
