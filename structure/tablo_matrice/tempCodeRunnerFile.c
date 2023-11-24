
#include <stdio.h>

    int main() {
        int x = 100, t[x], n, i, j;
        printf("Enter the size of t ");
        scanf("%d", &n);
        for (i = 0; i  < n; i++) {
            printf("t[%d] = ", i);
            scanf("%d", &t[i]);
        }
        j = 0;
        for (i = 0; i  < n; i++) {
            if (t[i] != 3) {
                t[j] = t[i];
                j++;
            }
        }
        for (i = 0; i  < j; i++) {
            printf("t[%d] = %d\n", i, t[i]);
        }
        return 0;
    }
    