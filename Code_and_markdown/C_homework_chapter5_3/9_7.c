#include <stdio.h>
int main() {
    int num, sum;
    for (num = 1; num <= 1000; num++) {
        sum = 0;
        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }
        if (sum == num) 
            printf("%6d", num);
    }
    return 0;
}