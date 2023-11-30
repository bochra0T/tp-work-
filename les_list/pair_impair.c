#include <stdio.h>
#include <stdlib.h>
typedef struct list {
    int val;
    struct list* swv;
} list;
typedef list* LIST;

void create_double_linked_list(LIST* l, int n) {
    LIST p, s;
    int i;
    *l = NULL;

    for (i = 0; i < n; i++) {
        p = (LIST)malloc(sizeof(NODE));
        printf("Enter the value: ");
        scanf("%d", &p->val);
        p->prev = NULL;
        p->next = NULL;
        if (*l == NULL) {
            *l = p;
             s = p;
        } else {
            s->next = p;
            p->prev = s;
            s = p;
        }
    }
}
void LIST(LIST* l, int n) {
    LIST p, s;
    int i;
    *l = NULL;
    for (i = 0; i < n; i++) {
        p = (LIST)malloc(sizeof(list));
        printf("Enter the value: ");
        scanf("%d", &p->val);
        if (*l == NULL) {
            *l = p;
            s = p;
        } else {
            s->swv = p;
            s = p;
        }
    }
    if (*l != NULL) {
        s->swv = NULL;
    }
}
void aff(LIST l) {
    LIST p;
    p = l;
    while (p != NULL) {
        printf("%d -> ", p->val);
        p = p->swv;
    }
    printf("NULL\n");
}
void liberer(LIST l){
    LIST p;
    while(l != NULL){
        p = l;
        l = l->swv;
        free(p);
    }
}

int main() {
    LIST l = NULL, s;
    int n, k;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    LIST(&l,n);
    aff(&l);
    printf("\n");
    p=l;
    pair = NULL;
    impair = NULL;
    while(p!=NULL){
        if(p->val%2==0){
            pair = (LIST)malloc(sizeof(LIST));
            pair->val=p->val;
            pair->swv=NULL;
        }else{
            impair = (LIST)malloc(sizeof(LIST));
            impair->val=p->val;
            impair->swv=NULL;
        } 
        p = p->swv;
    }
    printf("Impair list: ");
    aff(impair);
    printf("Pair list: ");
    aff(pair);
    liberer(l); // Free the memory
    liberer(pair); // Free the memory
    liberer(impair); // Free the memory
    return 0;
}