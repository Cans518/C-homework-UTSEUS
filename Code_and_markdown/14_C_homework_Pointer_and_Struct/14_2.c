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