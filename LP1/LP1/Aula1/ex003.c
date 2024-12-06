// Exibindo um número de ponto flutuante

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float x = 24.0;

    printf("Eu tenho %.2f anos", x );
    return 0;
}