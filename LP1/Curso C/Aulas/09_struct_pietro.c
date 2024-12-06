#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50

struct tipo_pessoa{
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    tipo_pessoa dados_pessoal = {0, 0.0, "Teste"};

    printf("Inicio:\n");
    printf("dados_pessoais.idade: %d\n", dados_pessoal.idade);
    printf("dados_pessoais.peso: %.1f\n", dados_pessoal.peso);
    printf("dados_pessoais.nome: %s\n", dados_pessoal.nome);

     /*função strcpy é usada para alterar o conteudo de uma "string"
    (origem, destino)
        ex: char nome1[50 ] = "Pedro"
        strcpy(nome1, "Jose");
        printf("%s", nome1);

        ---> Jose
    */
    // Solicitando dados para o usuário

    printf("\nInsira sua idade:\n ");
    scanf("%d", &dados_pessoal.idade);
    printf("\nInsira seu peso:\n ");
    scanf("%f", &dados_pessoal.peso);
    fflush(stdin);
    printf("\nInsira sua nome:\n ");
    fgets(dados_pessoal.nome, 50, stdin);
    fflush(stdin);

    printf("dados_pessoais.idade: %d\n", dados_pessoal.idade);
    printf("dados_pessoais.peso: %.1f\n", dados_pessoal.peso);
    printf("dados_pessoais.nome: %s\n", dados_pessoal.nome);



    return 0;
}