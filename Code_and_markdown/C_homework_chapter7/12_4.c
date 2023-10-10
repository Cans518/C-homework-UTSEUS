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
