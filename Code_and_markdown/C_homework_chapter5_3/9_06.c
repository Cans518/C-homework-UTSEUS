#include <stdio.h>
int main() {
    int num, digit, sum;
    for (num = 100; num <= 999; num++) {//遍历100-999中所有数
        sum = 0;
        int temp = num;
        while (temp > 0) {
            digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }//计算每一位数字的立方和
        if (sum == num)//判断是否是阿姆斯特朗数(水仙花数)
            printf("%6d", num);
    }
    return 0;
}