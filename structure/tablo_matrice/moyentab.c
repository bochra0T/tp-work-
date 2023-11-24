
 #include<stdio.h>
int main()
{
int x=100,y=100,n;
int t2[x][y];
int j,i; 
float s,M;
printf("entere la taill de t2");
scanf("%d",&n);
for(i=0;i<n;i++){
for(j=0;j<n;j++){
printf("la case t2[%d][%d]= ",i,j);
scanf("%d",&t2[i][j]);}}
s=0;
for(i=0;i<n;i++){
for(j=0;j<n;j++){
 if (i==j){
s=s+t2[i][j];
 }}
M =s/n;}
printf("la moyenne des valeurs situé dans le diagonal de T2. %f  ",M);
return 0; }

