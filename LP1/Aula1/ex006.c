// Alinhamento e Largura de campo

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int x=5, y=123, z=4567;
    

    printf("Sem alinhamento:\n" );
    printf("%d %d %d\n", x, y, z);

    printf("Com alinhamento:\n" );
    printf("%4d %4d %4d\n", x, y, z);

    
    return 0;
}
