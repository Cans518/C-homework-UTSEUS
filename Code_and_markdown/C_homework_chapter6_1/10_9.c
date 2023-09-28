#include <stdio.h>

int main() {
    int matrix[5][5];
    int i, j;
    int is_symmetric = 1;

    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            scanf("%d", &matrix[i][j]);

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
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