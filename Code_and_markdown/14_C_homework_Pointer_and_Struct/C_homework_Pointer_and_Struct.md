# C语言指针与结构体作业

 > 这一章的作业题很基础，就不做过多的解析了，直接上示例代码了。



## 指针倒序输出

> 【问题描述】用指针变量引用数组元素法完成数组的逆序。
>
> 【样例说明】输出结束无换行。提示符冒号后面无空格。输出最后一个数字后面有一个空格。
>



### 示例代码

```c
#include<stdio.h>
#include<string.h>
int main()
{
    int a[100],i=0;
    while(scanf("%d",&a[i++])!= EOF);
    printf("after inverse:");
    for(int j = i-2; j >= 0; j--)
        printf("%d ",*(a+j));
    return 0;
}
```



## Swap函数的实现

> 【问题说明】编写一个函数Swap()，main()函数通过调用Swap()函数来交换main()函数中的两个变量a和b的值。要求：利用指针变量作为函数参数。
> 【输出样例】`a=2 b=1`
>
> 【样例说明】输出结束无换行。



### 示例代码

```c
#include<stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n=1,m=2;
    swap(&n,&m);
    printf("a=%d b=%d",n,m);
    return 0;
}
```



## 最大最小值

> 【问题说明】编写函数求出main函数的两个整数变量a和b的最大值和最小值，并把结果存储到main函数的max和min变量中。
> 【输入样例】`3 4`
>
> 【输出样例】`max=4 min=3`
>
> 【样例说明】输出结束无换行。
>



### 示例代码

- 这两宏定义的最大最小函数，可以背下来直接用

```c
#include<stdio.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("max=%d min=%d",max(a,b),min(a,b));
    return 0;
}
```



## 函数中的数组操作

