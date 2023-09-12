#include<stdio.h>
int main()
{
	int a,b;
	char c;
	scanf("%d%c%d",&a,&c,&b);
	if(c=='+')
		printf("%d+%d=%d",a,b,a+b);
	if(c=='-')
		printf("%d-%d=%d",a,b,a-b);
	if(c=='/'){
		if(b==0)
			printf("data error");
		else
			printf("%d/%d=%.1f",a,b,(float)a/(float)b);
	}
	if(c=='*')
		printf("%d*%d=%d",a,b,a*b);
	return 0;
}
