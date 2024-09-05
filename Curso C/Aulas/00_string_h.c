#include <stdio.h>
#include <string.h>
#include <locale.h>

//puts é utilizado pra imprimir uma string apenas com o nome da variavel

// aterar conteudo de uma string, jamais utilize o sinal de igual7

// strcpy -> alterar o conteudo de uma string

//strcat -> concatenar string 

//strlen mostra o tamanho da string

//strcmp compara se duas string sao iguais (retorna 0 ou 1) 
 
int main() {
    setlocale(LC_ALL, "Portuguese");

    char origem[50] = {"Ola Mundo!"};
    char destino[50] ={"Vazio"};

    printf("Antes do strcpy:\n");
    puts(origem);
    puts(destino);
    
    strcpy(destino, origem);

    printf("Depois do strcpy:\n");
    puts(origem);
    puts(destino);

    strlen



    


    return 0;
} 