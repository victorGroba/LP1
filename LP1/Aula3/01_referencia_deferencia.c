#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "PORTUGUESE");
   
     int a = 10;
     int *p = &a; // p armazena o enderço de a
     int b = *p; // b é 10, que é o valor armazenado em a

     printf("O valor da variável a = %d\n", a);
     printf("O valor da variável a = %p\n", p);
     printf("O valor da variável b = %d\n", b);



    return 0;
}