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
