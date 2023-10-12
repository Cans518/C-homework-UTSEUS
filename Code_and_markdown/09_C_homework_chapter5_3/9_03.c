#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);//输入天数n

    int peach = 1;//初始化桃子个数
    for (int i = n; i >= 2; i--) 
        peach = (peach + 1) * 2;//每天的桃子个数=上一天的桃子个数*2
    printf("%d\n", peach);
    return 0;
}