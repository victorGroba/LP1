#include <stdio.h>
#include <string.h>
#include <locale.h>

void soma(double num1, double num2, double *resultado){
     *resultado = num1 + num2;
}

void subtracao(double num1, double num2, double *resultado){
     *resultado = num1 - num2;
}

void multiplicacao(double num1, double num2, double *resultado){
     *resultado = num1 * num2;
}

void divisao(double num1, double num2, double *resultado){
     if(num2 != 0){
     *resultado = num1 / num2;
     }
     else{
        printf("Quocinte não pode ser 0");
     }

}


int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int x;
    double a, b, resultado;

    while(x < 1 || x >4){
        
    printf("\n Selecione uma das Operacoes:\n\n");
    printf("(1) Soma\n");
    printf("(2) Subtracao\n");
    printf("(3) Multiplicacao\n");
    printf("(4) Divisao\n\n");
    scanf("%d", &x);

    if(x <1 || x > 4){
        printf("Digite um valor valido");
    
         }
    

    printf("Digite os valores: ");
    scanf("%lf %lf", &a, &b);

    switch (x)
    {
    case  1:
        soma(a, b, &resultado);
        printf("%lf", resultado);
        break;
    
    case 2:
        subtracao(a, b, &resultado);
        printf("%lf", resultado);
        break;
    
    case 3:
        multiplicacao(a, b, &resultado);
        printf("%lf", resultado);
        break;
    
    case 4:
        divisao(a, b, &resultado);
        printf("%lf", resultado);
        break;


    
    default:
        break;
    }


    }

    
    return 0;
}