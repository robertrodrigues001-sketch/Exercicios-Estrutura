#include <stdio.h>

int main() {
    int num1, num2, resto;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    resto = num1 % num2;


    printf("O resto da divisão de %d por %d é %d\n", num1, num2, resto);

    return 0;
}
