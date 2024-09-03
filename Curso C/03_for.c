#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
   /*
   for(inicio;condição;incremento){
   comando 1
   comando 2
   
   }
    */
   int N, i, x, soma=0;

   printf("Digite quantos números serão digitados: ");
   scanf("%d", &N);

   for(i=0;i<N;i++){
    printf("Digite um número: ");
    scanf("%d", &x);
    soma += x;

   }

   printf("SOMA = %d", soma);
 
   
    
    return 0;
}