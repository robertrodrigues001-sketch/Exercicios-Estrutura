#include <stdio.h>

int main() {
    int num, opcao;

    do {
        printf("Digite um numero: ");
        scanf("%d", &num);

        for(int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", num, i, num * i);
        }

        printf("Deseja continuar? (1-SIM / 0-NAO): ");
        scanf("%d", &opcao);

    } while(opcao == 1);

    return 0;
}
