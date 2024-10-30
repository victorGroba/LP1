#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int numero;

     printf("Digite um número inteiro: ");
     scanf("%d", &numero);

     printf("Número digitado: %d\n", numero);
     printf("Número sucessor: %d\n", ++numero);
     printf("Número antesessor: %d", numero-=2);
  


    
    return 0;
}