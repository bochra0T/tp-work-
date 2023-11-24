#include <stdio.h>
#include <math.h>

typedef struct {
int d; // day
int m; // month 
int y; // year
} date;

date dd(date a[], int n) {
int i, j;
date temp;
for (i = 0; i < n - 1; i++) {
for (j = 0; j < n - i - 1; j++) {
if (a[j].y > a[j + 1].y) {
temp = a[j];
a[j] = a[j + 1];
a[j + 1] = temp;
} else if (a[j].y == a[j + 1].y) {
if (a[j].m > a[j + 1].m) {
temp = a[j];
a[j] = a[j + 1];
a[j + 1] = temp;
} else if (a[j].m == a[j + 1].m) {
if (a[j].d > a[j + 1].d) {
temp = a[j];
a[j] = a[j + 1];
a[j + 1] = temp;
}
}
}
}
}

for (i = 0; i < n; i++) {
printf("The date is %d/%d/%d\n", a[i].d, a[i].m, a[i].y);
}

return a[n - 1];
}
int dif(date d1, date d2) {
int D;
int jours1 = d1.d + 30 * d1.m + 365 * d1.y;
int jours2 = d2.d + 30 * d2.m + 365 * d2.y;
D=jours2-jours1;
return D;
}
int main() {
date D[100];
int n, i, j;

printf("Enter LE number des dates: ");
scanf("%d", &n);
for (i = 0; i < n; i++) {
printf("Enter the day: ");
scanf("%d", &D[i].d);
printf("Enter the month: ");
scanf("%d", &D[i].m);
printf("Enter the year: ");
scanf("%d", &D[i].y);
printf("\n");
}
printf("trier l’ordre croissant .\n");
dd(D, n);
printf("\n");
date dat1,dat2;
printf("Enter la date 1 1: ");
scanf("%d", &dat1.d);
printf("Enter the month: ");
scanf("%d", &dat1.m);
printf("Enter the year: ");
scanf("%d", &dat1.y);
printf("\n");
printf("Enter la date 2: ");
scanf("%d", &dat2.d);
printf("Enter the month: ");
scanf("%d", &dat2.m);
printf("Enter the year: ");
scanf("%d", &dat2.y);
printf("\n");
dif( dat1, dat2);
printf("\nDifference en jours : %d jours\n",dif( dat1, dat2) );
return 0;
}
