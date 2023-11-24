#include <stdio.h>
typedef struct {
  int rell;
  int img;
} complx;
int main() {
  complx b, z;
  complx c;
  complx a;
  printf("entre nombre 1 ");
  scanf("%d", &a.rell);
  printf("entre nombre ");
  scanf("%d", &a.img);
  c.rell = a.rell;
  c.img = -a.img;
  printf("%d+%di", c.rell, c.img);
  return 0;
}
