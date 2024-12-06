#include <stdio.h>
#include <string.h>
#include <locale.h>


void mostraSoma(int num1, int num2){
    printf("A soma entre %d e %d eh %d", num1, num2, num1+num2);
}

int retornaSoma(int num1, int num2){
    return num1 + num2;
}
int main() {
    setlocale(LC_ALL, "Portuguese");
 
    int a = 5, b = 7;

    mostraSoma(a,b);

    printf("\n\n");
    
     printf("A soma entre %d e %d eh %d", a, b, retornaSoma(a, b)); 


    
    return 0;
}