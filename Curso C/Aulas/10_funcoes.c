#include <stdio.h>
#include <string.h>
#include <locale.h>

// modularizar

float maior(float num1, float num2){
    if(num1 > num2)
        return num1;
    else    
        return num2;
}


int main() {
    setlocale(LC_ALL, "Portuguese");
    
    float x, y, m;

    printf("Digite um valor: ");
    scanf("%f", &x);

    printf("Digite um valor: ");
    scanf("%f", &y);

    m = maior(x, y);

    printf("Maior: %f/n", m);


    return 0;
}