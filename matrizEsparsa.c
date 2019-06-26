#include "matrizEsparsa.h"
#include "LISTA.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


void inicializa_matriz(MatrizEsparsa *matriz, int linha, int coluna){

    matriz->nlinha = linha ;
    matriz->ncoluna = coluna;
    inicializa_lista(&matriz->m, sizeof(Lista));
    int i;
    for (i = 0; i < linha; i++) {
      Lista l;
      inicializa_lista(&l, sizeof(EntradaMatriz));
      insereNoFim(&matriz->m, &l);
    }
}
//insere na posição
int insereNaPosicaoMatriz(MatrizEsparsa *matriz, int linha, int coluna, int valor){
  Lista l;
  int i, j, k, w;
  EntradaMatriz e
  for ( i = 0; matriz.nlinha < linha ; i++) {
      for (w = 0; matriz.ncoluna < coluna; w++) {
          insereNaPosicao(&matriz.m, &l, i);
      }
  }
  return 0;
}

//le na posiçao
int lePosicaoMatriz(MatrizEsparsa matriz, int indice){

  Lista l;
  int i, j, k, w;
  EntradaMatriz e
  for ( i = 0; matriz.nlinha < linha ; i++) {
      for (w = 0; matriz.ncoluna < coluna; w++) {
          removeDaPosicao(&matriz.m, &l, i);
      }
  }
    return 0;
}

//remove na posição

int removeNaPosicaoMatriz(MatrizEsparsa matriz, int linha, int coluna){

  Lista l;
  int i, j, k, w;
  EntradaMatriz e
  for ( i = 0; matriz.nlinha < linha ; i++) {
      for (w = 0; matriz.ncoluna < coluna; w++) {
          leNaPosiscao(&matriz.m, &l, i);
      }
  }
    return 0;
}

int somoMatriz(MatrizEsparsa *matriz1, MatrizEsparsa *matriz2 ){
    MatrizEsparsa matrizResul;
    int i, j;
    if(matriz1.nlinha == matriz2.nlinha){
        if(matriz1.ncoluna == matriz2.ncoluna){
            for (i = 0; i < matriz1.nlinha; i++) {
                for (j = 0; j < matriz1.ncoluna; j++) {
                    insereNaPosicao(matrizResul,leNaPosiscao(&matriz1.m, &l, i)+leNaPosiscao(&matriz2.m, &l, i),j);
                }
            }
        }
    }else{
        printf("Fail!!!! Matrizes de tamamhos diferentes\n");
      }
    return 0;
}
int multiplicaMatriz(MatrizEsparsa *matriz1, MatrizEsparsa *matriz2 ){
    MatrizEsparsa matrizResul;
    int i, j, aux;
    if(matriz1.nlinha == matriz2.ncoluna){
      for (i = 0; i < matriz1.nlinha; i++) {
          for (j = 0; j < matriz1.ncoluna; j++) {
            aux += leNaPosiscao(&matriz1.m, &l, i) * leNaPosiscao(&matriz2.m, &l, j);
          }
          insereNaPosicao(matrizResul, aux, i);
      }
    }else{
        printf("Não é possivel multiplicar as Matrizes\n");
    }
    return 0;
}

void mostra_matriz(MatrizEsparsa mat){
    Lista l;
    int i, j, k, w;

    for ( i = 0; i < mat.nlinha ; i++) {
      leNaPosiscao(&mat.m, &l, i);
      j = 0; k = 0;
      EntradaMatriz e;
      if (!lista_vazia(l)) {
          while (leNaPosiscao(&l, &e, k)!=ERRO_POSICAO_INVALIDA) {
            for (size_t w = 0; w < e.coluna; w++) {
              printf("0  ");
            }
            printf("%d\n", e.valor);
            k++;
            j = e.coluna + 1;
          }
      }
      for (w = j; w < mat.ncoluna; w++) {
        printf("0  ");
      }
      printf("\n");
    }
}
