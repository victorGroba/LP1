#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#define tam 2


struct Pedido{
    long n_pedido;
	int  dia, mes, ano, qtd_pedidos;
    double preco_unitario, total_pedido;
};


int main(){
	
	

	struct Pedido Comanda [tam];
    float valor_comanda;
	int i, qtd_pedidos;

    for(i=0;i<tam;i++){
        printf("Digite o número do Pedido: ");
        scanf("%d", &Comanda[i].n_pedido);
        printf("Digite a Data do Pedido - DD/MM/AA :");
        scanf("%d/%d%/%d", &Comanda[i].dia, &Comanda[i].mes, &Comanda[i].ano);
        printf("Digite a quantidade de itens: ");
        scanf("%d", &Comanda[i].qtd_pedidos);
		printf("Digite o valor do item: ");
        scanf("%lf", &Comanda[i].preco_unitario);
        Comanda[i].total_pedido = Comanda[i].qtd_pedidos*Comanda[i].preco_unitario;
        qtd_pedidos++;
        valor_comanda + Comanda[i].total_pedido;
       }
	    
        printf("Quantidade de pedidos: %d\n", valor_comanda);
        printf("Total pedidos: %.2lf\n", valor_comanda);
        
		        
       
        
        
    

        
        
        
    
    return 0;
    getchar();

}
