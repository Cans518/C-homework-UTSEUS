#include <stdio.h>

int TurntoInt(const char *str) {
    int result = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9')
            result = result * 10 + (str[i] - '0');
    }

    return result;
}

int main() {
    char str[81];
    printf("Enter a string:");
    scanf("%s", str);
    int num = TurntoInt(str);
    int doubledValue = num * 2;
    printf("digit=%d,%d\n", num, doubledValue);
    return 0;
}
