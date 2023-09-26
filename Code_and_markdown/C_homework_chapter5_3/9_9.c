#include <stdio.h>
int main() {
    int n, i, j;
    scanf("%d", &n);
    // 打印上半部分
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) 
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++) 
            printf("*");
        printf("\n");
    }

    // 打印下半部分
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++) 
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++) 
            printf("*");
        printf("\n");
    }
    return 0;
}