#include <stdio.h>
typedef struct {
  float rell;
  float img;
} complex;
complex sizi(){
    complex v;
  printf("Enter real part: ");
  scanf("%f", &v.rell);
  printf("Enter imaginary part: ");
  scanf("%f", &v.img);
  printf("%.2f + i%.2f\n", v.rell, v.img);
  return v;
}
complex som(complex x, complex y) {
  complex c;
  c.rell = x.rell + y.rell;
  c.img = x.img + y.img;
  printf("Sum: %.2f + i%.2f\n", c.rell, c.img);
  return c;
}

complex pro(complex x, complex y) {
  complex p;
  p.rell = (x.rell * y.rell) - (x.img * y.img);
  p.img = (x.rell * y.img) + (y.rell * x.img);
  printf("Product: %.2f + i%.2f\n", p.rell, p.img);
  return p;
}

int main() {
  complex a, b;
  printf("Enter first complex number:\n");
  a=sizi();
  printf("Enter second complex number:\n");
   b=sizi();
  som(a, b);
  pro(a, b);
  return 0;
}
