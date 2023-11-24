#include <stdio.h>
#include <stdbool.h>

int somme(int t[][100], int n, int m) {
    if (n < 0 || m < 0) {
        return 0;
    }
    return t[n][m] + somme(t, n - 1, m) + somme(t, n, m - 1);
}

bool recherche(int t[][100], int b, int n, int m) {
    if (n < 0 || m < 0) {
        return false;
    } else if (t[n][m] == b) {
        return true;
    } else {
        return recherche(t, b, n - 1, m) || recherche(t, b, n, m - 1);
    }
}

int  transpose(int t[][100], int n, int m, int i, int j) {
    if (i < n) {
        int temp = t[i][j];
        t[i][j] = t[j][i];
        t[j][i] = temp;
    
        if (j + 1 < m) {
             return  transpose(t, n, m, i, j + 1);
        } else {
             return transpose(t, n, m, i + 1, i + 1);
        }
    }
}

int  tri_bulles_recursive(int t[][100], int n, int m, int i, int j) {
    if (i < n) {
        if (j < m - 1) {
            if (t[i][j] > t[i][j + 1]) {
                int temp = t[i][j];
                t[i][j] = t[i][j + 1];
                t[i][j + 1] = temp;
            }

             return tri_bulles_recursive(t, n, m, i, j + 1);
        } else {
             return tri_bulles_recursive(t, n, m, i + 1, 0);
        }
    }
}

int tri_bulles(int t[][100], int n, int m) {
   return tri_bulles_recursive(t, n, m, 0, 0);
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

    if (recherche(t, b, n - 1, m - 1)) {
        printf("La valeur a été trouvée dans la matrice.\n");
    } else {
        printf("La valeur n'a pas été trouvée dans la matrice.\n");
    }

    printf("\n");
    transpose(t, n, m, 0, 0);

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
        tri_bulles(t, n, m);
    }
    printf("Matrice après tri à bulles sur chaque ligne :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
