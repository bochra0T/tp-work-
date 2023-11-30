#include <stdio.h>
#include <stdlib.h> 

typedef struct maillon {
    int val;
    struct maillon* swv;
} maillon;

typedef maillon* list;
list LIST(list *l, int n) {
    list p, q;
    int x, i;
    *l = NULL;
    for (i = 0; i < n; i++) {
        p = (list)malloc(sizeof(maillon)); // Fixed sizeof(list) to sizeof(maillon)
        printf("Enter element %d: ", i + 1);
        scanf("%d", &x);
        p->val = x;
        p->swv = NULL;
        if (*l == NULL) {
            *l = p;
            q = p;
        } else {
            q->swv = p;
            q = p;
        }
    }
    return *l;
}

void  aff(list *l) {
    list p;
    p = *l;
    while (p != NULL) {
        printf("%d \n", p->val);
        p = p->swv;
    }
  
}

void affrec(list l) {
    if (l != NULL) {
        printf("%d \n", l->val);
        affrec(l->swv);
    }
}

void affinv(list l) {
    if (l != NULL) {
        affinv(l->swv);
        printf("%d \n", l->val);
    }
}
void trier(list l, int n) {
    list q, p;
    int i;
    p = l;
    while (p != NULL) {
        q = p->swv;
        while (q != NULL) {
            if (p->val > q->val) {
                int temp = p->val;
                p->val = q->val;
                q->val = temp;
            }
            q = q->swv;
        }
        p = p->swv;
    }
}

int taill(list l) {
    int n;
    list p;
    p = l;
    n = 0;
    while (p != NULL) {
        p = p->swv;
        n = n + 1;
    }
    return n;
}

int main() {
    list l, p, q;
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    LIST(&l, n);
    printf("Original list:\n");
    aff(&l);
    printf("\n");
    printf("Recursive list:\n");
    affrec(l);
    printf("\n");
    printf("Inverse list:\n");
    affinv(l);
    printf("\n");
    printf("Length of the list: %d\n", taill(l));

    printf("Sorted list:\n");
    trier(l, n);
    aff(&l);

    return 0;
}
