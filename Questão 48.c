#include <stdio.h>

int main() {

    float H, R;
    int N;

    printf("Altura inicial: ");
    scanf("%f", &H);

    printf("Coeficiente R: ");
    scanf("%f", &R);

    printf("Numero de saltos: ");
    scanf("%d", &N);

    float distancia = H;
    float altura = H;

    for(int i = 1; i <= N; i++) {

        altura *= R;

        distancia += altura * 2;
    }

    printf("Distancia percorrida: %.2f\n", distancia);

    printf("Altura do %d salto: %.2f\n",
           N, altura);

    return 0;
}
