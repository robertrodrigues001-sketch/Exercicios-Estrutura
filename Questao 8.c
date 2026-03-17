#include <stdio.h>
#include <math.h> 

int main() {
    int num1, num2;
    double resultado1, resultado2;


    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    
    resultado1 = pow(num1, num2);
    resultado2 = pow(num2, num1); 

    
    printf("%d elevado a %d é %.2lf\n", num1, num2, resultado1);
    printf("%d elevado a %d é %.2lf\n", num2, num1, resultado2);

    return 0;
}
