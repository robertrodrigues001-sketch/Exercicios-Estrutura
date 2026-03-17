#include <stdio.h>
#include <math.h>  

int main() {
    double num, raiz;

    
    printf("Digite um número: ");
    scanf("%lf", &num);

    
    raiz = sqrt(num);

    
    printf("A raiz quadrada de %.2lf é %.2lf\n", num, raiz);

    return 0;
}
