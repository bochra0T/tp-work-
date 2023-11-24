#include <stdio.h>

typedef struct {
    int reference;
    char designation[10];
    float prixUnitaire;
} Produit;

typedef struct {
    int nombre_produits;
    Produit lp[50];
} Catalogue;

typedef struct {
    int référence;
    int quantité;
} ligne_commande;

typedef struct {
    int Lignes;
    ligne_commande lignes[20];
} commande;

Produit sizi_produit() {
    Produit p;
    printf("Enter the reference: ");
    scanf("%d", &p.reference);
    printf("Enter the designation: ");
    scanf("%s", p.designation);
    printf("Enter the unit price: ");
    scanf("%f", &p.prixUnitaire);
    return p;
}

void sizi_catalog(Catalogue *c) {
    int i;
    printf("Enter the number of products: ");
    scanf("%d", &c->nombre_produits);
    for (i = 0; i < c->nombre_produits; i++) {
        c->lp[i] = sizi_produit();
    }
}

int recherche(int r, Catalogue c) {
    int i;
    for (i = 0; i < c.nombre_produits; i++) {
        if (r == c.lp[i].reference) {
            return i;
        }
    }
    return -1;
}

commande sizic(commande *com, Catalogue c) {
    int i = 0;
    while (i < 20) {
        printf("Enter the quantity: ");
        scanf("%d", &com->lignes[i].quantité);
        if (com->lignes[i].quantité <= 0) {
            break;
        }
        printf("Enter the reference: ");
        scanf("%d", &com->lignes[i].référence);
        i++;
    }
    com->Lignes = i;
    return *com;
}

int main() {
    int r;
    commande com;
    Catalogue c;
    int index;
    printf("Enter r: ");
    scanf("%d", &r);

    sizi_catalog(&c);

    index = recherche(r, c);
    if (index != -1) {
        printf("Product found at index %d\n", index);
    } else {
        printf("Product not found\n");
    }

    sizic(&com, c);

    return 0;
}
