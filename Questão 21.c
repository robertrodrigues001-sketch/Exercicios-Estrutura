#include <stdio.h>

int main() {
    int num1, num2;
    int resultado = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    for(int i = 1; i <= num2; i++) {
        resultado += num1;
    }

    printf("%d x %d = %d\n", num1, num2, resultado);

    return 0;
}