> 【问题说明】通过函数调用完成数组的输入、排序和输出
> 【输入输出样例】
>
>  ![img](https://p.ananas.chaoxing.com/star3/origin/6a25e21f109ffa9ea6b0a680ba10aa37.png)
>
> 【样例说明】输出结束有换行。输出最后一个数字后面有一个空格。
>



### 示例代码

```c
#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)
{
    return *(int *)a - *(int *)b;
}
int main()
{
    int a[100],i=0;
    while(scanf("%d",&a[i++])!= EOF);
    qsort(a,i-1,sizeof(int),cmp);
    for(int j = 0; j < i-1; j++)
        printf("%d ",*(a+j));
    return 0;
}
```



## 从大写字母开始输出

> 【问题说明】编写一个子函数，在主函数定义的字符串中找到第一个大写字母，并向主函数返回这个字母的地址。
> 【输入输出样例1】
>
>  ![img](https://p.ananas.chaoxing.com/star3/origin/e7340fa93a86539646a55dbe3c231d4d.png)
>
> 【输入输出样例2】
>
>  ![img](https://p.ananas.chaoxing.com/star3/origin/f889d91203c9539c6d36c6dc4712de52.png)
>
> 【样例说明】输出结束有换行。
>



### 示例代码

```c
#include<stdio.h>
#include<ctype.h>

int Findtoupper(char *s) {
    int i = 0;
    while (s[i] != '\0') {
        if (isupper(s[i]))
            return i;
        i++;
    }
    return -1;
}

int main()
{
    char s[100];
    gets(s);
    int f = Findtoupper(s);
    if (f == -1)
        printf("No Captial Letter");
    else
        printf("%s", (s+f));

    return 0;
}
```



## 计算字符串出现次数

> 【问题说明】计算父字符串中子字符串出现的次数（先输入父字符串，再输入子字符串）
> 【输入输出样例】
>
>  ![img](https://p.ananas.chaoxing.com/star3/origin/53f6680f1bd66a9e3cf898304ac3d684.png)
>
> 【样例说明】输出结束无换行。
>



### 示例代码

```c
#include <stdio.h>
#include <string.h>

int main() {
  char str[1000], sub[1000];
  char *p = NULL; 

  puts("please input two strings");
  gets(str);
  gets(sub);

  int count = 0;
  p = str;
  while (strstr(p, sub) != NULL) {
    count++;
    p = strstr(p, sub) + strlen(sub);
  }

  printf("%d", count);
  return 0;
}
```



## 指针实现排序输出

> 【问题说明】将5个字符串从小到大排序后输出（用指针数组实现）。
>
> 【输出样例】
>
>  ![img](https://p.ananas.chaoxing.com/star3/origin/8e3d6a9d60d1d36a0cd088c9b7b85707.png)
>
> 【样例说明】此题无输入，初始化为"red", "blue", "yellow", "green", "purple"，排序后输出结束无换行。输出最后一个字符串后面有一个空格。
>



### 示例代码

```c
#include <stdio.h>
#include <string.h>

void sort(char *arr[], int n) {
  int i, j;
  char *temp;

  for (i = 0; i < n - 1; i++) {
    for (j = i + 1; j < n; j++) {
      if (strcmp(*(arr+i), *(arr+j)) > 0) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

int main() {
  char *arr[] = {"red", "blue", "yellow", "green", "purple"};
  int i;

  sort(arr, 5);

  for (i = 0; i < 5; i++)
    printf("%s ", *(arr+i));

  return 0;
}
```



## 结构体指针的使用

> 【问题说明】结构体指针的定义、使用、赋值方法。
>
> 【输出样例】
>
>  ![img](https://p.ananas.chaoxing.com/star3/origin/c85288d28c4880ff7a1c59f4f605011f.png)
>
> 【样例说明】此题无输入，将结构体变量初始化为图示数据，用结构体变量和结构体指针分别访问打印结构体的各个成员。
>
> 输出结束换行。



### 示例代码

```c
#include<stdio.h>

typedef struct student{
    char num[20];
    char name[20];
    int grade[3];
}student;

int main()
{
    student s={"1001","ZhangLi",{78,87,85}};
    student *p = &s;
    printf("s1:%s %s %d %d %d\n",s.num,s.name,s.grade[0],s.grade[1],s.grade[2]);
    printf("s1:%s %s %d %d %d\n",p->num,p->name,p->grade[0],p->grade[1],p->grade[2]);
    return 0;
}
```



## 联系结构体的使用

> 【问题说明】用函数来计算结构体变量的平均分。
>
> 【输入输出样例】
>
>  ![img](https://p.ananas.chaoxing.com/star3/origin/ee28f9d259a8a455defb21deb9120237.png)
>
> 【样例说明】输出结束换行。冒号和逗号后面无空格。



### 示例代码

```c
#include<stdio.h>

typedef struct student{
    char num[20];
    char name[20];
    int grade[3];
}student;

int main()
{
    int n;
    student s;
    printf("Input n:");
    scanf("%d",&n);
    printf("Input the student's number,name and course scores\n");
    for(int i = 1; i <= n; i++){
        printf("No.%d:",i);
        scanf("%s%s%d%d%d",s.num,s.name,&s.grade[0],&s.grade[1],&s.grade[2]);
        printf("num:%s,name:%s,average:%.2f\n",s.num,s.name,(double)(s.grade[0]+s.grade[1]+s.grade[2])/3);
    }
    return 0;
}
```



## 以结构体为参数的函数

> 【问题说明】用子函数来输出主函数中定义的结构体数组。
>
> 【输出样例】
>
>  ![img](https://p.ananas.chaoxing.com/star3/origin/e88ec3ad9287e67f57894c3bf5fa2c0e.png)
>
> 【样例说明】此题无输入，主函数定义结构体数组并初始化，子函数输出结构体数组输出结束换行。
>



### 示例代码

```c
#include<stdio.h>

typedef struct student{
    char num[20];
    char name[20];
    int grade[3];
}student;

void student_print(student *student,int i){
    printf("The number %s student's score name is %s\n",student->num,student->name);
}

int main(){
    student s[]={{"1001","ZhangLi",{78,87,85}},{"1002","WangWu",{78,87,85}},{"1003","LiYan",{78,87,85}}};
    for(int i = 1; i <= 3; i++)
        student_print(&s[i-1],i);
    return 0;
}
```

