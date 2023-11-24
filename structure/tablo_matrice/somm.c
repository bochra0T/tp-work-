#include<stdio.h>
int main()
{
    int i ;
    float s,p,m;
    int t[10];
      s=0; p=1;   
     for (i=0 ; i<10;i++) {
     printf("t[%d] ",i);
     scanf("%d ",&t[i]);
     s = s+t[i] ;
     p = p*t[i] ;
     m= s/10;
    }
    printf (" s= %.2f ,p=%.2f ,m=%.2f",s,p,m);
 return 0;
}