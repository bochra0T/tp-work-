#include <stdio.h>
int main() {
  int y = 100;
  int t[y], i, n, b, i1, j, X, u[y];

  printf("entrer LA TAILL DE TABLOUX  : ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    printf("entrer le nombre %d : ", i);
    scanf("%d", &t[i]);
  }

  for (i = 0; i < n; i++) {
    u[i] = -1;
  }

  for (i = 0; i < n; i++) {
    X = 1;
    for (j = i + 1; j < n; j++) {
      if (t[i] == t[j]) {
        X = X + 1;
        u[j] = 0;
      }
    }
    if (u[i] != 0) {
      u[i] = X;
    }
  }
  for (i = 0; i < n; i++) {
    if (u[i] == 1) {
      printf("%d", t[i]);
    }
  }

  return 0;
}