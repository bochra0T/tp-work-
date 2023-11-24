#include <stdio.h>
#include <stdbool.h>

int somme(int t[100][100], int n, int m) {
    if (n < 0 || m < 0) {
        return 0;
    }
    return t[n][m] + somme(t, n - 1, m) + somme(t, n, m - 1);
}

int Recherche(int t[100][100], int b, int n, int m) {
    if (n < 0 || m < 0) {
        return 0;
    } else if (t[n][m] == b) {
        return 1;
    } else {
        return Recherche(t, b, n - 1, m - 1);
    }
}

void transposition(int t[100][100], int n, int m) {
    if (n < 0 || m < 0) {
        return;
    }
    int temp = t[n][m];
    t[n][m] = t[m][n];
    t[m][n] = temp;
    transposition(t, n - 1, m - 1);
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
        printf("La valeur %d a été trouvée dans la matrice.\n", b);
    } else {
        printf("La valeur %d n'a pas été trouvée dans la matrice.\n", b);
    }

    printf("\n");
    transposition(t, n - 1, m - 1);

    printf("Matrice après transposition :\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
