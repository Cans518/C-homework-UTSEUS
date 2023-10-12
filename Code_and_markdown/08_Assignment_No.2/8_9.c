#include <stdio.h>
#include <stdbool.h>

bool isIsomorphic(int num) {
    long long square = (long long)num * num;
    char str_num[20]; // 假设最大整数为19位
    char str_square[38]; // 对应的平方最多38位

    sprintf(str_num, "%d", num);
    sprintf(str_square, "%lld", square);

    int len_num = 0;
    int len_square = 0;
    while (str_num[len_num] != '\0') {
        len_num++;
    }
    while (str_square[len_square] != '\0') {
        len_square++;
    }

    if (len_square < len_num) {
        return false;
    }

    for (int i = 0; i < len_num; i++) {
        if (str_num[len_num - 1 - i] != str_square[len_square - 1 - i]) {
            return false;
        }
    }

    return true;
}

void findIsomorphicNumbers(int m, int n) {
    bool found = false;
    for (int i = m; i <= n; i++) {
        if (isIsomorphic(i)) {
            printf("%d\n", i);
            found = true;
        }
    }

    if (!found) {
        printf("No Answer\n");
    }
}

int main() {
    int m, n;
    
    scanf("%d %d", &m, &n);

    findIsomorphicNumbers(m, n);

    return 0;
}