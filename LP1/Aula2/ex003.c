// Lendo e Exibindo um Caractere

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    char letra;

    printf("Digite uma Letra: ");
    scanf("%c", &letra);

    printf("A letra digitada foi: %c", letra);
    return 0;
}