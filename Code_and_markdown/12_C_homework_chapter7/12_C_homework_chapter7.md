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

- 我们只需要遍历所有的`fibonacci`数与输入的范围比较后输出就好了。



### 示例代码

```c
#include <stdio.h>

//自定义函数fib(int n),返回第n项Fibonacci数
int fib(int n){
    if (n == 1 || n == 2)
        return 1;
    return fib(n-1) + fib(n-2);
    //利用递归完成求Fibonacci数
}

int main()
{
    int n,m;
    printf("Input m:");
    scanf("%d",&m);
    printf("Input n:");
    scanf("%d",&n);

    int i = 1;
    while (1){
        if (fib(i) >= m && fib(i) <= n)//如果第i项Fibonacci数大于等于m且小于等于n
            printf("%d\n",fib(i));
        if (fib(i) > n)//如果第i项Fibonacci数大于n
            return 0;
        i++;
    }
}
```



## 统计数字2的个数

> 【问题描述】5.6 读入一个整数，统计并输出该数中2的个数。要求定义并调用函数`countdigit(number,digit)`，它的功能是统计整数number中数字digit的个数。
>
> 例如，`countdigit(10090,0)`的返回值是3。
>
> 【输入输出样例】
>
> `Input an integer:21252`
> `Number of digit 2:3`
>
> 【样例说明】输出结束后不需要换行。输入提示符中冒号为英文字符，后面无空格。
>

### 解析

1. 我们首先需要把输入进来的每一位数字都分离开来进行计算`dight = n%10; n /= 10; `循环执行该语句即可

### 示例代码

```c
#include <stdio.h>

//countdigit(number,digit)，它的功能是统计整数number中数字digit的个数。
int countdigit(int number,int digit){
    int count=0;
    while (number != 0){
        if (number % 10 == digit)
            count++;
        number /= 10;
    }
    return count;
}

int main()
{
    int n;
    printf("Input an integer:");
    scanf("%d",&n);

    //输出2的个数
    printf("Number of digit 2:%d\n",countdigit(n,2));

    return 0;
}
```



## 数字杨辉三角

> 【问题描述】从键盘上输入整数n（设2≤n≤9）按示例格式输出一个由数字组成的三角形图案。函数定义格式void szt(int n)。要求在主函数中输入整数n的值。在子函数中输出数字三角形图案。
>
> 【输入输出样例】
>
>  ![7047f4ccbeff4fe0d39028ee232c12f7.png](https://p.ananas.chaoxing.com/star3/origin/7047f4ccbeff4fe0d39028ee232c12f7.png)
>
> 【样例说明】输出结束后需要换行。输入提示符中冒号为英文字符，后面无空格。数值输出格式为%2d。



### 示例代码

```c
#include <stdio.h>

//void szt(int n)实现输出n行杨辉三角
void szt(int n){
    for (int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++)
            printf("%2c",' ');//补充空格使其居中
        for (int j = 1; j <= i; j++)
            printf("%2d",j);//输出第i行前半部分
        for (int j = i-1; j >= 1; j--)
            printf("%2d",j);//输出第i行后半部分
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    szt(n);
    return 0;
}
```

