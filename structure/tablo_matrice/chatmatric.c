#include <stdio.h>

#define ROWS 4
#define COLS 3

int main() {
  int matrix[ROWS][COLS] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 5}, {1, 2, 6}};

  printf("Matrice avant suppression :\n");
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  // Suppression des colonnes identiques
  for (int j = 0; j < COLS; j++) {
    int identique = 1;
    for (int i = 1; i < ROWS; i++) {
      if (matrix[i][j] != matrix[0][j]) {
        identique = 0;
        break;
      }
    }
    if (identique) {
      for (int i = 0; i < ROWS; i++) {
        for (int k = j; k < COLS - 1; k++) {
          matrix[i][k] = matrix[i][k + 1];
        }
      }
      j--;
    }
  }

  printf("Matrice après suppression :\n");
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  return 0;
}
