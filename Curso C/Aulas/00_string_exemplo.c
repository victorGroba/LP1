#include <stdio.h>
#include <string.h>
#include <locale.h>
#define N 50

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    char hardText[N] = {"/exit"};
    char senha_usr[N];
    int ok;

    printf("Digite a senha: ");
    gets(senha_usr);

    ok = strcmp(hardText, senha_usr);

    if(ok == 0){
        printf("Senha correta");
    }
    else{
        printf("Senha incorreta");
    }

    return 0;
}