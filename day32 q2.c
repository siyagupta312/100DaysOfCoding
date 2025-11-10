#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0};  
    int digit, max = 0, most_freq = 0;

    
    scanf("%lld", &num);

    
    while(num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    
    for(int i = 0; i < 10; i++) {
        if(freq[i] > max) {
            max = freq[i];
            most_freq = i;
        }
    }

    printf("%d", most_freq);

    return 0;
}