#include <stdio.h>
#include <string.h>
#include <locale.h>


void escrevaValor();
int main(){
    printf("O numero e  %d\n", numero);
    escrevaValor(); 
    return 0;
}

 void escrevaValor(){
    int numero = 15;
    int dobro = numero * 2;
    printf("E o dobro e %d\n, dobro", dobro);
 }