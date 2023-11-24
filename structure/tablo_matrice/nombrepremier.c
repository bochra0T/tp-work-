#include<stdio.h>
int main()
{
    int a,n,x,h,i,j,y;
    printf("entere la val de n :");
    scanf("%d",&n);
    x=0;
     for(i=2;i<=n;i++){
        if(n%i==0){
             x++ ;}
        }
      if (x>2){
         printf("le nombre no premier ");}
      else{
        printf("  premeir   ");}
 return 0;
}
