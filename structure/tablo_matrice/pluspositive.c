#include <stdio.h>

int main() {
  int i, j, a = 1;
  for (i = 2; i <= 20; i++) {
    int pgcd = 1;
    for (j = 1; j <= i && j <= a; j++) {
      if (a % j == 0 && i % j == 0) {
        pgcd = j;
      }
    }
    a = (i * a) / pgcd;
  }
  printf("Le plus petit nombre positif divisible par tous les nombres de 1 à ""20 est %d.\n", a);
  return 0;
}
