#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>


//delta não pode ser negativo
//Coeficiente a não pode ser Zero

int main() {
    setlocale(LC_ALL, "Portuguese");

    double a, b, c, delta, x1, x2;

    printf("Digite os coeficientes da equação: (a/b/c)");
    scanf("%lf %lf %lf", &a, &b, &c);

    delta = pow(b, 2.0)- (4 * a * c);

    if(delta < 0 || a == 0){
        printf("Essa equação não possui raízes reais");
    }
    else{

        x1 = (b*-1) + sqrt(delta)/2*a; 
        x2 = (b*-1) - sqrt(delta)/2*a;

        printf("Raiz 1: %.2lf\nRaiz 2: %.2lf", x1, x2);

    }
    
    return 0;
}