#include <stdio.h>

int main() {

    char nome[50];
    int horas, dependentes;

    printf("Nome do funcionario: ");
    scanf("%s", nome);

    printf("Horas trabalhadas: ");
    scanf("%d", &horas);

    printf("Numero de dependentes: ");
    scanf("%d", &dependentes);

    float salarioBruto =
        (horas * 3.0) + (dependentes * 100.0);

    float desconto = salarioBruto * 0.135;

    float salarioLiquido = salarioBruto - desconto;

    printf("Funcionario: %s\n", nome);
    printf("Salario liquido: R$ %.2f\n",
           salarioLiquido);

    return 0;
}
