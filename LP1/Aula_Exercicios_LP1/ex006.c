Exercício 6

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    char caractere;

     printf("Digite um caractere:\n");
     scanf("%s", &caractere);

     printf("Caractere digitado: %c\n", caractere);
     printf("Caractere sucessor: %c\n", ++caractere);
     printf("Caractere antesessor: %c", caractere-=2);
  


    
    return 0;
}