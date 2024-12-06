// Exibindo um Número Inteiro

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int numero = 1;

    printf("O número inteiro equivale a: %d", numero);
    return 0;
}