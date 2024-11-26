#include <stdio.h>
#include <string.h>
#include <locale.h>

int retornaDez();
float retornaQuebrado();


int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int a;
    float b;
    a = retornaDez();

    b = retornaQuebrado();


    printf("Valor de a: %d\n", a);
    printf("Valor de b: %f", b);

    return 0;
}
//Funcao que retorna 10
int retornaDez(){
    printf("Oi galera!\n");
    return 10;
}

// Retorna um número quebrado

float retornaQuebrado(){
    return 5.5;
}'