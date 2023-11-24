#include <stdio.h>

int partition(int t[][100], int n, int first, int last) {
    int pivot = t[first][last];
    int i = first - 1;

    for (int j = first; j < last; j++) {
        if (t[j][last] <= pivot) {
            i++;
            for (int k = 0; k < n; k++) {
                int temp = t[i][k];
                t[i][k] = t[j][k];
                t[j][k] = temp;
            }
        }
    }

    for (int k = 0; k < n; k++) {
        int temp = t[i + 1][k];
        t[i + 1][k] = t[last][k];
        t[last][k] = temp;
    }

    return i + 1;
}

void tri_rapide(int t[][100], int n, int first, int last) {
    if (first < last) {
        int part = partition(t, n, first, last);
        tri_rapide(t, n, first, part - 1);
        tri_rapide(t, n, part + 1, last);
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

    // Appliquer le tri rapide sur chaque ligne de la matrice
    for (i = 0; i < n; i++) {
        tri_rapide(t, m, 0, m - 1);
        // قم بطباعة الصف المرتب
        for (j = 0; j < m; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
