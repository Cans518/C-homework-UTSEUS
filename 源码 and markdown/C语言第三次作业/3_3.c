#include<stdio.h>
int main()
{
	char a;
	a=getchar();
	if(a>='X')
		a='A'-'Z'+a-1;
	printf("%c",a+3);
	return 0;
}
