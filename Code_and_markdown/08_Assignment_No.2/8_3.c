#include <stdio.h>

int main()
{
    int m;
    float n,sum = 0;
    scanf("%f%d",&n,&m);
    for (int i = 0; i < m; i++){
        sum += n;
        n /= 4.0;
        if(i == m-1) break;
        sum += n;
    }
    printf("%.2f\n",sum);
    printf("%.2f",n);
    return 0;
}