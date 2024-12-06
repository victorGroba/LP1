#include <stdio.h>
#include <string.h>
#include <locale.h>


int retornaComMaisDez(int numero){
    return numero + 10;
}

void aumentaDez(int *numero){
    *numero = *numero + 10;

}

//Sem utilizar ponteiros
int main() {
    setlocale(LC_ALL, "Portuguese");

    int a = 5;

    printf("%d\n", a);
    
    printf("valor de a = %d\n", retornaComMaisDez(a));

    aumentaDez(&a);
    
    printf("%d\n", a);

 

    return 0;
}