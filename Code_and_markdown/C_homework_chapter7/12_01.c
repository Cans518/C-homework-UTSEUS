#include <stdio.h>

//fact函数实现阶乘
double fact(int n){
    double result = 1;
    for (int i = 1; i <= n; i++)
        result *= i;
    return result;
}

//递归实现阶乘
double fact_1(int n){
    if (n > 1)
        return n * fact(n - 1);
    if (n == 1 || n == 0)
        return (double)1.0;
    return (double)0.0;
}


int main()
{
    //输出1到5的阶乘
    for (int i = 1; i <= 5; i++)
        printf("%d!=%.0f\n", i, fact(i));
    return 0;
}
