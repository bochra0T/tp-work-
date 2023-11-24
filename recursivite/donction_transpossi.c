#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m, i, j;
    int a[100][100];

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printf("\nEnter the number of columns: ");
    scanf("%d", &m);

    printf("\nEnter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("Enter the element at a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix before bubble sort on each row:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Tri à bulles sur chaque ligne
    for (i = 0; i < n; i++) {
        tri_par_bulles(a, n, m);
    }

    printf("\nMatrix after bubble sort on each row:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
