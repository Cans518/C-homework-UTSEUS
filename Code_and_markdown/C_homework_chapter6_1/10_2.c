#include <stdio.h>
#include <math.h>
int main() {
    int i, j, n = 0;
    for (i = 1; i <= 1000; i++) {
        int square = i * i;//平方
        int temp = i;
        int digits = 0;
        while (temp > 0) {//计算每个数的位数
            temp /= 10;
            digits++;
        }
        if (square % (int)pow((double)10,(double)digits) == i) {//判断是否是自守数
            printf("%6d", i);
            n++;
            if (n % 5 == 0) {//每5个输出换行
                printf("\n");
            }
        }
    }
    return 0;
}