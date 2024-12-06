/*Escreva um programa em C que receba dois
números inteiros do usuário e calcule a soma
desses números. O programa deve exibir o
resultado na tela */

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int x, y;

    printf("Digite dois números: ");
    scanf("%d%d", &x, &y);

    int soma = x + y;

    printf("A soma dos dois números é igual a: %d", soma);
    
    return 0;
}