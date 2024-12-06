#include <stdio.h>
#include <stdlib.h>

// Estrutura para armazenar os dados do pedido
struct Pedido {
    int numero;
    int dia, mes, ano;
    float precoUnitario;
    int quantidade;
};

int main() {
    struct Pedido pedido; // Variável para armazenar cada pedido
    float totalCompra = 0; // Variável para o total da compra

    printf("=== Sistema de Pedidos ===\n");

    while (1) {
        // Lê o número do pedido
        printf("\nDigite o número do pedido (0 para encerrar): ");
        scanf("%d", &pedido.numero);

        // Verifica se o número do pedido é 0 para encerrar
        if (pedido.numero == 0) {
            break;
        }

        // Lê a data do pedido
        printf("Digite a data do pedido (dia mes ano): ");
        scanf("%d %d %d", &pedido.dia, &pedido.mes, &pedido.ano);

        // Lê o preço unitário do item
        printf("Digite o preço unitário do item: ");
        scanf("%f", &pedido.precoUnitario);

        // Lê a quantidade do item
        printf("Digite a quantidade: ");
        scanf("%d", &pedido.quantidade);

        // Calcula o valor do pedido e soma ao total
        float valorPedido = pedido.precoUnitario * pedido.quantidade;
        totalCompra += valorPedido;

        // Exibe os detalhes do pedido
        printf("\n--- Detalhes do Pedido ---\n");
        printf("Número: %d\n", pedido.numero);
        printf("Data: %02d/%02d/%04d\n", pedido.dia, pedido.mes, pedido.ano);
        printf("Valor do Pedido: R$ %.2f\n", valorPedido);
    }

    // Exibe o total da compra ao final
    printf("\n=== Resumo da Compra ===\n");
    printf("Valor Total: R$ %.2f\n", totalCompra);

    return 0;
}
