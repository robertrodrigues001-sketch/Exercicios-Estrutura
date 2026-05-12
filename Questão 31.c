#include <stdio.h>

int main() {

    int anos, cigarrosDia;
    float precoCarteira;

    printf("Anos fumando: ");
    scanf("%d", &anos);

    printf("Cigarros por dia: ");
    scanf("%d", &cigarrosDia);

    printf("Preco da carteira: ");
    scanf("%f", &precoCarteira);

    int totalCigarros = anos * 365 * cigarrosDia;

    float totalCarteiras = totalCigarros / 20.0;

    float gasto = totalCarteiras * precoCarteira;

    printf("Total gasto: R$ %.2f\n", gasto);

    return 0;
}
