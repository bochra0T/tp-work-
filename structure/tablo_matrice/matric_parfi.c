#include <stdio.h>

int main() {
  int x=100,y=100,t[x][y],m,a,n, i, j, s;
    printf("entere la taille des L  de t");
    scanf("%d",&n);
    printf("entere la taille des C  de t");
    scanf("%d",&m);
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
         printf("t[%d][%d]",i,j);
         scanf("%d",&t[i][j]);}}
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            s=0;
            for( a = 1; a <(t[i][j]); a++) {
                if(t[i][j] % a== 0) {s=s+a; }
            }
            if(s == t[i][j]) {printf("%d est un nombre parfait.\n", t[i][j]);}
        }
    }
return 0;
}