#include <stdio.h>
int main() {
  int t[5][5], i, j, x, n;

  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      printf("t[%d][%d]=", i, j);
      scanf(" %d", &t[i][j]);
    }
  }
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      n = t[0][0] * t[1][1] - t[0][1] * t[1][0];
    }
  }
  printf("(%d)\n", n);
  return 0;
}