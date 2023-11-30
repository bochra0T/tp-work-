#include <stdio.h>
#include <stdlib.h>

typedef struct pano {
    int age;
    char nom;
} pano;

typedef struct list {
    pano val;
    struct list* swv;
} list;

typedef list* LIST;

LIST cree(LIST l, int n) {
    LIST p, s;
    int i;
    for (i = 0; i < n; i++) {
        p = (LIST)malloc(sizeof(list));
        printf("Enter the name: ");
        scanf(" %c", &p->nom);
        printf("Enter the age: ");
        scanf("%d", &p->age);
        if(l==NULL){
            l=p;
            s=p;
         }else{
            s->swv=p;
            s=p;
         }
    }
        s->swv= NULL;
    return l;
}
LIST ajout(LIST l,int n,int k, LIST s){
    LIST p,x;
    int i ;
    if (k==1|| k==NULL){
        p=(LIST)malloc(sizeof(list));
        p->nom=s->nom;
        p->age=s->age;
        p->swv=l;
        l=p;
    }else if (k>n){
        p=l;
        while (p!=NULL){
            p=p->swv;
        }
         x=(LIST)malloc(sizeof(list));
        x->nom=s->nom;
        x->age=s->age;
        p->swv=x;
        x->swv=NULL;
    }else {
        p=l;
        for (i=2;i<k;i++){
         p=p->swv;
        }
        x=(LIST)malloc(sizeof(list));
        x->nom=s->nom;
        x->age=s->age;
        x->swv=p->swv;
        p->swv=x;
    }
    return l;
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
    l = cree(l, n); // Assign the result to l
    printf("Enter the position to add an element: ");
    scanf("%d", &k);
    printf("Enter the name: ");
    scanf("%s", s->nom);
    printf("Enter the age: ");
    scanf("%d", &s ->age);
    l = ajout(l, n, k, s); // Assign the result to l
    liberer(l);
    return 0;
}