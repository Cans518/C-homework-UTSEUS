#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	double s=((double)a+b+c)/2;
	printf("%.3f",sqrt(s*(s-(double)a)*(s-(double)b)*(s-(double)c)));
	return 0;
}
