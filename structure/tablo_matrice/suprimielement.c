#include <stdio.h>
int main() {
  int x = 100;
  int t[x], i, n, b, i1;
  printf("entrer LA TAILL DE TABLOUX  : ");
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    printf("entrer le nombre %d : ", i + 1);
    scanf("%d", &t[i]);
  }
  printf("entrer i1 : ");
  scanf("%d", &i1);
  if (i1 > n) {// i1 la position  de nombre dons tabloux que je vu supreimer si la casse ne exixet pas on ecrire erro
    printf("erreur");
  } else {
    for (i = i1; i < n; i++) {
      t[i - 1] = t[i]; // onva crasii la casse est on dipare mare la case que on a ecrire 
    }
    n--; // na9eso les nobre de casse avec n-- pare contre do, inseri on ajout les case n++
    for (i = 0; i < n; i++) {
      printf(" t[%d]=%d", i, t[i]);
      printf("\n");
    }
  }
  return 0;
} // 