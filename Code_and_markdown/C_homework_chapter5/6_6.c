#include <stdio.h>

int main()
{
    int n;
    double sum=1;
    scanf("%d", &n);

    for (int i = 2; i <= n; i++){
        for (int j = 2; j <= i; j++)
            sum += j*10.0;
        sum += (double)(i-1) * 0.5;
        sum ++;
    }

    printf("sum=%.6f", sum);

    return 0;
}