#include<stdio.h>

void identiques(int x[100][100], int y[100][100], int n, int m) {
int a, i, j;
a = 0;
    for (i = 0; i <n; i++) {
         for (j = 0; j < m; j++) {
              if (x[i][j] == y[i][j]) {
                  a = a + 1;
                }
         }
    }

    if (a >= (n * m)) { // la linge * la colonne 
           printf("Les deux matrices sont identiques.\n");
        } else {
            printf("Les deux matrices ne sont pas identiques.\n");
         }
    }

int main() {
int n, m, i, j;
int t[100][100], u[100][100];

    printf("Entrez n : ");
    scanf("%d", &n);

    printf("Entrez m : ");
    scanf("%d", &m);


    printf("Entrez les éléments de la première matrice :\n");
          for (i = 0; i < n; i++) {
                for (j = 0; j < m; j++) {
                printf("t[%d][%d] : ", i, j);
                scanf("%d", &t[i][j]);
                }
             }


    printf("Entrez les éléments de la deuxième matrice :\n");
            for (i = 0; i <n; i++) {
                 for (j = 0; j < m; j++) {
                      printf("u[%d][%d] : ", i, j);
                      scanf("%d", &u[i][j]);
                  }
            }


identiques(t, u, n, m);

return 0;
}

