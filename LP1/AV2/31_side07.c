#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Calcular o maior e menor elemento de um arraye a soma de todos os dados vetor.




int main()
{
    int vetor[5]={1,2,3,4,5};
    int maiorElemento=0;
    int menorElemento=0;
    int soma=0, i;


    for(i=0;i<5;i++){
        soma = soma + vetor[i];
    }

    menorElemento = vetor[i];
    maiorElemento = vetor[i];

    for(i=0;i<5;i++){
        if(vetor[i]<menorElemento){
            menorElemento=vetor[i];
        }
        
        if(vetor[i]>maiorElemento){
            maiorElemento=vetor[i];
        }
    }
    



    printf("Maior elemento : %d\n", maiorElemento);
    printf("Menor elemento: %d\n", menorElemento);
    printf("Soma de todos os  elementos : %d\n", soma);



    return 0;
}