// Exibindo um número com zero à esquerda
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int numero = 42;
    

    printf("O número com sinal é %06d\n", numero );

    
    
    return 0;
}
