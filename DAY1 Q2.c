#include <stdio.h>

int main() {
    int num1, num2;
    int sum, difference, product;
    float quotient;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
     if (num2 != 0) {
        quotient = (float) num1 / num2;  // typecast to float for decimal division
        printf("Sum: %d\n", sum);
        printf("Difference: %d\n", difference);
        printf("Product: %d\n", product);
        printf("Quotient: %.2f\n", quotient);  // show 2 decimal places
    } else {
        printf("Sum: %d\n", sum);
        printf("Difference: %d\n", difference);
        printf("Product: %d\n", product);
        printf("Quotient: Division by zero not possible!\n");
    }
    
    return 0;
}
