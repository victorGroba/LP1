#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <time.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    time_t t;
    time(&t);


    int ano_nascimento, idade;
    
    printf("Em que ano você nasceu? ");
    scanf("%d", &ano_nascimento);

    printf("%d", t + 1900);


    return 0;
}