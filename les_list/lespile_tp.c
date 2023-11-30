#include <stdio.h>
#include <stdlib.h>

typedef struct maillon {
    int val;
    struct maillon* swv;
} maillon;

typedef struct maillon* pile;

void empiler(pile* p, int x) {
    pile l;
    l = (pile)malloc(sizeof(pile));
    l->val = x;
    l->swv = *p;
    *p = l;
}

int depiler(pile* p) {
    pile m;
    int x;
    if (*p != NULL) {
        m = *p;
        x = m->val;
        *p = m->swv;
        free(m);
    }
    else {
        printf("Erreur: La pile est vide.\n");
        return -1;
    }
    return x;
}

void sommetPile(pile p) {
    
    if (p == NULL) {
        printf("Erreur: La pile est vide.\n");
        
    }
    return p->val;
}
int pileVide(pile p) {
    return p == NULL;
    exit();
}

void depilerTout(pile* p) {
    while (p != NULL) {
        printf("%d\n", depiler(p));
    }
}

int main() {
    pile l = NULL;

    empiler(&l, 5);
    empiler(&l, 2);
    empiler(&l, 3);
    empiler(&l, -4);
    empiler(&l, 7);
    empiler(&l, 8);
    while (l!= NULL) {
        printf("%d\n", l->val);
        l = l->swv;
    }
    printf("Somme des elements de la pile: %d\n", somme_pile(l));
    depilerTout(&l);

    return 0;
}