#include<stdio.h>
void inv (int u[3][3],int t[3][3]){
int i,j;
      for(j=0;j<3;j++){
    for(i=0;i<3;i++){
       t[j][i]=u[i][j];
       }}
     for (i=0;i<3;i++){
        for(j=0;j<3;j++){
       printf("%d\t",u[i][j]);
     }
     printf("\n") ;
   }
   printf("\n") ;
      for(i=0;i<3;i++){
      for(j=0;j<3;j++){
      printf("%d \t",t[i][j]);
  
     }
     printf("\n") ;
      }}
 int main(){
 int x[3][3],y[3][3];
 int i,j;
      for (i=0;i<3;i++){
        for(j=0;j<3;j++){
       printf("x[%d][%d]",i,j);
     scanf("%d",&x[i][j]);
     }
   }
   printf("\n");
   inv(x,y);
   return 0;
}
