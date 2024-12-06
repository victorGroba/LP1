    #include <stdio.h>
    #include <string.h>
    #include <locale.h>


    // Exercício: Estatísticas de um Vetor
    // Objetivo: Escreva um programa que receba um vetor de números inteiros e calcule algumas estatísticas usando funções. As estatísticas a serem calculadas são:

    // A soma dos elementos do vetor.
    // O maior elemento do vetor.
    // O menor elemento do vetor.
    // A média dos elementos do vetor.
    // Requisitos:
    // Escreva uma função para cada cálculo. Cada função deve receber o vetor e seu tamanho como parâmetros.
    // No programa principal, leia o vetor do usuário e chame cada função, exibindo os resultados.


    // Dicas para Implementação:
    // A função somaVetor deve percorrer o vetor e acumular os valores em uma variável.
    // A função maiorElemento deve percorrer o vetor e encontrar o maior valor.
    // A função menorElemento deve percorrer o vetor e encontrar o menor valor.
    // A função mediaVetor deve calcular a média dividindo a soma pelo número de elementos.

    int somaVetor(int vetor[], int tamanho){
        int soma = 0, i;
        for(i=0;i<tamanho;i++){
            soma += vetor[i];
            return soma;
        }
            
    }
    int maiorElemento(int vetor[], int tamanho){
        int maior = 0;
        int maior elemento;
        for(i=0;i<tamanho;i++);
        if(vet[i] < maior) 

    }
    // int menorElemento(int vetor[], int tamanho);
    // int mediaVetor(int vetor[], int tamanho);

    int main() {
        setlocale(LC_ALL, "Portuguese");

        int i, N;


        printf("Digite quantos elementos vai ter o vetor: ");
        scanf("%d", &N);

        int vetor[N];

        printf("Digite os Elementos do Vetor:\n\n");
        
        for(i=0;i<N;i++){
            printf("Digite um valor: ");
            scanf("%d", vetor[i]);

        }

        printf("\n\nResultados:\n\n");
        printf("A soma dos elementos dos Vetor: %d", somaVetor(vetor, N));
        // printf("O maior elemento do Vetor: %d", maiorElemento(vetor, N));
        // printf("O menor elemento do Vetor: %d", menorElemento(vetor, N));
        // printf("A media do Vetor: %d", mediaVetor(vetor, N));
        
        return 0;
    }



