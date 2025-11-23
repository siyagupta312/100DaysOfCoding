#include <stdio.h>

int main() {
    char dd[3], mm[3], yyyy[5];

    scanf("%2s/%2s/%4s", dd, mm, yyyy);

    char *month;

    if (strcmp(mm, "04") == 0) month = "Apr";
    else month = "???";   

    printf("%s-%s-%s", dd, month, yyyy);

    return 0;
}
