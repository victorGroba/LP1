// Exibindo caracteres Especiais

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    

    

    printf("Isso é uma barra invertida \\\n" );
    printf("Isso é uma aspas dupla: \"\n" );
    
    
    return 0;
}
