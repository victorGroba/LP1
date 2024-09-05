#include <stdio.h>
#include <string.h>
#include <locale.h>
#define tam 2

struct Aluno{
    char nome[80];
    int periodo;
    float CR;
};

// metodo bolha

void Ordena(struct Aluno *Vet, int total){
    int i, j;
    struct Aluno aux;
    for(i=0;i<total-1;i++){
        for(j=i+1;j<total;j++){
            if(Vet[i].CR < Vet[j].CR){
                aux=Vet[j];
                Vet[i]=Vet[j];
                Vet[j]=aux;

            }
        }
    }
}


int main() {
    setlocale(LC_ALL, "Portuguese");

    struct Aluno Turma[tam];
    int i;

    for(i=0;i<tam;i++){
        printf("Digite o nome do Aluno: \n");
        gets(Turma[i].nome);
        printf("Digite o Periodo: \n");
        scanf("%d", &Turma[i].periodo);
        printf("Digite o CR do aluno: \n");
        scanf("%f", &Turma[i].CR);
        getchar();
    }

    printf("\n\nOrdenação\n\n");
    Ordena(Turma, tam);
    for(i=0;i<tam;i++){
        printf("Nome: %s\n", Turma[i].nome);
        printf("Periodo: %d\n", Turma[i].periodo);
        printf("CR: %f\n", Turma[i].CR);
        printf("\n");

    }

   
    
}