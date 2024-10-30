#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int numero;

     printf("Digite um número inteiro: ");
     scanf("%d", &numero);

     printf("Número digitado: %d\n", numero);
     printf("Número sucessor: %d\n", numero*=2);
     printf("Número antesessor: %d", numero/=6);
  


    
    return 0;
}