#include<stdio.h>
int main()
{
    float l,sum=14.0;
    printf("enter the km:");
    scanf("%f",&l);
    if (l>=3)
        sum += (l-3)*2.5;
    if (l>=15)
        sum = 44.0 +(l-15)*3.6;
    printf("the distance is %.1f km,the fee is %d yuan",l,(int)sum);    
    return 0;
}