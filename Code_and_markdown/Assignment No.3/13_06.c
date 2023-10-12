#include <stdio.h>

int main() {
    double monthlyTurnover[12];
    double annualTurnover = 0.0;

    // 输入12个月的营业额
    for (int i = 0; i < 12; i++) {
        scanf("%lf", &monthlyTurnover[i]);
        annualTurnover += monthlyTurnover[i];
    }

    // 计算百分比并打印水平直方图
    for (int month = 1; month <= 12; month++) {
        int percent = (int)((monthlyTurnover[month - 1] / annualTurnover) * 100.0 + 0.5); // 四舍五入
        printf("%2d(%2d%%) ", month, percent);

        for (int i = 0; i < percent; i++)
            printf("#");
        printf("\n");
    }

    return 0;
}
