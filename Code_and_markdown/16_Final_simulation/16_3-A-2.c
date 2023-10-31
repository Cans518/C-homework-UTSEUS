#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], *p;
    gets(str);
    int len = strlen(str);
    p = str + len - 1;
    for (int i = 1; i <= len; i++){
        printf("%d:",i);
        p = str + len - 1;
        for (int j = 0; j < i; j++)
            printf("%c",*p--);
        printf("\n");
    }
}