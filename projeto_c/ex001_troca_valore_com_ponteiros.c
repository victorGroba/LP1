#include <stdio.h>
#include <string.h>
#include <locale.h>

void trocaValor(int *num){
    *num = 10;
   
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int numero;

    numero = 1;

    trocaValor(&numero);
     printf("Novo valor = %d", numero);

    return 0;
}