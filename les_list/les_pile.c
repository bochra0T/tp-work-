#include <stdio.h>
#include <stdlib.h>

typedef struct maillon {
    int val;
    struct maillon* swv;
} maillon;

typedef struct maillon* pile;

int main() {
    int n, x, i;
    pile l, p;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    l = NULL;
    for (i = 0; i < n; i++) {
        p = (pile)malloc(sizeof(maillon));
        printf("Enter element %d: ", i + 1);
        scanf("%d", &x);
        p->val = x;
        p->swv = l;
        l = p;
    }

    p = l;
    while (p != NULL) {
        printf("%d\n", p->val);
        p = p->swv;
    }
    return 0;
}
