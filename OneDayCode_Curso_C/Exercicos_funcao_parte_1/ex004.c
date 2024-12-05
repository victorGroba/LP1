#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>


//  Escreva um programa que leia um inteiro não-negativo n e imprima a soma dos n primeiros números primos.

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
    int num;
    
       printf("Digite um numero: ");
        scanf("%d", &num);
    
    while(num<=0){
        printf("Digite um numero: ");
        scanf("%d", &num);
       
}
    int contador = 0, soma = 0;

    for(int i = 2; contador<num; i ++){
        if (numeroPrimo(i)){
        soma += i;
        contador ++;
    }
    }

    printf("A soma dos numeros %d numeros primos eh %d", num, soma);
    return 0;


    
}