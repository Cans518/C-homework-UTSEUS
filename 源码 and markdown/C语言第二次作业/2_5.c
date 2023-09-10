#include<stdio.h>
int main()
{
	char a;
	printf("Input a lowercase letter:");
	scanf("%c",&a);
	printf("A capital letter:");
	printf("%c",a-32);
	return 0;
}
