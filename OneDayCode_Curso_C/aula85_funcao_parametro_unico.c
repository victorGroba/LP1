#include <stdio.h>
#include <string.h>
#include <locale.h>

void mostraSuccessor(int numero){
    printf("O sucesso de %d eh %d", numero, numero+1 );
}

int retornarAntecessor(int numero){
    return numero -1;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int a;
    
    printf("Digite um valor: \n");
    //passa um valor para a
    scanf("%d", &a);

    //chama a funcao
    mostraSuccessor(a);
    printf("\n\n");

    printf("o antecessor de %d eh %d.", a, retornarAntecessor(a));
    printf("\n\n");
    

  


    
    return 0;
}