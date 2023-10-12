#include<stdio.h>
int main()
{
    //输入身高和体重（double）,输入提示为：“please enter your w(kg)and height(m):”
    double h,w;
    printf("please enter your w(kg)and height(m):");
    scanf("%lf %lf",&w,&h);
    //计算BMI
    double bmi=w/(h*h);
    //输出BMI，“your BMI is:”，两位小数
    printf("your BMI is:%.2f",bmi);
    //判断四级体质，四级体重等级为light，normal，a little fat，fat，判断精度为整数
    if(bmi<18)
        printf(",light!");
    if(bmi>=18.5&&bmi<25)
        printf(",normal!");
    if(bmi>=25&&bmi<28)
        printf(",a little fat!");
    if(bmi>=28)
        printf(",fat!");
    return 0;
}