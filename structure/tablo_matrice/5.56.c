#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 int t[100],n,i,a;
 int s=0;
  printf("entrer la taill ");
  scanf("%d",&n);
  for (i=0;i<n;i++){
  printf("entrer t[%d] ",i);
  scanf("%d",&t[i]); }
    for (i=0;i<n;i++){
       s=s+t[i];}
    for (i=0;i<n;i++){
  printf("entrer %d ",s);}
  
    return 0;
}