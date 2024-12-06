#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "UTF-8");
    
    int idade1, idade2;
    double media;
    char nome1[50], nome2[50];



    printf("Dados da primeira pessoa:\n");
    printf("Nome: ");
    gets(nome1);
    printf("Idade: ");
    scanf("%d", &idade1);

    printf("Dados da segunda pessoa:\n");
    printf("Nome: ");
    fseek(stdin, 0, SEEK_END);
    gets(nome2);
    printf("Idade: ");
    scanf("%d", &idade2);

    media = (idade1+idade2)/2;

    printf("A idade média de %s e %s é de: %.1lf", nome1, nome2, media);



    return 0;
}