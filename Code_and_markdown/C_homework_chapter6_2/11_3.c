#include <stdio.h>

int main() {
    int matrix[3][2];
    int i, j, max_row, max_col, max_value;

    printf("Enter 6 integers:\n");

    for (i = 0; i < 3; i++) 
        for (j = 0; j < 2; j++) 
            scanf("%d", &matrix[i][j]);

    max_value = matrix[0][0];
    max_row = 0;
    max_col = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%4d", matrix[i][j]);
            if (matrix[i][j] > max_value) {
                max_value = matrix[i][j];
                max_row = i;
                max_col = j;
            }
        }
        printf("\n");
    }

    printf("max=a[%d][%d]=%d", max_row, max_col, max_value);

    return 0;
}