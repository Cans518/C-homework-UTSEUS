#include <stdio.h>
int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("equilateral triangle\n");
        } else if (a == b || b == c || a == c) {
            printf("isosceles triangle\n");
        } else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            printf("right triangle\n");
        } else {
            printf("arbitrary triangle\n");
        }
    } else {
        printf("not triangle\n");
    }
    return 0;
}