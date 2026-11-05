#include <stdio.h>  // biblioteca que permite usar printf e scanf

int main(void) {
    // Indicador da reserva: 1 = reserva confirmada, 0 = sem reserva
    int reserva_confirmada;

    // Indicador da carteirinha: 1 = tem carteirinha, 0 = não tem
    int tem_carteirinha;

    // Indicador do documento de identificação: 1 = tem, 0 = não tem
    int tem_documento;

    // Pergunta se a reserva foi confirmada
    printf("A reserva esta confirmada? (1 = sim, 0 = nao): ");
    scanf("%d", &reserva_confirmada);

    // Pergunta se o aluno tem a carteirinha
    printf("O aluno tem carteirinha? (1 = sim, 0 = nao): ");
    scanf("%d", &tem_carteirinha);

    // Pergunta se o aluno tem documento de identificação
    printf("O aluno tem documento de identificacao? (1 = sim, 0 = nao): ");
    scanf("%d", &tem_documento);

    // A reserva é obrigatória, então ela fica ligada com && ao resto da condição.
    // Dentro dos parênteses uso || porque basta UM dos dois documentos.
    // Os parênteses são importantes: sem eles o && seria avaliado primeiro
    // e a lógica ficaria errada
    if (reserva_confirmada == 1 && (tem_carteirinha == 1 || tem_documento == 1)) {
        // Tem reserva E pelo menos um documento: pode entrar
        printf("Entrada permitida\n");
    } else {
        // Faltou a reserva ou faltaram os dois documentos
        printf("Entrada não permitida\n");
    }

    // Avisa ao sistema que o programa terminou sem erros
    return 0;
}