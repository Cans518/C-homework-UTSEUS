#include<stdio.h>
int main()
{
	char a[4];
	scanf("%s",a);
	for(int i=3;i>=0;i--)
		printf("%c",a[i]);
	return 0;
}
