#include <stdio.h>

// 函数用于判断数字m是否存在于数字n中
int isDigitInNumber(int n, int m) {
    while (n > 0) {
        if (n % 10 == m)
            return 1; // 存在
        n /= 10;
    }
    return 0; // 不存在
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    
    if (isDigitInNumber(n, m)) {
        // 删除数字m，构成新数k
        int k = 0, n_s = n;
        int multiplier = 1;
        
        while (n > 0) {
            int digit = n % 10;
            if (digit != m) {
                k += digit * multiplier;
                multiplier *= 10;
            }
            n /= 10;
        }
        
        float result = (float)n_s / (float)k;
        printf("%d,%.2f\n", k, result);
    } else
        printf("%d不存在于%d中\n", m, n);
    
    return 0;
}
