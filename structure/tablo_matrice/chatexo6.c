#include <stdio.h>
#include <string.h>
int palindrome(char mot[]) {
  int i, j;
  int M = strlen(mot);
  for (i = 0, j = M - 1; i < j; i++, j--) {
    if (mot[i] != mot[j]) {
      return 0; 
    }
  }
  return 1; 
}
int main() {
  int x=100;
  char mot[x];
  printf("Entrez un mot : ");
  scanf("%s", mot);
  if (palindrome(mot)) {
    printf("Le mot %s est un palindrome.\n", mot);
  } else {
    printf("Le mot %s n'est pas un palindrome.\n", mot);
  }

  return 0;
}
