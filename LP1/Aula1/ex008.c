// Exibindo um número com sinal 

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int numero = -42;
    

    printf("O número com sinal é %+d\n", numero );

    
    
    return 0;
}
