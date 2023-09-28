#include <stdio.h>

int binarySearch(int arr[], int n, int x) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main() {
    int x, nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    scanf("%d", &x);

    int index = binarySearch(nums, 10, x);

    if (index != -1)
        printf("Index is %d", index);
    else
        printf("Not Found");

    return 0;
}