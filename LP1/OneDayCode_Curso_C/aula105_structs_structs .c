#include <stdio.h>
#include <stdlib.h>


typedef struct Data
{
    int dia;
    int mes;
    int ano  
}Data;


struct Aluno{
    int id;
    Data nascimento;


};

// Função principal
int main() {

    //criando aluno
    struct Aluno aluno1;

    //modificando valores
    aluno1.id = 10;
    // ;aluno1.dia = 24;
    // ;aluno1.mes = 09;
    // ;aluno1.ano= 1999;
    aluno1.nascimento.dia = 24;
    aluno1.nascimento.mes = 9;
    aluno1.nascimento.ano = 1999;


    //Imprimindo valores

    printf("nascido em %d/%d/%d", aluno1.nascimento.dia, aluno1.nascimento.mes, aluno1.nascimento.ano);

    return 0;
}