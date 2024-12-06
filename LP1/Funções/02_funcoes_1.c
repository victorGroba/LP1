#include <stdio.h>
#include <string.h>
#include <locale.h>

void escrevaNome(); // prototipo de função


int main() {
    setlocale(LC_ALL, " ");

    escrevaNome();
    
    return 0;
}

void escrevaNome(){
    printf("Bem vindo a' Groba Treinamentos em Tecnologia\n");
    return 0;
}