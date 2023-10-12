#include <stdio.h>
#include <ctype.h>

int main() {
    char input[1000];
    int lowercaseCount[26] = {0};  // 用于统计每个小写字母出现的次数

    // 读取输入字符，直到输入结束
    gets(input);

    for (int i = 0; input[i] != '\0'; i++) {
        char c = input[i];
        if (islower(c))
            // 如果是小写字母，增加对应字母的计数
            lowercaseCount[c - 'a']++;
    }

    int found = 0;  // 用于标记是否找到小写字母

    for (int i = 0; i < 26; i++) {
        if (lowercaseCount[i] > 0) {
            printf("%c:%d\n", 'a' + i, lowercaseCount[i]);
            found = 1;
        }
    }

    if (!found)
        printf("None\n");

    return 0;
}
