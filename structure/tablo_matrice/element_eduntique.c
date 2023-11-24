#include <stdio.h>
void elements_identiques(int v1[], int v2[], int n,int m) {
  printf("Elements identiques entre les deux vecteurs :\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (v1[i] == v2[j]) {
        printf("%d ", v1[i]);
        break;
      }
    }
  }
  printf("\n");
}
int main() {
  int x=100;
  int n,i,u[x],j,m,y[x];
  printf(" enetrer la taill de u");
  scanf("%d", &n);
  for (i = 0; i < n; i++){
    printf("u[%d]=", i);
    scanf("%d",&u[i]);
  }
   printf(" enetrer la taill de y");
  scanf("%d", &m);
   for ( i= 0; i < m; i++) {
    printf("y[%d]=",i);
    scanf("%d", &y[i]);
  }
  elements_identiques(u,y,n,m);
  return 0;
}
