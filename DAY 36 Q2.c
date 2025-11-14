#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int sum = 0, val;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &val);
            sum += val;
        }
    }

    printf("%d", sum);
    return 0;
}
