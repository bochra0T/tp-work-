#include<stdio.h>
typedef  struct{
    float  rell;
    float  img;
}complex;
void  sizi(complex a){
    printf("prt rell:");
    scanf("%f",&a.rell);
    printf("prt rell:");
    scanf("%f",&a.img);
    printf("%.2f+i%.2f",a.rell,a.img);
}
int main()
{
    complex b ,c ;
    printf ("entere la val de a\n");
     sizi(b);
     sizi(c);
return 0;
}