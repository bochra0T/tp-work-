#include <stdio.h>
int main()
{
    int x=100;
    int t[x],i,n,b,i1;
    printf("entrer LA TAILL DE TABLOUX  : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    printf("entrer le nombre %d : ",i);
    scanf("%d",&t[i]);}

    printf("entrer le nombre :b ");
    scanf("%d",&b);

    printf("entrer i1 : ");
    scanf("%d",&i1);
    if (i1>n+1){// ci le nobre de position est superieure de n   dont on peut pas ajoute un position que ne exixet pas dons le tabloux 
        printf("erreur");
    }else {
        for(i=n;i>=i1;i--){ // on mareche a lonverece ci la valure suprerieur an element qui on an ajoute 
        t[i]=t[i-1];// i-1 prq ran nhawase 3ela le nmre des elemnet
        }
        t[i1-1]=b; // on pose le nombre que vou ajout don la case t[i-1] bate tewali don le taoux 
        n++;
        for (i = 0; i < n; i++) {
        printf(" t[%d]=%d",i,t[i]);
        printf("\n");}
    }
 return 0;
}