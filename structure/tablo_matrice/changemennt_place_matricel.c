#include <stdio.h>
int main() {
  int A[4][4], T[4][2];
  int i, j, c;
  printf("Veuillez saisir les éléments de la matrice:\n");
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      printf("A[%d][%d]=", i, j);
      scanf("%d", &A[i][j]);
    }
  }
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {

      printf("%d\t", A[i][j]);
    }
    printf("\n");
  }
  for (i = i + 1; i < 4; i++) {
    for (j = j + 1; j < 4; j++) {
      c = A[i][j];
      A[i][j] = A[j][i];
      A[j][i] = c;
    }

    printf("A=\n");
  }
  printf("A=\n");
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {

      printf("%d\t", A[j][i]);
    }
    printf("\n");
  }
  return 0;
}