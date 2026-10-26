/*
Exercício 17: Verificação de Maioridade Legal e Habilitação de Condutores
O programa deve receber a idade de um indivíduo como um número inteiro via teclado. Utilizando uma estrutura condicional if associada ao ramo alternativo else, o código deve testar a condição Idade >= 18; caso verdadeira, o sistema imprime a confirmação de aptidão para abertura do processo de habilitação veicular; caso contrário, exibe mensagem indicando a restrição legal decorrente de menoridade.
*/


// Biblioteca para printf e scanf.
#include <stdio.h>

int main()
{
    // Guarda a idade digitada pelo usuario.
    int nIdade = 0;

    // Pede e recebe a idade como numero inteiro.
    printf("\nDigite sua idade: ");
    scanf("%d", &nIdade);

    printf("\n================ RESULTADOS ================");

    // if: executa este bloco quando a idade e de 18 anos ou mais.
    if (nIdade >= 18) {
        printf("\nVoce esta apto a iniciar o processo de habilitacao.");
    }
    // else: executa este bloco quando a condicao anterior e falsa.
    else {
        printf("\nVoce nao esta apto a iniciar o processo de habilitacao.");
        printf("\nMotivo: idade inferior a 18 anos.");
    }

    // Fecha a apresentacao do resultado.
    printf("\n============================================\n");

    // Finaliza sem erro.
    return 0;
}
