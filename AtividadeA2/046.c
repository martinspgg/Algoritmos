/*
Exercício 46: Censo Demográfico Amostral com Encerramento por Sentinela Negativo
O programa deve processar dados amostrais de um grupo de cidadãos, coletando para cada entrevistado a sua idade (inteiro) e o seu respectivo salário mensal (ponto flutuante). A condição de permanência no laço while deve monitorar a idade, interrompendo a coleta assim que uma idade estritamente negativa for inserida; ao final, o algoritmo deve exibir a quantidade de cidadãos entrevistados, a média salarial da amostra e a maior idade encontrada.
*/

#include <stdio.h>

int main() {
    int idade;                       // idade do entrevistado
    int maiorIdade = 0;              // guarda a maior idade encontrada
    int cont = 0;                    // quantidade de entrevistados
    float salario;                   // salário do entrevistado
    float somaSalarios = 0;          // acumulador dos salários

    printf("Idade (negativa para encerrar): ");
    scanf("%d", &idade);

    // Enquanto a idade não for negativa, continua coletando
    while (idade >= 0) {
        printf("Salario mensal: ");
        scanf("%f", &salario);

        cont++;
        somaSalarios = somaSalarios + salario;

        if (idade > maiorIdade) {
            maiorIdade = idade;      // atualiza a maior idade
        }

        printf("Idade (negativa para encerrar): ");
        scanf("%d", &idade);
    }

    // Só mostra os resultados se alguém foi entrevistado (evita divisão por zero)
    if (cont > 0) {
        printf("Entrevistados: %d\n", cont);
        printf("Media salarial: %.2f\n", somaSalarios / cont);
        printf("Maior idade: %d\n", maiorIdade);
    } else {
        printf("Nenhum dado foi coletado.\n");
    }

    return 0;
}
