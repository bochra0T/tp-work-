#include<stdio.h>
int main()
{
    float u[3] , v[3],p;  
    int i;
     for (i=0;i<3 ;i++);{
        printf("u[%d]",i);
      scanf("%f ",&u[i]);
     printf("v[%d]",i);
      scanf("%f ",&v[i]);}
     p= 0;
      for (i=0;i<3 ;i++){
       p =  p +(u[i] * v[i]);}

       printf (" p= %f ",p );

 return 0;
}