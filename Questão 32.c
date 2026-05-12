#include <stdio.h>

int main() {

    float raio, comprimento;
    float pi = 3.14;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    comprimento = 2 * pi * raio;

    printf("Comprimento do circulo: %.2f\n", comprimento);

    return 0;
}
