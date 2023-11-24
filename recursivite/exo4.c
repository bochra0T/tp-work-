#include <stdio.h>
float  f(float  x) {
    return x * x * x + x + 1;
}

float  dichotomie(float  (*f)(float ), float  a, float  b, float  e) {
    if (b - a < e) {
        return (a + b) / 2.0;
    }
    
    if (f(a) * f((a + b) / 2) < 0) {
        return dichotomie(f, a, (a + b) / 2, e);
    } else {
        return dichotomie(f, (a + b) / 2, b, e);
    }
}
int main() {
    float  e, a, b, resultat;
    printf("Enter la valure de e: ");
    scanf("%f", &e);
  printf("Enter la valure de a: ");
    scanf("%f", &a);
      printf("Enter la valure de b: ");
    scanf("%f", &b);
  
    resultat = dichotomie(f, a, b, e);
    printf("Resultat: %f\n", resultat);

    return 0;
}