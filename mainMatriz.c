#include "matrizEsparsa.h"
#include <stdio.h>
#include <stdlib.h>
/*
int compara_float(void *x, void *y){
  int *a = x, *b = y;
  if(*a > *b)
    return 1;
  if (*a < *b ) {
    return -1;
  }
}

void mostra_int(void *x){
  int *p = x;inicializa_lista(&p2, sizeof(Lista)
  printf("%d |", *p);
}
*/
int main(int argc, char const *argv[]) {

    MatrizEsparsa x1;
    MatrizEsparsa x2;

    int o, l1, c1, l2, c2, c, l, valor, indice;

    //solicita o tamanho do matriz
    printf("Quantas linhas e quantas colunas na matriz 1???\n");
    scanf("%d", &l1);
    scanf("%d", &c1);
    //cria matriz 1

    printf("Digite os valores para linha, coluna e informação:\n", );
    scanf("%d %d %d\n",l1, c2, valor );
    insereNaPosicaoMatriz(&p1, l1, c2, valor);
    inicializa_matriz(&p1, l1, c1);
    //solicita o tamanho do matriz
    printf("Quantas linhas e quantas colunas a matriz 2???\n");
    scanf("%d", &l2);
    scanf("%d", &c2);
    //cria matriz 2
    inicializa_matriz(&p2, l2, c2);

    do {
        printf("\nSelecione a operação:\n");
        printf("1. inserir na matriz 1\n");
        printf("2. inserir na matriz 2\n");
        printf("3. ler informação na matriz 1\n");
        printf("4. ler informação na matriz 2\n");
        printf("5. remover da matriz 1\n");
        printf("6. remover da matriz 2\n");
        printf("7. mostra matriz resultado soma\n");
        printf("8. mostra matriz resultado multiplicação \n");
        printf("9. mostra matriz 1\n");
        printf("10. mostra matriz 2\n");
        printf("0. sair \n");

        scanf("%d", &o);

        switch (o) {
          case 1:
              //insere na matriz
              printf("Digite os valores para linha, coluna e informação:\n", );
              scanf("%d %d %d\n",l, c, valor );
              insereNaPosicaoMatriz(&p1, l, c, valor);

          break;

          case 2:

              //insere na matriz
              printf("Digite os valores para linha, coluna e informação:\n", );
              scanf("%d %d %d", &l, &c, &valor );
              insereNaPosicaoMatriz(&p2, l, c, valor);


          break;

          case 3:
              //ler na matriz 1\n");;
              printf("Digite os valores para linha, coluna e informação:\n", );
              scanf("%d %d %d", &l, &c, &valor );
              lePosicaoMatriz(&p2, indice);
          break;

          case 4:
              //ler na matriz1
              printf("Digite os valores para linha, coluna e informação:\n", );
              scanf("%d %d %d", &l, &c, &valor );
              lePosicaoMatriz(&p2, indice);

          break;

          case 5:
              //5. remover da matriz 1\n")
              printf("Digite os valores para linha, coluna e informação:\n", );
              scanf("%d %d %d", &l, &c, &valor );
              removeNaPosicaoMatriz(&p2, l, c);
          break;

          case 6:
          // 6. remover da matriz 2\n"
              printf("Digite os valores para linha, coluna e informação:\n", );
              scanf("%d %d %d", &l, &c, &valor );
              removeNaPosicaoMatriz(&p2, l, c);

          break;

          case 7:
          // 7. somar matriz\n";
              mostra_matriz(somaMatriz(&p1, &p2));

          break;

          case 8:
          // . multiplica matriz\n

              mostra_matriz(multiplicaMatriz(&p1, &p2));

          break;
          case 9:
          //  mostra matriz 1\n");

              mostra_matriz(p1);

          break;
          case 10:
          // 10. mostra matriz 2\n");

              mostra_matriz(p2);

          break;

        }

        if (o > 10) {
          printf("operação não encontrada, tente novamente!!!!\n");
        }
  } while(o!=0);
  return 0;
}
