#include<stdio.h>
long long Fun(int n)
{
	if(n==1||n==0)
		return 1;
	else
		return n*Fun(n-1);//这里是递归思想，自己调用自己的思想体现
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%lld\n",Fun(n));
	return 0;
}