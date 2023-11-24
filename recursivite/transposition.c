#include <stdio.h>
void transpose(int a[][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < m; j++) {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
}

int main() {
    int i, n, m, j;
    int x = 100;
    int t[x][x];

    printf("Entrez le nombre de lignes : ");
    scanf("%d", &n);

    printf("\nEntrez le nombre de colonnes : ");
    scanf("%d", &m);

    printf("\nEntrez les éléments de la matrice :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("Entrez l'élément à t[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &t[i][j]);
        }
        printf("\n");
    }

    tri_rapide(t, n, m);

    printf("Matrice après tri rapide sur chaque ligne :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
