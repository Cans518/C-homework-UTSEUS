#include <stdio.h>
#include <stdbool.h>

//自定义bool is(int n)判断n是否是水仙花数
bool is(int n){
    int a,b,c;
    a = n / 100;
    b = n / 10 % 10;
    c = n % 10;
    if (a*a*a + b*b*b + c*c*c == n)
        return true;
    else
        return false;
}

int main()
{
    int n,m;
    printf("Input m:");
    scanf("%d",&m);
    printf("Input n:");
    scanf("%d",&n);
    for (int i = m; i < n; i++)
        if (is(i))
            printf("%d\n",i);
    return 0;
}
