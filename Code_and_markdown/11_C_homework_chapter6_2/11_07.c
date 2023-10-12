#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char str[]) {
    int i = 0;
    int j = strlen(str) - 1;

    while (i < j) {
        if (str[i] != str[j])
            return 0;
        i++;
        j--;
    }

    return 1;
}

int main() {
    char str[100];

    printf("Enter a string:");
    gets(str);//读入整行数据，不使用printf("%s",str)的原因是会把回车也读入，遇到空格就停止

    if (isPalindrome(str))
        printf("It is a palindrome");
    else
        printf("It is not a palindrome");

    return 0;
}