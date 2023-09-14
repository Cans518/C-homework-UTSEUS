#include<stdio.h>
int main()
{
    char a;
    printf("Enter one character:");
    scanf("%c",&a);
    //如果为大写字母则输出其对应小写字母
    if(a>='A'&&a<='Z')
        printf("%c",a+32);
    //如果为小写字母则输出其对应大写字母
    else if(a>='a'&&a<='z')
        printf("%c",a-32);
    else
        printf("%c",a);
    return 0;
}