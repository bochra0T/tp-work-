#include<stdio.h>
int main()
{
    int t[10];
    int i,y[10] ;
    for (i=0;i<10;i++){
        printf(" t[%d] ",i);
        scanf("%d",&t[i]);
    }for (i=0;i<10;i++){
        y[i]=t[i];
    }
    for (i=0;i<10;i++){
        printf (" t[%d]=%d \t",i,t[i]);
        printf ("u[%d]=%d \n",i,y[i]);
    }
return 0;}