#include<stdio.h>
#include<malloc.h>
typedef struct {
     int j,m,a;
} data;
int main(){
     int i ;
     data *p;
 p =(data*)malloc(sizeof(data));
(*p).j=29;
(*p).m=10;
(*p).a=2001;
printf(" la date ne naissonse  est  %d / %d / %d ",(*p).j,(*p).m,(*p).a);
free(p);
 printf("\n");
     printf("entre le valure");
     scanf("%d",p->j );
      scanf("%d",p->m );
       scanf("%d",p->a );
printf("\n");
printf(" la date ne naissonse  est  %d / %d / %d ",(*p).j,(*p).m,(*p).a);
return 0;}
