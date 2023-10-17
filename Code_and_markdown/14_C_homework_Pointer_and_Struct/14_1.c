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