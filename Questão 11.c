#include <stdio.h>

int main() {
    int valor;
    int positivos = 0, negativos = 0, zeros = 0;

    for(int i = 1; i <= 5; i++) {
        printf("Digite um valor: ");
        scanf("%d", &valor);

        if(valor > 0) {
            positivos++;
        } 
        else if(valor < 0) {
            negativos++;
        } 
        else {
            zeros++;
        }
    }

    printf("\nPositivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Zeros: %d\n", zeros);

    return 0;
}
