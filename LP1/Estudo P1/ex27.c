#include <stdio.h>
#include <string.h>
#include <locale.h>

int Tamanho_string(const char[]){
    int contador = 0;

    while (str[contador] != '\0'){
        contador++;
    }
    return contador;
    
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    return 0;
}