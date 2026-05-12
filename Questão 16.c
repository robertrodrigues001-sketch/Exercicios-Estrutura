#include <stdio.h>

int main() {
    int idade1, idade2, idade3;
    float media;

    printf("Digite a primeira idade: ");
    scanf("%d", &idade1);

    printf("Digite a segunda idade: ");
    scanf("%d", &idade2);

    printf("Digite a terceira idade: ");
    scanf("%d", &idade3);

    media = (idade1 + idade2 + idade3) / 3.0;

    printf("Media das idades: %.2f\n", media);

    return 0;
}
