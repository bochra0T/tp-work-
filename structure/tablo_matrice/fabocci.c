#include<stdio.h>
int main(){
int i,u1,u2,u,n;
printf("entrer val n");
scanf("%d",&n);
u1=1;
u2=2;
for (i=3;i<=n;i++){
u=u1+u2;
u1=u2;
u2=u;
}//for(i=1;i<n;i++){
printf("u=%d",u);
//}
return 0;}

