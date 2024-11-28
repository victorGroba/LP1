#include <stdio.h>
#include <string.h>
#include <locale.h>



void imprimeVetor(int *vetor, int tamanho){
     int i;

     //percorrendo o vetor
     for(i=0;i<tamanho;i++){
        printf("%d \n", vetor[i]);
     }
}

void modificaVetor(int *vetor, int tamnho){
    int i;
    
    for(i=0;i<tamnho;i++){
        vetor[i] = vetor[i]+1;
        printf("%d \n", vetor[i]);
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
   
   int v[3]={1,2,3};

   imprimeVetor(v, 3);

   modificaVetor(v, 3);
    return 0;
}