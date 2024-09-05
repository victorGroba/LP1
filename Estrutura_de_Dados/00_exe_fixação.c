#include <stdio.h>
#include <string.h>
#include <locale.h>
#define N 2

int main() {
    setlocale(LC_ALL, "Portuguese");

  
        
    
    
    double nota1[N], nota2[N], media[N], situacao[N];
    int i;
    

    for(i=0;i<N;i++){
        printf("Digite as notas das primeira prova: \n");
        scanf("%lf", &nota1[i]);

    }

    for(i=0;i<N;i++){
        printf("Digite as notas da Segundaa prova: \n");
        scanf("%lf", &nota2[i]);

    }

    printf("Media P1 + P2:\n");
    
    for(i=0;i<N;i++){
        printf("Notasda P1:%.1lf\n", nota1[i]);
        printf("Notasda P2:%.1lf\n", nota2[i]);

        media[i]=(nota1[i]+nota2[i])/2;
    }

    for(i=0;i<N;i++){
        if(media[i]<6.0){
            printf("Nota aluno %lf :  esta: Reprovado\n", i);
        
        }
        else{
            printf("Nota aluno %lf :  esta: Aprovado\n", i);
        }
    }

    return 0;
}