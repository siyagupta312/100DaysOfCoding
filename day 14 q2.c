#include <stdio.h>

int main() {
    int n;
    int product = 1;
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {  
        product *= i;
    }

    printf("%d\n", product);
    return 0;
}
