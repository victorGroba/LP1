#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    char nome[50];
    float nota1, nota2;

     printf("Digite seu nome completo:\n");
     fgets(nome, 50, stdin);
     fflush(stdin);
     printf("Digite a primeira nota:\n");
     scanf("%f", &nota1);
     printf("Digite a segunda nota:\n");
     scanf("%f", &nota2);


     printf("Nome: %s\n", nome);
     printf("Primeira nota: %.1f\n", nota1);
     printf("Segunda nota: %.1f\n", nota2);

  


    
    return 0;
}
