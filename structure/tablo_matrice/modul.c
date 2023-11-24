#include <stdio.h>
#include <math.h>
typedef struct {
  int rell;
  int img;
} complx;
int main() {
  complx a;
  float z;
  printf("entre nombre r");
  scanf("%d", &a.rell);
  printf("entre nombre i");
  scanf("%d", &a.img);
  z = sqrt((a.rell * a.rell) + (a.img * a.img));
  printf("%f", z);
  return 0;
}
