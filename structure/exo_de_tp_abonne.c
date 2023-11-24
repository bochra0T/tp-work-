#include <stdio.h>

typedef struct {
  char name[20];
  char prenom[20];
  char adresse[20];
  int num;
  char date_de_sa_premiere_inscription[20];
} g4;

g4 xx(g4 a) {
  printf("enter name: ");
  scanf("%s", a.name);
  printf("enter prenom: ");
  scanf("%s", a.prenom);
  printf("enter adresse: ");
  scanf("%s", a.adresse);
  printf("enter numbre: ");
  scanf("%d", &a.num);
  printf("enter date_de_sa_premiere_inscription: ");
  scanf("%s", a.date_de_sa_premiere_inscription);
  return a;
}

g4 xxx(g4 a) {
 printf("%s ", a.name);
 printf("%s ", a.prenom);
 printf("%s",a.adresse);
 printf("%s",a.date_de_sa_premiere_inscription);
 printf("%d",a.num);

  return a;
}

int main() {
  g4 student;
  xx(student);
  printf("name: %s\n", student.name);
  printf("prenom: %s\n", student.prenom);
  printf("adresse: %s\n", student.adresse);
  printf("numbre: %d\n", student.num);
  printf("date_de_sa_premiere_inscription: %s\n", student.date_de_sa_premiere_inscription);
  return 0;
}