// Exibindo um String

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Ola Mundo! ");
    return 0;
}