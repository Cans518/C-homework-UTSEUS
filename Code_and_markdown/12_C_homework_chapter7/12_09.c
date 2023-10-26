#include <stdio.h>
#include <string.h>

void copystr(char *s1, char *s2, int n) {
    char *p;
    p = s1 + n -1;
    strcpy(s2, p);
}

int main() {
    char str[100], cstr[100];
    int m;

    printf("Enter a string: ");
    gets(str);//这里不建议使用scanf("%s", str);可能会遇到含有空格的情况

    printf("Enter m: ");
    scanf("%d", &m);

    copystr(str, cstr, m);

    printf("%s\n", cstr);

    return 0;
}