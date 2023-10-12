#include <stdio.h>

void mix(int a[], int b[]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (a[i] == b[j]) {
                printf("%4d", a[i]);//找到交叉项后直接输出
                break;
            }
        }
    }
}

int main() {
    int A[5],B[5];

    printf("Please Enter Array A,5 digits:");
    for (int i = 0; i < 5; i++)
        scanf("%d", &A[i]);

    printf("Please Enter Array B,5 digits:");
    for (int i = 0; i < 5; i++) 
        scanf("%d", &B[i]);

    printf("A B intersection is:");
    mix(A, B);
    return 0;
}