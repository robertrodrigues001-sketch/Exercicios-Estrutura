#include <stdio.h>

int main() {

    float altura;
    int sexo;

    float somaMulheres = 0;
    float somaTotal = 0;

    int mulheres = 0;
    int homens = 0;
    int mulheresBaixas = 0;

    for(int i = 1; i <= 50; i++) {

        printf("Digite a altura: ");
        scanf("%f", &altura);

        printf("Sexo (0-Masc / 1-Fem): ");
        scanf("%d", &sexo);

        somaTotal += altura;

        if(sexo == 0) {
            homens++;
        } else {
            mulheres++;
            somaMulheres += altura;

            if(altura < 1.65) {
                mulheresBaixas++;
            }
        }
    }

    printf("Media altura mulheres: %.2f\n",
           somaMulheres / mulheres);

    printf("Media altura populacao: %.2f\n",
           somaTotal / 50);

    printf("Percentual homens: %.2f%%\n",
           (homens * 100.0) / 50);

    printf("Quantidade mulheres: %d\n", mulheres);

    printf("Percentual mulheres abaixo 1.65: %.2f%%\n",
           (mulheresBaixas * 100.0) / mulheres);

    return 0;
}
