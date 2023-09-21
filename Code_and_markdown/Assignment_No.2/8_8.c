#include <stdio.h>
#include <math.h>

double approximateSin(double x, int n) {
    double result = 0.0;
    int i;
    int sign = 1; // 符号
    double term = x; // 第一项

    for (i = 1; i <= 2*n-1; i += 2) {
        result += (double)sign * term;
        sign = -sign; // 每一项的符号交替变化
        term *= (x * x) / (double)((i + 1) * (i + 2)); // 计算下一项
    }

    return result;
}

int main() {
    double x;
    int n;
    
    scanf("%lf%d", &x, &n);
    
    double sinApproximation = approximateSin(x, n);

    printf("%.8lf", sinApproximation);

    return 0;
}