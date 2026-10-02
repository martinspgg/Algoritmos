
#include <stdio.h>

int main() {
    int tabu, i;

    printf("Digite qual tabuada voce quer: ");
    scanf("%d", &tabu);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", tabu, i, tabu * i);
    }

    return 0;
}