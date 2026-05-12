#include <stdio.h>

int main () {
    int a, b;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    
    printf ("Digite o Segundo numero: ");
    scanf ("%d", &b);
    
    if (b !=0) {
        int quociente = a / b;
        
        printf ("Quociente: %d\n" , quociente);
    }else{
        printf ("Nao pode dividir por zero \n");
    }
    
    return 0;
    
}
