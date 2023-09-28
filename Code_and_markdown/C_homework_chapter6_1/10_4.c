#include <stdio.h>
int main() {
    int i, num;
    long long int fib[100];

    printf("Please select I number to be printed:\n");
    scanf("%d", &i);

    fib[0] = 0;
    fib[1] = 1;

    for (num = 2; num <= i; num++) 
        fib[num] = fib[num - 1] + fib[num - 2];
    printf("The number is %lld", fib[i]);
    return 0;
}