#include <stdio.h>
#include <string.h>
#include <locale.h>

// Scanf Aprimorado

int main() {
    setlocale(LC_ALL, "Portuguese");
    char s[10];

    printf("Digite algo (scanf tradicional):\n");
    scanf("%s", s);
    fflush(stdin);

    printf("Resultado: %s\n\n", s);

    printf("Digite algo (scanf aprimorado):\n");
    scanf("%9[^\n]s", s); // temos que deixar o ultimo espaço do vetro de char disponivel para o \0
    fflush(stdin);

    printf("Resultado: %s\n\n", s);

    printf("Digite seu seu nome (fgets): ");
    fgets(s, 10, stdin);
    fflush(stdin);

    printf("Resultado: %s\n\n", s);

    //fflush -> para que a proxima leitura de dados nao de problema, principalmente se for float ou char





    return 0;
}