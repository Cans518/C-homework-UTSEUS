# C语言第七章作业

## 输出阶乘表

> 【问题描述】5.2 生成一张阶乘表，输出1!~5!的值｡要求定义和调用函数`fact(n)`计算n!，函数类型为`double`。
> 【输入输出样例】
>
> `1!=1`
> `2!=2`
> `3!=6`
> `4!=24`
> `5!=120`
>
> 【样例说明】输出结束后需要换行。阶乘值输出格式为`%.0f`。

### 解析

- 我们可以明确我们需要实现一个函数`fact()`。
  - 这个函数的参数很明显是一个整形的数字。
  - 那么返回值呢？emmm，题目规定了，是一个`double`

### 示例代码

```c
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
```

- 我这里使用了两种方法实现阶乘都可以使用

## 寻找水仙花数

> 【问题描述】5.3 输入2 个正整数m和n(2≤m，n≤1000)，输出m~n之间的所有水仙花数｡水仙花数是指各位数字的立方和等于其自身的数｡要求定义并调用函数`is(number)`判断number的各位数字之立方和是否等于其自身。
> 【输入输出样例】
>
> `Input m:100`
> `Input n:400`
> `153`
> `370`
> `371`
>
> 【样例说明】输出结束后需要换行。输入提示符中冒号为英文字符，后面无空格。

### 解析

- 分析函数其实很清晰：
  - 参数：一个`int`型数据
  - 返回值：`false`或者`true`，这里一般使用`int`来代替，当然使用`stdbool.h`库会更加直观
  - 作用：判断一个数是否为水仙花数

### 示例代码

```c
#include <stdio.h>
#include <stdbool.h>

//自定义bool is(int n)判断n是否是水仙花数
bool is(int n){
    int a,b,c;
    a = n / 100;
    b = n / 10 % 10;
    c = n % 10;
    if (a*a*a + b*b*b + c*c*c == n)
        return true;
    else
        return false;
}

int main()
{
    int n,m;
    printf("Input m:");
    scanf("%d",&m);
    printf("Input n:");
    scanf("%d",&n);
    for (int i = m; i < n; i++)
        if (is(i))
            printf("%d\n",i);
    return 0;
}
```



## 斐波拉契数列

> 【问题描述】5.4 输入2个正整数m和n(m≥1，n≤10000)，输出m~n之间所有的Fibonacci数，以整数输出。Fibonacci数列(第一项起)：1,1,2,3,5,8,13,21,…。要求定义并调用函数`fib(n)`，它的功能是返回第n项Fibonacci数。例如，`fib(7)`的返回值是13。
>
> 【样例说明】输出结束后需要换行。输入提示符中冒号为英文字符，后面无空格。

### 解析

