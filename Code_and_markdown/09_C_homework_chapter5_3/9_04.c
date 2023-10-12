#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a = 1, b = 1;//设置Fibonacci数列的前两项
    int count = 0;
    while (count < n) {
        printf("%8d", a);//按8字符宽度输出Fibonacci数列第n项
        count++;//计数
        if (count % 5 == 0)//每5项换行 
            printf("\n");
        int temp = a + b;//计算下n+2项
        a = b;//将n+1项赋值给n项
        b = temp;//将n+2项赋值给n+1项
    }
    if (count % 5 != 0)
        printf("\n");//在完成最后输出后如果不满5个则补上一个换行
    return 0;
}