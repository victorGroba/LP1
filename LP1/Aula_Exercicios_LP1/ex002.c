/*Escreva um programa em C que leia a
temperatura em graus Celsius e a converta para
Fahrenheit. A fórmula de conversão é:*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    float c, f;


    printf("Digite o valor em Celsius: ");
    scanf("%d", &c);

    f = (c*1.8)+32;

    printf("A temperatura convertida é: %.2f", f);

    
    return 0;
}