#include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    
    #define MAX_PRODUTOS 100
    
    typedef struct {
        char nome[50];
        char descricao[100];
        float valor;
        int disponivel; // 1 para sim, 0 para não
    } Produto;
    
    Produto produtos[MAX_PRODUTOS];
    int total_produtos = 0;
    
    void cadastrarProduto() {
        if (total_produtos >= MAX_PRODUTOS) {
            printf("Limite de produtos alcançado.\n");
            return;
        }
    
        Produto p;
        
        printf("Nome do Produto: ");
        scanf(" %[^\n]", p.nome);
        
        printf("Descrição do Produto: ");
        scanf(" %[^\n]", p.descricao);
        
        printf("Valor do Produto: ");
        scanf("%f", &p.valor);
        
        printf("Disponível para Venda (1 - Sim, 0 - Não): ");
        scanf("%d", &p.disponivel);
    
        produtos[total_produtos++] = p;
        printf("Produto cadastrado com sucesso!\n");
    }
    
    void listarProdutos() {
        printf("\nLista de Produtos:\n");
        printf("Nome\t\tValor\n");
        printf("---------------------------\n");
        for (int i = 0; i < total_produtos; i++) {
            printf("%s\t\tR$ %.2f\n", produtos[i].nome, produtos[i].valor);
        }
    }
    
    int main() {
        int opcao;
    
        do {
            printf("\nMenu:\n");
            printf("1. Cadastrar Produto\n");
            printf("2. Listar Produtos\n");
            printf("3. Sair\n");
            printf("Escolha uma opção: ");
            scanf("%d", &opcao);
    
            switch (opcao) {
                case 1:
                    cadastrarProduto();
                    break;
                case 2:
                    listarProdutos();
                    break;
                case 3:
                    printf("Saindo...\n");
                    break;
                default:
                    printf("Opção inválida. Tente novamente.\n");
            }
        } while (opcao != 3);
    
        return 0;
    }
    