#include <stdio.h>
int main() {
  int x = 100;
  int u[x], up[x], ui[x];
  int i, j, n, k;
   k = 0;
    j = 0; 
  printf(" enetrer la taill de u");
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    printf("u[%d]=", i);
    scanf("%d", &u[i]);
  }
  for (i = 0; i < n; i++) {
    if (u[i] % 2 == 0) 
                       { up[k] = u[i];     k++; } 
    else 
                       { ui[j] = u[i];      j++; }
  }
 printf("\nVecteur des nombres pairs : ");
    for (i = 0;i <k; i++) { printf("%d ",up[i]); }
 printf("\nVecteur des nombres impairs : ");
    for (i = 0; i < j; i++) {printf("%d ",ui[i]);}
return 0;
}