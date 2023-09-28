#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter a string:");
    gets(str);
    int len = strlen(str);
    for (int i = 0; i < len; i++){
        printf("%d:%s\n",i+1,str);
        str[i]=' ';
    }
    return 0;
}