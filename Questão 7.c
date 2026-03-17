#include <stdio.h>

int main() {
    double num, quadrado;

    
    printf("Digite um número: ");
    scanf("%lf", &num);

    
    quadrado = num * num;

    
    printf("O quadrado de %.2lf é %.2lf\n", num, quadrado);

    return 0;
}
