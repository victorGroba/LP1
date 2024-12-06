#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
   /*
   variante da estrutura while
   "Fazer algum comando enquanto Algo é VERDADEIRO"
   
   do{
    comando 1
    comando 1

   }while(condição)
   
   
    */
   double C, F;
   char resp;

   do{
    printf("Digite a  temperatura em Celsius: ;");
    scanf("%lf", &C);
    F = (9.0*C / 5) + 32;
    printf("%2.lf ° C equivalem a %.2lf ° F", C, F);
    printf("Deseja converter mais um valor? (s/n)");
    scanf("%s", resp);

   }
   while(resp == 's');
    
    return 0;
}