#include <stdio.h>

int search(int list[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (list[i] == x)
            return i;
    }
    return -1;
}

int main() {
    int n;
    printf("Input n:");
    scanf("%d", &n);

    int list[11];
    printf("Input %d integers:", n);
    for (int i = 0; i < n; i++) 
        scanf("%d", &list[i]);

    int x;
    printf("Input x:");
    scanf("%d", &x);

    int result = search(list, n, x);

    if (result != -1)
        printf("index=%d", result);
    else
        printf("Not Found");

    return 0;
}