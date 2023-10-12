#include <stdio.h>
#include <stdlib.h>

void intToPinyin(int sum) {
    char* pinyin[] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    char* output[11] = {"ling","ling","ling","ling","ling","ling","ling","ling","ling","ling","ling"};
    int z = 0, n = sum;
    
    while (n > 0) {
        int digit = n % 10;
        output[z++] = pinyin[digit];
        n /= 10;
    }

    printf("%d:",sum);
    z = (z == 0 ? 1 : z );
    for (int i = z - 1; i >= 0; i--)
        printf("%5s", output[i]);
    printf("\n");
}

int main() {
    int m, n, i;
    scanf("%d%d", &m, &n);

    int array[11][11];
    int rowSums[11] = {0};
    int sum = 0;

    for (i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &array[i][j]);
            if (i % 2 == 0)
                rowSums[i] += array[i][j];
        }
    }

    for (int j = 0; j <= i; j +=2)
        intToPinyin(rowSums[j]);

           

    return 0;
}
