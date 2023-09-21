#include <stdio.h>
#include <math.h>

float calculate_angle(int m, int n) {
    // 将时针和分针的时刻转换为角度
    float hour_angle = (m % 12 + (float)n / 60) * 30;
    float minute_angle = n * 6;
    
    // 计算夹角
    float angle = fabs(hour_angle - minute_angle);
    
    // 取最小夹角
    angle = fmin(angle, 360 - angle);
    
    return roundf(angle * 1000) / 1000; // 保留三位小数
}

int main() {
    int m, n;
    scanf("%d:%d", &m, &n);
    
    float angle = calculate_angle(m, n);
    
    printf("%.3f", angle);
    
    return 0;
}