#include <stdio.h>

int main() {

    float largura, comprimento;
    int potenciaLampada;

    printf("Digite a largura do comodo: ");
    scanf("%f", &largura);

    printf("Digite o comprimento do comodo: ");
    scanf("%f", &comprimento);

    printf("Potencia da lampada (watts): ");
    scanf("%d", &potenciaLampada);

    float area = largura * comprimento;

    float wattsNecessarios = area * 18;

    float quantidade = wattsNecessarios / potenciaLampada;

    printf("Quantidade de lampadas necessarias: %.0f\n",
           quantidade);

    return 0;
}
