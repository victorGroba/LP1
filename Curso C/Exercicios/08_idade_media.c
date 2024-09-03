#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int idade, cont = 0, soma = 0;
    double media;

    printf("Digite uma idade: ");
    scanf("%d", &idade);


    while(idade > 0){
        cont ++;
        soma += idade;

        printf("Digite outra idade: ");
        scanf("%d", &idade);

        
        
    }

    if(cont>0){
            media = (double)soma/cont;
            printf("A idade média é: %.2lf", media);
        }
        else{
            printf("IMPOSSÍVEL CALCULAR!");
        }

       return 0; 

    }

   
    
