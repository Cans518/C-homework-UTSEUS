#include <stdio.h>

int main() {
    int i, x, found = 0, index = -1, nums[11];

    for (i = 0; i < 10; i++) 
        scanf("%d", &nums[i]);

    scanf("%d", &x);

    for (i = 0; i < 10; i++) {
        if (nums[i] == x) {
            found = 1;
            index = i;
            break;
        }
    }

    if (found)
        printf("Index is %d", index);
    else
        printf("Not Found");

    return 0;
}