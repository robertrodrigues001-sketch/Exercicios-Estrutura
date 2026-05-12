#include <stdio.h>

int main() {
    float altura;
    int sexo;

    float maior = 0, menor = 999;
    float somaMulheres = 0;
    int qtdMulheres = 0;
    int homens = 0;
    int mulheresAbaixo = 0;

    while(1) {

        printf("Digite a altura: ");
        scanf("%f", &altura);

        if(altura <= 0) {
            break;
        }

        printf("Sexo (1-Masc / 2-Fem): ");
        scanf("%d", &sexo);

        if(altura > maior) {
            maior = altura;
        }

        if(altura < menor) {
            menor = altura;
        }

        if(sexo == 1) {
            homens++;
        }

        if(sexo == 2) {
            somaMulheres += altura;
            qtdMulheres++;

            if(altura < 1.68) {
                mulheresAbaixo++;
            }
        }
    }

    printf("Maior altura: %.2f\n", maior);
    printf("Menor altura: %.2f\n", menor);
    printf("Numero de homens: %d\n", homens);

    if(qtdMulheres > 0) {
        printf("Media altura mulheres: %.2f\n",
               somaMulheres / qtdMulheres);

        printf("Percentual mulheres abaixo de 1.68: %.2f%%\n",
               (mulheresAbaixo * 100.0) / qtdMulheres);
    }

    return 0;
}
