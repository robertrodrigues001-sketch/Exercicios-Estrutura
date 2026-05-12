#include <stdio.h>

int main() {

    float fahrenheit;

    printf("Celsius\tFahrenheit\n");

    for(int celsius = 0; celsius <= 50; celsius += 10) {

        fahrenheit = (celsius * 9 / 5.0) + 32;

        printf("%d\t%.2f\n", celsius, fahrenheit);
    }

    return 0;
}
