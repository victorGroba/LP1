// Lendo UM número inteiro e exibindo em diferentes formatos

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numero;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("Decimal %d\n", numero);
    printf("Hexadecimal %x\n", numero);
    printf("Octal %o\n", numero);
    


    return 0;
}