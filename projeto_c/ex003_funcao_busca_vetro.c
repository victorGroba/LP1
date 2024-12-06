#include <stdio.h>
#include <string.h>
#include <locale.h>

// 3. Busca em Vetor
// Implemente uma função que verifica se um determinado número existe em um vetor. Use ponteiros para percorrer o vetor.



// Função que verifica se um número está presente no vetor
int existeNoVetor(int *vetor, int tamanho, int numero) {
    int *ptr = vetor; // Ponteiro para o início do vetor

    for (int i = 0; i < tamanho; i++) {
        if (*ptr == numero) {
            return 1; // Número encontrado (retorna 1)
        }
        ptr++; // Move o ponteiro para o próximo elemento
    }

    return 0; // Número não encontrado (retorna 0)
}

int main() {
    int vetor[] = {10, 20, 30, 40, 50};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int numero;

    printf("Digite o número que deseja buscar no vetor: ");
    scanf("%d", &numero);

    if (existeNoVetor(vetor, tamanho, numero)) {
        printf("O número %d foi encontrado no vetor.\n", numero);
    } else {
        printf("O número %d não está presente no vetor.\n", numero);
    }

    return 0;
}
