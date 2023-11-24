#include <stdio.h>
#include <string.h>
 typedef struct{
  int j;
  int m;
  int a;
 }date ;
typedef struct {
  char nom[20];
  char prenom[20];
  int num;
  char adresse[50];
 date datePremiereInscription;
} Abonne;

void saisirAbonne(Abonne a[], int n) {
  for (int i = 0; i < n; i++) {
    printf("Enter name: ");
    scanf("%s", a[i].nom);
    printf("Enter prenom: ");
    scanf("%s", a[i].prenom);
    printf("Enter adresse: ");
    scanf("%s", a[i].adresse);
    printf("Enter number: ");
    scanf("%d", &a[i].num);
    printf("Enter date_de_sa_premiere_inscription: ");
    scanf("%d , %d , %d", &a[i].datePremiereInscription.j,&a[i].datePremiereInscription.m ,&a[i].datePremiereInscription.a);
  }
}

void afficherAbonne(Abonne abonne[], int n) {
  for (int i = 0; i < n; i++) {
    printf("Name: %s\n", abonne[i].nom);
    printf("Prenom: %s\n", abonne[i].prenom);
    printf("Adresse: %s\n", abonne[i].adresse);
    printf("Number: %d\n", abonne[i].num);
    printf ("%d , %d , %d", abonne[i].datePremiereInscription.j,abonne[i].datePremiereInscription.m ,abonne[i].datePremiereInscription.a);
  }
}
int estFidele(Abonne abonne[], int n, int m) {
    int i;
    for (i = 0; i < n; i++) {
        int duree_Inscription = 2023 - abonne[i].datePremiereInscription.a;
        if (duree_Inscription > 10) {
            return 1;
        }
    }
    return 0; 
}
void afficherFideles(Abonne abonne[], int n) {
  for (int i = 0; i < n; i++) {
   if(estFidele(abonne,n,i)){
   afficherAbonne(abonne, n);}
   
  }
}
void changerAdresseAbonne(Abonne abonne[], int n, int numeroTelephone, const char *nouvelleAdresse) {
  for (int i = 0; i < n; i++) {
    if (abonne[i].num == numeroTelephone) {
      strcpy(abonne[i].adresse, nouvelleAdresse);
      printf("Address updated for subscriber with number %d\n", numeroTelephone);
      return;
    }
  }
  printf("Subscriber with number %d not found\n", numeroTelephone);
}
int main() {
  Abonne abonne[100];
  int n,m;
  printf("Enter the number of subscribers: ");
  scanf("%d", &n);
  saisirAbonne(abonne, n);
  printf("\n");
  printf("Subscriber Details:\n");
  afficherAbonne(abonne, n);
  printf("\n");
  estFidele(abonne, n,m);
  printf("\n");
   printf("entre la annee");
  int numeroTelephone;
  char nouvelleAdresse[50];

  printf("Enter the phone number of the subscriber to change the address: ");
  scanf("%d", &numeroTelephone);
  printf("Enter the new address: ");
  scanf("%s", nouvelleAdresse);
  changerAdresseAbonne(abonne, n, numeroTelephone, nouvelleAdresse);
  printf("\n");

  return 0;
}
