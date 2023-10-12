#include <stdio.h>

void selectionSort(int arr[], int n) {//冒泡排序
    int i, j, max_index, temp;

    for (i = 0; i < n - 1; i++) {
        max_index = i;

        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[max_index])
                max_index = j;
        }

        if (max_index != i) {
            temp = arr[i];
            arr[i] = arr[max_index];
            arr[max_index] = temp;
        }
    }
}

int main() {
    int n, i, arr[11];

    printf("Input n:");
    scanf("%d", &n);

    printf("Input %d integers:", n);
    for (i = 0; i < n; i++) 
        scanf("%d", &arr[i]);

    selectionSort(arr, n);

    printf("After sorted:");
    for (i = 0; i < n; i++)
        printf("%4d", arr[i]);

    return 0;
}