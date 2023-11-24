#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure représentant un livre
typedef struct {
    char titre[100];
    char auteur[100];
    char date[20];
} Livre;

// Fonction pour insérer les livres
void insererLivres(Livre livres[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Livre %d\n", i+1);
        printf("Titre : ");
        scanf("%s", livres[i].titre);
        printf("Auteur : ");
        scanf("%s", livres[i].auteur);
        printf("Date : ");
        scanf("%s", livres[i].date);
    }
}

// Fonction pour afficher les livres
void afficherLivres(Livre livres[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Livre %d\n", i+1);
        printf("Titre : %s\n", livres[i].titre);
        printf("Auteur : %s\n", livres[i].auteur);
        printf("Date : %s\n", livres[i].date);
    }
}

int main() {
    int n;
    Livre livres[100];

    printf("Combien de livres souhaitez-vous insérer ? ");
    scanf("%d", &n);

    insererLivres(livres, n);
    afficherLivres(livres, n);

    return 0;
}
