#include <stdio.h>
#include <string.h>
#include <locale.h>

// 2. Soma de Elementos de um Vetor
// Escreva uma função que recebe um vetor e 
// seu tamanho e retorna a soma de seus elementos.

int recebeVetor(int *vetor, int tamanho){
    int i = 0;
    int somaElementos = 0;
    for(i=0;i<tamanho;i++){

    somaElementos += vetor[i];
    }
    return somaElementos;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int v[3]={1,2,3};

    printf("A soma dos valores do vetores eh: %d.", recebeVetor(v, 3));
    

    
    return 0;
}