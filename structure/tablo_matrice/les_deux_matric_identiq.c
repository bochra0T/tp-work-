#include<stdio.h>
int main(){
    int i,j,x,u[3][2],t[3][2];
    x=0;
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
         printf(" enetrer t[%d][%d]",i,j);
         scanf("%d",&t[i][j]);} }
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
         printf(" enetrer u[%d][%d]",i,j);
         scanf("%d",&u[i][j]);} }
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            if(t[i][j]==u[i][j]){
              x=x+1;}  } }
 if(x>=6){
     printf("  les deux matrices sont identiques.");}
     else {printf("n pas identiques");}
        return 0;
}
