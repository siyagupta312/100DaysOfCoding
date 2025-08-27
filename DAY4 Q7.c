#include <stdio.h>

int main() {
    int a, b;
  printf("Enter first number: ");
    scanf("%d", &a);
  printf("Enter second number: ");
    scanf("%d", &b);
  a = a + b;  // step 1
    b = a - b;  // step 2
    a = a - b;  // step 3
 printf("After swapping:\n");
    printf("First number = %d\n", a);
    printf("Second number = %d\n", b);

    return 0;
}