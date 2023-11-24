#include <stdio.h>

void trier(int a[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int main() {
    int T1[100], T2[100], T3[200];
    int n1, n2, n3 = 0, i, j;

    printf("Entrez la taille de n : ");
    scanf("%d", &n1);
    printf("Entrez les éléments de T1 : ");
    for (i = 0; i < n1; i++) {
        scanf("%d", &T1[i]);
    }

    printf("Entrez la taille de T2 : ");
    scanf("%d", &n2);
    printf("Entrez les éléments de T2 : ");
    for (i = 0; i < n2; i++) {
        scanf("%d", &T2[i]);
    }

    // fusionner T1 et T2 dans T3
    for (i = 0; i < n1; i++) {
        T3[i] = T1[i];
    }
    for (i = 0; i < n2; i++) {
        T3[n3] = T2[i];
    }

    // trier T3
    trier(T3,n3);

    // supprimer les doublons
    for (i =0; i < n3-1; i++) {
        if (T3[i] == T3[i+1]) {
            for (j = i+1; j < n3; j++) {
                T3[j-1] = T3[j];
            }
            n3--;
            i--;
        }
    }
    printf("Le vecteur T3 trié et sans répétition est : ");
    for (i = 0; i <n3-1; i++) {
        printf("%d ", T3[i]);
    }
    printf("\n");

    return 0;
}