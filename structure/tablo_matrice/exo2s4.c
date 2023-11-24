#include <stdio.h>

int main()
{   int x=100;
    int M[x][x];
    int n, m, i, j, k,I;

    printf("Entrez le nombre de lignes : ");
    scanf("%d", &n);
    printf("Entrez le nombre de colonnes : ");
    scanf("%d", &m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("M[%d][%d] ",i,j);
            scanf("%d", &M[i][j]);
        }
    }
    for (j = 0; j < m; j++) {
       I= 1;
        for (i = 1; i < n; i++) {
            if (M[i][j] != M[0][j]) {
                I = 0;
                break;
            }
        }
        if (I) {
            for (k = j; k < m - 1; k++) {
                for (i = 0; i < n; i++) {
                    M[i][k] = M[i][k + 1];
                }
            }
            m--;
            j--;
        }
    }
    printf("Matrice sans les colonnes identiques :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    return 0;
}