#include <stdio.h>
#include <string.h>
#include <locale.h>

#define MAX_PRODUTOS 100

typedef struct {
    char nome[50];
    char descricao[100]
    float valor;
    int disponivel;  //booleano 1 sim 0 nao
} Produto;

Produto produtos [MAX_PRODUTOS];
int total_produtos = 0;

void cadastrarProdutos() {
int i;

for(i=0;i<MAX_PRODUTOS){}
    if(total_produtos >= MAX_PRODUTOS){
        printf("Limite de produtos  alcançados.\n");
    }

    produto p;

    printf("Nome do Produto: ");
    fgets(p.nome, 50, stdin);
    fflush(stdin);
    
    printf("Descrição do Produto: ");
    fgets(p.descericao, 100, stdin);
    fflush(stdin);

    
    printf("Valor do Produto: ");
    scanf("%f", &p.valor);
    fflush(stdin);

    printf("Disponível para venda: ");
    scanf("%d", &p.disponivel);
    fflush(stdin);
    
    
    




}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    return 0;
}