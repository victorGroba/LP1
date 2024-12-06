// Exibindo um Número de Ponto Flutuante

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    float numero = 1.0;

    printf("O número inteiro equivale a: %.2f", numero);
    return 0;
}