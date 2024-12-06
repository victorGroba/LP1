#include <stdio.h>
#include <string.h>
#include <locale.h>

// 1.  Um número a é dito permutação de um número b se os dígitos de a formam uma permutação dos dígitos de b.

// Exemplo:   5412434 é uma permutação de 4321445, mas não é uma permutação de 4312455.

// Obs.: Considere que o dígito 0 (zero) não aparece nos números.

// (a) Faça uma função contadígitos que dados um inteiro n e um inteiro d, 0 < d < 9, devolve quantas vezes 

// o dígito d aparece em n.

// (b) Usando a função do item anterior, faça um programa que lê dois inteiros positivos a e b e 

// responda se a é permutação de b.

int contaDigitos (int n, int d){
    int resto, cont;

    cont = 0;

    while(n!=0){
        resto = n % 10;
        n = n/10;
        if(resto == d)
        cont ++;

    }
    return cont;

}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int d, n;

    printf("Digite um um número de sua escolha: ");
    scanf("%d", &n);

    printf("Digite um número que queira saber quantas vezes aparece nesse número: ");
    scanf("%d", &d);


    printf("O número %d, aparece %d vezes no número %d", d, contaDigitos(n, d), n);    
    return 0;
}