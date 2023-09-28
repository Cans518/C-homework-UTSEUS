#include <stdio.h>
#include <ctype.h>

int main() {
    char str[81], count = 0, i = 0;

    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (isdigit(str[i]))
            count++;
        i++;
    }

    printf("count=%d", count);

    return 0;
}