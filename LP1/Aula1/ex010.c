// Exibindo percentual
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    float taxa = 75.5;
    

    printf("A taxa de sucesso é: %.1f%%\n", taxa );

    
    
    return 0;
}
