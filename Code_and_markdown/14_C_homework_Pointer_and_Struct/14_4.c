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
