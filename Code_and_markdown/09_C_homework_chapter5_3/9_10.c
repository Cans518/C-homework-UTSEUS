#include <stdio.h>
int main() {
    int n, i, j;
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        if (i == n || i == 1) {
            for (j = 1; j <= 2 * i - 1; j++) {
                if(j % 2 != 0)
                    printf("*");
                else
                    printf(" ");
            }
        } 
        else {
            printf("*");
            for (j = 1; j <= 2 * i - 3; j++) 
                printf(" ");
            printf("*");
        }
        printf("\n");
    }

    return 0;
}