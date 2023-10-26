#include <stdio.h>
#include <math.h>

// 函数用来判断一个数是否为素数
int isPrime(int n) {
    if (n <= 1)
        return 0;  // 0和1不是素数
    if (n <= 3)
        return 1;  // 2和3是素数
    if (n % 2 == 0 || n % 3 == 0)
        return 0;  // 能被2或3整除的不是素数
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;  // 能被i或i+2整除的不是素数
    }
    return 1;  // 其他情况为素数
}

int absolute(int x) {
    int original = x;
    int reverse = 0;
    while (x > 0) {
        int digit = x % 10;
        reverse = reverse * 10 + digit;
        x /= 10;
    }
    return isPrime(original) && isPrime(reverse);
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    
    for (int i = a; i <= b; i++) {
        if (absolute(i))
            printf("%d\n", i);
    }
    return 0;
}
