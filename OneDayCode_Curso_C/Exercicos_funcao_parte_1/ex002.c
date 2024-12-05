#include <stdio.h>
#include <string.h>
#include <locale.h>
#define TRUE 1
#define FALSE 0

// 2.  (a) Construa uma função encaixa que dados dois inteiros positivos a e b verifica se
//  b corresponde aos últimos dígitos de a.

int encaixa(int a, int b){
    
    while (b != 0 && a%10 == b%10){
        a = a/10;
        b = a/10;
    }
    if(b==0)
        return TRUE;
    else
        return FALSE;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int a, b, subsequente, maior, menor;

    printf("Digite dois números: ");
    scanf("%d %d", &a, &b);

    if(a>b){
        maior = a;
        menor = b;
    }
    else{
        maior = b;
        menor = a;
    }

    subsequente = FALSE;

    while (maior >= menor){
        if(encaixa(maior, menor) == TRUE){
        subsequente = TRUE;
        }
        maior = maior/10;

    }
    if(subsequente=TRUE)
        printf("%d e segmento de %d\n", b, a);
    
    else
        printf("%d não e segmento de %d", b, a);
    }
    return 0;
}