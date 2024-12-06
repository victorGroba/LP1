#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    char nome_produto[50];
    float nota1, nota2, media;


    printf("Digite sua primeira nota:\n");
    scanf("%f", &nota1);
    
    printf("Digite sua segunfa nota:\n");
    scanf("%f", &nota2);

    media = (nota1 + nota2)/2;

    if(media>=7){
        printf("Parabéns sua média final foi: %.2f", media);
        
    }else{
        printf("Continue estudando, sua média foi: %.2f", media);
    }
    return 0;
}