#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>


// Escreva uma função que recebe um inteiro positivo m e devolve 1 se m é primo, 0 em caso contrário.

// numero primo divisivel por 1 e por ele mesmo
// Maior que 1

int numeroPrimo(int numero){

    if(numero<=1){
        return 0;        
    }
    
    for(int i =2; i<=sqrt(numero);i++){
        if(numero % i ==0)
        return 0;
    }
    return 1;

  
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int m = 11;

    printf("Digite um numero para saber se ele e primo: ");
    scanf("%d", &m);

 
    printf("%d", numeroPrimo(m));
    return 0;
}