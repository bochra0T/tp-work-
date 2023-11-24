#include <stdio.h>
#include <stdbool.h>

int somme(int t[100][100], int n, int m) {
    if (n < 0 || m < 0) {
        return 0;
    }
    return t[n][m] + somme(t, n - 1, m) + somme(t, n, m - 1);
}

bool Recherche(int t[100][100], int b, int n, int m) {
    if (n < 0 || m < 0) {
        return false;
    } else if (t[n][m] == b) {
        return true;
    } else {
        return Recherche(t, b, n - 1, m) || Recherche(t, b, n, m - 1);
    }
}

void  transposition(int t[100][100], int n, int m) {
    int temp;
    if (n < 0 || m < 0) {
        return;
    }
    temp = t[n][m];
    t[n][m] = t[m][n];
    t[m][n] = temp;
    transposition(t, n - 1, m);
    transposition(t, n, m - 1);
}

int partition(int t[][100], int n, int first, int last) {
    int pivot = t[0][last];
    int i = first - 1;
    for (int j = first; j < last; j++) {
        if (t[0][j] <= pivot) {
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

void tri_rapide(int t[100][100], int n, int first, int last) {
    if (first < last) {
        int part = partition(t, n, first, last);
        tri_rapide(t, n, first, part - 1);
        tri_rapide(t, n, part + 1, last);
    }
}

int main() {
    int i, n, m, j, b;
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

    printf("La somme des éléments de la matrice est : %d\n", somme(t, n - 1, m - 1));

    printf("Recherchez une valeur dans la matrice :\n");
    printf("Entrez la valeur à rechercher : ");
    scanf("%d", &b);

    if (Recherche(t, b, n - 1, m - 1)) {
        printf("La valeur a été trouvée dans la matrice.\n");
    } else {
        printf("La valeur n'a pas été trouvée dans la matrice.\n");
    }

    printf("\n");
    transposition(t, n - 1, m - 1);
    if (n == m) {
        printf("Matrice après transposition :\n");
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                printf("%d ", t[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Erreur : La matrice n'est pas carrée. La transposition n'est pas possible.\n");
    }

    for (i = 0; i < n; i++) {
        tri_rapide(t, n, 0, m - 1);
    }

    printf("Matrice après tri rapide sur chaque ligne :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
