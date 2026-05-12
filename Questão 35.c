#include <stdio.h>

int main() {

    float raio, altura, volume;
    float pi = 3.14;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    volume = pi * raio * raio * altura;

    printf("Volume do cilindro: %.2f\n", volume);

    return 0;
}
