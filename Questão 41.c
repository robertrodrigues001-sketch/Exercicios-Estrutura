#include <stdio.h>

int main() {

    int codigo, carrosVendidos;
    char nome[50];

    float totalVendas;
    float salarioFixo;
    float valorPorCarro;

    printf("Codigo do vendedor: ");
    scanf("%d", &codigo);

    printf("Nome do vendedor: ");
    scanf("%s", nome);

    printf("Quantidade de carros vendidos: ");
    scanf("%d", &carrosVendidos);

    printf("Valor total das vendas: ");
    scanf("%f", &totalVendas);

    printf("Salario fixo: ");
    scanf("%f", &salarioFixo);

    printf("Valor por carro vendido: ");
    scanf("%f", &valorPorCarro);

    float salarioFinal =
        salarioFixo +
        (carrosVendidos * valorPorCarro) +
        (totalVendas * 0.05);

    printf("Codigo: %d\n", codigo);
    printf("Nome: %s\n", nome);
    printf("Salario mensal: R$ %.2f\n", salarioFinal);

    return 0;
}
