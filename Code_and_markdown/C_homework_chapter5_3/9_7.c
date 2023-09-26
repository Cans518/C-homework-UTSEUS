#include <stdio.h>
int main() {
    int num, sum;
    for (num = 1; num <= 1000; num++) {//遍历1-1000中所有数
        sum = 0;
        for (int i = 1; i < num; i++) {
            if (num % i == 0)
                sum += i;
        }//计算其因子的和
        if (sum == num) //判断是否是完数
            printf("%6d", num);
    }
    return 0;
}