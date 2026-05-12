#include <stdio.h>

int main() {

    int produtos;
    float salarioFixo;
    float salarioFinal;

    float somaSalarios = 0;
    float maiorSalarioFixo = 0;

    for(int i = 1; i <= 1200; i++) {

        printf("Quantidade de produtos vendidos: ");
        scanf("%d", &produtos);

        printf("Salario fixo: ");
        scanf("%f", &salarioFixo);

        float comissao;

        if(produtos <= 5) {
            comissao = produtos * 1.50;
        }
        else if(produtos <= 50) {
            comissao = produtos * 2.00;
        }
        else {
            comissao = produtos * 2.50;
        }

        salarioFinal = salarioFixo + comissao;

        printf("Salario do funcionario: R$ %.2f\n",
               salarioFinal);

        somaSalarios += salarioFinal;

        if(salarioFixo > maiorSalarioFixo) {
            maiorSalarioFixo = salarioFixo;
        }
    }

    printf("Media salarios: R$ %.2f\n",
           somaSalarios / 1200);

    printf("Maior salario fixo: R$ %.2f\n",
           maiorSalarioFixo);

    return 0;
}
