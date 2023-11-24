#include <stdio.h>
int main() {
  int t[5][5], i, j, min, max,max1,min1;
 
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("t[%d][%d]=",i,j);
            scanf(" %d",&t[i][j]);
     }
    }

    for(i=0;i<3;i++){
        max=t[i][0];
        min=t[i][0];
        for(j=0;j<3;j++){
            if(t[i][j]>max){
                max =t[i][j];
            }
            if(t[i][j]<min){
               min =t[i][j];
            }
}
printf(" max =(%d)  min =(%d)\n",max,min );
}
 printf("\n");
    for(j=0;j<3;j++){
       int maxc=t[0][j];
     int   minc=t[0][j];
        for(i=0;i<3;i++){
            if(t[i][j]>maxc){
                maxc =t[i][j];
            }
            if(t[i][j]<minc){
               minc =t[i][j];
            }
}
printf(" maxc =(%d)  minc =(%d)\n",maxc,minc );
}


return 0;
}