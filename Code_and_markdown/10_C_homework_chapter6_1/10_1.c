#include <stdio.h>
int main() {
    int a, n, i, sum = 0, term = 0;
    printf("Input a&n:");
    scanf("%d %d", &a, &n);
    for (i = 1; i <= n; i++) {
        term = term * 10 + a;//计算下一项
        sum += term;//累加
    }
    printf("s=%d", sum);
    return 0;
}