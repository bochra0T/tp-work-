
#include<stdio.h>
 int main()
{
  int t2[5][5];
int j,i,x,y,z,k,min,max;
 min =t2[0][0];
 max=t2[0][0];
for(i=0;i<5;i++){
for(j=0;j<5;j++){
    printf("la case t2[%d][%d]= ",i,j);
    scanf("%d",&t2[i][j]);
}
}
for(i=0;i<5;i++){
  for(j=0;j<5;j++){
  if(max<t2[i][j]){
  max=t2[i][j];
  x=i;
  y=j;
  }
    if(min>t2[i][j]){
  min=t2[i][j];
  z=i;
  k=j;
  }
  }  
  }
printf("le max et %d dans la linge %d et colone %d \n",max,x,y);
printf("le min et %d dans la linge %d et colone %d ",min,z,k);
return 0;}
