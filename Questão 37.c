#include <stdio.h>

int main() {

    float kmAntes, kmDepois;
    float litros, preco;

    printf("Km antes da viagem: ");
    scanf("%f", &kmAntes);

    printf("Km depois da viagem: ");
    scanf("%f", &kmDepois);

    printf("Litros gastos: ");
    scanf("%f", &litros);

    printf("Preco do combustivel: ");
    scanf("%f", &preco);

    float kmRodados = kmDepois - kmAntes;

    float consumo = kmRodados / litros;

    float custo = litros * preco;

    printf("Km rodados: %.2f\n", kmRodados);
    printf("Km por litro: %.2f\n", consumo);
    printf("Custo da viagem: R$ %.2f\n", custo);

    return 0;
}
