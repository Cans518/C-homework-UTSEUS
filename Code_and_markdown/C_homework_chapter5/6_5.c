#include <stdio.h>

int Sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    return sum;
}

int main()
{
    double n=0;
    for (int i = 1; i <= 50; i++)
        n += 1.0 / (double)Sum(i);
    printf("sum=%f", n);
    return 0;
}
