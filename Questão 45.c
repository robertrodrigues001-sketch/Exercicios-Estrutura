#include <stdio.h>

int main() {

    int primeiro, ultimo, razao;
    int soma = 0;

    printf("Primeiro termo: ");
    scanf("%d", &primeiro);

    printf("Ultimo termo: ");
    scanf("%d", &ultimo);

    printf("Razao da PA: ");
    scanf("%d", &razao);

    for(int i = primeiro; i <= ultimo; i += razao) {
        soma += i;
    }

    printf("Soma da PA: %d\n", soma);

    return 0;
}
