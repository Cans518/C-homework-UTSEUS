#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a = 1, b = 1;
    int count = 0;
    while (count < n) {
        printf("%8d", a);
        count++;
        if (count % 5 == 0) 
            printf("\n");
        int temp = a + b;
        a = b;
        b = temp;
    }
    if (count % 5 != 0)
        printf("\n");
    return 0;
}