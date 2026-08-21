#include <stdio.h>

int main() {
    int opcao;
    float celsius, fahrenheit;

    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Fahrenheit para Celsius\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if(opcao == 1) {
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &celsius);

        fahrenheit = (celsius * 9.0 / 5.0) + 32;

        printf("Fahrenheit: %.2f\n", fahrenheit);
    }
    else if(opcao == 2) {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &fahrenheit);

        celsius = (fahrenheit - 32) * 5.0 / 9.0;

        printf("Celsius: %.2f\n", celsius);
    }
    else {
        printf("Opcao invalida!\n");
    }

    return 0;
}
