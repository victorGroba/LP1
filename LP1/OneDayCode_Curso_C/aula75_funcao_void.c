#include <stdio.h>
#include <string.h>
#include <locale.h>

//Função que desenha borda
void desenhaBorda(){
    printf("|-----------------------------|");
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("|-----------------------------|");
    return 0;

    //chamando a função
    desenhaBorda();
}