#include <stdio.h>

int main() {
    int judges[5];  // 评委编号
    int scores[5];  // 评分
    double average = 0.0;  // 平均分
    int mostFairJudge = -1;  // 最公平评委的编号
    double closestDiff = 10.0;  // 初始化为最大可能差距

    for (int i = 0; i < 5; i++) {
        scanf("%d %d", &judges[i], &scores[i]);
        average += scores[i];

        if (scores[i] > scores[mostFairJudge])
            mostFairJudge = i;
    }

    // 找到最高分和最低分的索引
    int maxIndex = 0;
    int minIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (scores[i] > scores[maxIndex])
            maxIndex = i;
        if (scores[i] < scores[minIndex])
            minIndex = i;
    }

    // 计算平均分
    average = (average - scores[maxIndex] - scores[minIndex]) / 3.0;

    // 查找最公平评委
    for (int i = 0; i < 5; i++) {
        double diff = scores[i] - average;
        if (diff < 0)
            diff = -diff;  // 取绝对值
        if (diff < closestDiff) {
            closestDiff = diff;
            mostFairJudge = i;
        }
    }

    // 输出平均分和最公平评委
    printf("%.2lf\n", average);
    printf("%d\n", judges[mostFairJudge]);

    return 0;
}
