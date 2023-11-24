#include <stdio.h>

int main()
{
    int m[3][3], i, j, temp;

    printf("Entrez les elements de la matrice (valeurs superieures a 5):\n");

    // Boucle pour demander à l'utilisateur d'entrer les éléments de la matrice
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            do {
                printf("m[%d][%d] = ", i, j);
                scanf("%d", &m[i][j]);
            } while(m[i][j] <= 5); // Vérifie si la valeur est supérieure à 5
        }
    }
    // Trier la dernière ligne de la matrice
    
        for(i = 1; i < 3; i++) {
            for(j = 0; j < 3; j++) {
            if(m[2][j] < m[2][j+1]) {
                temp = m[2][j];
                m[2][j] = m[2][j+1];
                m[2][j+1] = temp;
            }
        }
    }

    // Afficher la matrice triée
    printf("\nMatrice triee :\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}