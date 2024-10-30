// Leitura de Strings com espaço

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
     char nome[100];
    
    printf("Digite um nome: ");
    fgets(nome,100,stdin);// Lé até 99 caracteres de entrada padrão
    printf("Olá, %s!\n", nome);
    


    return 0;
}