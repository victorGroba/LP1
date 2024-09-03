#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int valor1, valor2, i, soma = 0;

    printf("Digite dois valores: ");
    scanf("%d %d", &valor1, &valor2);

    for(i=valor1+1;i<valor2;i++){
        if(i % 2 != 0){
            soma+=i;
        }

        
    }

    printf("A soma dos Ímpares é: %d", soma);

    return 0;
}