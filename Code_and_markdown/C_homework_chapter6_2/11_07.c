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
    gets(str);

    if (isPalindrome(str))
        printf("It is a palindrome");
    else
        printf("It is not a palindrome");

    return 0;
}