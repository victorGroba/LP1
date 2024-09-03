#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    double largura, comprimento, valorm2, area, preco_terreno;

    //largura e comprimento com 1 casa
    // valor metro quadrado com duas

    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);

    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);

    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &valorm2);

    area = comprimento * largura;;
    preco_terreno = area * valorm2;

    printf("Área do Terreno: %.1lf\nPreço do terreno: %.2lf", area, preco_terreno);





    
    return 0;
}