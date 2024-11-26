#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
/*
    //Variável
    int a = 20;

    // Imprimindo o valor de uma variável
    printf("Valor de a: %d\n", a);

    //Imprimindo o valor de uma variável
    printf("O endereco da variavel: %d\n", &a);

    //Lendo uma Variável
    scanf("%d", &a);
    
    //Reimprimindo o valor de uma variável
    printf("Novo valor da variável: %d", a);
    
    //Variáveis armazenam valores
    //Ponteriso armazenam posições na memória

*/
    int b = 10;

    int *ponteiro; //ponteiros não armazenam valores
    // para pegar posiçoes na memória eu uso o operador "&"
    
    //ponteiro recebendo a posiçaõ da memoria da variável b
    ponteiro = &b;

    printf("Local da memoria de b: %d \n", &b);
    printf("Valor de b: %d \n", b);
    printf("Valor de ponteiros: %d \n", ponteiro);

    // * pode ser lido como "Conteudo apontado por"

    *ponteiro = 40;

    printf("%d", b);



  
    return 0;
}