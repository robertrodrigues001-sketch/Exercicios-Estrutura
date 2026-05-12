#include <stdio.h>

int main() {

    float raio, volume;
    float pi = 3.14;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    volume = (4.0 / 3.0) * pi * raio * raio * raio;

    printf("Volume da esfera: %.2f\n", volume);

    return 0;
}
