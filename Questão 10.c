#include <stdio.h>

int main() {
    int num1, num2, quociente;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    quociente = num1 / num2;

    printf("Quociente da divisao inteira: %d\n", quociente);

    return 0;
}
