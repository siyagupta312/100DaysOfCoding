#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int a[m][n], rowSum[m];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < m; i++) {
        rowSum[i] = 0;
        for(int j = 0; j < n; j++) {
            rowSum[i] += a[i][j];
        }
    }

 
    for(int i = 0; i < m; i++) {
        printf("%d ", rowSum[i]);
    }

    return 0;
}