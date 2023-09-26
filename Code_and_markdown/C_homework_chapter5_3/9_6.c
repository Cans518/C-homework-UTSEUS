#include <stdio.h>
int main() {
    int num, digit, sum;
    for (num = 100; num <= 999; num++) {
        sum = 0;
        int temp = num;
        while (temp > 0) {
            digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }
        if (sum == num)
            printf("%6d", num);
    }
    return 0;
}