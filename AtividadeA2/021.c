#include <stdio.h>  // biblioteca que permite usar printf e scanf

int main(void) {
    // Valor que a pessoa planejou gastar no mês
    double orcamento;

    // Valor que ela realmente gastou
    double gasto;

    // Pede o valor planejado. Uso double porque dinheiro tem centavos
    printf("Digite o valor planejado para os gastos: ");
    scanf("%lf", &orcamento);

    // Pede o valor que foi gasto de verdade
    printf("Digite o valor efetivamente gasto: ");
    scanf("%lf", &gasto);

    // Primeiro caso: gastou menos do que o planejado
    if (gasto < orcamento) {
        // A diferença é o que ainda sobra para gastar
        printf("Ainda esta disponivel: R$ %.2f\n", orcamento - gasto);

    // Segundo caso: se não gastou menos, vejo se gastou exatamente o planejado
    } else if (gasto == orcamento) {
        printf("Orçamento totalmente utilizado\n");

    // Último caso: só sobra gastar mais do que o orçamento
    } else {
        // Aqui inverto a conta para a diferença dar positiva (gasto - orçamento)
        printf("Voce gastou a mais: R$ %.2f\n", gasto - orcamento);
    }

    // Avisa ao sistema que o programa terminou sem erros
    return 0;
}