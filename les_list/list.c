#include <stdio.h>
#include <stdlib.h> // Include this header for malloc

typedef struct maillon {
    int val;
    struct maillon* swv;
} maillon;

typedef maillon* list;

int main() {
    list l, p, q; // Fix the declaration syntax
    int n, i, x;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    l = NULL;
    for (i = 0; i < n; i++) {
        p = (maillon*)malloc(sizeof(maillon));
        printf("Enter element %d: ", i + 1);
        scanf("%d", &x);
        p->val = x; // Fix the member access syntax
        if (l == NULL) {
            l = p; // Fix the assignment operator
            q = p;
        } else {
            q->swv = p; // Fix the member access syntax
            q = p;
        }
    }
    if (l != NULL) {
        q->swv = NULL; // Fix the member access syntax
    }
    return 0;
}