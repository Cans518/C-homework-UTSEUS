#include <stdio.h>

int main() {
    int i, x, found = 0, index = -1, nums[11];

    for (i = 0; i < 10; i++) //读入初始数据
        scanf("%d", &nums[i]);

    scanf("%d", &x);//读入寻找的数据

    for (i = 0; i < 10; i++) {//顺序查找
        if (nums[i] == x) {
            found = 1;
            index = i;//找到返回下标
            break;
        }
    }

    if (found)
        printf("Index is %d", index);
    else
        printf("Not Found");

    return 0;
}