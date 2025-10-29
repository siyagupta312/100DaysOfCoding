#include <stdio.h>

int main() {
    int a, b, tempA, tempB, hcf, lcm;
    scanf("%d %d", &a, &b);

    tempA = a;
    tempB = b;

   
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    hcf = a;
    lcm = (tempA * tempB) / hcf;

    printf("%d", lcm);

    return 0;
}
