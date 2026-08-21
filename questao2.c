#include <stdio.h>

int main() {
    int n;
    long long fatorial = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if(n < 0) {
        printf("Numero invalido!\n");
        return 1;
    }

    for(int i = 1; i <= n; i++) {
        fatorial *= i;
    }

    printf("Fatorial = %lld\n", fatorial);

    return 0;
}
