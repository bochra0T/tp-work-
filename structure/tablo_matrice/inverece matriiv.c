#include<stdio.h>
int main()
{
int A[2][4],T[4][2];
int i,j;
printf("Veuillez saisir les éléments de la matrice:\n");
for(i=0;i<2;i++){
for(j=0;j<4;j++){
printf ("A[%d][%d]=",i,j);
scanf("%d",&A[i][j]);
}
}
for(j=0;j<4;j++){
for(i=0;i<2;i++){
T[j][i]=A[i][j];}
printf("A=\n");}
for(i=0;i<2;i++){
for(j=0;j<4;j++){
printf("%d\t",A[i][j]);
}
printf("\n");
}
printf("T=\n");
for(i=0;i<4;i++){
for(j=0;j<2;j++){
printf("%d\t",T[i][j]);
}
 printf("\n");
}
return 0;
}