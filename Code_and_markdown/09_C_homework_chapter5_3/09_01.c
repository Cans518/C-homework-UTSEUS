#include <stdio.h>
int main() {
    int day;
    scanf("%d", &day);//简单的使用switch()语句进行判断的示例
    switch (day) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Error");
            break;
    }//记得每一个case和default后面要加break
    return 0;
}