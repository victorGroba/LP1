#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    double nota1, nota2, nota_final;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    nota_final= (nota1 + nota2) / 2;  

    printf("\nNOTA FINAL: %.1lf\n", nota_final);

    if(nota_final < 60.0){
        printf("Reprovado");
    }
    else{
        printf("Aprovado");
    }      



return 0;
}