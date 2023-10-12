#include<stdio.h>
int main()
{
    float x;
    printf("Enter a number:");
    scanf("%f",&x);
    if(x>0)
        printf("y=1");
    if(x==0)
        printf("y=0");
    if(x<0)
        printf("y=-1");
    return 0;
}