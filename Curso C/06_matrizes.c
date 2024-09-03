#include <stdio.h>
#include <string.h>
#include <locale.h>


int main() {
  setlocale(LC_ALL, "Portuguese");

  int l, c, i, j;

  printf("Quantas linhas vai ter a matriz: ");
  scanf("%d", &l);
  printf("Quantas colunas vai ter a matriz: ");
  scanf("%d", &c);  

  int mat [l][c];

  for(i=0;i<l;i++){
    for(j=0;j<c;j++){
      printf("Digite um número inteiro: ");
      scanf("%d", &mat[i][j]);
           
    }
  }

  printf("\nImprimindo a Matriz\n");

  for(i=0;i<l;i++){
    for(j=0;j<c;j++){
      printf("%d  ", mat[i][j]);
      
           
    }
    printf("\n");
  }



   
return 0;
}