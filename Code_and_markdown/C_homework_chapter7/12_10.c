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