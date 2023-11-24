#include <stdio.h>
typedef struct {

  char name[20];
  char prenom[20];
  char adresse[20];
  int num;
  char date_de_sa_premiere_inscription[20];
} g4;
int main() {
  g4 a;
  printf("entre name");
  scanf("%c", &a.name);
  printf("entre prenom");
  scanf("%c", &a.prenom);
  printf("entre adresse");
  scanf("%c", &a.adresse);
  printf("entre numbre");
  scanf("%d", &a.num);
  printf("entre date_de_sa_premiere_inscription");
  scanf("%c", &a.date_de_sa_premiere_inscription);
  return 0;
}