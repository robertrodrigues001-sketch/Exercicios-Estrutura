#include <stdio.h>

int main() {

    int uso;
    int total = 0;

    int menos10 = 0;
    int entre10e15 = 0;
    int acima15 = 0;

    while(1) {

        printf("Numero de vezes que utilizou: ");
        scanf("%d", &uso);

        if(uso < 0) {
            break;
        }

        total++;

        if(uso < 10) {
            menos10++;
        }
        else if(uso <= 15) {
            entre10e15++;
        }
        else {
            acima15++;
        }
    }

    printf("Percentual menos de 10: %.2f%%\n",
           (menos10 * 100.0) / total);

    printf("Percentual entre 10 e 15: %.2f%%\n",
           (entre10e15 * 100.0) / total);

    printf("Percentual acima de 15: %.2f%%\n",
           (acima15 * 100.0) / total);

    printf("Total entrevistados: %d\n", total);

    return 0;
}
