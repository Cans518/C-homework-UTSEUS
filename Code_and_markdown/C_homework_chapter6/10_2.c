#include <stdio.h>
#include <math.h>
int main() {
    int i, j, n = 0;
    for (i = 1; i <= 1000; i++) {
        int square = i * i;
        int temp = i;
        int digits = 0;
        while (temp > 0) {
            temp /= 10;
            digits++;
        }
        if (square % (int)pow((double)10,(double)digits) == i) {
            printf("%6d", i);
            n++;
            if (n % 5 == 0) {
                printf("\n");
            }
        }
    }
    return 0;
}