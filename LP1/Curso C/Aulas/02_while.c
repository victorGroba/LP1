#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
   /*
    while(condição){
    comando 1
    comando 2
    }
    */

   int x, soma = 0;

   printf("Digite o primeiro número: ");
   scanf("%d", &x);

   while(x != 0){
    
    printf("Digite outro número: ");
    scanf("%d", &x);
    soma += x; // se esse comando for depois da entrada de dados, ele não lê o valor do primeiro scanf
    
    
    }

    printf("SOMA = %d", soma);

   
    
    return 0;
}