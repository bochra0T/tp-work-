#include<stdio.h>
int main()
{   int n=100;
    int t[n];
    int v2,v1,x,i;
    printf("entrer n");
    scanf("%d",&n);
    x=0;
     for(i=0;i<n;i++){
      printf("t[%d]",i);
      scanf ("%d",&t[i]);}
 printf(" entrere v1=");
 scanf ("%d",&v1);
 printf(" entrere v2=");
 scanf ("%d",&v2);
     for (i=0;i<n;i++){
        if (v1==t[i] && v2==t[i+1]){
        x=x+1;}
      }if (v1==t[i+1] && v2==t[i]){
        x=x+1;}
 printf ("le nombre  de succession  de v1 = %d et  v2 = %d  est %d ",v1,v2,x);  
 printf ("le nombre  de succession  de v1 = %d et  v2 = %d  est %d ",v2,v1,x);
 return 0;
}