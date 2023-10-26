#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int fun(int n){
    char str[100];
    sprintf(str, "%d", n);
    n = 0;
    if (str[0] == '-'){
        for(int i = strlen(str) - 1; i > 0; i--)
            n += (str[i] - '0') * pow(10, i-1);
        n *= -1; 
    }
    else
    for(int i = strlen(str) - 1; i >= 0; i--)
            n += (str[i] - '0') * pow(10, i);
    return n;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fun(n));
    return 0;
}