#include <stdio.h>
#include <stdlib.h> // Include the correct header for malloc

typedef struct {
    int age;
    char nom[50];
    float moy;
} etudiant;

int main() {
    int i, n;
    etudiant *etud;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    etud = (etudiant *)malloc(n * sizeof(etudiant));

    for (i = 0; i < n; i++) {
        printf("Enter age for student %d: ", i + 1);
        scanf("%d", &(etud + i)->age);

        printf("Enter name for student %d: ", i + 1);
        scanf("%s", (etud + i)->nom);https://www.youtube.com/watch?v=qHCKcXKTiTQ

        printf("Enter average for student %d: ", i + 1);
        scanf("%f",& (etud + i)->moy);
    }

    printf("\n");

    for (i = 0; i < n; i++) {
        printf("   %d / %s / %f\n", (etud + i)->age, (etud + i)->nom, (etud + i)->moy);
    }

    // Don't forget to free the allocated memory
    free(etud);

    return 0;
}
