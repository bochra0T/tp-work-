#include<stdio.h>
 void con (int t[]){
    int i;
    int y[10];
    for (i=0;i<10;i++){ 
     y[9-i]=t[i]; } 
    for (i=0;i<10;i++){
      printf(" %d \t ",t[i]);
     printf(" %d \n ",y[i]);}}
 int main(){
    int T[10];
    int i;
    for(i=0;i<10;i++){
     printf(" T[%d] ",i);
     scanf("%d",&T[i]); } 
   con(T);
return 0;
}