#include <stdio.h>

//自定义函数fib(int n),返回第n项Fibonacci数
int fib(int n){
    if (n == 1 || n == 2)
        return 1;
    return fib(n-1) + fib(n-2);
}

int main()
{
    int n,m;
    printf("Input m:");
    scanf("%d",&m);
    printf("Input n:");
    scanf("%d",&n);

    int i = 1;
    while (1){
        if (fib(i) >= m && fib(i) <= n)
            printf("%d\n",fib(i));
        if (fib(i) > n)
            return 0;
        i++;
    }
}
