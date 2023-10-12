#include <stdio.h>
int main() {
    int x, y, z;
    for (x = 0; x <= 20; x++) {//遍历0~20只公鸡
        for (y = 0; y <= 33; y++) {//遍历0~33只母鸡
            z = 100 - x - y;//计算小鸡数量
            if (5 * x + 3 * y + z / 3 == 100 && z % 3 == 0)//总金额为100元时输出结果 
                printf("cock=%d,hen=%d,chicken=%d\n", x, y, z);
        }
    }
    return 0;
}