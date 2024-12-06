#include <stdio.h>
#include <string.h>
#include <locale.h>

char retornaLetra(){
    return 'x';
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    char letra;

    letra = retornaLetra();

    printf("%c", letra);
    
    return 0;
}