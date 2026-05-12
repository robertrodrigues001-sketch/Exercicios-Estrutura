#include <stdio.h>

int main() {
    float largura, comprimento;
    float area, total = 0;
    int opcao;

    do {

        printf("Digite a largura: ");
        scanf("%f", &largura);

        printf("Digite o comprimento: ");
        scanf("%f", &comprimento);

        area = largura * comprimento;

        total += area;

        printf("Deseja continuar? (1-SIM / 0-NAO): ");
        scanf("%d", &opcao);

    } while(opcao == 1);

    printf("Area total da residencia: %.2f\n", total);

    return 0;
}
