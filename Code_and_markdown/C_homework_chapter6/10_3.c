#include <stdio.h>
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))

int main() {
    int N, i, max, min, arr[100];

    printf("Input length (N<=100):\n");
    scanf("%d", &N);

    for (i = 0; i < N; i++) 
        scanf("%d", &arr[i]);

    max = arr[0];
    min = arr[0];

    for (i = 1; i < N; i++) {
        max = MAX(max, arr[i]);
        min = MIN(min, arr[i]);
    }

    printf("The max is %d\n", max);
    printf("The min is %d", min);

    return 0;
}