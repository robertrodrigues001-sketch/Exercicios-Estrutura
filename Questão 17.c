#include <stdio.h>
#include <math.h>

int main() {
    float cateto1, cateto2, hipotenusa;

    printf("Digite o primeiro cateto: ");
    scanf("%f", &cateto1);

    printf("Digite o segundo cateto: ");
    scanf("%f", &cateto2);

    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    printf("Hipotenusa: %.2f\n", hipotenusa);

    return 0;
}
