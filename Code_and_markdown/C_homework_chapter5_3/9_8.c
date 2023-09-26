#include <stdio.h>
int main() {
    int num, i;
    printf("Input an integer:");
    scanf("%d", &num);
    printf("%d=", num);
    for (i = 2; i <= num; i++) {
        while (num % i == 0) {
            printf("%d", i);
            num /= i;
            if (num != 1) 
                printf("*");
        }
    }
    return 0;
}