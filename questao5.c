#include <stdio.h>
#include <string.h>

int main() {
    char texto[200];

    printf("Digite uma frase: ");
    fgets(texto, sizeof(texto), stdin);

    printf("Quantidade de caracteres: %lu\n", strlen(texto) - 1);

    return 0;
}
