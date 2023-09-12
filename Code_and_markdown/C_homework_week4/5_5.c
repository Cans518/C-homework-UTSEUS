#include<stdio.h>
#include<math.h>

int Digitscount(int n)
{
    int i=0;
    while(n != 0){
        i++;
        n /= 10;
    }
    return i;
}

int Digitsprint(int n)
{
	int x=Digitscount(n),sum=0;
    char b[5];//这里其实是编译器问题，选择DEV-C++编译器就是char b[x+1]就好,C/C++那个版本太老了，只能b[5]
    b[x]='\0';
    for (int i = x-1;i >=0 ;i--){
        b[i]=n%10+'0';
        n /= 10;
    }
    for (int i = 0; i < x; i++)
    {
        if (i==x-1)
            printf("%c\n",b[i]);
        else
            printf("%c ",b[i]);
		sum += pow((double)10,(double)i)*(b[i]-'0');
    }
	return sum;
}
int main()
{
    int a,c;
    printf("please enter the number:");
    scanf("%d",&a);
    c=Digitscount(a);
    printf("count=%d\n",c);
    printf("the digits are ");
    if(Digitsprint(a)==a)
		printf("It's a palindrome");
	else
		printf("It's not a palindrome");
    return 0;
}
