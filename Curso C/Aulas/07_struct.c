#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#define TAM 50


struct tipo_pessoa
{
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main() {
    setlocale(LC_ALL, "Portuguese");

    //criando e inicializando
    tipo_pessoa pes = {0, 0.0, "teste"};

    printf("Inicio:\n");
    printf("pes.idade : %d\n", pes.idade);
    printf("pes.peso :%.1f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    //atribuindo valores aos 
    pes.idade = 10;
    pes.peso = 99.99;
    strcpy (pes.nome, "José Victor");

    printf("Inicio:\n");
    printf("pes.idade : %d\n", pes.idade);
    printf("pes.peso :%.1f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    //iserindo dados via teclado

    printf("Digite a idade da pessoa: ");
    scanf("%d", &pes.idade);
    printf("Digite o peso da pessoa: ");
    scanf("%f", &pes.peso);
    printf("Digite o  nome da pessoa: ");
    scanf("%s", &pes.nome);
    getchar();

    printf("Inicio:\n");
    printf("pes.idade : %d\n", pes.idade);
    printf("pes.peso :%.1f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);
    
    

    
    return 0;
}