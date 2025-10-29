#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int hcf;

  
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    hcf = a;
    printf("%d", hcf);

    return 0;
}
