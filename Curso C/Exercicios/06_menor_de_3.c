#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int a, b, c, menor;

    printf("Digite três valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a<b && a<c){
        menor = a;
    }
    else if(b<c){
        menor = b;
    }
    else{
        menor = c;
    }

    printf("Menor: %d", menor);

    



    
    return 0;
}