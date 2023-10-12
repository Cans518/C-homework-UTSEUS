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