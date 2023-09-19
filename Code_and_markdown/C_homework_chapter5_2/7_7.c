#include <stdio.h>

int main()
{
    char a;
    while (scanf("%c", &a) && a != '\n'){
        if ((a < '0' || a > '9') && a != ' ')
            printf("%c", a);
    }
    return 0;
}
