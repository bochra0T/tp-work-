#include <stdio.h>

#include <stdlib.h>


typedef struct element {

    int val;

    struct element* suiv;

    struct element* pre;

} element;


typedef element* list;

typedef struct dlist{

    list tet;

    list Queue;

} dlist;


list LIST(dlist *l, int n) {

    list p, q, s;

    int i;

    l->tet = NULL;

    l->Queue = NULL;

    for (i = 0; i < n; i++) {

        p = malloc(sizeof(element));

        printf("Enter element: ");

        scanf("%d", &p->val);

        p->suiv = NULL;

        p->pre = NULL;

        if (l->tet == NULL) {

            l->tet = p;

            l->Queue = p;

            q = p;

        } else {

            q->suiv = p;

            p->pre = q;

            q = p;

        }

    }

    q->suiv = NULL;

    return l->tet;

}


list affnormal(dlist *l ){

    list p;

    p=l->tet; 

    while (p!=NULL){

        printf("%d ",p->val);

        p=p->suiv;

    }

    return l->tet;

}


void aff(dlist *l) {

    list p;

    p = l->Queue;

    while (p != NULL) {

        printf("%d ", p->val);

        p = p->pre;

    }

    return l;

}


list ajout(list l, int n, int k, int x) {

    list p, q;

    int i;

    if (k == 1|| k==NULL) {

        q = malloc(sizeof(element));

        q->val = x;

        q->suiv = l->tet;

        q->pre = NULL;

        l = q;

    } else if (k >= n) {

        p = l->Queue;

        

        q = malloc(sizeof(element));

        q->val = x;

        p->suiv = q;

        q->pre = p;

        q->suiv = NULL;

        q=p;

    } else {

        p = l->tet;

        for (i = 2; i < k - 1; i++) {

            p = p->suiv;

        }

        q = malloc(sizeof(element));

        q->val = x;

        q->suiv = p->suiv;

        q->pre = p;

        p->suiv = q;

        q=p;

    }

    return l;

}