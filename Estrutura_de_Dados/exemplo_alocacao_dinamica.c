#include <stdio.h>
#include <string.h>
#include <locale.h>

// Faça um programa em C que leia inicialmente a quantidade de alunos de uma turma,
// depois as notas de cada aluno desta turma e informe a sua média,utilizando
// uma função para o cálculo da média.


int* alocaVetor(int tamanho){
    int *v;

    v = malloc(tamanho * sizeof(float));

    return v;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int tamanho, i;
    float *notas, soma = 0, cont = 0, media;

    printf("Digite quantas notas searao digitadas: \n");
    scanf("%d", &tamanho);

    notas = alocaVetor(tamanho);

    for(i=0;i<tamanho;i++){
        printf("digite a nota da prova %d: \n ", i+1);
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
        cont = cont + 1;


    }
    
    media = soma / cont ;


    

     printf("Sua média final é de: %.2f", media);



    free(notas);


    
    return 0;
}