#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int a, b;

    printf("Digite dois números: ");
    scanf("%d %d", &a, &b);

    while(a!=b){
        if(a>b){
            printf("Decrescente");
        
        }
        else{
            printf("Crescente");
        }


    }

    printf("Programa finalizado (números iguais)");
    return 0;
}