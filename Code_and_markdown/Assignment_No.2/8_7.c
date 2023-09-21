#include <stdio.h>
#include <stdlib.h>

// 计算兑换方案数的函数
int countCombinations(int n) {
    int *dp = (int *)malloc((n + 1) * sizeof(int)); // 使用动态分配的数组来记录兑换方案数
    dp[0] = 1; // 兑换0元的方式只有一种，即不兑换

    // 初始化dp数组
    for (int i = 1; i <= n; i++) {
        dp[i] = 0;
    }

    // 定义硬币面额
    int coins[] = {1, 2, 5};
    int numCoins = sizeof(coins) / sizeof(coins[0]);

    // 遍历硬币面额
    for (int i = 0; i < numCoins; i++) {
        int coin = coins[i];
        for (int j = coin; j <= n; j++) {
            dp[j] += dp[j - coin];
        }
    }

    int combinations = dp[n];
    free(dp); // 释放动态分配的内存

    return combinations;
}

int main() {
    int caseNumber = 1;
    while (1) {
        int n;
        scanf("%d", &n);
        if (n == 0) 
            break;

        int combinations = countCombinations(n);
        printf("Case %d:%d\n", caseNumber, combinations);
        caseNumber++;
    }

    return 0;
}