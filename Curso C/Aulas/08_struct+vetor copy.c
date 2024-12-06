#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#define TAM 3


struct tipo_pessoa
{
    int idade;
    float peso;
    char nome[50];
};

typedef struct tipo_pessoa tipo_pessoa;

int main() {
    setlocale(LC_ALL, "Portuguese");

    //criando e inicializando
    
    tipo_pessoa lista[TAM];
    int i;

    for(i=0;i<TAM;i++){
        printf("Digite os dados (%d):\n", i+1);
        puts("Nome: ");
        gets(lista[i].nome);
        fflush(stdin);

        puts("Idade: ");
        scanf("%d", &lista[i].idade);
        fflush(stdin);
       
        puts("Peso: ");
        scanf("%f", &lista[i].peso);
        fflush(stdin); 
    }
    system("cls"); //limpar visualmente o terminal

    puts("Seus dados:\n");

    for(i=0;i<TAM;i++){
        printf("---------- Pessoa %d ----------:\n", i+1);
        printf("\tNome: %s\n", lista[i].nome);
        printf("\tIdade: %d\n", lista[i].idade);
        printf("\tPeso: %.2f\n", lista[i].peso);

    }
    printf("----------------------------------\n");
    
}