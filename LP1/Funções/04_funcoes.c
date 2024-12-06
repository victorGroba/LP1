#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
/* Corpo da função: processa entradas (parâmetros),
e gera a saída (return) da função
É formada por declaraões e coando* */

//Exemplo Cálculo do Fatorial


int n, i, f = 1;
printf("Digite n: ");
scanf("%d", &n);
for ( i = 1; i <=n; i++){
      f = f*i;
printf("fatorial de n = %d\n", f);
}



    return 0;
}