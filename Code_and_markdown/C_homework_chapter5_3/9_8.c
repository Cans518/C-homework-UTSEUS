#include <stdio.h>
int main() {
    int num, i;
    printf("Input an integer:");
    scanf("%d", &num);//输入一个整数
    printf("%d=", num);
    for (i = 2; i <= num; i++) {
        while (num % i == 0) {//判断是否是质因数
            printf("%d", i);
            num /= i;
            if (num != 1) 
                printf("*");
        }
    }
    return 0;
}