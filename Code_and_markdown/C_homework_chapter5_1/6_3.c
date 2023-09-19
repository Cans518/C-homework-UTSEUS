#include <stdio.h>

int main()
{
    int sum = 0;
    for (int i = 1; i <= 100; i++){
        if (i & 1) 
            sum += i;
    }
    printf("sum=%d\n", sum);
    return 0;
}