#include <stdio.h>
#include <malloc.h>

int main() {
    int *p ,i, n;
printf ("entre n ");
scanf ("%d", &n);

p=(int *) malloc(n*sizeof(int )) ;
for (i=0;i<n;i++){
     printf("entre le valure");
     scanf("%d",p+i ); //scanf("%d ",p+i )
}
for (i=0;i<n;i++){
     printf("les valure de vecture p[%d] =%d \n",i,*(p+i));
}
free(p)
    return 0;
}