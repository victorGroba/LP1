// Lendo e Exibindo uma String

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    char nome[50];

    printf("Digite Seu nome: ");
    scanf("%s", &nome);

    printf("O nome  digitada foi: %s", nome);
    return 0;
}