#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int N, i, soma=0, cont = 0;
    double media;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    int vet[N];

    for(i=0;i<N;i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }
    printf("\nVALORES: ");
    for(i=0;i<N;i++){
        printf("%d ", vet[i]);
        soma += vet[i];
        cont += 1;
       

    }

    media = (double)soma/cont;

    printf("\nSOMA: %d\n", soma) ;  
    printf("MEDIA: %.lf", media);   


    return 0;
}