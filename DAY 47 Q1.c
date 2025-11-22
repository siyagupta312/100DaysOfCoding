#include <stdio.h>
#include <string.h>

int main() {
    char a[200], b[200]; 
    int f[256] = {0}, i;

    scanf("%s %s", a, b);

    if (strlen(a) != strlen(b)) return printf("Not anagrams");

    for (i = 0; a[i]; i++) f[(unsigned char)a[i]]++, f[(unsigned char)b[i]]--;

    for (i = 0; i < 256; i++)
        if (f[i]) return printf("Not anagrams");

    printf("Anagrams");
}
