#include <stdio.h>

int main() {
    int n, i, j,  matrix[100][100];

    printf("Input n:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%4d", matrix[i][j]);
        printf("\n");
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j <= i) 
                printf("%4d", matrix[i][j]);
            //else 
                //printf("%4c",' ');
        }
        printf("\n");
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j >= i)
                printf("%4d", matrix[i][j]);
            else
                printf("%4c",' ');
        }
        if (i == n-1)
            break;
        
        printf("\n");
    }

    return 0;
}