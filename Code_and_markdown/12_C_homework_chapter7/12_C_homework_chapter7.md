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
>  ![img](https://mzee-imge.oss-cn-shanghai.aliyuncs.com/images/202310261504522.png)
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



## 输出日期

> 输入日期（年､月､日），输出它是该年的第几天。



### 解析

1. 初始化每一个月的天数，特殊的，判断年份是否是闰年
2. 将当前月份前的月份天数全部相加，本月的天数为日期的数字



### 示例代码

```c
#include <stdio.h>

int main()
{
    //输入日期（年､月､日），输出它是该年的第几天。
    int year, month, day;
    printf("Enter year month day:");//学习通上有点离谱month打成了moth，交作业的话看一下
    scanf("%d%d%d", &year, &month, &day);

    //判断是否为闰年
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};//初始化每个月天数
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        days[1] = 29;//如果是闰年，二月的天数加一

    //计算该年的第几天
    int sum = 0;
    for (int i = 0; i < month - 1; i++)
        sum += days[i];//将month - 1个月的天数相加
    sum += day;//将day相加
    printf("day of year is %d", sum);
    return 0;
}
```



## 查找指定元素

> 【问题描述】在数组中查找指定元素。输入一个正整数n(1<n≤10)，然后输入n个整数存入数组a中，再输入一个整数x，在数组a中查找x，如果找到则输出相应的最小下标，否则输出“Not Found”。要求定义并调用函数search(list,n,x)，它的功能是在数组list中查找元素x，若找到则返回相应的最小下标，否则返回-1。
>
> 【输入输出样例1】
>
>  ![66cdb0cabd8183afe4b745782f7abb9c.png](https://p.ananas.chaoxing.com/star3/origin/66cdb0cabd8183afe4b745782f7abb9c.png)
>
> 【输入输出样例2】
>
> ![img](https://p.ananas.chaoxing.com/star3/origin/ea89857a9894be384a432bf6ca2682ad.png)
>
> 【样例说明】输出结束后需要换行。输入提示符中冒号为英文字符，后面无空格。



### 解析

- 这里就只是查找算法的一个应用，最简单的方式就是使用线性查找就行



### 示例代码

```c
#include <stdio.h>

int search(int list[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (list[i] == x)
            return i;//第一次找到就返回索引并退出
    }
    return -1;//如果未找到则返回-1
}

int main() {
    int n;
    printf("Input n:");
    scanf("%d", &n);

    int list[11];
    printf("Input %d integers:", n);
    for (int i = 0; i < n; i++) 
        scanf("%d", &list[i]);

    int x;
    printf("Input x:");
    scanf("%d", &x);

    int result = search(list, n, x);

    if (result != -1)//如果找到
        printf("index=%d", result);//输出索引
    else
        printf("Not Found");//如果未找到，输出"Not Found"

    return 0;
}
```



## 寻找交集

> 【问题描述】输入两个由整型数构成的集合（元素个数均为5）分别放到数组A和B中，求这两个集合的交集（交集的元素由两个集合中的相同元素构成），最后输出交集中的元素，要求在主函数中输入A和B数组，并输出交集中的元素，在被调函数中实现求这两个集合的交集，返回交集元素的个数。定义函数为mix(a,b,c)，功能为将数组A和B中的交集赋给数组C，函数返回值为交集元素的个数。
>
> 【输入输出样例】
>
> ![img](https://p.ananas.chaoxing.com/star3/origin/ad9f31de423d0da1e5c637489de990c2.png)
>
> 【样例说明】输出结束后不需要换行。输入提示符中冒号为英文字符，后面无空格。交集元素输出格式为`%4d`。



### 解析

- 这个最简单的想法:
  - 先将两个数组都读入
  - 依次判断B数组中的数是否在A数组中出现
  - 如果出现就以`%4d`格式输出到屏幕上



### 示例代码

```c
#include <stdio.h>

void mix(int a[], int b[]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (a[i] == b[j]) {
                printf("%4d", a[i]);//找到交叉项后直接输出
                break;
            }
        }
    }
}

int main() {
    int A[5],B[5];

    printf("Please Enter Array A,5 digits:");
    for (int i = 0; i < 5; i++)
        scanf("%d", &A[i]);

    printf("Please Enter Array B,5 digits:");
    for (int i = 0; i < 5; i++) 
        scanf("%d", &B[i]);

    printf("A B intersection is:");
    mix(A, B);
    return 0;
}
```



## 字符串的定位复制

> 【问题描述】编写程序，将字符串中的第m个字符开始的全部字符复制到另一个字符串中。要求在主函数中输入字符串及m的值，并输出复制结果，在被调函数中完成复制。
>
> 【输入形式】输入一个字符串及整数m。
>
> 【输出形式】输出复制后的结果，输出后换行。
>
> 【样例输入】
>
> Enter a string: shanghai
>
> Enter m: 6
>
> 【样例输出】
>
> hai
>
> 【样例说明】
> 输入提示符后要加一个空格。例如“Input integers: ”，其中“:”后要加一个且只能一个空格。输出后换行。
> 英文字母区分大小写。必须严格按样例输入输出。



### 解析

- 这里需要复制字符串，在不使用指针的情况下只能赋值。



### 示例代码1

```c
#include <stdio.h>

void copySubstring(char* str, int m, char* newStr) {
    int i, j;

    // 复制从第m个字符开始的字符串
    for (i = m - 1, j = 0; str[i] != '\0'; i++, j++)
        newStr[j] = str[i];

    newStr[j] = '\0';//手动添加字符串结束符
}

int main() {
    char str[100], cstr[100];
    int m;

    printf("Enter a string: ");
    gets(str);//这里不建议使用scanf("%s", str);可能会遇到含有空格的情况

    printf("Enter m: ");
    scanf("%d", &m);


    copySubstring(str, m, cstr);

    printf("%s\n", cstr);

    return 0;
}
```



### 示例代码2

```c
#include <stdio.h>
#include <string.h>

void copystr(char *s1, char *s2, int n) {
    char *p;
    p = s1 + n -1;
    strcpy(s2, p);
}

int main() {
    char str[100], cstr[100];
    int m;

    printf("Enter a string: ");
    gets(str);//这里不建议使用scanf("%s", str);可能会遇到含有空格的情况

    printf("Enter m: ");
    scanf("%d", &m);

    copystr(str, cstr, m);

    printf("%s\n", cstr);

    return 0;
}
```

- 这里合理的运用库函数和指针可以使代码简洁很多



## 进制转换

> 【问题描述】输入一个十进制整数和想转换的进制数，利用函数将其转换成为二进制、八进制或十六进制数（0~9、A-F注意为大写）
>
> 【样例输入1】`15 2`
>
> 【样例输出1】`the converted the number is:1111`
>
> 【样例输入2】`27 16`
>
> 【样例输出2】`the converted the number is:1B`
>
> 【样例说明】把15转换为2进制是1111，输出后换行；把27转成16进制是1B，输出后换行



### 解析

- 短除法还是库函数都是ok的

### 示例代码

```c
#include<stdio.h>

void decimalToBinary(int decimal) {
    int binary[32];
    int i = 0;

    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    printf("the converted the number is:");

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    printf("\n");
}

int main()
{
    int n,d;
    scanf("%d%d",&n,&d);
    switch (d)
    {
    case 2:
        //将10进制的n转化为2进制输出
        decimalToBinary(n);
        /*
        这里是因为有一个非标准库函数无法使用要不然也很简单：
        #include <stdlib.h>
        char str[32];
        itoa(n, str, 2);
        printf("the converted the number is:%s\n", str);
        这样就十分的简洁明了，可惜不能用
        */
        break;
    case 8:
        //将10进制的n转化为8进制输出
        printf("the converted the number is:%o",n);
        break;
    case 16:
        //将10进制的n转化为16进制输出
        printf("the converted the number is:%X",n);
        break;
    default:
        break;
    }
    return 0;
}
```

