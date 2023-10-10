#include <stdio.h>

void copySubstring(char* str, int m, char* newStr) {
    int i, j;

    // 复制从第m个字符开始的字符串
    for (i = m - 1, j = 0; str[i] != '\0'; i++, j++)
        newStr[j] = str[i];

    newStr[j] = '\0';//手动添加字符串结束符
}

int main() {
    char str[100], cstr[100];
    int m;

    printf("Enter a string: ");
    gets(str);//这里不建议使用scanf("%s", str);可能会遇到含有空格的情况

    printf("Enter m: ");
    scanf("%d", &m);


    copySubstring(str, m, cstr);

    printf("%s\n", cstr);

    return 0;
}