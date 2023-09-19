#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(int num)
{
    char str[20];
    sprintf(str, "%d", num);
    int left = 0;
    int right = strlen(str) - 1;
    while (left < right){
        if (str[left] != str[right])
            return false;
        left++;
        right--;
    }
    return true; 
}

int main()
{
    int num;
    scanf("%d", &num);
    if (isPalindrome(num))
        printf("%d是回文", num);
    else
        printf("%d不是回文", num);
    return 0;
}