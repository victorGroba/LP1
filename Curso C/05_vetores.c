#include <stdio.h>
#include <string.h>
#include <locale.h>
#define N 5

int main() {
    setlocale(LC_ALL, "Portuguese");
   int i;
  
   
   

     double vet [N];

   for(i=0;i<N;i++){
    printf("Digite um número na posição   do vetor:");
    scanf("%lf", &vet[i]);

   }

   for(i=0;i<N;i++){
    printf(" %.1lf ", vet[i]);
   
   }
    return 0;
}