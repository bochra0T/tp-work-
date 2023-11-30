#include <stdio.h>
#include <stdlib.h> 

typedef struct complex {
   float r;
   float i;
} complex;

typedef struct LIST {
   complex val; 
   struct LIST* next;
} LIST;

typedef LIST* List;

List sup(List l,int n , int k){
    List p,q;
    int i, j;
    p=l;
    
    if (k==1){
        l=p->next;
        free(p);
    }else if (k>=n){
        for (i=0;i<n;i++){
            p=p->next;
        }
        p->next=NULL;
        free(p);
    }else {
        for (i=1;i<k;i++){
            p=p->next;
        }
        q=p->next;
        p->next=q->next;
        free(q);
    }
    return l;
}
List inv(List l,int n){
    List p,q=NULL,r=NULL;
    int i;
    p=l;
    while(p!=NULL){
        r=p->swv;
        p->swv=q;
        q=p;
        p=r;
    }
    return l;
}
int main(){
   List l,p,q,s;
   int i, n;
   printf("Enter the number of elements: ");
   scanf("%d", &n);
   l=NULL;
   for (i = 0; i < n; i++) {
       p=(List)malloc(sizeof(LIST));
       printf("Enter part rell %d: ", i + 1);
       scanf("%f",&p->val.r);
       printf("Enter part img %d: ", i + 1);
       scanf("%f",&p->val.i);
       if (l == NULL) {
           l = p;
           q = p;
       } else {
           q->next = p;
           q = p;
       }
   }
   q->next = NULL;
   s=l;
   while(s!=NULL){
   printf("c=%2.f +%2.f i \n",s->val.r,s->val.i);
   s=s->next;
   }

   // The main program calls the sup function with the desired parameters.
   printf("Enter the position of the sup element: ");
   scanf("%d", &i);
   l = sup(l, n, i);

   printf("Updated list: \n");
  
    inv(l,n);
    s=l;
   while(s!=NULL){
   printf("c=%2.f +%2.f i \n",s->val.r,s->val.i);
   s=s->next;
   }
  
   return 0;
}