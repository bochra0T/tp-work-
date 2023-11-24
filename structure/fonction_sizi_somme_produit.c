#include<stdio.h>

typedef  struct{
    float rell;
   float  img;
}complex;
 complex  sizi(){
    complex v;
    printf("prt rell:");
    scanf("%f",&v.rell);
    printf("prt rell:");
    scanf("%f",&v.img);
    printf(" %.2f+i%.2f",v.rell,v.img);
    printf("\n");
    return v;
}
 complex  som( complex x ,complex y){
     complex c ;
     c.rell=x.rell+y.rell;
     c.img=x.img+y.img;
   printf("s=%.2f +i%.2f",c.rell,c.img);
   printf("\n");
   return c;
}
complex  pro( complex x ,complex y){
     complex p;
       p.rell=(x.rell*y.rell)-(x.img*y.img);
   p.img=(x.rell*y.img)+(y.rell*x.img);
   printf(" p= %.2f +i%.2f",p.rell,p.img);
   return p;
}
 
 int main() {
    complex a,b;
    a=sizi();
    b=sizi();
    printf("\n");
    printf("la somme est \n");
   som(a,b);
   printf("\n");
   printf("le produit est \n");
   pro(a,b);
   printf("\n");
  return 0;
 }


