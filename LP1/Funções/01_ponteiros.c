#include <stdio.h>
#include <string.h>
#include <locale.h>

void display(int var, int *ponteiro){
    printf("\n\n");
    printf("Conteudo de var = %d\n", var);
    printf("endereco de var = %p\n", &var);
    printf("Conteudo apontado por ponteiro = %d\n", *ponteiro);
    printf("endereco apontado por ponteiro = %p\n", ponteiro);
    printf("endereco apontado por ponteiro = %p\n", &ponteiro);

}

void update(int *p){
    *p = *p +1;
}
 

int main() {
    setlocale(LC_ALL, "Portuguese");
   
    int var = 15;
    int *ponteiro;

    ponteiro = &var;

    display(var, ponteiro);

    update(&var);

    display(var, ponteiro);

 
    

    return 0;
}