// Exibindo um número inteiro

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int x = 24;

    printf("Eu tenho %d anos", x );
    return 0;
}