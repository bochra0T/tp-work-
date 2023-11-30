#include<stdio.h>
#include<stdlib.h>
typedef struct Element Element;
struct Element
{
    int nombre;
    Element *suivant;
};
typedef struct Liste Liste;
struct Liste
{
    Element *premier;
};
void insertion(Liste *liste, int nvNombre)
{
    Element *nouveau = malloc(sizeof(*nouveau));
    nouveau->nombre = nvNombre;
    nouveau->suivant = liste->premier;
    liste->premier = nouveau;
}
void afficherListe(Liste *liste)
{
    Element *a = liste->premier;
    while (a != NULL)
    {
        printf("%d ", a->nombre);
        a= a->suivant;
    }
    printf("NULL\n");
}
int longueurListe(Liste *liste) {
    if (liste == NULL) {
        return 0;
    }

    int longueur = 0;
    Element *a = liste->premier;

    while (a != NULL) {
        longueur++;
        a= a->suivant;
    }

    return longueur;
}
int compterPairs(Liste *liste) {
    if (liste == NULL || liste->premier == NULL) {
        return 0; // Liste vide ou non initialisée
    }

    int count = 0;
    Element *a= liste->premier;

    while (a != NULL) {
        if (a->nombre % 2 == 0) {
            count++;
        }
        a = a->suivant;
    }

    return count;
}

int main() {
    Liste *maListe = malloc(sizeof(*maListe));
    if (maListe == NULL) {
        exit(EXIT_FAILURE);
    }
    maListe->premier = NULL;

    int n; 
    printf("Combien d'entiers voulez-vous ajouter à la liste ? ");
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int valeur;
        printf("Entrez l'entier %d : ", i + 1);
        scanf("%d", &valeur);
        insertion(maListe, valeur);
    }

    afficherListe(maListe);

    int len = longueurListe(maListe);
    printf("La longueur de la liste est : %d\n", len);
    printf(" le nombre des elemnet paire de la liste et %d",compterPairs(maListe));
    return 0;
}
