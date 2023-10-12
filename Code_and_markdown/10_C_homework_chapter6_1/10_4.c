#include <stdio.h>
int main() {
    int i, num;
    long long int fib[100];//用long long int代替int用于储存斐波拉也数列值，其实int也行

    printf("Please select I number to be printed:\n");
    scanf("%d", &i);

    fib[0] = 0;
    fib[1] = 1;//斐波那契数列初项

    for (num = 2; num <= i; num++) 
        fib[num] = fib[num - 1] + fib[num - 2];//斐波那契数列项
    printf("The number is %lld", fib[i]);//输出斐波那契数列
    return 0;
}