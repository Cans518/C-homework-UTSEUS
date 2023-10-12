#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char input[80];
    fgets(input, sizeof(input), stdin);

    for (int i = 0; input[i] != '\0'; i++) {
        if (isalpha(input[i])) {
            // 如果是字母，按字母表顺序左移三位
            char shift = (islower(input[i])) ? 'a' : 'A';
            input[i] = (input[i] - shift - 3 + 26) % 26 + shift;
        }
    }

    int len = strlen(input);
    for (int i = 0; i < len / 2; i++) {
        // 逆序存储
        char temp = input[i];
        input[i] = input[len - 1 - i];
        input[len - 1 - i] = temp;
    }

    printf("%s\n", input);

    return 0;
}
