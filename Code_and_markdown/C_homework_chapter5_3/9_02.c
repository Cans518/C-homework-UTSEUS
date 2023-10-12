#include <stdio.h>
int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);//输入三边
    
    if (a + b > c && a + c > b && b + c > a) {//判断是否为三角形
        if (a == b && b == c) {//判断是否为等边三角形
            printf("equilateral triangle\n");
        } else if (a == b || b == c || a == c) {//判断是否为等腰三角形
            printf("isosceles triangle\n");
        } else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {//判断是否为直角三角形
            printf("right triangle\n");
        } else {
            printf("arbitrary triangle\n");//判断是否为其他三角形
        }
    } else {
        printf("not triangle\n");//输出不是三角形
    }
    return 0;
}