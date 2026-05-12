#include <stdio.h>

int main() {

    int dias;
    int hospedes20 = 0;
    int totalHospedes = 0;

    float valor;
    float somaContas = 0;
    float somaDias = 0;
    float maiorConta = 0;

    while(1) {

        printf("Quantidade de diarias: ");
        scanf("%d", &dias);

        if(dias == 0) {
            break;
        }

        valor = dias * 150;

        if(dias <= 5) {
            valor -= valor * 0.05;
        }
        else if(dias <= 10) {
            valor -= valor * 0.10;
        }
        else {
            valor -= valor * 0.15;
        }

        printf("Valor a pagar: R$ %.2f\n", valor);

        totalHospedes++;
        somaContas += valor;
        somaDias += dias;

        if(valor > maiorConta) {
            maiorConta = valor;
        }

        if(dias > 20) {
            hospedes20++;
        }
    }

    printf("\nHospedes acima de 20 dias: %d\n", hospedes20);

    if(totalHospedes > 0) {

        printf("Media contas: R$ %.2f\n",
               somaContas / totalHospedes);

        printf("Media dias permanencia: %.2f\n",
               somaDias / totalHospedes);

        printf("Maior conta paga: R$ %.2f\n",
               maiorConta);
    }

    return 0;
}
