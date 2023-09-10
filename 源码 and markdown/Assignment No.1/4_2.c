#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	while(a!=0){
		if(a==1)
			printf("%d",a%10);
		else
			printf("%d ",a%10);
		a/=10;
	}
	return 0;
}
