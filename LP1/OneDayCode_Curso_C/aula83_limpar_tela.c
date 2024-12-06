#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>


void limparTela(){
    system("CLS");
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int a;

    printf("Digite um valor: ");
    scanf("%d", &a);

    


limparTela();

printf("Numero digitado: %d", a);

    return 0;
}