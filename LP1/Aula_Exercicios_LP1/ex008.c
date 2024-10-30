#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    char nome_produto[50];
    float preco_produto1, desconto, preco_com_desconto;


    printf("Digite o nome do produto:\n");
    fgets(nome_produto, 50, stdin);
    fflush(stdin);

    printf("Digite o Preço do Produto:\n");
    scanf("%f", &preco_produto1);

    printf("Digite o percentual do desconto (sem %):\n");
    scanf("%f", &desconto);

    preco_com_desconto = preco_produto1 - ((preco_produto1*desconto)/100);
     printf("Nome do produto: %s\n", nome_produto);
     printf("Preço Original: %.2f\n", preco_produto1);
     printf("Percentual do desconto: %.1f\n", desconto);
     printf("Preço final com desconto: %.2f\n", preco_com_desconto);

    return 0;
}