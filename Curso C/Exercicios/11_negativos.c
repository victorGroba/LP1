#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int N;


    printf("Digite um número menor que 10: ");
    scanf("%d", &N);

    while(N>=10){
        printf("Digite um numero menor que 10!");
        scanf("%d", &N);

    }

    int i, vet[N];

    for(i=0;i<N;i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    
    printf("\nNumeros negativos:\n");
    
    for(i=0;i<N;i++){
        if(vet[i]<0){
        printf("%d\n", vet[i]);
        }
    }






    return 0;
}