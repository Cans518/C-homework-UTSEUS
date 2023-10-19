#include<stdio.h>
int main()
{
    //从键盘输入年份，如果是闰年输出“XXX年是闰年”，否则输出“XXX年不是闰年”
    int year;
    //输入提示："请输入年份："
    printf("请输入年份:");
    scanf("%d",&year);
    if(year%4==0&&year%100!=0||year%400==0)
        printf("%d年是闰年",year);
    else
        printf("%d年不是闰年",year);
    return 0;
}