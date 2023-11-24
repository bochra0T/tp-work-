#include <stdio.h>
int main() {
  int t[5][5], i, j, x, n;

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("t[%d][%d]=", i, j);
      scanf(" %d", &t[i][j]);
    }
  }
  printf("entrer un nobre");
  scanf("%d", &n);
  x = 0;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      if (n == t[i][j]) {
        x = x + 1;
      }
    }
  }
  if (x == 0) {
    printf("le nobre nexiset pas ");
  } else {
    printf(" le nobre existe , x= %d", x);
  }

  return 0;
}