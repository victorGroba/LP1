#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdbool.h>




bool retornaBooleano(){
    return false;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    //definindo variável
    bool variavelBooleana;

    //variávil recebendo booleano
    variavelBooleana = retornaBooleano();

    printf("%d\n\n", variavelBooleana);


    //Se for verdadeiro executa o primeiro bloco
    if(variavelBooleana){
        printf("Eh verdadeiro");

    }// Senao executa o segubndo bloco
    else{
        printf("Eh Falso");

    }
    
    return 0;
}