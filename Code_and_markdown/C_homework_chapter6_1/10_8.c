#include <stdio.h>

int main() {
    int matrix[5][5];
    int is_symmetric = 1;

    for (int i = 0; i < 5; i++)//双循环读入2*2的方阵
        for (int j = 0; j < 5; j++)
            scanf("%d", &matrix[i][j]);

    for (int i = 0; i < 5; i++) {//双循环判断是否为对称
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                is_symmetric = 0;
                break;
            }
        }
        if (!is_symmetric)
            break;
    }

    if (is_symmetric)
        printf("yes");
    else
        printf("no");
    return 0;
}