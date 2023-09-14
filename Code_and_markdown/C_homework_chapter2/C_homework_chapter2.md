# C语言第二次作业

## 程序题

> 这一次的作业只有程序题，加上这是正式上机课的第一次，所以解析会多一点，每一道题尽量使用多种算法或者写法解决。
>
> 还是希望大家可以认真阅读`样例输入`与`样例输出`

### *号金字塔

>【问题描述】2.2 在屏幕上显示如下图案。 
>
>`****`
>`***`
>`**`
>`*`
>
>【输入形式】无
>
>【输出形式】图案
>
>【样例说明】符号之间无空格。

- 看题目提示要用4次`printf()`但是个人感觉一次就够了

```c
#include<stdio.h>
int main()
{
	printf("****\n***\n**\n*\n");
	return 0;
}
```

- 看吧，灵活运用`\n`换行就好了，当然使用四次也不是不行

```c
#include<stdio.h>
int main()
{
	printf("****\n**\n*\n");
    printf("***\n");
    printf("**\n");
    printf("*\n");
	return 0;
}
```

- 这样也是可以的，但是感觉要多打好多东西，笔者很懒……

## double类型的商与积

>【问题描述】2.4 求两个实数（定义变量 `double x,y;`）的乘积和商。
>
>【输入形式】从键盘输入两个实数，输入时两个实数之间用空格分隔。          
>
> 提示输入语句为：`scanf("%lf%lf",&x,&y);`
>
>【输出形式】屏幕上显示两个数的乘积和商，是实数，输出时保留`2位小数`。
>
>**【样例输入1】`2.5 3` 【样例输出1】`7.50 0.83`** 
>
>**【样例输入2】`10 4 ` 【样例输出2】`40.00 2.50` **

>  1. 提示：输出乘积和商时保留2位小数`printf("%.2f %.2f\n",x*y,x/y); ` 
>  2. 说明：`%.2f`表示输出的实数小数点后保留2位，
>  3. 注意：`printf()`函数中第1个f和第2个%之间有一个空格。

```c
#include<stdio.h>
int main()
{
	double a,b;
	scanf("%lf%lf",&a,&b);
	printf("%.2f %.2f",a*b,a/b);
	return 0;
}
```

代码很简短，只是熟悉一下位数控制。

## 整数逆序输出

> 【问题描述】2.6 输入一个`3位`正整数，将其逆序输出。
> 【输入形式】从键盘输入一个正整数。
>
> 【输出形式】屏幕上逆序显示输入的正整数。
>
> 【样例输入1】`456`【样例输出1】`654`
>
> 【样例输入2】`123`【样例输出2】`321`
>
> **【样例说明】样例输出时，数之间没有一个空格，数据输出结束不换行。**

这里有两种解决方法：

1. 使用整数进行取不同位数的算法进行处理
2. 使用字符串的方式进行

### 使用取不同位数算法进行

- 其实我们取一个整数的不同位数很简单，通常是从个位数开始对于一个整数`n`取它的个位数就是用它对`10`取余数就行了`n%10`

取十位数：`(n\10)%10`，依次类推。

```c
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n!=0)
	{
		printf("%d",n%10);
		n/=10;
	}
	return 0;
}
```

- 这里使用了大家目前并不熟悉的`while`循环，其实我们使用for循环也是ok的

```c
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;;i++)//死循环写法
	{
		printf("%d",n%10);
		n/=10;
        if(n==0)
            break;
    }
	return 0;
}
```

其实不想使用死循环也可使用另外的语法:

```c
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;n!=0;i++)
	{
		printf("%d",n%10);
		n/=10;
    }
	return 0;
}
```



### 使用字符串

- 其实在这里使用字符串反转也是舒服的，加上是确定长度的串就很简单了

```c
#include<stdio.h>
int main()
{
	char a[3];//存3个字符就好了，但是建议是给a[4],最后做一个\0终止符位置出来
	scanf("%s",a);//直接一串全部读进，用%s，这里不需要&符号，原因以后详解
	for(int i=2;i>=0;i--)
		printf("%c",a[i]);
	return 0;
}
```

其实还有其它方法，emmm……，先用这个最简单的吧。

## 大写转小写 et 小写转大写

- 这两道题目都是利用`ascii码`来进行转换的，当然你也可以写26条判断语句，~~有点点抽象~~

| 大写字母 | ASCII码 | 小写字母 | ASCII码 | 差值 |
| :--------: |:-------: | :--------: |:-------:| :----: |
| A        |     65    |       a  |   96      |   32   |
| B | 66 | b | 97 | 32 |
| C | 67 | c | 98 | 32 |
| …… | …… | …… | …… | 32 |
| Z | 90 | z | 122 | 32 |

