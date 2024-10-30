// : Lendo e Exibindo Dois Números Inteiros

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numero1, numero2;
    
    printf("Digite dois  números inteiros: ");
    scanf("%d%d", &numero1, &numero2);

    printf("Os números são: %d e %d", numero1, numero2);

    


    return 0;
}