#include<stdio.h>

#define carry_s_min 60
#define carry_t 24

int main()
{
    int h, m, s;
    scanf("%d:%d:%d", &h, &m, &s);
    if (++s == carry_s_min)
    {
        s = 0;
        if (++m == carry_s_min)
        {
            m = 0;
            if (++h == carry_t)
                h = 0;
        }
    }

    printf("%02d:%02d:%02d", h, m, s);
    
    return 0;
}