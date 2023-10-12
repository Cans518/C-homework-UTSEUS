#include <stdio.h>
#include <string.h>

void removeChar(char str[], char ch) {
    int length = strlen(str);
    int i, j;

    for (i = j = 0; i < length; i++) {
        if (str[i] != ch)
            str[j++] = str[i];
    }

    str[j] = '\0';
}

int main() {
    char ch, str[80];

    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);

    scanf(" %c", &ch);

    removeChar(str, ch);

    printf("%s\n", str);

    return 0;
}