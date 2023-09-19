#include <stdio.h>
#include <math.h>

int main()
{
    int m, n;
    printf("Input m,n:");
    begin:
    scanf("%d%d", &m, &n);
    if (m<1 || n<1){
        printf("Input again!\n");
        goto begin;
    }
    
    for (int i = m; i >= 1; i--){
        if (m % i == 0 && n % i == 0){
            printf("%d和%d的最大公约数:%d\n%d和%d的最小公倍数:%d\n", m, n, i, m, n, m * n / i);
            break;
        }
    }
    return 0;
}
