// Exibindo número em fomato Hexadecimal

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int numero = 24;
    

    printf("O número %d em Hexadecimal e %x", numero,numero );
    
    return 0;
}
