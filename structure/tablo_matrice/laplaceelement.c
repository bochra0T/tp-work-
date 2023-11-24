#include<stdio.h>
int main()
{
  int  t1[5]; 
  int i,n,a ;
    for(i=0;i<5;i++){
    printf("t1[%d]=",i);
    scanf ("%d",&t1[i]);
   }
 printf("entrer a");
 scanf("%d",&a);
 for (i=0;i<5;i++){
   if (t1[i]==a){
   printf (" indice %d \n",a);
   } 
   }
 return 0;
}