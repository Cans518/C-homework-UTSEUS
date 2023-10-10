#include <stdio.h>

int main()
{
    //输入日期（年､月､日），输出它是该年的第几天。
    int year, month, day;
    printf("Enter year month day:");//学习通上有点离谱month打成了moth，交作业的话看一下
    scanf("%d%d%d", &year, &month, &day);

    //判断是否为闰年
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        days[1] = 29;

    //计算该年的第几天
    int sum = 0;
    for (int i = 0; i < month - 1; i++)
        sum += days[i];
    sum += day;
    printf("day of year is %d", sum);
    return 0;
}
