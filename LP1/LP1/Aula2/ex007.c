// Lendo e Exibindo um Número com Formatação de Alinhamento

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numero;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("Número com alinhamento: %10d\t%d\n", numero, numero);
    printf("Número com alinhamentoà à esquerda: %-10d\n", numero);

    


    return 0;
}