#include <stdio.h>
#include<string.h>

typedef struct {
    char nom[50];
    char code[10];
    float prix;
    int quantite;
} Produit;

int main() {
    Produit p1[5]={{"GATOUX","A001",40,10},
                 {"COCA COLA","A002",50,10},
                 {"CHIPS","A003",30,10},
                 {"CHICOLA","A004",10,10}
                 ,{"LEAU","A004",10,10}};  
                
    char p[10];
    int n, i,q;
    printf("hello entrer what you want  ");
    for (i = 0; i < 5; i++) {
        printf("Nom du produit : %s\n \t Code du produit : %s\n \t Prix du produit : %f\n \n", p1[i].nom,p1[i].code,p1[i].prix);
        printf("******************************\n");
    }
    printf("Entrez le code du produit : ");
    scanf("%s", p);
    printf("Entrez la quantite  : ");
    scanf("%d",&q);
    for (i = 0; i < n; i++) {
        if (strcmp(p1[i].code, p) == 0 && p1[i].quantite > 0 ) {
            float montant_Paiement;
            printf("entrez le prix svp : ");
            scanf("%f", &montant_Paiement);
            if (montant_Paiement >= p1[i].prix) {
               float a = montant_Paiement -p1[i].prix ;
                printf("Merci pour votre achat !le reste de montant_Paiement  %f\n",a);
                p1[i].quantite=p1[i].quantite-q;
                printf("la nouvelle quantite est %d\n", p1[i].quantite);
            } else {
                printf("Le montant de paiement est insuffisant.\n");
            }
            break;
        }
    }
    if (i == n) {
        printf("Produit non trouvé ou rupture de stock.\n");
    }
    return 0;
}
