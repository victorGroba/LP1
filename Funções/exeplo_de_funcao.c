#include <stdio.h>
#include <string.h>
#include <locale.h>

int quadrado(int a){
    return a * a;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int x, y;
    printf("Digite x: ");
    scanf("%d", &x);
    y = quadrado(x);
    printf("y = %d\n", y);

    return 0;
}