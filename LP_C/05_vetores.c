#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
   int N, i;
  
   
   printf("Quantos números voce vai digitar? ");
   scanf("%d", &N);

     double vet [N];

   for(i=0;i<N;i++){
    printf("Digite um número na posição   do vetor: ");
    scanf("%lf", &vet[i]);

   }

   for(i=0;i<N;i++){
    printf("Vetor : %lf ", vet[i]);
   }

    return 0;
}