#include <stdio.h>
int main()
{ int t[2][2] ,i,j,s,x,n  ; 
 
 printf ("entrer n");
  scanf("%d\n ",&n )
 for (i=0; i<2; i++){
 for (j=0; j<2; j++){
 printf ("t[%d][%d]",i,j);
 scanf("%d ",&t[i][j]);}}
 x=0;
    for (i=0; i<2; i++){
    for (j=0; j<2; j++){
     
   if ( n==t[i][j]) {
        x=x+1;
        
       }
    }
    }
      printf (" oui  %d  %d %d  ",x,i,j);
   
return 0; 
}