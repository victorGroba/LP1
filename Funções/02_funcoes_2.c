#include <stdio.h>
#include <string.h>
#include <locale.h>

int numero = 15;
void escrevaValor();
int main(){
    printf("O numero e  %d\n", numero);
    escrevaValor();
 
    
    return 0;
}

 void escrevaValor(){
    int dobro = numero * 2;
    printf("E o dobro e %d\n, dobro", dobro);
 }