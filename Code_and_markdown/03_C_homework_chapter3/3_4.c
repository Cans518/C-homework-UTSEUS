#include<stdio.h>
int main()
{
	double h;
	printf("please enter your height:");
	scanf("%lf",&h);
	printf("your standard weight is %.2f",(h-100.0)*0.9);
	return 0;
}
