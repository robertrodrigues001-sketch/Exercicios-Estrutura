#include <stdio.h>

int main() {

    float custoFabrica;

    printf("Digite o custo de fabrica: ");
    scanf("%f", &custoFabrica);

    float distribuidor = custoFabrica * 0.28;

    float impostos = custoFabrica * 0.45;

    float custoConsumidor =
        custoFabrica + distribuidor + impostos;

    printf("Custo ao consumidor: R$ %.2f\n",
           custoConsumidor);

    return 0;
}
