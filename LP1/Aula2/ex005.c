// Lendo e Exibindo vários valores

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int idade;
    float altura;
    char nome[50];

    printf("Digite Sua Idade: ");
    scanf("%s", &idade);

    printf("Digite Sua Altura: ");
    scanf("%s", &altura);
    
    printf("Digite Seu nome: ");
    scanf("%s", &nome);
    

    printf("Idade: %d\nAltlura %.2f\nNome: %s", idade, altura, nome);
    return 0;
}