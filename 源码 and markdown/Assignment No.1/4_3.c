#include<stdio.h>
#include<math.h>
int main()
{
	double y,r,m;
	printf("Enter money,year and rate:");
	scanf("%lf %lf %lf",&m,&y,&r);
	printf("interest=%.2f",((double)m*pow((1+r),y)-m));
	return 0;
}