- 根据上述表格可以容易得到一个公式`大写字母=小写字母-32`和`小写字母=大写字母+32`
- 所以我们后面就根据这俩公式进行代码编写。

### 大写转小写

> 【问题描述】从键盘输入一个大写英文字母，将其转换为相应的小写字母，并输出。 
>
> 要求：使用`scanf()`函数和`printf()`函数输入/输出字母。
>
> 【输入形式】输入一个大写字母。
>
> 【输出形式】输出该字母的小写字母，数据输出结束不换行。
>
> 【样例输入1】`A`【样例输出1】`a`
>
> 【样例输入2】`R`【样例输出2】`r`

```c
#include<stdio.h>
int main()
{
	char a;
	a=getchar();
	putchar(a+32);
	return 0;
}
```

当然这是使用`putchar()`和`getchar()`进行，我们根据题目要求改一下：

```c
#include<stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	printf("%c",a+32);
	return 0;
}
```

这就是很简单的一个小技巧

### 小写转大写

> 【问题描述】从键盘输入一个小写英文字母，将其转换为相应的大写字母，并输出。
>
>  要求：分别使用`getchar`函数和`putchar`函数输入/输出字母。
>
> 【输入形式】输入一个小写字母。`getchar();`
>
> 【输出形式】输出该字母的大写字母。`putchar();`输出结束不换行。
>
> 【样例输入1】（下划线部分表示输入）`Input a lowercase letter:a`【样例输出1】`A capital letter:A`
>
> 【样例输入2】（下划线部分表示输入）`Input a lowercase letter:e`【样例输出2】`A capital letter:E`

- 这里只是需要将上一道题目反转一下就行，注意一下输入和输出提示：

```c
#include<stdio.h>
int main()
{
	char a;
	printf("Input a lowercase letter:");
	a=getchar();
	printf("A capital letter:");
	putchar(a-32);
	return 0;
}
```

- 这里使用`scanf()`和`printf()`也是可以的

```c
#include<stdio.h>
int main()
{
	char a;
	printf("Input a lowercase letter:");
	scanf("%c",&a);
	printf("A capital letter:");
	printf("%c",a-32);
	return 0;
}
```

- emmm……我就不展示26个`if`语句的东西了，有点点重复操作的意思。

## 简单的计算器（无ui版本）

> 【问题描述】编写一个少儿数学加减运算出题的程序。
>
> 【输入形式】输入2个正整数及运算符号“`+`”或“`-`”或“`*`”(`*`代表乘法)或“`/`”(`/`代表除法)
>
> 【输出形式】整数A 运算符 整数B = 结果 
>
> 【样例输入1】`3+2`【样例输出1】`3+2=5`
>
> 【样例输入2】`3/2`【样例输出2】`3/2=1.5`
>
> 【样例说明】其中下划线的部分代表输入的数据，除法的结果保留一位小数，如果除数为0则不做除法直接输出`data error`。输出后不换行

- 这里混分成五种情况，可以写5条`if`语句，但是更建议使用`switch`语句：

```c
#include<stdio.h>
int main()
{
	int a,b;
	char c;
	scanf("%d%c%d",&a,&c,&b);//读入标准输入
	switch (c) {
	case '+'://加法
		printf("%d+%d=%d",a,b,a+b);
		break;
	case '-'://减法
		printf("%d-%d=%d",a,b,a-b);
		break;
	case '/'://除法
		if(b==0)//判断除数是否符号运算规律
			printf("data error");
		else
			printf("%d/%d=%.1f",a,b,(float)a/(float)b);//这里进行强制类型转换，要不然计算会错误
            //但是这里可以试试把a,b两个变量都写成double或者float类型也是可以的
		break;
	case '*'://乘法
		printf("%d*%d=%d",a,b,a*b);
		break;
	}
	return 0;
}
```

- 但是考虑到很多同学对于`switch`语句并不熟悉，所以提高一种`if`的写法

```c
#include<stdio.h>
int main()
{
	int a,b;
	char c;
	scanf("%d%c%d",&a,&c,&b);
	if(c=='+')
		printf("%d+%d=%d",a,b,a+b);
	if(c=='-')
		printf("%d-%d=%d",a,b,a-b);
	if(c=='/'){
		if(b==0)
			printf("data error");
		else
			printf("%d/%d=%.1f",a,b,(float)a/(float)b);
	}
	if(c=='*')
		printf("%d*%d=%d",a,b,a*b);
	return 0;
}
```

