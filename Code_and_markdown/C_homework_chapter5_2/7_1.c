#include <stdio.h>

long long factorial(int n)
{
    long long res = 1;
    for (int i = 1; i <= n; i++)
    {
        res *= i;
    }
    return res;
}


int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("%d!=%lld",n,factorial(n));
    return 0;
}
