#include <stdio.h>

// Solicite os elementos da matriz A, que possui 3 linhas e 4 colunas.

// Construa a matriz transposta T, de 4 linhas e 3 colunas.

// Exiba na tela as duas matrizes (A e T).

// O programa deve declarar e utilizar duas matrizes distintas, A e T.

int main() {
  int matrizA[3][4];
  int matrizT[4][3];

  // Leitura da matriz A
  printf("Digite os elementos da matriz A (3x4):\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      scanf("%d", &matrizA[i][j]);
    }
  }

  // Transposição da matriz A para a matriz T
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      matrizT[j][i] = matrizA[i][j];
    }
  }

  // Exibição da matriz A
  printf("\nMatriz A:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ", matrizA[i][j]);
    }
    printf("\n");
  }

  // Exibição da matriz T
  printf("\nMatriz Transposta T:\n");
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", matrizT[i][j]);
    }
    printf("\n");
  }

  return 0;
}