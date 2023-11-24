#include <stdio.h>

#define MAX_TAILLE_VECTEUR 100

// Fonction qui détermine si un nombre est premier
int est_premier(int n) {
  int i;

  if (n <= 1) {
    return 0;
  }

  for (i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      return 0;
    }
  }

  return 1;
}

// Fonction qui détermine si un nombre est semi-premier
int est_semi_premier(int n) {
  int i;

  if (n <= 1) {
    return 0;
  }

  for (i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      if (est_premier(i) && est_premier(n / i)) {
        return 1;
      } else {
        return 0;
      }
    }
  }

  return 0;
}

int main() {
  int vecteur[MAX_TAILLE_VECTEUR];
  int taille_vecteur;
  int i;

  // Lecture des données d'entrée
  printf("Entrez la taille du vecteur : ");
  scanf("%d", &taille_vecteur);

  printf("Entrez les %d éléments du vecteur :\n", taille_vecteur);
  for (i = 0; i < taille_vecteur; i++) {
    scanf("%d", &vecteur[i]);
  }

  // Recherche des nombres semi-premiers dans le vecteur
  printf("Les nombres semi-premiers du vecteur sont : ");
  for (i = 0; i < taille_vecteur; i++) {
    if (est_semi_premier(vecteur[i])) {
      printf("%d ", vecteur[i]);
    }
  }
  printf("\n");

  return 0;
}
