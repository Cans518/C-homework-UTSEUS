#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    
    for (int i = m; i >= 1; i--){
        if (m % i == 0 && n % i == 0){
            printf("%d %d\n", i,  m * n / i);
            break;
        }
    }
    return 0;
}
