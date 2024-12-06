#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>


int main() {
    setlocale(LC_ALL, "Portuguese");
    
    double base, altura, area, perimetro, diagonal;

    printf("Digite a base do retangulo: ");
    scanf("%lf", &base);

    printf("Digite a altura do retangulo: ");
    scanf("%lf", &altura);

    area = base * altura;
    perimetro = (base*2)+(altura*2);
    diagonal = sqrt(pow(base, 2.0)+ pow(altura, 2.0)); //em C temos a função sqrt para radiciação e pow para potenciação

    printf("ÁREA: %.4lf", area);
    printf("PERIMETRO: %.4lf", perimetro);
    printf("DIAGONAL: %.4lf", diagonal);
    
    return 0;
}