// Exibindo vários valores

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int idade = 24;
    float altura = 1.83;
    char inicial = 'J';

    printf("Eu tenho %d anoS\nTenho %.2f de altura\nMinha inicial é %c", idade,altura,inicial );
    
    return 0;
}
