#include <stdio.h>
int main(){
int i;
int n1;
int qtdMaiores = 0;

for (i = 1; i <= 6; i++){
    printf ("Digite a %d nota:", i);
    scanf("%d", &n1);

    if(n1 >= 6) {
        qtdMaiores++;
    }

}
printf("Quantidade de maiores ou iguais: %d", qtdMaiores);
return 0;
}