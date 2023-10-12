#include <stdio.h>

int main() {
    int n, i, j, count = 0, nums[21], unique_nums[21];

    scanf("%d", &n);

    for (i = 0; i < n; i++) 
        scanf("%d", &nums[i]);//读入原始数据

    unique_nums[count++] = nums[0];//将第一个数放入结果数组

    for (i = 1; i < n; i++) {//新放入不重复的数，判断
        int is_duplicate = 0;
        for (j = 0; j < count; j++) {
            if (nums[i] == unique_nums[j]) {
                is_duplicate = 1;//当作布尔来使用，0为假，非零为真
                break;
            }
        }
        if (!is_duplicate)//如果不重复就放入结果数组
            unique_nums[count++] = nums[i];
    }

    for (i = 0; i < count; i++) //输出结果数组
        printf("%d ", unique_nums[i]);

    return 0;
}