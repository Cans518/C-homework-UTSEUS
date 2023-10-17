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
