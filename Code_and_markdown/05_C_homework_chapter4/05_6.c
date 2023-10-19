//编程实现简易的计算器：读入两个整数运算数(data1和data2)及一个运算符(op)，计算表达式data1 op data2的值，
//其中op可以是+,-,*,/,%。
#include<stdio.h>
int main()
{
    int a,b;
    char op;
    scanf("%d%c%d",&a,&op,&b);
    switch (op)
    {
    case '+':
        printf("%d+%d=%d",a,b,a+b);
        break;
    case '-':
        printf("%d-%d=%d",a,b,a-b);
        break;
    case '*':
        printf("%d*%d=%d",a,b,a*b);
        break;
    case '/':
        if(b==0)
            printf("divide error!");
        else
            printf("%d/%d=%f",a,b,(float)a/(float)b);
        break;
    case '%':
        if(b==0)
            printf("divide error!");
        else
            printf("%d%%%d=%d",a,b,a%b);
        break;
    default:
        printf("op error!");
        break;
    }

    return 0;
}