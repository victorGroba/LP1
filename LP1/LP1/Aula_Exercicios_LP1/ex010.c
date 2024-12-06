#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    float valor_total_compras, desconto, valor_final;

    printf("Qual foi o valor final das suas compras? ");
    scanf("%f", &valor_total_compras);

    desconto = valor_total_compras * 0.1;
    valor_final = valor_total_compras-desconto; 

    if(valor_final >= 500){
        printf("Você comprou %.2f na nossa loja\n", valor_total_compras);
        printf("======ATENÇÃO======\n");
        printf("Por fazer mais de 500,00 em compras na nossa loja, você vai receber  %.2f de desconto\n", desconto);
        printf("O valor a ser pago é de %.2f! Volte Sempre!", valor_final);
    }else{
        printf("Você não tem desconto");
    }
    return 0;
}