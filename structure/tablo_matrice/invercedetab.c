#include<stdio.h>
int main()
{
    int t[10];
    int i,y[10] ;
    for (i=0;i<=9;i++){
        printf(" t[%d] ",i);
        scanf("%d",&t[i]);
    }for (i=0;i<=9;i++){
        y[9-i]=t[i];
    }
    for (i=0;i<=9;i++){
        printf (" l'envers est  de t[%d]=%d  est u[%d]=%d \n",i,t[i],i,y[i]);
    }
return 0;}