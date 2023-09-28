#include <stdio.h>

int main() {
    int n, i, j, count = 0, nums[21], unique_nums[21];

    scanf("%d", &n);

    for (i = 0; i < n; i++) 
        scanf("%d", &nums[i]);

    unique_nums[count++] = nums[0];

    for (i = 1; i < n; i++) {
        int is_duplicate = 0;
        for (j = 0; j < count; j++) {
            if (nums[i] == unique_nums[j]) {
                is_duplicate = 1;
                break;
            }
        }
        if (!is_duplicate)
            unique_nums[count++] = nums[i];
    }

    for (i = 0; i < count; i++) 
        printf("%d ", unique_nums[i]);

    return 0;
}