#include <stdio.h>
#include <math.h>

typedef struct {
    int h;
    int m;
    int s;
} TEMP;

int t_s(TEMP t) {
    int d = t.h * 3600 + t.m * 60 + t.s;
    return d;
}

TEMP decomposer_temps(int temps) {
    TEMP t;
    t.h = temps / 3600;
    temps = temps % 3600;
    t.m = temps / 60;
    t.s = temps % 60;
    return t;
}

TEMP somme_temps(TEMP t1, TEMP t2) {
    TEMP T;
    int t;
    t = t_s(t1) + t_s(t2);
    T = decomposer_temps(t);
    return T;
}

int main() {
    TEMP T1, T2, T3;

    printf("Entrer le temps 1 (hh:mm:ss): ");
    scanf("%d:%d:%d", &T1.h, &T1.m, &T1.s);
    printf("t1 en secondes : %d\n", t_s(T1));

    printf("Entrer le temps 2 (hh:mm:ss): ");
    scanf("%d:%d:%d", &T2.h, &T2.m, &T2.s);
    printf("t2 en secondes : %d\n", t_s(T2));

    T3 = somme_temps(T1, T2);
    printf("t1 + t2 = %dh %dm %ds\n", T3.h, T3.m, T3.s);

    return 0;
}
