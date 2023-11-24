
#include <stdio.h>
int main() {
  int t2[5];
  int j, i, x, y, z, k, max2, max1;
  for (i = 0; i < 5; i++) {
    printf("la case t2[%d]= ", i);
    scanf("%d", &t2[i]);
  }

  for (i = 0; i < 5; i++) {
    if (max1 < t2[i]) {
      max2 = max1;
      max1 = t2[i];
    }
    if (max2 < t2[i] && max1 > t2[i]) {
      max2 = t2[i];
    }
  }
  printf("le max1 et %d le max2 et %d \n", max1, max2);
  return 0;
}