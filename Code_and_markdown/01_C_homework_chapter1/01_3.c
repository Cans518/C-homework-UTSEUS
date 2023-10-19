#include<stdio.h>
#define PI 3.1415926//这里使用宏定义来定义PI的值
int main()
{
	float r;
	printf("请输入圆的半径：");
	scanf("%f",&r);
	printf("圆的面积为：%.2f\n",PI*r*r);
	return 0;
}