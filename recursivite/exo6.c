#include <stdio.h>

int ackermann(int n, int m) {
    if (n == 0) {
        return m + 1;
    } else if (m == 0) {
        return ackermann(n - 1, 1);
    } else {
        return ackermann(n - 1, ackermann(n, m - 1));
    }
}

int main() {
    int resultat_00, resultat_02, resultat_04, resultat_10, resultat_40, resultat_50;

    resultat_00 = ackermann(0, 0);
    resultat_02 = ackermann(0, 2);
    resultat_04 = ackermann(0, 4);
    resultat_10 = ackermann(1, 0);
    resultat_40 = ackermann(4, 0);
    resultat_50 = ackermann(5, 0);

    printf("A(0, 0) = %d\n", resultat_00);
    printf("A(0, 2) = %d\n", resultat_02);
    printf("A(0, 4) = %d\n", resultat_04);
    printf("A(1, 0) = %d\n", resultat_10);
    printf("A(4, 0) = %d\n", resultat_40);
    printf("A(5, 0) = %d\n", resultat_50);

    return 0;
}