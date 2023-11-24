#include <stdio.h>

#define MAX_LIGNES 100
#define MAX_COLONNES 100

void supprimer_colonnes_identiques(int matrice[][MAX_COLONNES], int nb_lignes,
                                   int nb_colonnes) {
  int i, j, k, l;
  int colonnes_identiques[nb_colonnes]; // tableau pour stocker les indices des
                                        // colonnes identiques

  for (i = 0; i < nb_colonnes; i++) {
    colonnes_identiques[i] = 0; // initialisation à 0
  }

  for (i = 0; i < nb_colonnes - 1; i++) {
    if (colonnes_identiques[i]) {
      continue; // si cette colonne a déjà été identifiée comme identique, on
                // passe à la suivante
    }
    for (j = i + 1; j < nb_colonnes; j++) {
      if (colonnes_identiques[j]) {
        continue; // si cette colonne a déjà été identifiée comme identique, on
                  // passe à la suivante
      }

      int identique =
          1; // drapeau pour indiquer si les deux colonnes sont identiques
      for (k = 0; k < nb_lignes; k++) {
        if (matrice[k][i] != matrice[k][j]) {
          identique = 0; // si les deux éléments sont différents, les colonnes
                         // ne sont pas identiques
          break;
        }
      }

      if (identique) {
        colonnes_identiques[j] = 1; // on marque la colonne j comme identique
      }
    }
  }

  // on décale les colonnes de droite à gauche pour supprimer les colonnes
  // identiques
  for (i = 0; i < nb_colonnes; i++) {
    if (colonnes_identiques[i]) {
      for (j = i + 1; j < nb_colonnes; j++) {
        for (k = 0; k < nb_lignes; k++) {
          matrice[k][j - 1] = matrice[k][j];
        }
      }
      nb_colonnes--; // on a supprimé une colonne, donc on décrémente le nombre
                     // de colonnes
      i--; // on revient en arrière pour vérifier la colonne qui a été décalée
    }
  }
}

int main() {
  int matrice[MAX_LIGNES][MAX_COLONNES];
  int nb_lignes, nb_colonnes;
  int i, j;

  // lecture de la matrice
  printf("Entrez le nombre de lignes : ");
  scanf("%d", &nb_lignes);
  printf("Entrez le nombre de colonnes : ");
  scanf("%d", &nb_colonnes);

  printf("Entrez les éléments de la matrice :\n");
  for (i = 0; i < nb_lignes; i++) {
    for (j = 0; j < nb_colonnes; j++) {
      scanf("%d", &matrice[i][j]);
    }
  }

  // affichage de la matrice avant la suppression des colonnes identiques
  printf("Matrice avant suppression des colonnes identiques :\n");
    for (i = 0; i < nb_lignes
}