#include <stdio.h>

int main() {

    int idade;
    int acidente;

    float salarioBruto;
    float salarioLiquido;

    int pessoasAcidente = 0;
    int somaIdades = 0;

    float totalSalarios = 0;

    while(1) {

        printf("Idade: ");
        scanf("%d", &idade);

        printf("Salario bruto: ");
        scanf("%f", &salarioBruto);

        if(salarioBruto < 0) {
            break;
        }

        printf("Teve acidente? (1-Sim / 0-Nao): ");
        scanf("%d", &acidente);

        if(salarioBruto > 1500) {
            salarioLiquido =
                salarioBruto - (salarioBruto * 0.10);
        }
        else {
            salarioLiquido = salarioBruto;
        }

        totalSalarios += salarioLiquido;

        if(acidente == 1) {
            somaIdades += idade;
            pessoasAcidente++;
        }
    }

    if(pessoasAcidente > 0) {

        printf("Media idade acidentes: %.2f\n",
               somaIdades / (float)pessoasAcidente);
    }

    printf("Total salarios liquidos: R$ %.2f\n",
           totalSalarios);

    return 0;
}
