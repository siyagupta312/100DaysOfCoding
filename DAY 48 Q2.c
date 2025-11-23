#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    fgets(s, sizeof(s), stdin);

    int start = 0; // start of each word

    for (int i = 0; ; i++) {

       
        if (s[i] == ' ' || s[i] == '\0' || s[i] == '\n') {
            int left = start;
            int right = i - 1;

            
            while (left < right) {
                char temp = s[left];
                s[left] = s[right];
                s[right] = temp;
                left++;
                right--;
            }

            start = i + 1; // next word starts
            if (s[i] == '\0') break;
        }
    }

    printf("%s", s);
    return 0;
}
