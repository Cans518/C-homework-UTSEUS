#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("chicken=%d,rabbit=%d\n",(4*a-b)/2,a-(4*a-b)/2);
	return 0;
}