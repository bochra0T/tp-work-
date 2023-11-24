#include <stdio.h>
int main() {
  int t[5][5], i, j, min, max,max1,min1;
  max = 0;
  min = 0;
  max1=0;
  min1=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("t[%d][%d]=",i,j);
            scanf(" %d",&t[i][j]);
     }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(t[i][j]>t[max][max]){
                max=i;
                max1=j;
            }
            if(t[i][j]<t[min][min]){
                min=i;
                min1=j;
            }
}
}
printf("(%d  %d)\n",max,max1);
printf("(%d  %d)\n",min,min1);
return 0;
}