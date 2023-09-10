#include<stdio.h>

void Swap(char*a, char*b)
{
	char c=*a;
	*a=*b;
	*b=c;
}
int main()
{
	char a[4];
	printf("Enter a number:");
	scanf("%s",a);
	for(int i=0;i<=3;i++)
		a[i]=(a[i]-'0'+9)%10+'0';
	Swap(&a[0],&a[2]);
	Swap(&a[1],&a[3]);
	printf("The encrypted number is %.*s",4,a);
	return 0;
}
