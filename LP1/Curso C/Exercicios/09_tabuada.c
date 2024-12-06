#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int N, i;

    printf("Deseja a tabuada para qual valor:");
    scanf("%d", &N);

    for(i=1;i<=10;i++){
        printf("%d X %d = %d\n", N, i, N*i);
    }


    return 0;
}