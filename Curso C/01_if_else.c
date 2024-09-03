#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
   /*
    if(condição){
        comando1;
        comando2;
    }  
    else if(condição 2){
        comando 3;
        comando 4;
    }
    else{
        comando 4;
        comando 5;
    }
    */

   int hora;
   printf("Digite uma hora do dia:");
   scanf("%d", &hora);

   if(hora<12){
        printf("Bom dia!\n");
    }
    else if(hora == 12 || hora < 18){
        printf("Boa tarde!\n");
    }
    else{
        printf("Boa noite!\n");
    }
    
    
    return 0;
}